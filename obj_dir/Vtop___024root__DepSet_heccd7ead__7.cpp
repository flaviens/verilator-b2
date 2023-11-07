// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__342(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__342\n"); );
    // Body
    vlSelf->top__DOT___2063_ = (((QData)((IData)((vlSelf->top__DOT___3748_ 
                                                  >> 0x1fU))) 
                                 << 0x2bU) | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT___3748_ 
                                                                   >> 0x1eU)))) 
                                               << 0x2aU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT___3748_ 
                                                                      >> 0x1dU)))) 
                                                  << 0x29U) 
                                                 | (((QData)((IData)(
                                                                     (7U 
                                                                      & (vlSelf->top__DOT___3748_ 
                                                                         >> 0x1aU)))) 
                                                     << 0x26U) 
                                                    | (((QData)((IData)(
                                                                        (0x7fU 
                                                                         & ((IData)(vlSelf->top__DOT___1911_) 
                                                                            >> 8U)))) 
                                                        << 0x1fU) 
                                                       | (QData)((IData)(
                                                                         ((0x40000000U 
                                                                           & (vlSelf->top__DOT___3748_ 
                                                                              << 0xcU)) 
                                                                          | ((0x20000000U 
                                                                              & (vlSelf->top__DOT___3748_ 
                                                                                << 0xcU)) 
                                                                             | ((0x10000000U 
                                                                                & (vlSelf->top__DOT___3748_ 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0059_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0179_) 
                                                                                << 0x1aU) 
                                                                                | ((0x3ffc000U 
                                                                                & ((IData)(vlSelf->top__DOT___2042_) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1532_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0419_) 
                                                                                << 0xcU) 
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
                                                                                | (IData)(vlSelf->top__DOT___0129_))))))))))))))))))))))))));
    vlSelf->top__DOT___0538_ = (1U & (((((0xfc00000U 
                                          & ((IData)(vlSelf->top__DOT___2024_) 
                                             << 0x14U)) 
                                         | ((0x3fc000U 
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
                                                     << 0xbU))))) 
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
                                       + ((((IData)(vlSelf->top__DOT___0059_) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->top__DOT___0179_) 
                                               << 0x1aU) 
                                              | ((0x3ffc000U 
                                                  & ((IData)(vlSelf->top__DOT___2042_) 
                                                     << 0xdU)) 
                                                 | (((IData)(vlSelf->top__DOT___1532_) 
                                                     << 0xdU) 
                                                    | ((IData)(vlSelf->top__DOT___0419_) 
                                                       << 0xcU))))) 
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
                                      >> 0x1bU));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__343(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__343\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    // Body
    vlSelf->top__DOT___1990_ = (((QData)((IData)((1U 
                                                  & (IData)(
                                                            (1ULL 
                                                             & (((((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1989_ 
                                                                                >> 0x21U))))) 
                                                                   << 0x28U) 
                                                                  | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1344_) 
                                                                                << 0x1fU) 
                                                                                | ((0x7ffffff0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1989_ 
                                                                                >> 5U)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1792_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1989_ 
                                                                                >> 2U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1992_ 
                                                                                >> 8U))))))))) 
                                                                      << 8U) 
                                                                     | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0221_) 
                                                                                << 6U) 
                                                                                | (0x1fU 
                                                                                & (IData)(vlSelf->top__DOT___1992_))))))) 
                                                                 + 
                                                                 (((QData)((IData)(
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2fU))))) 
                                                                   << 0x2fU) 
                                                                  | (((QData)((IData)(vlSelf->top__DOT___1193_)) 
                                                                      << 0x2eU) 
                                                                     | (((QData)((IData)(vlSelf->top__DOT___1553_)) 
                                                                         << 0x2dU) 
                                                                        | (((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2bU))))) 
                                                                            << 0x2bU) 
                                                                           | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0219_) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___0887_) 
                                                                                << 0x1eU) 
                                                                                | ((0x20000000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 0x1dU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0477_) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___0019_) 
                                                                                << 0x1bU) 
                                                                                | ((0x7ff0000U 
                                                                                & ((vlSelf->top__DOT___1951_[5U] 
                                                                                << 0x11U) 
                                                                                | (0x10000U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 0xfU)))) 
                                                                                | (((IData)(vlSelf->top__DOT___1255_) 
                                                                                << 0xfU) 
                                                                                | ((0x7f00U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1276_) 
                                                                                << 7U) 
                                                                                | ((0x7eU 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 0xfU)) 
                                                                                | (IData)(vlSelf->top__DOT___1042_))))))))))))) 
                                                                               << 0xbU) 
                                                                              | (QData)((IData)(
                                                                                ((0x780U 
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
                                                                                | (IData)(vlSelf->top__DOT___1007_)))))))))))))) 
                                                                >> 0x37U)))))) 
                                 << 0x37U) | (((QData)((IData)(vlSelf->top__DOT___1811_)) 
                                               << 0x36U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (3ULL 
                                                                              & (((((QData)((IData)(
                                                                                (0x7fffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1989_ 
                                                                                >> 0x21U))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1344_) 
                                                                                << 0x1fU) 
                                                                                | ((0x7ffffff0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1989_ 
                                                                                >> 5U)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1792_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1989_ 
                                                                                >> 2U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1992_ 
                                                                                >> 8U))))))))) 
                                                                                << 8U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0221_) 
                                                                                << 6U) 
                                                                                | (0x1fU 
                                                                                & (IData)(vlSelf->top__DOT___1992_))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2fU))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1193_)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1553_)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2bU))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0219_) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___0887_) 
                                                                                << 0x1eU) 
                                                                                | ((0x20000000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 0x1dU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0477_) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___0019_) 
                                                                                << 0x1bU) 
                                                                                | ((0x7ff0000U 
                                                                                & ((vlSelf->top__DOT___1951_[5U] 
                                                                                << 0x11U) 
                                                                                | (0x10000U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 0xfU)))) 
                                                                                | (((IData)(vlSelf->top__DOT___1255_) 
                                                                                << 0xfU) 
                                                                                | ((0x7f00U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1276_) 
                                                                                << 7U) 
                                                                                | ((0x7eU 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 0xfU)) 
                                                                                | (IData)(vlSelf->top__DOT___1042_))))))))))))) 
                                                                                << 0xbU) 
                                                                                | (QData)((IData)(
                                                                                ((0x780U 
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
                                                                                | (IData)(vlSelf->top__DOT___1007_)))))))))))))) 
                                                                                >> 0x35U)))))) 
                                                  << 0x35U) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___1413_)) 
                                                     << 0x34U) 
                                                    | (((QData)((IData)(
                                                                        (0x7fU 
                                                                         & (IData)(
                                                                                (0x3ffULL 
                                                                                & (((((QData)((IData)(
                                                                                (0x7fffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1989_ 
                                                                                >> 0x21U))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1344_) 
                                                                                << 0x1fU) 
                                                                                | ((0x7ffffff0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1989_ 
                                                                                >> 5U)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1792_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1989_ 
                                                                                >> 2U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1992_ 
                                                                                >> 8U))))))))) 
                                                                                << 8U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0221_) 
                                                                                << 6U) 
                                                                                | (0x1fU 
                                                                                & (IData)(vlSelf->top__DOT___1992_))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2fU))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1193_)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1553_)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2bU))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0219_) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___0887_) 
                                                                                << 0x1eU) 
                                                                                | ((0x20000000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 0x1dU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0477_) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___0019_) 
                                                                                << 0x1bU) 
                                                                                | ((0x7ff0000U 
                                                                                & ((vlSelf->top__DOT___1951_[5U] 
                                                                                << 0x11U) 
                                                                                | (0x10000U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 0xfU)))) 
                                                                                | (((IData)(vlSelf->top__DOT___1255_) 
                                                                                << 0xfU) 
                                                                                | ((0x7f00U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1276_) 
                                                                                << 7U) 
                                                                                | ((0x7eU 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 0xfU)) 
                                                                                | (IData)(vlSelf->top__DOT___1042_))))))))))))) 
                                                                                << 0xbU) 
                                                                                | (QData)((IData)(
                                                                                ((0x780U 
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
                                                                                | (IData)(vlSelf->top__DOT___1007_)))))))))))))) 
                                                                                >> 0x2dU)))))) 
                                                        << 0x2dU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1764_)) 
                                                           << 0x2cU) 
                                                          | (((QData)((IData)(
                                                                              (0x1fffffU 
                                                                               & (IData)(
                                                                                (0xffffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                (0x7fffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1989_ 
                                                                                >> 0x21U))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1344_) 
                                                                                << 0x1fU) 
                                                                                | ((0x7ffffff0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1989_ 
                                                                                >> 5U)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1792_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1989_ 
                                                                                >> 2U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1992_ 
                                                                                >> 8U))))))))) 
                                                                                << 8U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0221_) 
                                                                                << 6U) 
                                                                                | (0x1fU 
                                                                                & (IData)(vlSelf->top__DOT___1992_))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2fU))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1193_)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1553_)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___1991_ 
                                                                                >> 0x2bU))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0219_) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___0887_) 
                                                                                << 0x1eU) 
                                                                                | ((0x20000000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 0x1dU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0477_) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___0019_) 
                                                                                << 0x1bU) 
                                                                                | ((0x7ff0000U 
                                                                                & ((vlSelf->top__DOT___1951_[5U] 
                                                                                << 0x11U) 
                                                                                | (0x10000U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 0xfU)))) 
                                                                                | (((IData)(vlSelf->top__DOT___1255_) 
                                                                                << 0xfU) 
                                                                                | ((0x7f00U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1276_) 
                                                                                << 7U) 
                                                                                | ((0x7eU 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 0xfU)) 
                                                                                | (IData)(vlSelf->top__DOT___1042_))))))))))))) 
                                                                                << 0xbU) 
                                                                                | (QData)((IData)(
                                                                                ((0x780U 
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
                                                                                | (IData)(vlSelf->top__DOT___1007_)))))))))))))) 
                                                                                >> 0x17U)))))) 
                                                              << 0x17U) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___1074_) 
                                                                                << 0x16U) 
                                                                                | ((0x3f0000U 
                                                                                & (((0x3ff000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1989_ 
                                                                                >> 5U)) 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1792_) 
                                                                                << 0xbU) 
                                                                                | ((0x600U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1989_ 
                                                                                >> 2U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1992_ 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0221_) 
                                                                                << 6U) 
                                                                                | (0x1fU 
                                                                                & (IData)(vlSelf->top__DOT___1992_))))))) 
                                                                                + 
                                                                                (((0x380000U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1276_) 
                                                                                << 0x12U) 
                                                                                | ((0x3f000U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->top__DOT___1042_) 
                                                                                << 0xbU)))) 
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
                                                                                | (IData)(vlSelf->top__DOT___1007_))))))))) 
                                                                                | (((IData)(vlSelf->top__DOT___0928_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & (((0x7000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1989_ 
                                                                                >> 5U)) 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1792_) 
                                                                                << 0xbU) 
                                                                                | ((0x600U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1989_ 
                                                                                >> 2U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1992_ 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0221_) 
                                                                                << 6U) 
                                                                                | (0x1fU 
                                                                                & (IData)(vlSelf->top__DOT___1992_))))))) 
                                                                                + 
                                                                                (((0x7000U 
                                                                                & (vlSelf->top__DOT___1951_[4U] 
                                                                                >> 4U)) 
                                                                                | ((IData)(vlSelf->top__DOT___1042_) 
                                                                                << 0xbU)) 
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
                                                                                | (IData)(vlSelf->top__DOT___1007_))))))))) 
                                                                                | (((IData)(vlSelf->top__DOT___0495_) 
                                                                                << 0xcU) 
                                                                                | (0xfffU 
                                                                                & ((((IData)(vlSelf->top__DOT___1792_) 
                                                                                << 0xbU) 
                                                                                | ((0x600U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1989_ 
                                                                                >> 2U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1992_ 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0221_) 
                                                                                << 6U) 
                                                                                | (0x1fU 
                                                                                & (IData)(vlSelf->top__DOT___1992_)))))) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___1042_) 
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
    vlSelf->top__DOT___2013_ = ((0x3fc00U & (((0x3fc00U 
                                               & vlSelf->top__DOT___2014_) 
                                              | ((0x3c0U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___1988_ 
                                                              >> 0x33U)) 
                                                     << 6U)) 
                                                 | ((0x20U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___3670_ 
                                                                 >> 7U)) 
                                                        << 5U)) 
                                                    | ((0x10U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___1988_ 
                                                                    >> 0x31U)) 
                                                           << 4U)) 
                                                       | ((8U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT___3670_ 
                                                                       >> 5U)) 
                                                              << 3U)) 
                                                          | ((6U 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT___1988_ 
                                                                          >> 0x2eU)) 
                                                                 << 1U)) 
                                                             | (IData)(vlSelf->top__DOT___0095_))))))) 
                                             + ((0x20000U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___1990_ 
                                                             >> 0x1bU)) 
                                                    << 0x11U)) 
                                                | ((0x1ffe0U 
                                                    & ((IData)(vlSelf->top__DOT___2008_) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->top__DOT___1531_) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->top__DOT___1068_) 
                                                          << 3U) 
                                                         | ((4U 
                                                             & ((IData)(vlSelf->top__DOT___2008_) 
                                                                << 2U)) 
                                                            | (((IData)(vlSelf->top__DOT___0438_) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->top__DOT___0043_))))))))) 
                                | (((IData)(vlSelf->top__DOT___1857_) 
                                    << 9U) | ((0x180U 
                                               & (((0x1c0U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___1988_ 
                                                                >> 0x33U)) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___3670_ 
                                                                   >> 7U)) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT___1988_ 
                                                                      >> 0x31U)) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT___3670_ 
                                                                         >> 5U)) 
                                                                << 3U)) 
                                                            | ((6U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___1988_ 
                                                                            >> 0x2eU)) 
                                                                   << 1U)) 
                                                               | (IData)(vlSelf->top__DOT___0095_)))))) 
                                                  + 
                                                  ((0x1e0U 
                                                    & ((IData)(vlSelf->top__DOT___2008_) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->top__DOT___1531_) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->top__DOT___1068_) 
                                                          << 3U) 
                                                         | ((4U 
                                                             & ((IData)(vlSelf->top__DOT___2008_) 
                                                                << 2U)) 
                                                            | (((IData)(vlSelf->top__DOT___0438_) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->top__DOT___0043_)))))))) 
                                              | (((IData)(vlSelf->top__DOT___1829_) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->top__DOT___1040_) 
                                                     << 5U) 
                                                    | (0x1fU 
                                                       & (((0x10U 
                                                            & ((IData)(
                                                                       (vlSelf->top__DOT___1988_ 
                                                                        >> 0x31U)) 
                                                               << 4U)) 
                                                           | ((8U 
                                                               & ((IData)(
                                                                          (vlSelf->top__DOT___3670_ 
                                                                           >> 5U)) 
                                                                  << 3U)) 
                                                              | ((6U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___1988_ 
                                                                              >> 0x2eU)) 
                                                                     << 1U)) 
                                                                 | (IData)(vlSelf->top__DOT___0095_)))) 
                                                          + 
                                                          (((IData)(vlSelf->top__DOT___1531_) 
                                                            << 4U) 
                                                           | (((IData)(vlSelf->top__DOT___1068_) 
                                                               << 3U) 
                                                              | ((4U 
                                                                  & ((IData)(vlSelf->top__DOT___2008_) 
                                                                     << 2U)) 
                                                                 | (((IData)(vlSelf->top__DOT___0438_) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelf->top__DOT___0043_))))))))))));
    __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___1829_)) 
                              << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___1040_)) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT___2013_ 
                                                                   >> 4U)))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0379_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0095_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0009_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___0099_)) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(vlSelf->top__DOT___0633_)) 
                                                              << 0x37U) 
                                                             | (((QData)((IData)(vlSelf->top__DOT___0162_)) 
                                                                 << 0x36U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___1959_) 
                                                                                >> 7U)))) 
                                                                    << 0x35U) 
                                                                   | (((QData)((IData)(vlSelf->top__DOT___1202_)) 
                                                                       << 0x34U) 
                                                                      | (((QData)((IData)(
                                                                                (0x3ffffU 
                                                                                & (vlSelf->top__DOT___1980_ 
                                                                                >> 6U)))) 
                                                                          << 0x22U) 
                                                                         | vlSelf->top__DOT____VdfgTmp_h6a7f45e4__0)))))))))))));
    __Vtemp_2[1U] = (IData)(((((QData)((IData)(vlSelf->top__DOT___1829_)) 
                               << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___1040_)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT___2013_ 
                                                                    >> 4U)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(vlSelf->top__DOT___0379_)) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(vlSelf->top__DOT___0095_)) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(vlSelf->top__DOT___0009_)) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(vlSelf->top__DOT___0099_)) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(vlSelf->top__DOT___0633_)) 
                                                               << 0x37U) 
                                                              | (((QData)((IData)(vlSelf->top__DOT___0162_)) 
                                                                  << 0x36U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___1959_) 
                                                                                >> 7U)))) 
                                                                     << 0x35U) 
                                                                    | (((QData)((IData)(vlSelf->top__DOT___1202_)) 
                                                                        << 0x34U) 
                                                                       | (((QData)((IData)(
                                                                                (0x3ffffU 
                                                                                & (vlSelf->top__DOT___1980_ 
                                                                                >> 6U)))) 
                                                                           << 0x22U) 
                                                                          | vlSelf->top__DOT____VdfgTmp_h6a7f45e4__0)))))))))))) 
                             >> 0x20U));
    __Vtemp_4[0U] = __Vtemp_2[0U];
    __Vtemp_4[1U] = __Vtemp_2[1U];
    __Vtemp_4[2U] = ((0x1f8U & (vlSelf->top__DOT___2013_ 
                                >> 7U)) | (((IData)(vlSelf->top__DOT___1857_) 
                                            << 2U) 
                                           | (3U & 
                                              (vlSelf->top__DOT___2013_ 
                                               >> 7U))));
    __Vtemp_5[0U] = (IData)((((QData)((IData)((1U & 
                                               ((IData)(vlSelf->top__DOT___3644_) 
                                                >> 8U)))) 
                              << 0x3bU) | (((QData)((IData)(
                                                            (0xfU 
                                                             & (vlSelf->top__DOT___2139_[1U] 
                                                                >> 0x17U)))) 
                                            << 0x37U) 
                                           | (((QData)((IData)(
                                                               (3U 
                                                                & ((IData)(vlSelf->top__DOT___3644_) 
                                                                   >> 2U)))) 
                                               << 0x35U) 
                                              | (((QData)((IData)(
                                                                  (3U 
                                                                   & (vlSelf->top__DOT___2139_[1U] 
                                                                      >> 0x13U)))) 
                                                  << 0x33U) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0345_)) 
                                                     << 0x32U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->top__DOT___2139_[1U] 
                                                                            >> 0x11U)))) 
                                                        << 0x31U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->top__DOT___3654_) 
                                                                               >> 8U)))) 
                                                           << 0x30U) 
                                                          | (((QData)((IData)(
                                                                              (7U 
                                                                               & (vlSelf->top__DOT___2139_[1U] 
                                                                                >> 0xdU)))) 
                                                              << 0x2dU) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3654_) 
                                                                                >> 4U)))) 
                                                                 << 0x2cU) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___2139_[1U] 
                                                                                >> 0xbU)))) 
                                                                    << 0x2bU) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3654_) 
                                                                                >> 2U)))) 
                                                                       << 0x2aU) 
                                                                      | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___2139_[1U] 
                                                                                >> 8U)))) 
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
                                                                                & vlSelf->top__DOT___2139_[1U]))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_hba0ff81c__0))))))))))))))))))));
    __Vtemp_5[1U] = ((0xf0000000U & vlSelf->top__DOT___2139_[1U]) 
                     | (IData)(((((QData)((IData)((1U 
                                                   & ((IData)(vlSelf->top__DOT___3644_) 
                                                      >> 8U)))) 
                                  << 0x3bU) | (((QData)((IData)(
                                                                (0xfU 
                                                                 & (vlSelf->top__DOT___2139_[1U] 
                                                                    >> 0x17U)))) 
                                                << 0x37U) 
                                               | (((QData)((IData)(
                                                                   (3U 
                                                                    & ((IData)(vlSelf->top__DOT___3644_) 
                                                                       >> 2U)))) 
                                                   << 0x35U) 
                                                  | (((QData)((IData)(
                                                                      (3U 
                                                                       & (vlSelf->top__DOT___2139_[1U] 
                                                                          >> 0x13U)))) 
                                                      << 0x33U) 
                                                     | (((QData)((IData)(vlSelf->top__DOT___0345_)) 
                                                         << 0x32U) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelf->top__DOT___2139_[1U] 
                                                                                >> 0x11U)))) 
                                                            << 0x31U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3654_) 
                                                                                >> 8U)))) 
                                                               << 0x30U) 
                                                              | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___2139_[1U] 
                                                                                >> 0xdU)))) 
                                                                  << 0x2dU) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3654_) 
                                                                                >> 4U)))) 
                                                                     << 0x2cU) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___2139_[1U] 
                                                                                >> 0xbU)))) 
                                                                        << 0x2bU) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3654_) 
                                                                                >> 2U)))) 
                                                                           << 0x2aU) 
                                                                          | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___2139_[1U] 
                                                                                >> 8U)))) 
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
                                                                                & vlSelf->top__DOT___2139_[1U]))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_hba0ff81c__0))))))))))))))))))) 
                                >> 0x20U)));
    __Vtemp_8[0U] = __Vtemp_5[0U];
    __Vtemp_8[1U] = __Vtemp_5[1U];
    __Vtemp_8[2U] = ((0x1e0U & ((vlSelf->top__DOT___1901_[2U] 
                                 << 6U) | (0x20U & 
                                           (vlSelf->top__DOT___1901_[1U] 
                                            >> 0x1aU)))) 
                     | (((IData)(vlSelf->top__DOT___1575_) 
                         << 4U) | ((8U & (vlSelf->top__DOT___1901_[1U] 
                                          >> 0x1aU)) 
                                   | (7U & vlSelf->top__DOT___2139_[2U]))));
    VL_ADD_W(3, __Vtemp_9, __Vtemp_4, __Vtemp_8);
    vlSelf->top__DOT___2138_[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___1844_)) 
                                             << 0x23U) 
                                            | (0x7ffffffffULL 
                                               & ((((QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->top__DOT___1980_ 
                                                                        >> 6U)))) 
                                                    << 0x22U) 
                                                   | vlSelf->top__DOT____VdfgTmp_h6a7f45e4__0) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (7U 
                                                                     & vlSelf->top__DOT___2139_[1U]))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_hba0ff81c__0)))))));
    vlSelf->top__DOT___2138_[1U] = (((IData)((0x1fffffffffULL 
                                              & (((QData)((IData)(
                                                                  (0x1ffU 
                                                                   & __Vtemp_9[2U]))) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    __Vtemp_9[1U])) 
                                                    >> 4U)))) 
                                     << 4U) | (IData)(
                                                      ((((QData)((IData)(vlSelf->top__DOT___1844_)) 
                                                         << 0x23U) 
                                                        | (0x7ffffffffULL 
                                                           & ((((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___1980_ 
                                                                                >> 6U)))) 
                                                                << 0x22U) 
                                                               | vlSelf->top__DOT____VdfgTmp_h6a7f45e4__0) 
                                                              + 
                                                              (((QData)((IData)(
                                                                                (7U 
                                                                                & vlSelf->top__DOT___2139_[1U]))) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_hba0ff81c__0)))))) 
                                                       >> 0x20U)));
    vlSelf->top__DOT___2138_[2U] = (((IData)((0x1fffffffffULL 
                                              & (((QData)((IData)(
                                                                  (0x1ffU 
                                                                   & __Vtemp_9[2U]))) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    __Vtemp_9[1U])) 
                                                    >> 4U)))) 
                                     >> 0x1cU) | ((IData)(
                                                          ((0x1fffffffffULL 
                                                            & (((QData)((IData)(
                                                                                (0x1ffU 
                                                                                & __Vtemp_9[2U]))) 
                                                                << 0x1cU) 
                                                               | ((QData)((IData)(
                                                                                __Vtemp_9[1U])) 
                                                                  >> 4U))) 
                                                           >> 0x20U)) 
                                                  << 4U));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__344(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__344\n"); );
    // Init
    CData/*0:0*/ top__DOT___1479_;
    top__DOT___1479_ = 0;
    // Body
    vlSelf->top__DOT___0847_ = (1U & ((((0x30U & (vlSelf->top__DOT___2000_[3U] 
                                                  >> 8U)) 
                                        | (((IData)(vlSelf->top__DOT___1361_) 
                                            << 3U) 
                                           | ((4U & 
                                               (vlSelf->top__DOT___2000_[3U] 
                                                >> 8U)) 
                                              | (((IData)(vlSelf->top__DOT___0284_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT___0740_))))) 
                                       + ((0x20U & 
                                           (vlSelf->top__DOT___1952_[1U] 
                                            << 4U)) 
                                          | (((IData)(vlSelf->top__DOT___0202_) 
                                              << 4U) 
                                             | (((IData)(vlSelf->top__DOT___0977_) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->top__DOT___0307_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___0594_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___0146_))))))) 
                                      >> 5U));
    top__DOT___1479_ = (1U & ((((0xf0U & (vlSelf->top__DOT___2000_[3U] 
                                          >> 8U)) | 
                                (((IData)(vlSelf->top__DOT___1361_) 
                                  << 3U) | ((4U & (
                                                   vlSelf->top__DOT___2000_[3U] 
                                                   >> 8U)) 
                                            | (((IData)(vlSelf->top__DOT___0284_) 
                                                << 1U) 
                                               | (IData)(vlSelf->top__DOT___0740_))))) 
                               + ((0xe0U & (vlSelf->top__DOT___1952_[1U] 
                                            << 4U)) 
                                  | (((IData)(vlSelf->top__DOT___0202_) 
                                      << 4U) | (((IData)(vlSelf->top__DOT___0977_) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->top__DOT___0307_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___0594_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___0146_))))))) 
                              >> 7U));
    vlSelf->top__DOT___1478_ = (1U & (~ (((IData)(vlSelf->top__DOT___1480_) 
                                          & (IData)(vlSelf->top__DOT___1004_)) 
                                         | ((IData)(vlSelf->top__DOT___0784_) 
                                            & (IData)(top__DOT___1479_)))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__345(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__345\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<4>/*127:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<4>/*127:0*/ __Vtemp_22;
    VlWide<4>/*127:0*/ __Vtemp_23;
    VlWide<4>/*127:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_36;
    VlWide<5>/*159:0*/ __Vtemp_40;
    VlWide<3>/*95:0*/ __Vtemp_41;
    VlWide<4>/*127:0*/ __Vtemp_42;
    VlWide<5>/*159:0*/ __Vtemp_43;
    VlWide<5>/*159:0*/ __Vtemp_44;
    VlWide<3>/*95:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_50;
    VlWide<4>/*127:0*/ __Vtemp_54;
    VlWide<3>/*95:0*/ __Vtemp_55;
    VlWide<4>/*127:0*/ __Vtemp_56;
    VlWide<4>/*127:0*/ __Vtemp_57;
    VlWide<4>/*127:0*/ __Vtemp_58;
    VlWide<3>/*95:0*/ __Vtemp_61;
    VlWide<3>/*95:0*/ __Vtemp_62;
    VlWide<3>/*95:0*/ __Vtemp_63;
    VlWide<3>/*95:0*/ __Vtemp_64;
    VlWide<3>/*95:0*/ __Vtemp_65;
    // Body
    __Vtemp_1[0U] = (IData)((0x1000080000000000ULL 
                             | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                 << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0210_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0303_)) 
                                                  << 0x3dU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0702_)) 
                                                     << 0x3aU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0612_)) 
                                                        << 0x39U) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___0106_)) 
                                                           << 0x38U) 
                                                          | (((QData)((IData)(
                                                                              (0x1ffU 
                                                                               & ((IData)(vlSelf->top__DOT___3733_) 
                                                                                >> 2U)))) 
                                                              << 0x2fU) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3733_) 
                                                                                >> 1U)))) 
                                                                 << 0x2eU) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT___3733_)))) 
                                                                    << 0x2dU) 
                                                                   | (((QData)((IData)(vlSelf->top__DOT___1283_)) 
                                                                       << 0x2cU) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___2046_ 
                                                                                >> 6U)))) 
                                                                          << 0x2aU) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3675_) 
                                                                                >> 5U)))) 
                                                                             << 0x29U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___2046_ 
                                                                                >> 4U)))) 
                                                                                << 0x28U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3675_) 
                                                                                >> 3U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (7U 
                                                                                & vlSelf->top__DOT___2046_))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0043_)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0191_)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0151_)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1044_)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0704_) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___0288_) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT___1021_) 
                                                                                << 0x1dU) 
                                                                                | ((0x1c000000U 
                                                                                & (vlSelf->top__DOT___3708_ 
                                                                                << 3U)) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3708_ 
                                                                                << 3U)) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->top__DOT___3708_ 
                                                                                << 3U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___3708_ 
                                                                                << 3U)) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->top__DOT___3708_ 
                                                                                << 3U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___3708_ 
                                                                                << 3U)) 
                                                                                | ((0x180000U 
                                                                                & (vlSelf->top__DOT___3708_ 
                                                                                << 3U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3708_ 
                                                                                << 3U)) 
                                                                                | ((0x3c000U 
                                                                                & (vlSelf->top__DOT___3708_ 
                                                                                << 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3708_ 
                                                                                << 3U)) 
                                                                                | ((0x1fc0U 
                                                                                & (vlSelf->top__DOT___3708_ 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___3708_ 
                                                                                << 3U)) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___3708_ 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1799_))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_1[1U] = (IData)(((0x1000080000000000ULL 
                              | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                  << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0210_)) 
                                                << 0x3eU) 
                                               | (((QData)((IData)(vlSelf->top__DOT___0303_)) 
                                                   << 0x3dU) 
                                                  | (((QData)((IData)(vlSelf->top__DOT___0702_)) 
                                                      << 0x3aU) 
                                                     | (((QData)((IData)(vlSelf->top__DOT___0612_)) 
                                                         << 0x39U) 
                                                        | (((QData)((IData)(vlSelf->top__DOT___0106_)) 
                                                            << 0x38U) 
                                                           | (((QData)((IData)(
                                                                               (0x1ffU 
                                                                                & ((IData)(vlSelf->top__DOT___3733_) 
                                                                                >> 2U)))) 
                                                               << 0x2fU) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3733_) 
                                                                                >> 1U)))) 
                                                                  << 0x2eU) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT___3733_)))) 
                                                                     << 0x2dU) 
                                                                    | (((QData)((IData)(vlSelf->top__DOT___1283_)) 
                                                                        << 0x2cU) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___2046_ 
                                                                                >> 6U)))) 
                                                                           << 0x2aU) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3675_) 
                                                                                >> 5U)))) 
                                                                              << 0x29U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___2046_ 
                                                                                >> 4U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3675_) 
                                                                                >> 3U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (7U 
                                                                                & vlSelf->top__DOT___2046_))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0043_)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0191_)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0151_)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1044_)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0704_) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___0288_) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT___1021_) 
                                                                                << 0x1dU) 
                                                                                | ((0x1c000000U 
                                                                                & (vlSelf->top__DOT___3708_ 
                                                                                << 3U)) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3708_ 
                                                                                << 3U)) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->top__DOT___3708_ 
                                                                                << 3U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___3708_ 
                                                                                << 3U)) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->top__DOT___3708_ 
                                                                                << 3U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___3708_ 
                                                                                << 3U)) 
                                                                                | ((0x180000U 
                                                                                & (vlSelf->top__DOT___3708_ 
                                                                                << 3U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3708_ 
                                                                                << 3U)) 
                                                                                | ((0x3c000U 
                                                                                & (vlSelf->top__DOT___3708_ 
                                                                                << 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3708_ 
                                                                                << 3U)) 
                                                                                | ((0x1fc0U 
                                                                                & (vlSelf->top__DOT___3708_ 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___3708_ 
                                                                                << 3U)) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___3708_ 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1799_))))))))))))))))))))))))))))))))))))))))) 
                             >> 0x20U));
    vlSelf->top__DOT___2094_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___2094_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___2094_[2U] = ((0xc0000000U & 
                                     (vlSelf->top__DOT___3679_[0U] 
                                      << 1U)) | ((0x20000000U 
                                                  & (vlSelf->top__DOT___3679_[0U] 
                                                     << 1U)) 
                                                 | ((0x1fffffe0U 
                                                     & (vlSelf->top__DOT___3679_[0U] 
                                                        << 1U)) 
                                                    | (((IData)(vlSelf->top__DOT___0332_) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT___0549_) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->top__DOT___1195_) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->top__DOT___0179_)))))));
    vlSelf->top__DOT___2094_[3U] = ((0xffffff80U & 
                                     (vlSelf->top__DOT___3679_[1U] 
                                      << 1U)) | ((0x40U 
                                                  & (vlSelf->top__DOT___3679_[1U] 
                                                     << 1U)) 
                                                 | (0x3fU 
                                                    & ((0x3ffffffeU 
                                                        & (vlSelf->top__DOT___3679_[1U] 
                                                           << 1U)) 
                                                       | (vlSelf->top__DOT___3679_[0U] 
                                                          >> 0x1fU)))));
    vlSelf->top__DOT___2094_[4U] = (7U & ((0x7eU & 
                                           (vlSelf->top__DOT___3679_[2U] 
                                            << 1U)) 
                                          | (vlSelf->top__DOT___3679_[1U] 
                                             >> 0x1fU)));
    vlSelf->top__DOT___2270_[0U] = (IData)((((QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT___3679_[1U] 
                                                                 >> 5U)))) 
                                             << 0x25U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & ((vlSelf->top__DOT___2094_[3U] 
                                                                     << 2U) 
                                                                    | (vlSelf->top__DOT___2094_[2U] 
                                                                       >> 0x1eU))))) 
                                                << 0x1dU) 
                                               | (QData)((IData)(
                                                                 ((0x10000000U 
                                                                   & vlSelf->top__DOT___3679_[0U]) 
                                                                  | ((0xffffff0U 
                                                                      & (vlSelf->top__DOT___2094_[2U] 
                                                                         >> 1U)) 
                                                                     | (0xfU 
                                                                        & vlSelf->top__DOT___3679_[0U]))))))));
    vlSelf->top__DOT___2270_[1U] = ((0xffffffc0U & 
                                     ((vlSelf->top__DOT___2094_[4U] 
                                       << 0x1fU) | 
                                      (0x7fffffc0U 
                                       & (vlSelf->top__DOT___2094_[3U] 
                                          >> 1U)))) 
                                    | (IData)(((((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT___3679_[1U] 
                                                                     >> 5U)))) 
                                                 << 0x25U) 
                                                | (((QData)((IData)(
                                                                    (0xffU 
                                                                     & ((vlSelf->top__DOT___2094_[3U] 
                                                                         << 2U) 
                                                                        | (vlSelf->top__DOT___2094_[2U] 
                                                                           >> 0x1eU))))) 
                                                    << 0x1dU) 
                                                   | (QData)((IData)(
                                                                     ((0x10000000U 
                                                                       & vlSelf->top__DOT___3679_[0U]) 
                                                                      | ((0xffffff0U 
                                                                          & (vlSelf->top__DOT___2094_[2U] 
                                                                             >> 1U)) 
                                                                         | (0xfU 
                                                                            & vlSelf->top__DOT___3679_[0U]))))))) 
                                               >> 0x20U)));
    vlSelf->top__DOT___2270_[2U] = ((0x1ffcU & vlSelf->top__DOT___3679_[2U]) 
                                    | (3U & (vlSelf->top__DOT___2094_[4U] 
                                             >> 1U)));
    __Vtemp_13[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___0225_)) 
                                 << 0x3eU) | (((QData)((IData)(vlSelf->top__DOT___0127_)) 
                                               << 0x3dU) 
                                              | ((0x1fffffffffffc000ULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->top__DOT___2095_[2U])) 
                                                      << 0x26U) 
                                                     | (0xffffffffffffc000ULL 
                                                        & ((QData)((IData)(
                                                                           vlSelf->top__DOT___2095_[1U])) 
                                                           << 6U)))) 
                                                 | (QData)((IData)(
                                                                   ((0x2000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3734_ 
                                                                                >> 0xdU)) 
                                                                        << 0xdU)) 
                                                                    | (0x1fffU 
                                                                       & ((vlSelf->top__DOT___2095_[1U] 
                                                                           << 6U) 
                                                                          | (vlSelf->top__DOT___2095_[0U] 
                                                                             >> 0x1aU)))))))))) 
                       << 0x17U) | (((IData)(vlSelf->top__DOT___1352_) 
                                     << 0x16U) | ((0x200000U 
                                                   & (vlSelf->top__DOT___2095_[0U] 
                                                      >> 3U)) 
                                                  | ((0x100000U 
                                                      & ((IData)(vlSelf->top__DOT___3697_) 
                                                         << 7U)) 
                                                     | ((0x80000U 
                                                         & ((IData)(vlSelf->top__DOT___3697_) 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (vlSelf->top__DOT___2095_[0U] 
                                                               >> 3U)) 
                                                           | ((0x20000U 
                                                               & ((IData)(vlSelf->top__DOT___3697_) 
                                                                  << 7U)) 
                                                              | ((0x10000U 
                                                                  & ((IData)(vlSelf->top__DOT___3697_) 
                                                                     << 7U)) 
                                                                 | ((0xfe00U 
                                                                     & (vlSelf->top__DOT___2095_[0U] 
                                                                        >> 3U)) 
                                                                    | ((0x100U 
                                                                        & ((IData)(vlSelf->top__DOT___3697_) 
                                                                           << 7U)) 
                                                                       | ((0x80U 
                                                                           & ((IData)(vlSelf->top__DOT___3697_) 
                                                                              << 7U)) 
                                                                          | (((IData)(vlSelf->top__DOT___0466_) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSelf->top__DOT___0338_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0784_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0946_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0703_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1225_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0619_))))))))))))))))));
    __Vtemp_13[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___0225_)) 
                                 << 0x3eU) | (((QData)((IData)(vlSelf->top__DOT___0127_)) 
                                               << 0x3dU) 
                                              | ((0x1fffffffffffc000ULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->top__DOT___2095_[2U])) 
                                                      << 0x26U) 
                                                     | (0xffffffffffffc000ULL 
                                                        & ((QData)((IData)(
                                                                           vlSelf->top__DOT___2095_[1U])) 
                                                           << 6U)))) 
                                                 | (QData)((IData)(
                                                                   ((0x2000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3734_ 
                                                                                >> 0xdU)) 
                                                                        << 0xdU)) 
                                                                    | (0x1fffU 
                                                                       & ((vlSelf->top__DOT___2095_[1U] 
                                                                           << 6U) 
                                                                          | (vlSelf->top__DOT___2095_[0U] 
                                                                             >> 0x1aU)))))))))) 
                       >> 9U) | ((IData)(((((QData)((IData)(vlSelf->top__DOT___0225_)) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(vlSelf->top__DOT___0127_)) 
                                               << 0x3dU) 
                                              | ((0x1fffffffffffc000ULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->top__DOT___2095_[2U])) 
                                                      << 0x26U) 
                                                     | (0xffffffffffffc000ULL 
                                                        & ((QData)((IData)(
                                                                           vlSelf->top__DOT___2095_[1U])) 
                                                           << 6U)))) 
                                                 | (QData)((IData)(
                                                                   ((0x2000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3734_ 
                                                                                >> 0xdU)) 
                                                                        << 0xdU)) 
                                                                    | (0x1fffU 
                                                                       & ((vlSelf->top__DOT___2095_[1U] 
                                                                           << 6U) 
                                                                          | (vlSelf->top__DOT___2095_[0U] 
                                                                             >> 0x1aU))))))))) 
                                          >> 0x20U)) 
                                 << 0x17U));
    __Vtemp_16[2U] = ((0x3e000000U & (vlSelf->top__DOT___1981_ 
                                      << 0x17U)) | 
                      ((0x1000000U & ((IData)(vlSelf->top__DOT___3775_) 
                                      << 0x18U)) | 
                       ((IData)(((((QData)((IData)(vlSelf->top__DOT___0225_)) 
                                   << 0x3eU) | (((QData)((IData)(vlSelf->top__DOT___0127_)) 
                                                 << 0x3dU) 
                                                | ((0x1fffffffffffc000ULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->top__DOT___2095_[2U])) 
                                                        << 0x26U) 
                                                       | (0xffffffffffffc000ULL 
                                                          & ((QData)((IData)(
                                                                             vlSelf->top__DOT___2095_[1U])) 
                                                             << 6U)))) 
                                                   | (QData)((IData)(
                                                                     ((0x2000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___3734_ 
                                                                                >> 0xdU)) 
                                                                          << 0xdU)) 
                                                                      | (0x1fffU 
                                                                         & ((vlSelf->top__DOT___2095_[1U] 
                                                                             << 6U) 
                                                                            | (vlSelf->top__DOT___2095_[0U] 
                                                                               >> 0x1aU))))))))) 
                                 >> 0x20U)) >> 9U)));
    __Vtemp_20[0U] = ((__Vtemp_13[0U] << 3U) | (((IData)(vlSelf->top__DOT___0907_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___0419_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0678_))));
    __Vtemp_20[1U] = ((__Vtemp_13[0U] >> 0x1dU) | (
                                                   __Vtemp_13[1U] 
                                                   << 3U));
    __Vtemp_20[2U] = ((__Vtemp_13[1U] >> 0x1dU) | (
                                                   __Vtemp_16[2U] 
                                                   << 3U));
    __Vtemp_20[3U] = (((4U & ((IData)(vlSelf->top__DOT___3775_) 
                              >> 5U)) | ((2U & ((IData)(vlSelf->top__DOT___3775_) 
                                                >> 5U)) 
                                         | (__Vtemp_16[2U] 
                                            >> 0x1dU))) 
                      | ((0x80000000U & vlSelf->top__DOT___2095_[3U]) 
                         | ((0x7f800000U & ((IData)(vlSelf->top__DOT___2007_) 
                                            << 0x16U)) 
                            | (((IData)(vlSelf->top__DOT___1441_) 
                                << 0x16U) | ((0x3ff000U 
                                              & vlSelf->top__DOT___2095_[3U]) 
                                             | ((0xe00U 
                                                 & (vlSelf->top__DOT___1972_ 
                                                    >> 0xeU)) 
                                                | (((IData)(vlSelf->top__DOT___1686_) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->top__DOT___0335_) 
                                                       << 7U) 
                                                      | (((IData)(vlSelf->top__DOT___0076_) 
                                                          << 6U) 
                                                         | (0x38U 
                                                            & (vlSelf->top__DOT___1981_ 
                                                               >> 6U)))))))))));
    __Vtemp_21[0U] = (0x2000100U | (((IData)(vlSelf->top__DOT___0549_) 
                                     << 0x1fU) | (((IData)(vlSelf->top__DOT___1195_) 
                                                   << 0x1eU) 
                                                  | (((IData)(vlSelf->top__DOT___0179_) 
                                                      << 0x1dU) 
                                                     | (((IData)(vlSelf->top__DOT___0183_) 
                                                         << 0x1cU) 
                                                        | (((IData)(vlSelf->top__DOT___0210_) 
                                                            << 0x1bU) 
                                                           | (((IData)(vlSelf->top__DOT___0303_) 
                                                               << 0x1aU) 
                                                              | (((IData)(vlSelf->top__DOT___0702_) 
                                                                  << 0x17U) 
                                                                 | (((IData)(vlSelf->top__DOT___0612_) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlSelf->top__DOT___0106_) 
                                                                        << 0x15U) 
                                                                       | ((0x1ff000U 
                                                                           & (vlSelf->top__DOT___2094_[1U] 
                                                                              >> 3U)) 
                                                                          | ((0x800U 
                                                                              & ((IData)(vlSelf->top__DOT___3733_) 
                                                                                << 0xaU)) 
                                                                             | ((0x400U 
                                                                                & (vlSelf->top__DOT___2094_[1U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1283_) 
                                                                                << 9U) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___2046_ 
                                                                                << 1U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___3675_) 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___2046_ 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___3675_) 
                                                                                << 1U)) 
                                                                                | ((0xeU 
                                                                                & (vlSelf->top__DOT___2046_ 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0043_))))))))))))))))))));
    __Vtemp_22[0U] = (((IData)(vlSelf->top__DOT___0191_) 
                       << 0x1fU) | (((IData)(vlSelf->top__DOT___0151_) 
                                     << 0x1eU) | (((IData)(vlSelf->top__DOT___1044_) 
                                                   << 0x1dU) 
                                                  | (((IData)(vlSelf->top__DOT___0704_) 
                                                      << 0x1cU) 
                                                     | (((IData)(vlSelf->top__DOT___0288_) 
                                                         << 0x1bU) 
                                                        | (((IData)(vlSelf->top__DOT___1021_) 
                                                            << 0x1aU) 
                                                           | ((0x3800000U 
                                                               & (vlSelf->top__DOT___2094_[0U] 
                                                                  >> 3U)) 
                                                              | ((0x400000U 
                                                                  & vlSelf->top__DOT___3708_) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->top__DOT___2094_[0U] 
                                                                        >> 3U)) 
                                                                    | ((0x100000U 
                                                                        & vlSelf->top__DOT___3708_) 
                                                                       | ((0x80000U 
                                                                           & vlSelf->top__DOT___3708_) 
                                                                          | ((0x40000U 
                                                                              & vlSelf->top__DOT___3708_) 
                                                                             | ((0x30000U 
                                                                                & (vlSelf->top__DOT___2094_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x8000U 
                                                                                & vlSelf->top__DOT___3708_) 
                                                                                | ((0x7800U 
                                                                                & (vlSelf->top__DOT___2094_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x400U 
                                                                                & vlSelf->top__DOT___3708_) 
                                                                                | ((0x3f8U 
                                                                                & (vlSelf->top__DOT___2094_[0U] 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & vlSelf->top__DOT___3708_) 
                                                                                | (3U 
                                                                                & (vlSelf->top__DOT___2094_[0U] 
                                                                                >> 3U))))))))))))))))))));
    __Vtemp_23[0U] = ((__Vtemp_22[0U] << 3U) | (((IData)(vlSelf->top__DOT___0162_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___0043_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___1799_))));
    __Vtemp_23[1U] = ((__Vtemp_22[0U] >> 0x1dU) | (
                                                   __Vtemp_21[0U] 
                                                   << 3U));
    __Vtemp_23[2U] = ((__Vtemp_21[0U] >> 0x1dU) | ((IData)(
                                                           (((QData)((IData)(
                                                                             (vlSelf->top__DOT___2094_[3U] 
                                                                              >> 7U))) 
                                                             << 0x24U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3679_[1U] 
                                                                                >> 5U)))) 
                                                                << 0x23U) 
                                                               | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & ((vlSelf->top__DOT___2094_[3U] 
                                                                                << 2U) 
                                                                                | (vlSelf->top__DOT___2094_[2U] 
                                                                                >> 0x1eU))))) 
                                                                   << 0x1bU) 
                                                                  | (QData)((IData)(
                                                                                ((0x4000000U 
                                                                                & (vlSelf->top__DOT___3679_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x3fffffcU 
                                                                                & (vlSelf->top__DOT___2094_[2U] 
                                                                                >> 3U)) 
                                                                                | (IData)(vlSelf->top__DOT___0332_))))))))) 
                                                   << 3U));
    __Vtemp_23[3U] = (((IData)((((QData)((IData)((vlSelf->top__DOT___2094_[3U] 
                                                  >> 7U))) 
                                 << 0x24U) | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT___3679_[1U] 
                                                                   >> 5U)))) 
                                               << 0x23U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & ((vlSelf->top__DOT___2094_[3U] 
                                                                       << 2U) 
                                                                      | (vlSelf->top__DOT___2094_[2U] 
                                                                         >> 0x1eU))))) 
                                                  << 0x1bU) 
                                                 | (QData)((IData)(
                                                                   ((0x4000000U 
                                                                     & (vlSelf->top__DOT___3679_[0U] 
                                                                        >> 2U)) 
                                                                    | ((0x3fffffcU 
                                                                        & (vlSelf->top__DOT___2094_[2U] 
                                                                           >> 3U)) 
                                                                       | (IData)(vlSelf->top__DOT___0332_))))))))) 
                       >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                               (vlSelf->top__DOT___2094_[3U] 
                                                                >> 7U))) 
                                               << 0x24U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT___3679_[1U] 
                                                                      >> 5U)))) 
                                                  << 0x23U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & ((vlSelf->top__DOT___2094_[3U] 
                                                                          << 2U) 
                                                                         | (vlSelf->top__DOT___2094_[2U] 
                                                                            >> 0x1eU))))) 
                                                     << 0x1bU) 
                                                    | (QData)((IData)(
                                                                      ((0x4000000U 
                                                                        & (vlSelf->top__DOT___3679_[0U] 
                                                                           >> 2U)) 
                                                                       | ((0x3fffffcU 
                                                                           & (vlSelf->top__DOT___2094_[2U] 
                                                                              >> 3U)) 
                                                                          | (IData)(vlSelf->top__DOT___0332_)))))))) 
                                             >> 0x20U)) 
                                    << 3U));
    VL_ADD_W(4, __Vtemp_24, __Vtemp_20, __Vtemp_23);
    vlSelf->top__DOT___1071_ = (__Vtemp_24[3U] >> 0x1fU);
    __Vtemp_26[0U] = (((IData)(((0x7ffffffffc000ULL 
                                 & (((QData)((IData)(
                                                     vlSelf->top__DOT___2095_[2U])) 
                                     << 0x26U) | (0xffffffffffffc000ULL 
                                                  & ((QData)((IData)(
                                                                     vlSelf->top__DOT___2095_[1U])) 
                                                     << 6U)))) 
                                | (QData)((IData)((
                                                   (0x2000U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___3734_ 
                                                                >> 0xdU)) 
                                                       << 0xdU)) 
                                                   | (0x1fffU 
                                                      & ((vlSelf->top__DOT___2095_[1U] 
                                                          << 6U) 
                                                         | (vlSelf->top__DOT___2095_[0U] 
                                                            >> 0x1aU)))))))) 
                       << 0x17U) | (((IData)(vlSelf->top__DOT___1352_) 
                                     << 0x16U) | ((0x200000U 
                                                   & (vlSelf->top__DOT___2095_[0U] 
                                                      >> 3U)) 
                                                  | ((0x100000U 
                                                      & ((IData)(vlSelf->top__DOT___3697_) 
                                                         << 7U)) 
                                                     | ((0x80000U 
                                                         & ((IData)(vlSelf->top__DOT___3697_) 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (vlSelf->top__DOT___2095_[0U] 
                                                               >> 3U)) 
                                                           | ((0x20000U 
                                                               & ((IData)(vlSelf->top__DOT___3697_) 
                                                                  << 7U)) 
                                                              | ((0x10000U 
                                                                  & ((IData)(vlSelf->top__DOT___3697_) 
                                                                     << 7U)) 
                                                                 | ((0xfe00U 
                                                                     & (vlSelf->top__DOT___2095_[0U] 
                                                                        >> 3U)) 
                                                                    | ((0x100U 
                                                                        & ((IData)(vlSelf->top__DOT___3697_) 
                                                                           << 7U)) 
                                                                       | ((0x80U 
                                                                           & ((IData)(vlSelf->top__DOT___3697_) 
                                                                              << 7U)) 
                                                                          | (((IData)(vlSelf->top__DOT___0466_) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSelf->top__DOT___0338_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0784_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0946_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0703_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1225_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0619_))))))))))))))))));
    __Vtemp_26[1U] = (((IData)(((0x7ffffffffc000ULL 
                                 & (((QData)((IData)(
                                                     vlSelf->top__DOT___2095_[2U])) 
                                     << 0x26U) | (0xffffffffffffc000ULL 
                                                  & ((QData)((IData)(
                                                                     vlSelf->top__DOT___2095_[1U])) 
                                                     << 6U)))) 
                                | (QData)((IData)((
                                                   (0x2000U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___3734_ 
                                                                >> 0xdU)) 
                                                       << 0xdU)) 
                                                   | (0x1fffU 
                                                      & ((vlSelf->top__DOT___2095_[1U] 
                                                          << 6U) 
                                                         | (vlSelf->top__DOT___2095_[0U] 
                                                            >> 0x1aU)))))))) 
                       >> 9U) | ((IData)((((0x7ffffffffc000ULL 
                                            & (((QData)((IData)(
                                                                vlSelf->top__DOT___2095_[2U])) 
                                                << 0x26U) 
                                               | (0xffffffffffffc000ULL 
                                                  & ((QData)((IData)(
                                                                     vlSelf->top__DOT___2095_[1U])) 
                                                     << 6U)))) 
                                           | (QData)((IData)(
                                                             ((0x2000U 
                                                               & ((IData)(
                                                                          (vlSelf->top__DOT___3734_ 
                                                                           >> 0xdU)) 
                                                                  << 0xdU)) 
                                                              | (0x1fffU 
                                                                 & ((vlSelf->top__DOT___2095_[1U] 
                                                                     << 6U) 
                                                                    | (vlSelf->top__DOT___2095_[0U] 
                                                                       >> 0x1aU))))))) 
                                          >> 0x20U)) 
                                 << 0x17U));
    __Vtemp_27[0U] = ((__Vtemp_26[0U] << 3U) | (((IData)(vlSelf->top__DOT___0907_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___0419_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0678_))));
    __Vtemp_27[1U] = ((__Vtemp_26[0U] >> 0x1dU) | (
                                                   __Vtemp_26[1U] 
                                                   << 3U));
    __Vtemp_27[2U] = ((__Vtemp_26[1U] >> 0x1dU) | (0x3fffff8U 
                                                   & ((IData)(
                                                              (((0x7ffffffffc000ULL 
                                                                 & (((QData)((IData)(
                                                                                vlSelf->top__DOT___2095_[2U])) 
                                                                     << 0x26U) 
                                                                    | (0xffffffffffffc000ULL 
                                                                       & ((QData)((IData)(
                                                                                vlSelf->top__DOT___2095_[1U])) 
                                                                          << 6U)))) 
                                                                | (QData)((IData)(
                                                                                ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3734_ 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                                | (0x1fffU 
                                                                                & ((vlSelf->top__DOT___2095_[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->top__DOT___2095_[0U] 
                                                                                >> 0x1aU))))))) 
                                                               >> 0x20U)) 
                                                      >> 6U)));
    __Vtemp_28[0U] = (((IData)(vlSelf->top__DOT___0191_) 
                       << 0x1fU) | (((IData)(vlSelf->top__DOT___0151_) 
                                     << 0x1eU) | (((IData)(vlSelf->top__DOT___1044_) 
                                                   << 0x1dU) 
                                                  | (((IData)(vlSelf->top__DOT___0704_) 
                                                      << 0x1cU) 
                                                     | (((IData)(vlSelf->top__DOT___0288_) 
                                                         << 0x1bU) 
                                                        | (((IData)(vlSelf->top__DOT___1021_) 
                                                            << 0x1aU) 
                                                           | ((0x3800000U 
                                                               & (vlSelf->top__DOT___2094_[0U] 
                                                                  >> 3U)) 
                                                              | ((0x400000U 
                                                                  & vlSelf->top__DOT___3708_) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->top__DOT___2094_[0U] 
                                                                        >> 3U)) 
                                                                    | ((0x100000U 
                                                                        & vlSelf->top__DOT___3708_) 
                                                                       | ((0x80000U 
                                                                           & vlSelf->top__DOT___3708_) 
                                                                          | ((0x40000U 
                                                                              & vlSelf->top__DOT___3708_) 
                                                                             | ((0x30000U 
                                                                                & (vlSelf->top__DOT___2094_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x8000U 
                                                                                & vlSelf->top__DOT___3708_) 
                                                                                | ((0x7800U 
                                                                                & (vlSelf->top__DOT___2094_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x400U 
                                                                                & vlSelf->top__DOT___3708_) 
                                                                                | ((0x3f8U 
                                                                                & (vlSelf->top__DOT___2094_[0U] 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & vlSelf->top__DOT___3708_) 
                                                                                | (3U 
                                                                                & (vlSelf->top__DOT___2094_[0U] 
                                                                                >> 3U))))))))))))))))))));
    __Vtemp_28[1U] = (IData)((((QData)((IData)(((0x3fcU 
                                                 & (vlSelf->top__DOT___2094_[2U] 
                                                    >> 3U)) 
                                                | (IData)(vlSelf->top__DOT___0332_)))) 
                               << 0x20U) | (QData)((IData)(
                                                           (0x2000100U 
                                                            | (((IData)(vlSelf->top__DOT___0549_) 
                                                                << 0x1fU) 
                                                               | (((IData)(vlSelf->top__DOT___1195_) 
                                                                   << 0x1eU) 
                                                                  | (((IData)(vlSelf->top__DOT___0179_) 
                                                                      << 0x1dU) 
                                                                     | (((IData)(vlSelf->top__DOT___0183_) 
                                                                         << 0x1cU) 
                                                                        | (((IData)(vlSelf->top__DOT___0210_) 
                                                                            << 0x1bU) 
                                                                           | (((IData)(vlSelf->top__DOT___0303_) 
                                                                               << 0x1aU) 
                                                                              | (((IData)(vlSelf->top__DOT___0702_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0612_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0106_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff000U 
                                                                                & (vlSelf->top__DOT___2094_[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___3733_) 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___2094_[1U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1283_) 
                                                                                << 9U) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___2046_ 
                                                                                << 1U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___3675_) 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___2046_ 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___3675_) 
                                                                                << 1U)) 
                                                                                | ((0xeU 
                                                                                & (vlSelf->top__DOT___2046_ 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0043_))))))))))))))))))))))));
    __Vtemp_28[2U] = (IData)(((((QData)((IData)(((0x3fcU 
                                                  & (vlSelf->top__DOT___2094_[2U] 
                                                     >> 3U)) 
                                                 | (IData)(vlSelf->top__DOT___0332_)))) 
                                << 0x20U) | (QData)((IData)(
                                                            (0x2000100U 
                                                             | (((IData)(vlSelf->top__DOT___0549_) 
                                                                 << 0x1fU) 
                                                                | (((IData)(vlSelf->top__DOT___1195_) 
                                                                    << 0x1eU) 
                                                                   | (((IData)(vlSelf->top__DOT___0179_) 
                                                                       << 0x1dU) 
                                                                      | (((IData)(vlSelf->top__DOT___0183_) 
                                                                          << 0x1cU) 
                                                                         | (((IData)(vlSelf->top__DOT___0210_) 
                                                                             << 0x1bU) 
                                                                            | (((IData)(vlSelf->top__DOT___0303_) 
                                                                                << 0x1aU) 
                                                                               | (((IData)(vlSelf->top__DOT___0702_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0612_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0106_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff000U 
                                                                                & (vlSelf->top__DOT___2094_[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___3733_) 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___2094_[1U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1283_) 
                                                                                << 9U) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___2046_ 
                                                                                << 1U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___3675_) 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___2046_ 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___3675_) 
                                                                                << 1U)) 
                                                                                | ((0xeU 
                                                                                & (vlSelf->top__DOT___2046_ 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0043_))))))))))))))))))))))) 
                              >> 0x20U));
    __Vtemp_29[0U] = ((__Vtemp_28[0U] << 3U) | (((IData)(vlSelf->top__DOT___0162_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___0043_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___1799_))));
    __Vtemp_29[1U] = ((__Vtemp_28[0U] >> 0x1dU) | (
                                                   __Vtemp_28[1U] 
                                                   << 3U));
    __Vtemp_29[2U] = ((__Vtemp_28[1U] >> 0x1dU) | (
                                                   __Vtemp_28[2U] 
                                                   << 3U));
    VL_ADD_W(3, __Vtemp_30, __Vtemp_27, __Vtemp_29);
    vlSelf->top__DOT___1591_ = (1U & (__Vtemp_30[2U] 
                                      >> 0xcU));
    vlSelf->top__DOT___1899_ = ((0x3ffffffffffff8ULL 
                                 & ((((((QData)((IData)(
                                                        ((0x1fffc000U 
                                                          & (vlSelf->top__DOT___2095_[1U] 
                                                             << 6U)) 
                                                         | ((0x2000U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT___3734_ 
                                                                         >> 0xdU)) 
                                                                << 0xdU)) 
                                                            | (0x1fffU 
                                                               & ((vlSelf->top__DOT___2095_[1U] 
                                                                   << 6U) 
                                                                  | (vlSelf->top__DOT___2095_[0U] 
                                                                     >> 0x1aU))))))) 
                                        << 0x1aU) | 
                                       ((QData)((IData)(
                                                        (((IData)(vlSelf->top__DOT___1352_) 
                                                          << 0x16U) 
                                                         | ((0x200000U 
                                                             & (vlSelf->top__DOT___2095_[0U] 
                                                                >> 3U)) 
                                                            | ((0x100000U 
                                                                & ((IData)(vlSelf->top__DOT___3697_) 
                                                                   << 7U)) 
                                                               | ((0x80000U 
                                                                   & ((IData)(vlSelf->top__DOT___3697_) 
                                                                      << 7U)) 
                                                                  | ((0x40000U 
                                                                      & (vlSelf->top__DOT___2095_[0U] 
                                                                         >> 3U)) 
                                                                     | ((0x20000U 
                                                                         & ((IData)(vlSelf->top__DOT___3697_) 
                                                                            << 7U)) 
                                                                        | ((0x10000U 
                                                                            & ((IData)(vlSelf->top__DOT___3697_) 
                                                                               << 7U)) 
                                                                           | ((0xfe00U 
                                                                               & (vlSelf->top__DOT___2095_[0U] 
                                                                                >> 3U)) 
                                                                              | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3697_) 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3697_) 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0466_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0338_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0784_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0946_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0703_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1225_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0619_))))))))))))))))))) 
                                        << 3U)) | (QData)((IData)(
                                                                  (((IData)(vlSelf->top__DOT___0907_) 
                                                                    << 2U) 
                                                                   | (((IData)(vlSelf->top__DOT___0419_) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelf->top__DOT___0678_)))))) 
                                     + ((((QData)((IData)(
                                                          (0x100U 
                                                           | ((0xff000U 
                                                               & (vlSelf->top__DOT___2094_[1U] 
                                                                  >> 3U)) 
                                                              | ((0x800U 
                                                                  & ((IData)(vlSelf->top__DOT___3733_) 
                                                                     << 0xaU)) 
                                                                 | ((0x400U 
                                                                     & (vlSelf->top__DOT___2094_[1U] 
                                                                        >> 3U)) 
                                                                    | (((IData)(vlSelf->top__DOT___1283_) 
                                                                        << 9U) 
                                                                       | ((0x80U 
                                                                           & (vlSelf->top__DOT___2046_ 
                                                                              << 1U)) 
                                                                          | ((0x40U 
                                                                              & ((IData)(vlSelf->top__DOT___3675_) 
                                                                                << 1U)) 
                                                                             | ((0x20U 
                                                                                & (vlSelf->top__DOT___2046_ 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___3675_) 
                                                                                << 1U)) 
                                                                                | ((0xeU 
                                                                                & (vlSelf->top__DOT___2046_ 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0043_))))))))))))) 
                                          << 0x23U) 
                                         | ((QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT___0191_) 
                                                              << 0x1fU) 
                                                             | (((IData)(vlSelf->top__DOT___0151_) 
                                                                 << 0x1eU) 
                                                                | (((IData)(vlSelf->top__DOT___1044_) 
                                                                    << 0x1dU) 
                                                                   | (((IData)(vlSelf->top__DOT___0704_) 
                                                                       << 0x1cU) 
                                                                      | (((IData)(vlSelf->top__DOT___0288_) 
                                                                          << 0x1bU) 
                                                                         | (((IData)(vlSelf->top__DOT___1021_) 
                                                                             << 0x1aU) 
                                                                            | ((0x3800000U 
                                                                                & (vlSelf->top__DOT___2094_[0U] 
                                                                                >> 3U)) 
                                                                               | ((0x400000U 
                                                                                & vlSelf->top__DOT___3708_) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___2094_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x100000U 
                                                                                & vlSelf->top__DOT___3708_) 
                                                                                | ((0x80000U 
                                                                                & vlSelf->top__DOT___3708_) 
                                                                                | ((0x40000U 
                                                                                & vlSelf->top__DOT___3708_) 
                                                                                | ((0x30000U 
                                                                                & (vlSelf->top__DOT___2094_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x8000U 
                                                                                & vlSelf->top__DOT___3708_) 
                                                                                | ((0x7800U 
                                                                                & (vlSelf->top__DOT___2094_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x400U 
                                                                                & vlSelf->top__DOT___3708_) 
                                                                                | ((0x3f8U 
                                                                                & (vlSelf->top__DOT___2094_[0U] 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & vlSelf->top__DOT___3708_) 
                                                                                | (3U 
                                                                                & (vlSelf->top__DOT___2094_[0U] 
                                                                                >> 3U)))))))))))))))))))))) 
                                            << 3U)) 
                                        | (QData)((IData)(
                                                          (((IData)(vlSelf->top__DOT___0162_) 
                                                            << 2U) 
                                                           | (((IData)(vlSelf->top__DOT___0043_) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->top__DOT___1799_))))))) 
                                    >> 1U)) | (QData)((IData)(
                                                              (((IData)(vlSelf->top__DOT___0079_) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->top__DOT___0911_) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->top__DOT___0303_))))));
    __Vtemp_33[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___0225_)) 
                                 << 0x3eU) | (((QData)((IData)(vlSelf->top__DOT___0127_)) 
                                               << 0x3dU) 
                                              | ((0x1fffffffffffc000ULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->top__DOT___2095_[2U])) 
                                                      << 0x26U) 
                                                     | (0xffffffffffffc000ULL 
                                                        & ((QData)((IData)(
                                                                           vlSelf->top__DOT___2095_[1U])) 
                                                           << 6U)))) 
                                                 | (QData)((IData)(
                                                                   ((0x2000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3734_ 
                                                                                >> 0xdU)) 
                                                                        << 0xdU)) 
                                                                    | (0x1fffU 
                                                                       & ((vlSelf->top__DOT___2095_[1U] 
                                                                           << 6U) 
                                                                          | (vlSelf->top__DOT___2095_[0U] 
                                                                             >> 0x1aU)))))))))) 
                       << 0x17U) | (((IData)(vlSelf->top__DOT___1352_) 
                                     << 0x16U) | ((0x200000U 
                                                   & (vlSelf->top__DOT___2095_[0U] 
                                                      >> 3U)) 
                                                  | ((0x100000U 
                                                      & ((IData)(vlSelf->top__DOT___3697_) 
                                                         << 7U)) 
                                                     | ((0x80000U 
                                                         & ((IData)(vlSelf->top__DOT___3697_) 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (vlSelf->top__DOT___2095_[0U] 
                                                               >> 3U)) 
                                                           | ((0x20000U 
                                                               & ((IData)(vlSelf->top__DOT___3697_) 
                                                                  << 7U)) 
                                                              | ((0x10000U 
                                                                  & ((IData)(vlSelf->top__DOT___3697_) 
                                                                     << 7U)) 
                                                                 | ((0xfe00U 
                                                                     & (vlSelf->top__DOT___2095_[0U] 
                                                                        >> 3U)) 
                                                                    | ((0x100U 
                                                                        & ((IData)(vlSelf->top__DOT___3697_) 
                                                                           << 7U)) 
                                                                       | ((0x80U 
                                                                           & ((IData)(vlSelf->top__DOT___3697_) 
                                                                              << 7U)) 
                                                                          | (((IData)(vlSelf->top__DOT___0466_) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSelf->top__DOT___0338_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0784_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0946_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0703_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1225_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0619_))))))))))))))))));
    __Vtemp_33[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___0225_)) 
                                 << 0x3eU) | (((QData)((IData)(vlSelf->top__DOT___0127_)) 
                                               << 0x3dU) 
                                              | ((0x1fffffffffffc000ULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->top__DOT___2095_[2U])) 
                                                      << 0x26U) 
                                                     | (0xffffffffffffc000ULL 
                                                        & ((QData)((IData)(
                                                                           vlSelf->top__DOT___2095_[1U])) 
                                                           << 6U)))) 
                                                 | (QData)((IData)(
                                                                   ((0x2000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3734_ 
                                                                                >> 0xdU)) 
                                                                        << 0xdU)) 
                                                                    | (0x1fffU 
                                                                       & ((vlSelf->top__DOT___2095_[1U] 
                                                                           << 6U) 
                                                                          | (vlSelf->top__DOT___2095_[0U] 
                                                                             >> 0x1aU)))))))))) 
                       >> 9U) | ((IData)(((((QData)((IData)(vlSelf->top__DOT___0225_)) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(vlSelf->top__DOT___0127_)) 
                                               << 0x3dU) 
                                              | ((0x1fffffffffffc000ULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->top__DOT___2095_[2U])) 
                                                      << 0x26U) 
                                                     | (0xffffffffffffc000ULL 
                                                        & ((QData)((IData)(
                                                                           vlSelf->top__DOT___2095_[1U])) 
                                                           << 6U)))) 
                                                 | (QData)((IData)(
                                                                   ((0x2000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3734_ 
                                                                                >> 0xdU)) 
                                                                        << 0xdU)) 
                                                                    | (0x1fffU 
                                                                       & ((vlSelf->top__DOT___2095_[1U] 
                                                                           << 6U) 
                                                                          | (vlSelf->top__DOT___2095_[0U] 
                                                                             >> 0x1aU))))))))) 
                                          >> 0x20U)) 
                                 << 0x17U));
    __Vtemp_36[2U] = ((0x3e000000U & (vlSelf->top__DOT___1981_ 
                                      << 0x17U)) | 
                      ((0x1000000U & ((IData)(vlSelf->top__DOT___3775_) 
                                      << 0x18U)) | 
                       ((IData)(((((QData)((IData)(vlSelf->top__DOT___0225_)) 
                                   << 0x3eU) | (((QData)((IData)(vlSelf->top__DOT___0127_)) 
                                                 << 0x3dU) 
                                                | ((0x1fffffffffffc000ULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->top__DOT___2095_[2U])) 
                                                        << 0x26U) 
                                                       | (0xffffffffffffc000ULL 
                                                          & ((QData)((IData)(
                                                                             vlSelf->top__DOT___2095_[1U])) 
                                                             << 6U)))) 
                                                   | (QData)((IData)(
                                                                     ((0x2000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___3734_ 
                                                                                >> 0xdU)) 
                                                                          << 0xdU)) 
                                                                      | (0x1fffU 
                                                                         & ((vlSelf->top__DOT___2095_[1U] 
                                                                             << 6U) 
                                                                            | (vlSelf->top__DOT___2095_[0U] 
                                                                               >> 0x1aU))))))))) 
                                 >> 0x20U)) >> 9U)));
    __Vtemp_40[0U] = ((__Vtemp_33[0U] << 3U) | (((IData)(vlSelf->top__DOT___0907_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___0419_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0678_))));
    __Vtemp_40[1U] = ((__Vtemp_33[0U] >> 0x1dU) | (
                                                   __Vtemp_33[1U] 
                                                   << 3U));
    __Vtemp_40[2U] = ((__Vtemp_33[1U] >> 0x1dU) | (
                                                   __Vtemp_36[2U] 
                                                   << 3U));
    __Vtemp_40[3U] = (((4U & ((IData)(vlSelf->top__DOT___3775_) 
                              >> 5U)) | ((2U & ((IData)(vlSelf->top__DOT___3775_) 
                                                >> 5U)) 
                                         | (__Vtemp_36[2U] 
                                            >> 0x1dU))) 
                      | ((0x80000000U & vlSelf->top__DOT___2095_[3U]) 
                         | ((0x7f800000U & ((IData)(vlSelf->top__DOT___2007_) 
                                            << 0x16U)) 
                            | (((IData)(vlSelf->top__DOT___1441_) 
                                << 0x16U) | ((0x3ff000U 
                                              & vlSelf->top__DOT___2095_[3U]) 
                                             | ((0xe00U 
                                                 & (vlSelf->top__DOT___1972_ 
                                                    >> 0xeU)) 
                                                | (((IData)(vlSelf->top__DOT___1686_) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->top__DOT___0335_) 
                                                       << 7U) 
                                                      | (((IData)(vlSelf->top__DOT___0076_) 
                                                          << 6U) 
                                                         | (0x38U 
                                                            & (vlSelf->top__DOT___1981_ 
                                                               >> 6U)))))))))));
    __Vtemp_40[4U] = (7U & (vlSelf->top__DOT___2095_[4U] 
                            | (((IData)(vlSelf->top__DOT___1441_) 
                                >> 0xaU) | (((IData)(vlSelf->top__DOT___1686_) 
                                             >> 0x18U) 
                                            | (((IData)(vlSelf->top__DOT___0335_) 
                                                >> 0x19U) 
                                               | ((IData)(vlSelf->top__DOT___0076_) 
                                                  >> 0x1aU))))));
    __Vtemp_41[0U] = (0x2000100U | (((IData)(vlSelf->top__DOT___0549_) 
                                     << 0x1fU) | (((IData)(vlSelf->top__DOT___1195_) 
                                                   << 0x1eU) 
                                                  | (((IData)(vlSelf->top__DOT___0179_) 
                                                      << 0x1dU) 
                                                     | (((IData)(vlSelf->top__DOT___0183_) 
                                                         << 0x1cU) 
                                                        | (((IData)(vlSelf->top__DOT___0210_) 
                                                            << 0x1bU) 
                                                           | (((IData)(vlSelf->top__DOT___0303_) 
                                                               << 0x1aU) 
                                                              | (((IData)(vlSelf->top__DOT___0702_) 
                                                                  << 0x17U) 
                                                                 | (((IData)(vlSelf->top__DOT___0612_) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlSelf->top__DOT___0106_) 
                                                                        << 0x15U) 
                                                                       | ((0x1ff000U 
                                                                           & (vlSelf->top__DOT___2094_[1U] 
                                                                              >> 3U)) 
                                                                          | ((0x800U 
                                                                              & ((IData)(vlSelf->top__DOT___3733_) 
                                                                                << 0xaU)) 
                                                                             | ((0x400U 
                                                                                & (vlSelf->top__DOT___2094_[1U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1283_) 
                                                                                << 9U) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___2046_ 
                                                                                << 1U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___3675_) 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___2046_ 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___3675_) 
                                                                                << 1U)) 
                                                                                | ((0xeU 
                                                                                & (vlSelf->top__DOT___2046_ 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0043_))))))))))))))))))));
    __Vtemp_42[0U] = (((IData)(vlSelf->top__DOT___0191_) 
                       << 0x1fU) | (((IData)(vlSelf->top__DOT___0151_) 
                                     << 0x1eU) | (((IData)(vlSelf->top__DOT___1044_) 
                                                   << 0x1dU) 
                                                  | (((IData)(vlSelf->top__DOT___0704_) 
                                                      << 0x1cU) 
                                                     | (((IData)(vlSelf->top__DOT___0288_) 
                                                         << 0x1bU) 
                                                        | (((IData)(vlSelf->top__DOT___1021_) 
                                                            << 0x1aU) 
                                                           | ((0x3800000U 
                                                               & (vlSelf->top__DOT___2094_[0U] 
                                                                  >> 3U)) 
                                                              | ((0x400000U 
                                                                  & vlSelf->top__DOT___3708_) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->top__DOT___2094_[0U] 
                                                                        >> 3U)) 
                                                                    | ((0x100000U 
                                                                        & vlSelf->top__DOT___3708_) 
                                                                       | ((0x80000U 
                                                                           & vlSelf->top__DOT___3708_) 
                                                                          | ((0x40000U 
                                                                              & vlSelf->top__DOT___3708_) 
                                                                             | ((0x30000U 
                                                                                & (vlSelf->top__DOT___2094_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x8000U 
                                                                                & vlSelf->top__DOT___3708_) 
                                                                                | ((0x7800U 
                                                                                & (vlSelf->top__DOT___2094_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x400U 
                                                                                & vlSelf->top__DOT___3708_) 
                                                                                | ((0x3f8U 
                                                                                & (vlSelf->top__DOT___2094_[0U] 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & vlSelf->top__DOT___3708_) 
                                                                                | (3U 
                                                                                & (vlSelf->top__DOT___2094_[0U] 
                                                                                >> 3U))))))))))))))))))));
    __Vtemp_43[0U] = ((__Vtemp_42[0U] << 3U) | (((IData)(vlSelf->top__DOT___0162_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___0043_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___1799_))));
    __Vtemp_43[1U] = ((__Vtemp_42[0U] >> 0x1dU) | (
                                                   __Vtemp_41[0U] 
                                                   << 3U));
    __Vtemp_43[2U] = ((__Vtemp_41[0U] >> 0x1dU) | ((IData)(
                                                           (((QData)((IData)(
                                                                             (0xfffffffU 
                                                                              & ((vlSelf->top__DOT___2094_[4U] 
                                                                                << 0x19U) 
                                                                                | (vlSelf->top__DOT___2094_[3U] 
                                                                                >> 7U))))) 
                                                             << 0x24U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3679_[1U] 
                                                                                >> 5U)))) 
                                                                << 0x23U) 
                                                               | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & ((vlSelf->top__DOT___2094_[3U] 
                                                                                << 2U) 
                                                                                | (vlSelf->top__DOT___2094_[2U] 
                                                                                >> 0x1eU))))) 
                                                                   << 0x1bU) 
                                                                  | (QData)((IData)(
                                                                                ((0x4000000U 
                                                                                & (vlSelf->top__DOT___3679_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x3fffffcU 
                                                                                & (vlSelf->top__DOT___2094_[2U] 
                                                                                >> 3U)) 
                                                                                | (IData)(vlSelf->top__DOT___0332_))))))))) 
                                                   << 3U));
    __Vtemp_43[3U] = (((IData)((((QData)((IData)((0xfffffffU 
                                                  & ((vlSelf->top__DOT___2094_[4U] 
                                                      << 0x19U) 
                                                     | (vlSelf->top__DOT___2094_[3U] 
                                                        >> 7U))))) 
                                 << 0x24U) | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT___3679_[1U] 
                                                                   >> 5U)))) 
                                               << 0x23U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & ((vlSelf->top__DOT___2094_[3U] 
                                                                       << 2U) 
                                                                      | (vlSelf->top__DOT___2094_[2U] 
                                                                         >> 0x1eU))))) 
                                                  << 0x1bU) 
                                                 | (QData)((IData)(
                                                                   ((0x4000000U 
                                                                     & (vlSelf->top__DOT___3679_[0U] 
                                                                        >> 2U)) 
                                                                    | ((0x3fffffcU 
                                                                        & (vlSelf->top__DOT___2094_[2U] 
                                                                           >> 3U)) 
                                                                       | (IData)(vlSelf->top__DOT___0332_))))))))) 
                       >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                               (0xfffffffU 
                                                                & ((vlSelf->top__DOT___2094_[4U] 
                                                                    << 0x19U) 
                                                                   | (vlSelf->top__DOT___2094_[3U] 
                                                                      >> 7U))))) 
                                               << 0x24U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT___3679_[1U] 
                                                                      >> 5U)))) 
                                                  << 0x23U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & ((vlSelf->top__DOT___2094_[3U] 
                                                                          << 2U) 
                                                                         | (vlSelf->top__DOT___2094_[2U] 
                                                                            >> 0x1eU))))) 
                                                     << 0x1bU) 
                                                    | (QData)((IData)(
                                                                      ((0x4000000U 
                                                                        & (vlSelf->top__DOT___3679_[0U] 
                                                                           >> 2U)) 
                                                                       | ((0x3fffffcU 
                                                                           & (vlSelf->top__DOT___2094_[2U] 
                                                                              >> 3U)) 
                                                                          | (IData)(vlSelf->top__DOT___0332_)))))))) 
                                             >> 0x20U)) 
                                    << 3U));
    __Vtemp_43[4U] = ((IData)(((((QData)((IData)((0xfffffffU 
                                                  & ((vlSelf->top__DOT___2094_[4U] 
                                                      << 0x19U) 
                                                     | (vlSelf->top__DOT___2094_[3U] 
                                                        >> 7U))))) 
                                 << 0x24U) | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT___3679_[1U] 
                                                                   >> 5U)))) 
                                               << 0x23U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & ((vlSelf->top__DOT___2094_[3U] 
                                                                       << 2U) 
                                                                      | (vlSelf->top__DOT___2094_[2U] 
                                                                         >> 0x1eU))))) 
                                                  << 0x1bU) 
                                                 | (QData)((IData)(
                                                                   ((0x4000000U 
                                                                     & (vlSelf->top__DOT___3679_[0U] 
                                                                        >> 2U)) 
                                                                    | ((0x3fffffcU 
                                                                        & (vlSelf->top__DOT___2094_[2U] 
                                                                           >> 3U)) 
                                                                       | (IData)(vlSelf->top__DOT___0332_)))))))) 
                               >> 0x20U)) >> 0x1dU);
    VL_ADD_W(5, __Vtemp_44, __Vtemp_40, __Vtemp_43);
    __Vtemp_47[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___0225_)) 
                                 << 0x3eU) | (((QData)((IData)(vlSelf->top__DOT___0127_)) 
                                               << 0x3dU) 
                                              | ((0x1fffffffffffc000ULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->top__DOT___2095_[2U])) 
                                                      << 0x26U) 
                                                     | (0xffffffffffffc000ULL 
                                                        & ((QData)((IData)(
                                                                           vlSelf->top__DOT___2095_[1U])) 
                                                           << 6U)))) 
                                                 | (QData)((IData)(
                                                                   ((0x2000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3734_ 
                                                                                >> 0xdU)) 
                                                                        << 0xdU)) 
                                                                    | (0x1fffU 
                                                                       & ((vlSelf->top__DOT___2095_[1U] 
                                                                           << 6U) 
                                                                          | (vlSelf->top__DOT___2095_[0U] 
                                                                             >> 0x1aU)))))))))) 
                       << 0x17U) | (((IData)(vlSelf->top__DOT___1352_) 
                                     << 0x16U) | ((0x200000U 
                                                   & (vlSelf->top__DOT___2095_[0U] 
                                                      >> 3U)) 
                                                  | ((0x100000U 
                                                      & ((IData)(vlSelf->top__DOT___3697_) 
                                                         << 7U)) 
                                                     | ((0x80000U 
                                                         & ((IData)(vlSelf->top__DOT___3697_) 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (vlSelf->top__DOT___2095_[0U] 
                                                               >> 3U)) 
                                                           | ((0x20000U 
                                                               & ((IData)(vlSelf->top__DOT___3697_) 
                                                                  << 7U)) 
                                                              | ((0x10000U 
                                                                  & ((IData)(vlSelf->top__DOT___3697_) 
                                                                     << 7U)) 
                                                                 | ((0xfe00U 
                                                                     & (vlSelf->top__DOT___2095_[0U] 
                                                                        >> 3U)) 
                                                                    | ((0x100U 
                                                                        & ((IData)(vlSelf->top__DOT___3697_) 
                                                                           << 7U)) 
                                                                       | ((0x80U 
                                                                           & ((IData)(vlSelf->top__DOT___3697_) 
                                                                              << 7U)) 
                                                                          | (((IData)(vlSelf->top__DOT___0466_) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSelf->top__DOT___0338_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0784_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0946_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0703_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1225_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0619_))))))))))))))))));
    __Vtemp_47[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___0225_)) 
                                 << 0x3eU) | (((QData)((IData)(vlSelf->top__DOT___0127_)) 
                                               << 0x3dU) 
                                              | ((0x1fffffffffffc000ULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->top__DOT___2095_[2U])) 
                                                      << 0x26U) 
                                                     | (0xffffffffffffc000ULL 
                                                        & ((QData)((IData)(
                                                                           vlSelf->top__DOT___2095_[1U])) 
                                                           << 6U)))) 
                                                 | (QData)((IData)(
                                                                   ((0x2000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3734_ 
                                                                                >> 0xdU)) 
                                                                        << 0xdU)) 
                                                                    | (0x1fffU 
                                                                       & ((vlSelf->top__DOT___2095_[1U] 
                                                                           << 6U) 
                                                                          | (vlSelf->top__DOT___2095_[0U] 
                                                                             >> 0x1aU)))))))))) 
                       >> 9U) | ((IData)(((((QData)((IData)(vlSelf->top__DOT___0225_)) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(vlSelf->top__DOT___0127_)) 
                                               << 0x3dU) 
                                              | ((0x1fffffffffffc000ULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->top__DOT___2095_[2U])) 
                                                      << 0x26U) 
                                                     | (0xffffffffffffc000ULL 
                                                        & ((QData)((IData)(
                                                                           vlSelf->top__DOT___2095_[1U])) 
                                                           << 6U)))) 
                                                 | (QData)((IData)(
                                                                   ((0x2000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3734_ 
                                                                                >> 0xdU)) 
                                                                        << 0xdU)) 
                                                                    | (0x1fffU 
                                                                       & ((vlSelf->top__DOT___2095_[1U] 
                                                                           << 6U) 
                                                                          | (vlSelf->top__DOT___2095_[0U] 
                                                                             >> 0x1aU))))))))) 
                                          >> 0x20U)) 
                                 << 0x17U));
    __Vtemp_50[2U] = ((0x3e000000U & (vlSelf->top__DOT___1981_ 
                                      << 0x17U)) | 
                      ((0x1000000U & ((IData)(vlSelf->top__DOT___3775_) 
                                      << 0x18U)) | 
                       ((IData)(((((QData)((IData)(vlSelf->top__DOT___0225_)) 
                                   << 0x3eU) | (((QData)((IData)(vlSelf->top__DOT___0127_)) 
                                                 << 0x3dU) 
                                                | ((0x1fffffffffffc000ULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->top__DOT___2095_[2U])) 
                                                        << 0x26U) 
                                                       | (0xffffffffffffc000ULL 
                                                          & ((QData)((IData)(
                                                                             vlSelf->top__DOT___2095_[1U])) 
                                                             << 6U)))) 
                                                   | (QData)((IData)(
                                                                     ((0x2000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___3734_ 
                                                                                >> 0xdU)) 
                                                                          << 0xdU)) 
                                                                      | (0x1fffU 
                                                                         & ((vlSelf->top__DOT___2095_[1U] 
                                                                             << 6U) 
                                                                            | (vlSelf->top__DOT___2095_[0U] 
                                                                               >> 0x1aU))))))))) 
                                 >> 0x20U)) >> 9U)));
    __Vtemp_54[0U] = ((__Vtemp_47[0U] << 3U) | (((IData)(vlSelf->top__DOT___0907_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___0419_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0678_))));
    __Vtemp_54[1U] = ((__Vtemp_47[0U] >> 0x1dU) | (
                                                   __Vtemp_47[1U] 
                                                   << 3U));
    __Vtemp_54[2U] = ((__Vtemp_47[1U] >> 0x1dU) | (
                                                   __Vtemp_50[2U] 
                                                   << 3U));
    __Vtemp_54[3U] = (((4U & ((IData)(vlSelf->top__DOT___3775_) 
                              >> 5U)) | ((2U & ((IData)(vlSelf->top__DOT___3775_) 
                                                >> 5U)) 
                                         | (__Vtemp_50[2U] 
                                            >> 0x1dU))) 
                      | ((0x7f800000U & ((IData)(vlSelf->top__DOT___2007_) 
                                         << 0x16U)) 
                         | (((IData)(vlSelf->top__DOT___1441_) 
                             << 0x16U) | ((0x3ff000U 
                                           & vlSelf->top__DOT___2095_[3U]) 
                                          | ((0xe00U 
                                              & (vlSelf->top__DOT___1972_ 
                                                 >> 0xeU)) 
                                             | (((IData)(vlSelf->top__DOT___1686_) 
                                                 << 8U) 
                                                | (((IData)(vlSelf->top__DOT___0335_) 
                                                    << 7U) 
                                                   | (((IData)(vlSelf->top__DOT___0076_) 
                                                       << 6U) 
                                                      | (0x38U 
                                                         & (vlSelf->top__DOT___1981_ 
                                                            >> 6U))))))))));
    __Vtemp_55[0U] = (0x2000100U | (((IData)(vlSelf->top__DOT___0549_) 
                                     << 0x1fU) | (((IData)(vlSelf->top__DOT___1195_) 
                                                   << 0x1eU) 
                                                  | (((IData)(vlSelf->top__DOT___0179_) 
                                                      << 0x1dU) 
                                                     | (((IData)(vlSelf->top__DOT___0183_) 
                                                         << 0x1cU) 
                                                        | (((IData)(vlSelf->top__DOT___0210_) 
                                                            << 0x1bU) 
                                                           | (((IData)(vlSelf->top__DOT___0303_) 
                                                               << 0x1aU) 
                                                              | (((IData)(vlSelf->top__DOT___0702_) 
                                                                  << 0x17U) 
                                                                 | (((IData)(vlSelf->top__DOT___0612_) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlSelf->top__DOT___0106_) 
                                                                        << 0x15U) 
                                                                       | ((0x1ff000U 
                                                                           & (vlSelf->top__DOT___2094_[1U] 
                                                                              >> 3U)) 
                                                                          | ((0x800U 
                                                                              & ((IData)(vlSelf->top__DOT___3733_) 
                                                                                << 0xaU)) 
                                                                             | ((0x400U 
                                                                                & (vlSelf->top__DOT___2094_[1U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1283_) 
                                                                                << 9U) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___2046_ 
                                                                                << 1U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___3675_) 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___2046_ 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___3675_) 
                                                                                << 1U)) 
                                                                                | ((0xeU 
                                                                                & (vlSelf->top__DOT___2046_ 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0043_))))))))))))))))))));
    __Vtemp_56[0U] = (((IData)(vlSelf->top__DOT___0191_) 
                       << 0x1fU) | (((IData)(vlSelf->top__DOT___0151_) 
                                     << 0x1eU) | (((IData)(vlSelf->top__DOT___1044_) 
                                                   << 0x1dU) 
                                                  | (((IData)(vlSelf->top__DOT___0704_) 
                                                      << 0x1cU) 
                                                     | (((IData)(vlSelf->top__DOT___0288_) 
                                                         << 0x1bU) 
                                                        | (((IData)(vlSelf->top__DOT___1021_) 
                                                            << 0x1aU) 
                                                           | ((0x3800000U 
                                                               & (vlSelf->top__DOT___2094_[0U] 
                                                                  >> 3U)) 
                                                              | ((0x400000U 
                                                                  & vlSelf->top__DOT___3708_) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->top__DOT___2094_[0U] 
                                                                        >> 3U)) 
                                                                    | ((0x100000U 
                                                                        & vlSelf->top__DOT___3708_) 
                                                                       | ((0x80000U 
                                                                           & vlSelf->top__DOT___3708_) 
                                                                          | ((0x40000U 
                                                                              & vlSelf->top__DOT___3708_) 
                                                                             | ((0x30000U 
                                                                                & (vlSelf->top__DOT___2094_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x8000U 
                                                                                & vlSelf->top__DOT___3708_) 
                                                                                | ((0x7800U 
                                                                                & (vlSelf->top__DOT___2094_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x400U 
                                                                                & vlSelf->top__DOT___3708_) 
                                                                                | ((0x3f8U 
                                                                                & (vlSelf->top__DOT___2094_[0U] 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & vlSelf->top__DOT___3708_) 
                                                                                | (3U 
                                                                                & (vlSelf->top__DOT___2094_[0U] 
                                                                                >> 3U))))))))))))))))))));
    __Vtemp_57[0U] = ((__Vtemp_56[0U] << 3U) | (((IData)(vlSelf->top__DOT___0162_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___0043_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___1799_))));
    __Vtemp_57[1U] = ((__Vtemp_56[0U] >> 0x1dU) | (
                                                   __Vtemp_55[0U] 
                                                   << 3U));
    __Vtemp_57[2U] = ((__Vtemp_55[0U] >> 0x1dU) | ((IData)(
                                                           (((QData)((IData)(
                                                                             (0xffffffU 
                                                                              & (vlSelf->top__DOT___2094_[3U] 
                                                                                >> 7U)))) 
                                                             << 0x24U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3679_[1U] 
                                                                                >> 5U)))) 
                                                                << 0x23U) 
                                                               | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & ((vlSelf->top__DOT___2094_[3U] 
                                                                                << 2U) 
                                                                                | (vlSelf->top__DOT___2094_[2U] 
                                                                                >> 0x1eU))))) 
                                                                   << 0x1bU) 
                                                                  | (QData)((IData)(
                                                                                ((0x4000000U 
                                                                                & (vlSelf->top__DOT___3679_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x3fffffcU 
                                                                                & (vlSelf->top__DOT___2094_[2U] 
                                                                                >> 3U)) 
                                                                                | (IData)(vlSelf->top__DOT___0332_))))))))) 
                                                   << 3U));
    __Vtemp_57[3U] = (((IData)((((QData)((IData)((0xffffffU 
                                                  & (vlSelf->top__DOT___2094_[3U] 
                                                     >> 7U)))) 
                                 << 0x24U) | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT___3679_[1U] 
                                                                   >> 5U)))) 
                                               << 0x23U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & ((vlSelf->top__DOT___2094_[3U] 
                                                                       << 2U) 
                                                                      | (vlSelf->top__DOT___2094_[2U] 
                                                                         >> 0x1eU))))) 
                                                  << 0x1bU) 
                                                 | (QData)((IData)(
                                                                   ((0x4000000U 
                                                                     & (vlSelf->top__DOT___3679_[0U] 
                                                                        >> 2U)) 
                                                                    | ((0x3fffffcU 
                                                                        & (vlSelf->top__DOT___2094_[2U] 
                                                                           >> 3U)) 
                                                                       | (IData)(vlSelf->top__DOT___0332_))))))))) 
                       >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                               (0xffffffU 
                                                                & (vlSelf->top__DOT___2094_[3U] 
                                                                   >> 7U)))) 
                                               << 0x24U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT___3679_[1U] 
                                                                      >> 5U)))) 
                                                  << 0x23U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & ((vlSelf->top__DOT___2094_[3U] 
                                                                          << 2U) 
                                                                         | (vlSelf->top__DOT___2094_[2U] 
                                                                            >> 0x1eU))))) 
                                                     << 0x1bU) 
                                                    | (QData)((IData)(
                                                                      ((0x4000000U 
                                                                        & (vlSelf->top__DOT___3679_[0U] 
                                                                           >> 2U)) 
                                                                       | ((0x3fffffcU 
                                                                           & (vlSelf->top__DOT___2094_[2U] 
                                                                              >> 3U)) 
                                                                          | (IData)(vlSelf->top__DOT___0332_)))))))) 
                                             >> 0x20U)) 
                                    << 3U));
    VL_ADD_W(4, __Vtemp_58, __Vtemp_54, __Vtemp_57);
    __Vtemp_61[0U] = (((IData)(((0x3ffffffffc000ULL 
                                 & (((QData)((IData)(
                                                     vlSelf->top__DOT___2095_[2U])) 
                                     << 0x26U) | (0xffffffffffffc000ULL 
                                                  & ((QData)((IData)(
                                                                     vlSelf->top__DOT___2095_[1U])) 
                                                     << 6U)))) 
                                | (QData)((IData)((
                                                   (0x2000U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___3734_ 
                                                                >> 0xdU)) 
                                                       << 0xdU)) 
                                                   | (0x1fffU 
                                                      & ((vlSelf->top__DOT___2095_[1U] 
                                                          << 6U) 
                                                         | (vlSelf->top__DOT___2095_[0U] 
                                                            >> 0x1aU)))))))) 
                       << 0x17U) | (((IData)(vlSelf->top__DOT___1352_) 
                                     << 0x16U) | ((0x200000U 
                                                   & (vlSelf->top__DOT___2095_[0U] 
                                                      >> 3U)) 
                                                  | ((0x100000U 
                                                      & ((IData)(vlSelf->top__DOT___3697_) 
                                                         << 7U)) 
                                                     | ((0x80000U 
                                                         & ((IData)(vlSelf->top__DOT___3697_) 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (vlSelf->top__DOT___2095_[0U] 
                                                               >> 3U)) 
                                                           | ((0x20000U 
                                                               & ((IData)(vlSelf->top__DOT___3697_) 
                                                                  << 7U)) 
                                                              | ((0x10000U 
                                                                  & ((IData)(vlSelf->top__DOT___3697_) 
                                                                     << 7U)) 
                                                                 | ((0xfe00U 
                                                                     & (vlSelf->top__DOT___2095_[0U] 
                                                                        >> 3U)) 
                                                                    | ((0x100U 
                                                                        & ((IData)(vlSelf->top__DOT___3697_) 
                                                                           << 7U)) 
                                                                       | ((0x80U 
                                                                           & ((IData)(vlSelf->top__DOT___3697_) 
                                                                              << 7U)) 
                                                                          | (((IData)(vlSelf->top__DOT___0466_) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSelf->top__DOT___0338_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0784_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0946_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0703_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1225_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0619_))))))))))))))))));
    __Vtemp_61[1U] = (((IData)(((0x3ffffffffc000ULL 
                                 & (((QData)((IData)(
                                                     vlSelf->top__DOT___2095_[2U])) 
                                     << 0x26U) | (0xffffffffffffc000ULL 
                                                  & ((QData)((IData)(
                                                                     vlSelf->top__DOT___2095_[1U])) 
                                                     << 6U)))) 
                                | (QData)((IData)((
                                                   (0x2000U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___3734_ 
                                                                >> 0xdU)) 
                                                       << 0xdU)) 
                                                   | (0x1fffU 
                                                      & ((vlSelf->top__DOT___2095_[1U] 
                                                          << 6U) 
                                                         | (vlSelf->top__DOT___2095_[0U] 
                                                            >> 0x1aU)))))))) 
                       >> 9U) | ((IData)((((0x3ffffffffc000ULL 
                                            & (((QData)((IData)(
                                                                vlSelf->top__DOT___2095_[2U])) 
                                                << 0x26U) 
                                               | (0xffffffffffffc000ULL 
                                                  & ((QData)((IData)(
                                                                     vlSelf->top__DOT___2095_[1U])) 
                                                     << 6U)))) 
                                           | (QData)((IData)(
                                                             ((0x2000U 
                                                               & ((IData)(
                                                                          (vlSelf->top__DOT___3734_ 
                                                                           >> 0xdU)) 
                                                                  << 0xdU)) 
                                                              | (0x1fffU 
                                                                 & ((vlSelf->top__DOT___2095_[1U] 
                                                                     << 6U) 
                                                                    | (vlSelf->top__DOT___2095_[0U] 
                                                                       >> 0x1aU))))))) 
                                          >> 0x20U)) 
                                 << 0x17U));
    __Vtemp_62[0U] = ((__Vtemp_61[0U] << 3U) | (((IData)(vlSelf->top__DOT___0907_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___0419_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0678_))));
    __Vtemp_62[1U] = ((__Vtemp_61[0U] >> 0x1dU) | (
                                                   __Vtemp_61[1U] 
                                                   << 3U));
    __Vtemp_62[2U] = ((__Vtemp_61[1U] >> 0x1dU) | (0x3fffff8U 
                                                   & ((IData)(
                                                              (((0x3ffffffffc000ULL 
                                                                 & (((QData)((IData)(
                                                                                vlSelf->top__DOT___2095_[2U])) 
                                                                     << 0x26U) 
                                                                    | (0xffffffffffffc000ULL 
                                                                       & ((QData)((IData)(
                                                                                vlSelf->top__DOT___2095_[1U])) 
                                                                          << 6U)))) 
                                                                | (QData)((IData)(
                                                                                ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3734_ 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                                | (0x1fffU 
                                                                                & ((vlSelf->top__DOT___2095_[1U] 
                                                                                << 6U) 
                                                                                | (vlSelf->top__DOT___2095_[0U] 
                                                                                >> 0x1aU))))))) 
                                                               >> 0x20U)) 
                                                      >> 6U)));
    __Vtemp_63[0U] = (((IData)(vlSelf->top__DOT___0191_) 
                       << 0x1fU) | (((IData)(vlSelf->top__DOT___0151_) 
                                     << 0x1eU) | (((IData)(vlSelf->top__DOT___1044_) 
                                                   << 0x1dU) 
                                                  | (((IData)(vlSelf->top__DOT___0704_) 
                                                      << 0x1cU) 
                                                     | (((IData)(vlSelf->top__DOT___0288_) 
                                                         << 0x1bU) 
                                                        | (((IData)(vlSelf->top__DOT___1021_) 
                                                            << 0x1aU) 
                                                           | ((0x3800000U 
                                                               & (vlSelf->top__DOT___2094_[0U] 
                                                                  >> 3U)) 
                                                              | ((0x400000U 
                                                                  & vlSelf->top__DOT___3708_) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->top__DOT___2094_[0U] 
                                                                        >> 3U)) 
                                                                    | ((0x100000U 
                                                                        & vlSelf->top__DOT___3708_) 
                                                                       | ((0x80000U 
                                                                           & vlSelf->top__DOT___3708_) 
                                                                          | ((0x40000U 
                                                                              & vlSelf->top__DOT___3708_) 
                                                                             | ((0x30000U 
                                                                                & (vlSelf->top__DOT___2094_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x8000U 
                                                                                & vlSelf->top__DOT___3708_) 
                                                                                | ((0x7800U 
                                                                                & (vlSelf->top__DOT___2094_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x400U 
                                                                                & vlSelf->top__DOT___3708_) 
                                                                                | ((0x3f8U 
                                                                                & (vlSelf->top__DOT___2094_[0U] 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & vlSelf->top__DOT___3708_) 
                                                                                | (3U 
                                                                                & (vlSelf->top__DOT___2094_[0U] 
                                                                                >> 3U))))))))))))))))))));
    __Vtemp_63[1U] = (IData)((((QData)((IData)(((0x1fcU 
                                                 & (vlSelf->top__DOT___2094_[2U] 
                                                    >> 3U)) 
                                                | (IData)(vlSelf->top__DOT___0332_)))) 
                               << 0x20U) | (QData)((IData)(
                                                           (0x2000100U 
                                                            | (((IData)(vlSelf->top__DOT___0549_) 
                                                                << 0x1fU) 
                                                               | (((IData)(vlSelf->top__DOT___1195_) 
                                                                   << 0x1eU) 
                                                                  | (((IData)(vlSelf->top__DOT___0179_) 
                                                                      << 0x1dU) 
                                                                     | (((IData)(vlSelf->top__DOT___0183_) 
                                                                         << 0x1cU) 
                                                                        | (((IData)(vlSelf->top__DOT___0210_) 
                                                                            << 0x1bU) 
                                                                           | (((IData)(vlSelf->top__DOT___0303_) 
                                                                               << 0x1aU) 
                                                                              | (((IData)(vlSelf->top__DOT___0702_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0612_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0106_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff000U 
                                                                                & (vlSelf->top__DOT___2094_[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___3733_) 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___2094_[1U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1283_) 
                                                                                << 9U) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___2046_ 
                                                                                << 1U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___3675_) 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___2046_ 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___3675_) 
                                                                                << 1U)) 
                                                                                | ((0xeU 
                                                                                & (vlSelf->top__DOT___2046_ 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0043_))))))))))))))))))))))));
    __Vtemp_63[2U] = (IData)(((((QData)((IData)(((0x1fcU 
                                                  & (vlSelf->top__DOT___2094_[2U] 
                                                     >> 3U)) 
                                                 | (IData)(vlSelf->top__DOT___0332_)))) 
                                << 0x20U) | (QData)((IData)(
                                                            (0x2000100U 
                                                             | (((IData)(vlSelf->top__DOT___0549_) 
                                                                 << 0x1fU) 
                                                                | (((IData)(vlSelf->top__DOT___1195_) 
                                                                    << 0x1eU) 
                                                                   | (((IData)(vlSelf->top__DOT___0179_) 
                                                                       << 0x1dU) 
                                                                      | (((IData)(vlSelf->top__DOT___0183_) 
                                                                          << 0x1cU) 
                                                                         | (((IData)(vlSelf->top__DOT___0210_) 
                                                                             << 0x1bU) 
                                                                            | (((IData)(vlSelf->top__DOT___0303_) 
                                                                                << 0x1aU) 
                                                                               | (((IData)(vlSelf->top__DOT___0702_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0612_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0106_) 
                                                                                << 0x15U) 
                                                                                | ((0x1ff000U 
                                                                                & (vlSelf->top__DOT___2094_[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___3733_) 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___2094_[1U] 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1283_) 
                                                                                << 9U) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___2046_ 
                                                                                << 1U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___3675_) 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___2046_ 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___3675_) 
                                                                                << 1U)) 
                                                                                | ((0xeU 
                                                                                & (vlSelf->top__DOT___2046_ 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0043_))))))))))))))))))))))) 
                              >> 0x20U));
    __Vtemp_64[0U] = ((__Vtemp_63[0U] << 3U) | (((IData)(vlSelf->top__DOT___0162_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___0043_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___1799_))));
    __Vtemp_64[1U] = ((__Vtemp_63[0U] >> 0x1dU) | (
                                                   __Vtemp_63[1U] 
                                                   << 3U));
    __Vtemp_64[2U] = ((__Vtemp_63[1U] >> 0x1dU) | (
                                                   __Vtemp_63[2U] 
                                                   << 3U));
    VL_ADD_W(3, __Vtemp_65, __Vtemp_62, __Vtemp_64);
    vlSelf->top__DOT___2093_[0U] = (IData)(((0x7ffffffffffff0ULL 
                                             & (vlSelf->top__DOT___1899_ 
                                                << 1U)) 
                                            | (QData)((IData)(
                                                              (0xfU 
                                                               & ((((IData)(vlSelf->top__DOT___0619_) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSelf->top__DOT___0907_) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->top__DOT___0419_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0678_)))) 
                                                                  + 
                                                                  ((8U 
                                                                    & vlSelf->top__DOT___2094_[0U]) 
                                                                   | (((IData)(vlSelf->top__DOT___0162_) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->top__DOT___0043_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___1799_))))))))));
    vlSelf->top__DOT___2093_[1U] = ((0xff800000U & 
                                     __Vtemp_65[1U]) 
                                    | (IData)((((0x7ffffffffffff0ULL 
                                                 & (vlSelf->top__DOT___1899_ 
                                                    << 1U)) 
                                                | (QData)((IData)(
                                                                  (0xfU 
                                                                   & ((((IData)(vlSelf->top__DOT___0619_) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSelf->top__DOT___0907_) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSelf->top__DOT___0419_) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->top__DOT___0678_)))) 
                                                                      + 
                                                                      ((8U 
                                                                        & vlSelf->top__DOT___2094_[0U]) 
                                                                       | (((IData)(vlSelf->top__DOT___0162_) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSelf->top__DOT___0043_) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->top__DOT___1799_))))))))) 
                                               >> 0x20U)));
    vlSelf->top__DOT___2093_[2U] = (((IData)((0x3ffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  (0x7fffffffU 
                                                                   & __Vtemp_58[3U]))) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    __Vtemp_58[2U])) 
                                                    >> 0xdU)))) 
                                     << 0xdU) | (((IData)(vlSelf->top__DOT___1591_) 
                                                  << 0xcU) 
                                                 | (0xfffU 
                                                    & __Vtemp_65[2U])));
    vlSelf->top__DOT___2093_[3U] = (((IData)(vlSelf->top__DOT___1071_) 
                                     << 0x1fU) | (((IData)(
                                                           (0x3ffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & __Vtemp_58[3U]))) 
                                                                << 0x13U) 
                                                               | ((QData)((IData)(
                                                                                __Vtemp_58[2U])) 
                                                                  >> 0xdU)))) 
                                                   >> 0x13U) 
                                                  | ((IData)(
                                                             ((0x3ffffffffffffULL 
                                                               & (((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & __Vtemp_58[3U]))) 
                                                                   << 0x13U) 
                                                                  | ((QData)((IData)(
                                                                                __Vtemp_58[2U])) 
                                                                     >> 0xdU))) 
                                                              >> 0x20U)) 
                                                     << 0xdU)));
    vlSelf->top__DOT___2093_[4U] = (7U & __Vtemp_44[4U]);
    vlSelf->top__DOT___2220_[2U] = ((0xfffU & vlSelf->top__DOT___2220_[2U]) 
                                    | (0x7f000U & (
                                                   (0x7c000U 
                                                    & (vlSelf->top__DOT___2093_[2U] 
                                                       << 7U)) 
                                                   | (((IData)(vlSelf->top__DOT___0271_) 
                                                       << 0xdU) 
                                                      | ((IData)(vlSelf->top__DOT___0619_) 
                                                         << 0xcU)))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__346(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__346\n"); );
    // Body
    vlSelf->top__DOT___1300_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    (0xffffffU 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT___2160_ 
                                                                                >> 0x18U))))) 
                                                    << 0x18U) 
                                                   | (QData)((IData)(
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
                                                                                & (~ (IData)(vlSelf->top__DOT___0309_)))))))))))))))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->top__DOT___1907_ 
                                                                               >> 0x19U)) 
                                                                      << 1U) 
                                                                     | (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT___3764_ 
                                                                                >> 0x12U)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     ((0xff00U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___1907_ 
                                                                                >> 0x10U)) 
                                                                          << 8U)) 
                                                                      | ((0xfcU 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___2159_ 
                                                                                >> 2U)) 
                                                                             << 2U)) 
                                                                         | ((2U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___3764_ 
                                                                                >> 3U)) 
                                                                                << 1U)) 
                                                                            | (1U 
                                                                               & (IData)(vlSelf->top__DOT___2159_))))))))) 
                                                 >> 0x2fU))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__347(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__347\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    // Body
    vlSelf->top__DOT___2199_ = (((QData)((IData)((0xfffffU 
                                                  & ((vlSelf->top__DOT___2183_[2U] 
                                                      << 5U) 
                                                     | (vlSelf->top__DOT___2183_[1U] 
                                                        >> 0x1bU))))) 
                                 << 0x1cU) | (QData)((IData)(
                                                             ((0xfe00000U 
                                                               & (((0x84U 
                                                                    | ((0xfc00U 
                                                                        & (vlSelf->top__DOT___2168_[0U] 
                                                                           << 9U)) 
                                                                       | (((IData)(vlSelf->top__DOT___0438_) 
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
                                                                                >> 0x14U))))))))))) 
                                                                   + 
                                                                   ((0x8000U 
                                                                     & (vlSelf->top__DOT___1972_ 
                                                                        >> 7U)) 
                                                                    | (((IData)(vlSelf->top__DOT___1687_) 
                                                                        << 0xeU) 
                                                                       | ((0x3ff0U 
                                                                           & (vlSelf->top__DOT___1972_ 
                                                                              >> 7U)) 
                                                                          | ((0xcU 
                                                                              & (vlSelf->top__DOT___2112_[1U] 
                                                                                >> 7U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0311_))))))) 
                                                                  << 0xcU)) 
                                                              | (((IData)(vlSelf->top__DOT___0996_) 
                                                                  << 0x14U) 
                                                                 | ((0xf0000U 
                                                                     & (((0x84U 
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
                                                                                >> 0x14U))))))))) 
                                                                         + 
                                                                         ((0xf0U 
                                                                           & (vlSelf->top__DOT___1972_ 
                                                                              >> 7U)) 
                                                                          | ((0xcU 
                                                                              & (vlSelf->top__DOT___2112_[1U] 
                                                                                >> 7U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0206_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0311_))))) 
                                                                        << 0xcU)) 
                                                                    | ((0xe000U 
                                                                        & ((IData)(vlSelf->top__DOT___2010_) 
                                                                           << 0xcU)) 
                                                                       | (((IData)(vlSelf->top__DOT___0240_) 
                                                                           << 0xcU) 
                                                                          | ((0x800U 
                                                                              & ((IData)(vlSelf->top__DOT___3742_) 
                                                                                << 0xaU)) 
                                                                             | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___3742_) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1433_) 
                                                                                << 9U) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3791_ 
                                                                                >> 0x15U)) 
                                                                                << 8U)) 
                                                                                | (IData)(vlSelf->top__DOT___2193_)))))))))))));
    vlSelf->top__DOT____VdfgTmp_hdcbb6ece__0 = (0x4200000000ULL 
                                                | (((QData)((IData)(vlSelf->top__DOT___0609_)) 
                                                    << 0x33U) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___0241_)) 
                                                       << 0x32U) 
                                                      | (((QData)((IData)(vlSelf->top__DOT___0071_)) 
                                                          << 0x31U) 
                                                         | (((QData)((IData)(
                                                                             (7U 
                                                                              & (vlSelf->top__DOT___1900_[2U] 
                                                                                >> 6U)))) 
                                                             << 0x2eU) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                >> 6U)))) 
                                                                << 0x2dU) 
                                                               | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___1900_[2U] 
                                                                                >> 2U)))) 
                                                                   << 0x2aU) 
                                                                  | (((QData)((IData)(
                                                                                (3U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                >> 1U)))) 
                                                                      << 0x28U) 
                                                                     | (((QData)((IData)(
                                                                                (vlSelf->top__DOT___1900_[1U] 
                                                                                >> 0x1fU))) 
                                                                         << 0x27U) 
                                                                        | (((QData)((IData)(vlSelf->top__DOT___0752_)) 
                                                                            << 0x25U) 
                                                                           | (((QData)((IData)(vlSelf->top__DOT___0071_)) 
                                                                               << 0x23U) 
                                                                              | (((QData)((IData)(vlSelf->top__DOT___0193_)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1046_)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___0404_) 
                                                                                << 0x1eU) 
                                                                                | ((0x38000000U 
                                                                                & (vlSelf->top__DOT___1900_[2U] 
                                                                                << 0x15U)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 0x14U)) 
                                                                                | ((0x3800000U 
                                                                                & (vlSelf->top__DOT___1900_[2U] 
                                                                                << 0x15U)) 
                                                                                | ((0x600000U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 0x14U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___1900_[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0xfe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2199_ 
                                                                                >> 0x15U)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0996_) 
                                                                                << 0xcU) 
                                                                                | ((0xf00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2199_ 
                                                                                >> 0x10U)) 
                                                                                << 8U)) 
                                                                                | ((0xe0U 
                                                                                & ((IData)(vlSelf->top__DOT___2010_) 
                                                                                << 4U)) 
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h046c5272__0)))))))))))))))))))))))))));
    __Vtemp_2[0U] = (IData)(vlSelf->top__DOT____VdfgTmp_hdcbb6ece__0);
    __Vtemp_2[1U] = ((0xfff00000U & (vlSelf->top__DOT___2168_[0U] 
                                     << 4U)) | (IData)(
                                                       (vlSelf->top__DOT____VdfgTmp_hdcbb6ece__0 
                                                        >> 0x20U)));
    __Vtemp_2[2U] = (0x1ffffU & ((0xffff0U & (vlSelf->top__DOT___2168_[1U] 
                                              << 4U)) 
                                 | (vlSelf->top__DOT___2168_[0U] 
                                    >> 0x1cU)));
    __Vtemp_3[0U] = vlSelf->top__DOT____VdfgTmp_hf33be808__0[0U];
    __Vtemp_3[1U] = vlSelf->top__DOT____VdfgTmp_hf33be808__0[1U];
    __Vtemp_3[2U] = ((0x1c000U & (vlSelf->top__DOT___2000_[3U] 
                                  << 2U)) | vlSelf->top__DOT____VdfgTmp_hf33be808__0[2U]);
    VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    vlSelf->top__DOT___2212_ = (0x7fU & (__Vtemp_4[2U] 
                                         >> 0xaU));
    __Vtemp_7[0U] = (IData)(vlSelf->top__DOT____VdfgTmp_hdcbb6ece__0);
    __Vtemp_7[1U] = ((0xfff00000U & (vlSelf->top__DOT___2168_[0U] 
                                     << 4U)) | (IData)(
                                                       (vlSelf->top__DOT____VdfgTmp_hdcbb6ece__0 
                                                        >> 0x20U)));
    __Vtemp_7[2U] = (0xffU & ((0xffff0U & (vlSelf->top__DOT___2168_[1U] 
                                           << 4U)) 
                              | (vlSelf->top__DOT___2168_[0U] 
                                 >> 0x1cU)));
    __Vtemp_8[0U] = vlSelf->top__DOT____VdfgTmp_h799cc49b__0[0U];
    __Vtemp_8[1U] = vlSelf->top__DOT____VdfgTmp_h799cc49b__0[1U];
    __Vtemp_8[2U] = ((0xc0U & (vlSelf->top__DOT___2000_[3U] 
                               << 2U)) | vlSelf->top__DOT____VdfgTmp_h799cc49b__0[2U]);
    VL_ADD_W(3, __Vtemp_9, __Vtemp_7, __Vtemp_8);
    vlSelf->top__DOT____VdfgTmp_he1400b33__0[0U] = 
        __Vtemp_9[0U];
    vlSelf->top__DOT____VdfgTmp_he1400b33__0[1U] = 
        __Vtemp_9[1U];
    vlSelf->top__DOT____VdfgTmp_he1400b33__0[2U] = 
        (0xffU & __Vtemp_9[2U]);
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__348(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__348\n"); );
    // Body
    vlSelf->top__DOT___2062_ = (((QData)((IData)((0xffffU 
                                                  & (IData)(
                                                            (0xffffULL 
                                                             & (((((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___1890_) 
                                                                                >> 0xbU)))) 
                                                                   << 0x2bU) 
                                                                  | (((QData)((IData)(
                                                                                (0x50000000U 
                                                                                | ((0x80000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3732_) 
                                                                                << 0x1aU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0177_) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->top__DOT___0552_) 
                                                                                << 0x1bU) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2064_ 
                                                                                >> 0x25U)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3648_ 
                                                                                << 1U)) 
                                                                                | ((0x1800000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2064_ 
                                                                                >> 0x22U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x600000U 
                                                                                & ((IData)(vlSelf->top__DOT___2024_) 
                                                                                << 9U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3648_ 
                                                                                << 1U)) 
                                                                                | ((0xff800U 
                                                                                & ((IData)(vlSelf->top__DOT___2024_) 
                                                                                << 9U)) 
                                                                                | ((0x7f8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2064_ 
                                                                                >> 0xeU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3648_ 
                                                                                << 1U)) 
                                                                                | (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___2064_ 
                                                                                >> 0xbU))))))))))))))))) 
                                                                      << 0xbU) 
                                                                     | (QData)((IData)(
                                                                                ((0x400U 
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
                                                                                | (IData)(vlSelf->top__DOT___0505_))))))))))))) 
                                                                 + 
                                                                 (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___2063_ 
                                                                                >> 0x2bU)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & vlSelf->top__DOT___3748_) 
                                                                                | ((0x20000000U 
                                                                                & vlSelf->top__DOT___3748_) 
                                                                                | ((0x1c000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2063_ 
                                                                                >> 0x26U)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x3f80000U 
                                                                                & ((IData)(vlSelf->top__DOT___1911_) 
                                                                                << 0xbU)) 
                                                                                | ((0x40000U 
                                                                                & vlSelf->top__DOT___3748_) 
                                                                                | ((0x20000U 
                                                                                & vlSelf->top__DOT___3748_) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2063_ 
                                                                                >> 0x1cU)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0059_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0179_) 
                                                                                << 0xeU) 
                                                                                | ((0x3ffcU 
                                                                                & ((IData)(vlSelf->top__DOT___2042_) 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1532_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0419_))))))))))))))) 
                                                                   << 0xcU) 
                                                                  | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0217_) 
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
                                                                                | (IData)(vlSelf->top__DOT___0129_))))))))))))))) 
                                                                >> 0x1cU)))))) 
                                 << 0x1cU) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0538_) 
                                                               << 0x1bU) 
                                                              | ((0x7e00000U 
                                                                  & ((((0x7c00000U 
                                                                        & ((IData)(vlSelf->top__DOT___2024_) 
                                                                           << 0x14U)) 
                                                                       | ((0x3fc000U 
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
                                                                                << 0xbU))))) 
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
                                                                     + 
                                                                     ((((IData)(vlSelf->top__DOT___0179_) 
                                                                        << 0x1aU) 
                                                                       | ((0x3ffc000U 
                                                                           & ((IData)(vlSelf->top__DOT___2042_) 
                                                                              << 0xdU)) 
                                                                          | (((IData)(vlSelf->top__DOT___1532_) 
                                                                              << 0xdU) 
                                                                             | ((IData)(vlSelf->top__DOT___0419_) 
                                                                                << 0xcU)))) 
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
                                                                                | (IData)(vlSelf->top__DOT___0129_)))))))))))))) 
                                                                 | (((IData)(vlSelf->top__DOT___1849_) 
                                                                     << 0x14U) 
                                                                    | ((0xc0000U 
                                                                        & ((((0xfc000U 
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
                                                                           + 
                                                                           (((0xfc000U 
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
                                                                                | (IData)(vlSelf->top__DOT___0129_)))))))))))))) 
                                                                       | (((IData)(vlSelf->top__DOT___1644_) 
                                                                           << 0x11U) 
                                                                          | ((0x1ffc0U 
                                                                              & ((((0x1c000U 
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
                                                                                + 
                                                                                (((0x1c000U 
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
                                                                                | (IData)(vlSelf->top__DOT___0129_)))))))))))))) 
                                                                             | (((IData)(vlSelf->top__DOT___1642_) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & ((((IData)(vlSelf->top__DOT___0627_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1064_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0730_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0505_)))) 
                                                                                + 
                                                                                ((0x10U 
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
                                                                                | (IData)(vlSelf->top__DOT___0129_)))))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__349(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__349\n"); );
    // Body
    vlSelf->top__DOT___1935_[0U] = ((0xffe00000U & 
                                     vlSelf->top__DOT___1935_[0U]) 
                                    | (((IData)(vlSelf->top__DOT___1478_) 
                                        << 0x14U) | 
                                       (((IData)(vlSelf->top__DOT___1406_) 
                                         << 0x13U) 
                                        | ((0x60000U 
                                            & ((IData)(vlSelf->top__DOT___3673_) 
                                               << 0xfU)) 
                                           | ((0x10000U 
                                               & ((IData)(vlSelf->top__DOT___3673_) 
                                                  << 0xfU)) 
                                              | ((0x8000U 
                                                  & ((IData)(vlSelf->top__DOT___3673_) 
                                                     << 0xfU)) 
                                                 | (((IData)(vlSelf->top__DOT___0411_) 
                                                     << 0xeU) 
                                                    | (((IData)(vlSelf->top__DOT___0338_) 
                                                        << 0xdU) 
                                                       | (((IData)(vlSelf->top__DOT___0596_) 
                                                           << 0xcU) 
                                                          | (((IData)(vlSelf->top__DOT___1753_) 
                                                              << 0xbU) 
                                                             | ((0x700U 
                                                                 & (IData)(vlSelf->top__DOT___1889_)) 
                                                                | (((IData)(vlSelf->top__DOT___1624_) 
                                                                    << 7U) 
                                                                   | (((IData)(vlSelf->top__DOT___1312_) 
                                                                       << 6U) 
                                                                      | (0x3fU 
                                                                         & (IData)(vlSelf->top__DOT___1889_)))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__350(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__350\n"); );
    // Body
    vlSelf->top__DOT___1103_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    (0x4000U 
                                                                     | ((0x3ff8000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___2111_ 
                                                                                >> 0x23U)) 
                                                                            << 0xfU)) 
                                                                        | ((0x3e00U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___2111_ 
                                                                                >> 0x1dU)) 
                                                                               << 9U)) 
                                                                           | ((0x100U 
                                                                               & (vlSelf->top__DOT___2087_ 
                                                                                >> 0x17U)) 
                                                                              | ((0xfeU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2111_ 
                                                                                >> 0x15U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3694_ 
                                                                                >> 0x10U))))))))) 
                                                    << 0x14U) 
                                                   | (QData)((IData)(
                                                                     ((0xffff0U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___2111_ 
                                                                                >> 4U)) 
                                                                          << 4U)) 
                                                                      | (((IData)(vlSelf->top__DOT___0489_) 
                                                                          << 3U) 
                                                                         | (((IData)(vlSelf->top__DOT___0469_) 
                                                                             << 2U) 
                                                                            | (((IData)(vlSelf->top__DOT___0489_) 
                                                                                << 1U) 
                                                                               | (IData)(vlSelf->top__DOT___0866_)))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (0x3ffffU 
                                                                     & (vlSelf->top__DOT___2094_[3U] 
                                                                        >> 7U)))) 
                                                    << 0x1cU) 
                                                   | (QData)((IData)(
                                                                     ((0x8000000U 
                                                                       & (vlSelf->top__DOT___3679_[1U] 
                                                                          << 0x16U)) 
                                                                      | ((0x7f80000U 
                                                                          & ((vlSelf->top__DOT___2094_[3U] 
                                                                              << 0x15U) 
                                                                             | (0x180000U 
                                                                                & (vlSelf->top__DOT___2094_[2U] 
                                                                                >> 0xbU)))) 
                                                                         | ((0x40000U 
                                                                             & (vlSelf->top__DOT___3679_[0U] 
                                                                                >> 0xaU)) 
                                                                            | (0x3ffffU 
                                                                               & (vlSelf->top__DOT___2094_[2U] 
                                                                                >> 0xbU))))))))) 
                                                 >> 0x2dU))));
    vlSelf->top__DOT___1102_ = (1U & (~ (((vlSelf->top__DOT___3653_[3U] 
                                           >> 7U) & (IData)(vlSelf->top__DOT___1103_)) 
                                         | (IData)(vlSelf->top__DOT___0505_))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__351(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__351\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    // Body
    vlSelf->top__DOT___0584_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    ((0x1fff800U 
                                                                      & ((vlSelf->top__DOT___2183_[1U] 
                                                                          << 0xeU) 
                                                                         | (0x3800U 
                                                                            & (vlSelf->top__DOT___2183_[0U] 
                                                                               >> 0x12U)))) 
                                                                     | ((0x7e0U 
                                                                         & (vlSelf->top__DOT___2079_ 
                                                                            >> 0xbU)) 
                                                                        | (((IData)(vlSelf->top__DOT___0571_) 
                                                                            << 4U) 
                                                                           | ((0xcU 
                                                                               & (vlSelf->top__DOT___1977_[0U] 
                                                                                >> 0x16U)) 
                                                                              | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___3704_) 
                                                                                >> 2U)))))))) 
                                                    << 0x12U) 
                                                   | (QData)((IData)(
                                                                     ((0x20000U 
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
                                                                                & vlSelf->top__DOT___2183_[0U]) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3778_) 
                                                                                << 3U)) 
                                                                                | ((0xf8U 
                                                                                & vlSelf->top__DOT___2183_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0044_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0888_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0367_)))))))))))))) 
                                                  + 
                                                  (((0x7ffffffffe0ULL 
                                                     & (vlSelf->top__DOT___1899_ 
                                                        >> 8U)) 
                                                    | ((QData)((IData)(vlSelf->top__DOT___0179_)) 
                                                       << 4U)) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___1729_) 
                                                                       << 3U) 
                                                                      | (((IData)(vlSelf->top__DOT___1133_) 
                                                                          << 2U) 
                                                                         | (((IData)(vlSelf->top__DOT___1847_) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelf->top__DOT___0808_)))))))) 
                                                 >> 0x2aU))));
    vlSelf->top__DOT___0976_ = (1U & (((((0x3800000U 
                                          & (vlSelf->top__DOT___2079_ 
                                             << 7U)) 
                                         | (((IData)(vlSelf->top__DOT___0571_) 
                                             << 0x16U) 
                                            | ((0x300000U 
                                                & (vlSelf->top__DOT___1977_[0U] 
                                                   >> 4U)) 
                                               | (0xc0000U 
                                                  & ((IData)(vlSelf->top__DOT___3704_) 
                                                     << 0x10U))))) 
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
                                                           & vlSelf->top__DOT___2183_[0U]) 
                                                          | ((0x100U 
                                                              & ((IData)(vlSelf->top__DOT___3778_) 
                                                                 << 3U)) 
                                                             | ((0xf8U 
                                                                 & vlSelf->top__DOT___2183_[0U]) 
                                                                | (((IData)(vlSelf->top__DOT___0044_) 
                                                                    << 2U) 
                                                                   | (((IData)(vlSelf->top__DOT___0888_) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelf->top__DOT___0367_)))))))))))) 
                                       + (((0x3ffffe0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT___1899_ 
                                                        >> 0xdU)) 
                                               << 5U)) 
                                           | ((IData)(vlSelf->top__DOT___0179_) 
                                              << 4U)) 
                                          | (((IData)(vlSelf->top__DOT___1729_) 
                                              << 3U) 
                                             | (((IData)(vlSelf->top__DOT___1133_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___1847_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0808_)))))) 
                                      >> 0x19U));
    __Vtemp_2[0U] = (IData)((((QData)((IData)(((0x80000000U 
                                                & (vlSelf->top__DOT___3664_[1U] 
                                                   << 0x15U)) 
                                               | ((0x7ffff800U 
                                                   & ((vlSelf->top__DOT___2183_[1U] 
                                                       << 0xeU) 
                                                      | (0x3800U 
                                                         & (vlSelf->top__DOT___2183_[0U] 
                                                            >> 0x12U)))) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->top__DOT___2079_ 
                                                         >> 0xbU)) 
                                                     | (((IData)(vlSelf->top__DOT___0571_) 
                                                         << 4U) 
                                                        | ((0xcU 
                                                            & (vlSelf->top__DOT___1977_[0U] 
                                                               >> 0x16U)) 
                                                           | (3U 
                                                              & ((IData)(vlSelf->top__DOT___3704_) 
                                                                 >> 2U))))))))) 
                              << 0x12U) | (QData)((IData)(
                                                          ((0x20000U 
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
                                                                           & vlSelf->top__DOT___2183_[0U]) 
                                                                          | ((0x100U 
                                                                              & ((IData)(vlSelf->top__DOT___3778_) 
                                                                                << 3U)) 
                                                                             | ((0xf8U 
                                                                                & vlSelf->top__DOT___2183_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0044_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0888_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0367_)))))))))))))));
    __Vtemp_2[1U] = ((0xfffc0000U & vlSelf->top__DOT___2183_[1U]) 
                     | (IData)(((((QData)((IData)((
                                                   (0x80000000U 
                                                    & (vlSelf->top__DOT___3664_[1U] 
                                                       << 0x15U)) 
                                                   | ((0x7ffff800U 
                                                       & ((vlSelf->top__DOT___2183_[1U] 
                                                           << 0xeU) 
                                                          | (0x3800U 
                                                             & (vlSelf->top__DOT___2183_[0U] 
                                                                >> 0x12U)))) 
                                                      | ((0x7e0U 
                                                          & (vlSelf->top__DOT___2079_ 
                                                             >> 0xbU)) 
                                                         | (((IData)(vlSelf->top__DOT___0571_) 
                                                             << 4U) 
                                                            | ((0xcU 
                                                                & (vlSelf->top__DOT___1977_[0U] 
                                                                   >> 0x16U)) 
                                                               | (3U 
                                                                  & ((IData)(vlSelf->top__DOT___3704_) 
                                                                     >> 2U))))))))) 
                                  << 0x12U) | (QData)((IData)(
                                                              ((0x20000U 
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
                                                                               & vlSelf->top__DOT___2183_[0U]) 
                                                                              | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3778_) 
                                                                                << 3U)) 
                                                                                | ((0xf8U 
                                                                                & vlSelf->top__DOT___2183_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0044_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0888_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0367_)))))))))))))) 
                                >> 0x20U)));
    __Vtemp_2[2U] = (0x1fffU & vlSelf->top__DOT___2183_[2U]);
    __Vtemp_3[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___1591_)) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (0x1fffffU 
                                                               & ((vlSelf->top__DOT___2093_[2U] 
                                                                   << 9U) 
                                                                  | (vlSelf->top__DOT___2093_[1U] 
                                                                     >> 0x17U))))) 
                                              << 0x2aU) 
                                             | ((0x3fffffffffeULL 
                                                 & (vlSelf->top__DOT___1899_ 
                                                    >> 0xcU)) 
                                                | (QData)((IData)(vlSelf->top__DOT___0179_)))))) 
                      >> 0x1cU) | ((IData)(((((QData)((IData)(vlSelf->top__DOT___1591_)) 
                                              << 0x3fU) 
                                             | (((QData)((IData)(
                                                                 (0x1fffffU 
                                                                  & ((vlSelf->top__DOT___2093_[2U] 
                                                                      << 9U) 
                                                                     | (vlSelf->top__DOT___2093_[1U] 
                                                                        >> 0x17U))))) 
                                                 << 0x2aU) 
                                                | ((0x3fffffffffeULL 
                                                    & (vlSelf->top__DOT___1899_ 
                                                       >> 0xcU)) 
                                                   | (QData)((IData)(vlSelf->top__DOT___0179_))))) 
                                            >> 0x20U)) 
                                   << 4U));
    __Vtemp_4[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___1591_)) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (0x1fffffU 
                                                               & ((vlSelf->top__DOT___2093_[2U] 
                                                                   << 9U) 
                                                                  | (vlSelf->top__DOT___2093_[1U] 
                                                                     >> 0x17U))))) 
                                              << 0x2aU) 
                                             | ((0x3fffffffffeULL 
                                                 & (vlSelf->top__DOT___1899_ 
                                                    >> 0xcU)) 
                                                | (QData)((IData)(vlSelf->top__DOT___0179_)))))) 
                      << 4U) | (((IData)(vlSelf->top__DOT___1729_) 
                                 << 3U) | (((IData)(vlSelf->top__DOT___1133_) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT___1847_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___0808_)))));
    __Vtemp_4[1U] = __Vtemp_3[1U];
    __Vtemp_4[2U] = ((0x1ff0U & (vlSelf->top__DOT___2093_[2U] 
                                 >> 9U)) | ((IData)(
                                                    ((((QData)((IData)(vlSelf->top__DOT___1591_)) 
                                                       << 0x3fU) 
                                                      | (((QData)((IData)(
                                                                          (0x1fffffU 
                                                                           & ((vlSelf->top__DOT___2093_[2U] 
                                                                               << 9U) 
                                                                              | (vlSelf->top__DOT___2093_[1U] 
                                                                                >> 0x17U))))) 
                                                          << 0x2aU) 
                                                         | ((0x3fffffffffeULL 
                                                             & (vlSelf->top__DOT___1899_ 
                                                                >> 0xcU)) 
                                                            | (QData)((IData)(vlSelf->top__DOT___0179_))))) 
                                                     >> 0x20U)) 
                                            >> 0x1cU));
    VL_ADD_W(3, __Vtemp_5, __Vtemp_2, __Vtemp_4);
    vlSelf->top__DOT___1925_ = ((0x1fU & vlSelf->top__DOT___1925_) 
                                | ((0x7fffff80U & (
                                                   (0x7ffc0000U 
                                                    & (__Vtemp_5[2U] 
                                                       << 0x12U)) 
                                                   | (0x3ff80U 
                                                      & (__Vtemp_5[1U] 
                                                         >> 0xeU)))) 
                                   | (((IData)(vlSelf->top__DOT___1138_) 
                                       << 6U) | ((IData)(vlSelf->top__DOT___0936_) 
                                                 << 5U))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__352(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__352\n"); );
    // Body
    vlSelf->top__DOT___1260_ = (1U & (IData)((0x3ffffffULL 
                                              & ((((0xffffffffffff8ULL 
                                                    & vlSelf->top__DOT___1899_) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0079_) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->top__DOT___0911_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0303_)))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (((IData)(vlSelf->top__DOT___0062_) 
                                                                      << 0x1dU) 
                                                                     | (((IData)(vlSelf->top__DOT___1036_) 
                                                                         << 0x1cU) 
                                                                        | (((IData)(vlSelf->top__DOT___0381_) 
                                                                            << 0x1bU) 
                                                                           | (((IData)(vlSelf->top__DOT___0289_) 
                                                                               << 0x1aU) 
                                                                              | (((IData)(vlSelf->top__DOT___0636_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0565_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0398_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0680_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0884_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0526_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0599_) 
                                                                                << 0x13U) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3650_ 
                                                                                >> 0xaU)) 
                                                                                << 0x12U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0858_) 
                                                                                << 0x11U) 
                                                                                | ((0x1fffeU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1898_ 
                                                                                >> 0x17U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3682_ 
                                                                                >> 6U)))))))))))))))))) 
                                                    << 0x16U) 
                                                   | (QData)((IData)(
                                                                     ((0x3e0000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___1898_ 
                                                                                >> 0x11U)) 
                                                                          << 0x11U)) 
                                                                      | ((0x10000U 
                                                                          & (vlSelf->top__DOT___3682_ 
                                                                             << 0x10U)) 
                                                                         | ((0xfc00U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___1898_ 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                            | ((0x200U 
                                                                                & (IData)(vlSelf->top__DOT___3765_)) 
                                                                               | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___1898_)))))))))) 
                                                 >> 0x1aU))));
    vlSelf->top__DOT___0037_ = (1U & (IData)((0xffffffffULL 
                                              & ((((0xffffffffffff8ULL 
                                                    & vlSelf->top__DOT___1899_) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0079_) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->top__DOT___0911_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0303_)))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (((IData)(vlSelf->top__DOT___0062_) 
                                                                      << 0x1dU) 
                                                                     | (((IData)(vlSelf->top__DOT___1036_) 
                                                                         << 0x1cU) 
                                                                        | (((IData)(vlSelf->top__DOT___0381_) 
                                                                            << 0x1bU) 
                                                                           | (((IData)(vlSelf->top__DOT___0289_) 
                                                                               << 0x1aU) 
                                                                              | (((IData)(vlSelf->top__DOT___0636_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0565_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0398_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0680_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0884_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0526_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0599_) 
                                                                                << 0x13U) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3650_ 
                                                                                >> 0xaU)) 
                                                                                << 0x12U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0858_) 
                                                                                << 0x11U) 
                                                                                | ((0x1fffeU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1898_ 
                                                                                >> 0x17U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3682_ 
                                                                                >> 6U)))))))))))))))))) 
                                                    << 0x16U) 
                                                   | (QData)((IData)(
                                                                     ((0x3e0000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___1898_ 
                                                                                >> 0x11U)) 
                                                                          << 0x11U)) 
                                                                      | ((0x10000U 
                                                                          & (vlSelf->top__DOT___3682_ 
                                                                             << 0x10U)) 
                                                                         | ((0xfc00U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___1898_ 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                            | ((0x200U 
                                                                                & (IData)(vlSelf->top__DOT___3765_)) 
                                                                               | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___1898_)))))))))) 
                                                 >> 0x14U))));
    vlSelf->top__DOT___1665_ = (1U & (IData)((1ULL 
                                              & ((((0xffffffffffff8ULL 
                                                    & vlSelf->top__DOT___1899_) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0079_) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->top__DOT___0911_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0303_)))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (((IData)(vlSelf->top__DOT___0062_) 
                                                                      << 0x1dU) 
                                                                     | (((IData)(vlSelf->top__DOT___1036_) 
                                                                         << 0x1cU) 
                                                                        | (((IData)(vlSelf->top__DOT___0381_) 
                                                                            << 0x1bU) 
                                                                           | (((IData)(vlSelf->top__DOT___0289_) 
                                                                               << 0x1aU) 
                                                                              | (((IData)(vlSelf->top__DOT___0636_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0565_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0398_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0680_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0884_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0526_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0599_) 
                                                                                << 0x13U) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3650_ 
                                                                                >> 0xaU)) 
                                                                                << 0x12U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0858_) 
                                                                                << 0x11U) 
                                                                                | ((0x1fffeU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1898_ 
                                                                                >> 0x17U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3682_ 
                                                                                >> 6U)))))))))))))))))) 
                                                    << 0x16U) 
                                                   | (QData)((IData)(
                                                                     ((0x3e0000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___1898_ 
                                                                                >> 0x11U)) 
                                                                          << 0x11U)) 
                                                                      | ((0x10000U 
                                                                          & (vlSelf->top__DOT___3682_ 
                                                                             << 0x10U)) 
                                                                         | ((0xfc00U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___1898_ 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                            | ((0x200U 
                                                                                & (IData)(vlSelf->top__DOT___3765_)) 
                                                                               | (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___1898_)))))))))) 
                                                 >> 0x33U))));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__353(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__353\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_19;
    // Body
    __Vtemp_2[0U] = (((IData)(((((QData)((IData)((0xfffffU 
                                                  & ((vlSelf->top__DOT___2168_[1U] 
                                                      << 0x10U) 
                                                     | (vlSelf->top__DOT___2168_[0U] 
                                                        >> 0x10U))))) 
                                 << 0x19U) | ((QData)((IData)(
                                                              (0x21U 
                                                               | (((IData)(vlSelf->top__DOT___0609_) 
                                                                   << 0x12U) 
                                                                  | (((IData)(vlSelf->top__DOT___0241_) 
                                                                      << 0x11U) 
                                                                     | (((IData)(vlSelf->top__DOT___0071_) 
                                                                         << 0x10U) 
                                                                        | ((0xe000U 
                                                                            & (vlSelf->top__DOT___1900_[2U] 
                                                                               << 7U)) 
                                                                           | ((0x1000U 
                                                                               & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                              | ((0xe00U 
                                                                                & (vlSelf->top__DOT___1900_[2U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___1900_[1U] 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 1U))))))))))))))) 
                                              << 6U)) 
                               | (QData)((IData)((((IData)(vlSelf->top__DOT___1046_) 
                                                   << 5U) 
                                                  | ((0x10U 
                                                      & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                         << 4U)) 
                                                     | (((IData)(vlSelf->top__DOT___0404_) 
                                                         << 3U) 
                                                        | (7U 
                                                           & (vlSelf->top__DOT___1900_[2U] 
                                                              >> 6U))))))))) 
                      << 0x1bU) | ((0x4000000U & ((IData)(vlSelf->top__DOT___3822_) 
                                                  << 0x14U)) 
                                   | ((0x3800000U & 
                                       (vlSelf->top__DOT___1900_[2U] 
                                        << 0x15U)) 
                                      | ((0x400000U 
                                          & ((IData)(vlSelf->top__DOT___3822_) 
                                             << 0x14U)) 
                                         | ((0x200000U 
                                             & ((IData)(vlSelf->top__DOT___3822_) 
                                                << 0x14U)) 
                                            | ((0x100000U 
                                                & (vlSelf->top__DOT___1900_[1U] 
                                                   >> 0xbU)) 
                                               | ((0xfe000U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT___2199_ 
                                                               >> 0x15U)) 
                                                      << 0xdU)) 
                                                  | (((IData)(vlSelf->top__DOT___0996_) 
                                                      << 0xcU) 
                                                     | ((0xf00U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT___2199_ 
                                                                     >> 0x10U)) 
                                                            << 8U)) 
                                                        | ((0xe0U 
                                                            & ((IData)(vlSelf->top__DOT___2010_) 
                                                               << 4U)) 
                                                           | (((IData)(vlSelf->top__DOT___0240_) 
                                                               << 4U) 
                                                              | (((IData)(vlSelf->top__DOT___0197_) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelf->top__DOT___0232_) 
                                                                     << 2U) 
                                                                    | (((IData)(vlSelf->top__DOT___0893_) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelf->top__DOT___0154_)))))))))))))));
    __Vtemp_2[1U] = (((IData)(((((QData)((IData)((0xfffffU 
                                                  & ((vlSelf->top__DOT___2168_[1U] 
                                                      << 0x10U) 
                                                     | (vlSelf->top__DOT___2168_[0U] 
                                                        >> 0x10U))))) 
                                 << 0x19U) | ((QData)((IData)(
                                                              (0x21U 
                                                               | (((IData)(vlSelf->top__DOT___0609_) 
                                                                   << 0x12U) 
                                                                  | (((IData)(vlSelf->top__DOT___0241_) 
                                                                      << 0x11U) 
                                                                     | (((IData)(vlSelf->top__DOT___0071_) 
                                                                         << 0x10U) 
                                                                        | ((0xe000U 
                                                                            & (vlSelf->top__DOT___1900_[2U] 
                                                                               << 7U)) 
                                                                           | ((0x1000U 
                                                                               & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                              | ((0xe00U 
                                                                                & (vlSelf->top__DOT___1900_[2U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___1900_[1U] 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 1U))))))))))))))) 
                                              << 6U)) 
                               | (QData)((IData)((((IData)(vlSelf->top__DOT___1046_) 
                                                   << 5U) 
                                                  | ((0x10U 
                                                      & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                         << 4U)) 
                                                     | (((IData)(vlSelf->top__DOT___0404_) 
                                                         << 3U) 
                                                        | (7U 
                                                           & (vlSelf->top__DOT___1900_[2U] 
                                                              >> 6U))))))))) 
                      >> 5U) | ((IData)((((((QData)((IData)(
                                                            (0xfffffU 
                                                             & ((vlSelf->top__DOT___2168_[1U] 
                                                                 << 0x10U) 
                                                                | (vlSelf->top__DOT___2168_[0U] 
                                                                   >> 0x10U))))) 
                                            << 0x19U) 
                                           | ((QData)((IData)(
                                                              (0x21U 
                                                               | (((IData)(vlSelf->top__DOT___0609_) 
                                                                   << 0x12U) 
                                                                  | (((IData)(vlSelf->top__DOT___0241_) 
                                                                      << 0x11U) 
                                                                     | (((IData)(vlSelf->top__DOT___0071_) 
                                                                         << 0x10U) 
                                                                        | ((0xe000U 
                                                                            & (vlSelf->top__DOT___1900_[2U] 
                                                                               << 7U)) 
                                                                           | ((0x1000U 
                                                                               & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                              | ((0xe00U 
                                                                                & (vlSelf->top__DOT___1900_[2U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___1900_[1U] 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 1U))))))))))))))) 
                                              << 6U)) 
                                          | (QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT___1046_) 
                                                              << 5U) 
                                                             | ((0x10U 
                                                                 & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                    << 4U)) 
                                                                | (((IData)(vlSelf->top__DOT___0404_) 
                                                                    << 3U) 
                                                                   | (7U 
                                                                      & (vlSelf->top__DOT___1900_[2U] 
                                                                         >> 6U)))))))) 
                                         >> 0x20U)) 
                                << 0x1bU));
    __Vtemp_2[2U] = ((IData)((((((QData)((IData)((0xfffffU 
                                                  & ((vlSelf->top__DOT___2168_[1U] 
                                                      << 0x10U) 
                                                     | (vlSelf->top__DOT___2168_[0U] 
                                                        >> 0x10U))))) 
                                 << 0x19U) | ((QData)((IData)(
                                                              (0x21U 
                                                               | (((IData)(vlSelf->top__DOT___0609_) 
                                                                   << 0x12U) 
                                                                  | (((IData)(vlSelf->top__DOT___0241_) 
                                                                      << 0x11U) 
                                                                     | (((IData)(vlSelf->top__DOT___0071_) 
                                                                         << 0x10U) 
                                                                        | ((0xe000U 
                                                                            & (vlSelf->top__DOT___1900_[2U] 
                                                                               << 7U)) 
                                                                           | ((0x1000U 
                                                                               & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                              | ((0xe00U 
                                                                                & (vlSelf->top__DOT___1900_[2U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___1900_[1U] 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 1U))))))))))))))) 
                                              << 6U)) 
                               | (QData)((IData)((((IData)(vlSelf->top__DOT___1046_) 
                                                   << 5U) 
                                                  | ((0x10U 
                                                      & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                         << 4U)) 
                                                     | (((IData)(vlSelf->top__DOT___0404_) 
                                                         << 3U) 
                                                        | (7U 
                                                           & (vlSelf->top__DOT___1900_[2U] 
                                                              >> 6U)))))))) 
                              >> 0x20U)) >> 5U);
    __Vtemp_3[0U] = (((IData)((((QData)((IData)(((0x18000U 
                                                  & (vlSelf->top__DOT___2000_[3U] 
                                                     << 0xbU)) 
                                                 | (((IData)(vlSelf->top__DOT___1506_) 
                                                     << 0xeU) 
                                                    | ((0x2000U 
                                                        & (vlSelf->top__DOT___2000_[3U] 
                                                           << 0xbU)) 
                                                       | (((IData)(vlSelf->top__DOT___0113_) 
                                                           << 0xcU) 
                                                          | ((0xf80U 
                                                              & ((vlSelf->top__DOT___2000_[3U] 
                                                                  << 0xbU) 
                                                                 | (0x780U 
                                                                    & (vlSelf->top__DOT___2000_[2U] 
                                                                       >> 0x15U)))) 
                                                             | (((IData)(vlSelf->top__DOT___0313_) 
                                                                 << 6U) 
                                                                | ((0x3eU 
                                                                    & (vlSelf->top__DOT___2000_[2U] 
                                                                       >> 0x15U)) 
                                                                   | (IData)(vlSelf->top__DOT___0737_)))))))))) 
                                << 0x21U) | (((QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT___2000_[2U] 
                                                                  >> 0x10U)))) 
                                              << 0x1cU) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___0354_) 
                                                                 << 0x1bU) 
                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                    << 0x1aU) 
                                                                   | (((IData)(vlSelf->top__DOT___0071_) 
                                                                       << 0x19U) 
                                                                      | (((IData)(vlSelf->top__DOT___0463_) 
                                                                          << 0x18U) 
                                                                         | (((IData)(vlSelf->top__DOT___0134_) 
                                                                             << 0x17U) 
                                                                            | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 0x16U) 
                                                                               | ((0x3e0000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)) 
                                                                                << 0xcU)) 
                                                                                | ((0xfc0U 
                                                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU) 
                                                                                | (0x3c0U 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))))))))))))))))))) 
                      << 0x16U) | ((0x200000U & (vlSelf->top__DOT___2031_[2U] 
                                                 << 0x13U)) 
                                   | ((0x100000U & 
                                       ((IData)((vlSelf->top__DOT___3747_ 
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
                                                                       & vlSelf->top__DOT___2121_[0U]))))))))))))));
    __Vtemp_3[1U] = (((IData)((((QData)((IData)(((0x18000U 
                                                  & (vlSelf->top__DOT___2000_[3U] 
                                                     << 0xbU)) 
                                                 | (((IData)(vlSelf->top__DOT___1506_) 
                                                     << 0xeU) 
                                                    | ((0x2000U 
                                                        & (vlSelf->top__DOT___2000_[3U] 
                                                           << 0xbU)) 
                                                       | (((IData)(vlSelf->top__DOT___0113_) 
                                                           << 0xcU) 
                                                          | ((0xf80U 
                                                              & ((vlSelf->top__DOT___2000_[3U] 
                                                                  << 0xbU) 
                                                                 | (0x780U 
                                                                    & (vlSelf->top__DOT___2000_[2U] 
                                                                       >> 0x15U)))) 
                                                             | (((IData)(vlSelf->top__DOT___0313_) 
                                                                 << 6U) 
                                                                | ((0x3eU 
                                                                    & (vlSelf->top__DOT___2000_[2U] 
                                                                       >> 0x15U)) 
                                                                   | (IData)(vlSelf->top__DOT___0737_)))))))))) 
                                << 0x21U) | (((QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT___2000_[2U] 
                                                                  >> 0x10U)))) 
                                              << 0x1cU) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___0354_) 
                                                                 << 0x1bU) 
                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                    << 0x1aU) 
                                                                   | (((IData)(vlSelf->top__DOT___0071_) 
                                                                       << 0x19U) 
                                                                      | (((IData)(vlSelf->top__DOT___0463_) 
                                                                          << 0x18U) 
                                                                         | (((IData)(vlSelf->top__DOT___0134_) 
                                                                             << 0x17U) 
                                                                            | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 0x16U) 
                                                                               | ((0x3e0000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)) 
                                                                                << 0xcU)) 
                                                                                | ((0xfc0U 
                                                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU) 
                                                                                | (0x3c0U 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))))))))))))))))))) 
                      >> 0xaU) | ((IData)(((((QData)((IData)(
                                                             ((0x18000U 
                                                               & (vlSelf->top__DOT___2000_[3U] 
                                                                  << 0xbU)) 
                                                              | (((IData)(vlSelf->top__DOT___1506_) 
                                                                  << 0xeU) 
                                                                 | ((0x2000U 
                                                                     & (vlSelf->top__DOT___2000_[3U] 
                                                                        << 0xbU)) 
                                                                    | (((IData)(vlSelf->top__DOT___0113_) 
                                                                        << 0xcU) 
                                                                       | ((0xf80U 
                                                                           & ((vlSelf->top__DOT___2000_[3U] 
                                                                               << 0xbU) 
                                                                              | (0x780U 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0x15U)))) 
                                                                          | (((IData)(vlSelf->top__DOT___0313_) 
                                                                              << 6U) 
                                                                             | ((0x3eU 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0x15U)) 
                                                                                | (IData)(vlSelf->top__DOT___0737_)))))))))) 
                                             << 0x21U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & (vlSelf->top__DOT___2000_[2U] 
                                                                    >> 0x10U)))) 
                                                << 0x1cU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->top__DOT___0354_) 
                                                                   << 0x1bU) 
                                                                  | (((IData)(vlSelf->top__DOT___0226_) 
                                                                      << 0x1aU) 
                                                                     | (((IData)(vlSelf->top__DOT___0071_) 
                                                                         << 0x19U) 
                                                                        | (((IData)(vlSelf->top__DOT___0463_) 
                                                                            << 0x18U) 
                                                                           | (((IData)(vlSelf->top__DOT___0134_) 
                                                                               << 0x17U) 
                                                                              | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 0x16U) 
                                                                                | ((0x3e0000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)) 
                                                                                << 0xcU)) 
                                                                                | ((0xfc0U 
                                                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU) 
                                                                                | (0x3c0U 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U))))))))))))))))))) 
                                           >> 0x20U)) 
                                  << 0x16U));
    __Vtemp_3[2U] = ((IData)(((((QData)((IData)(((0x18000U 
                                                  & (vlSelf->top__DOT___2000_[3U] 
                                                     << 0xbU)) 
                                                 | (((IData)(vlSelf->top__DOT___1506_) 
                                                     << 0xeU) 
                                                    | ((0x2000U 
                                                        & (vlSelf->top__DOT___2000_[3U] 
                                                           << 0xbU)) 
                                                       | (((IData)(vlSelf->top__DOT___0113_) 
                                                           << 0xcU) 
                                                          | ((0xf80U 
                                                              & ((vlSelf->top__DOT___2000_[3U] 
                                                                  << 0xbU) 
                                                                 | (0x780U 
                                                                    & (vlSelf->top__DOT___2000_[2U] 
                                                                       >> 0x15U)))) 
                                                             | (((IData)(vlSelf->top__DOT___0313_) 
                                                                 << 6U) 
                                                                | ((0x3eU 
                                                                    & (vlSelf->top__DOT___2000_[2U] 
                                                                       >> 0x15U)) 
                                                                   | (IData)(vlSelf->top__DOT___0737_)))))))))) 
                                << 0x21U) | (((QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT___2000_[2U] 
                                                                  >> 0x10U)))) 
                                              << 0x1cU) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___0354_) 
                                                                 << 0x1bU) 
                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                    << 0x1aU) 
                                                                   | (((IData)(vlSelf->top__DOT___0071_) 
                                                                       << 0x19U) 
                                                                      | (((IData)(vlSelf->top__DOT___0463_) 
                                                                          << 0x18U) 
                                                                         | (((IData)(vlSelf->top__DOT___0134_) 
                                                                             << 0x17U) 
                                                                            | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 0x16U) 
                                                                               | ((0x3e0000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)) 
                                                                                << 0xcU)) 
                                                                                | ((0xfc0U 
                                                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU) 
                                                                                | (0x3c0U 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U))))))))))))))))))) 
                              >> 0x20U)) >> 0xaU);
    VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    vlSelf->top__DOT___0378_ = (1U & (__Vtemp_4[2U] 
                                      >> 7U));
    __Vtemp_7[0U] = (((IData)(((((QData)((IData)((0xfffffU 
                                                  & ((vlSelf->top__DOT___2168_[1U] 
                                                      << 0x10U) 
                                                     | (vlSelf->top__DOT___2168_[0U] 
                                                        >> 0x10U))))) 
                                 << 0x19U) | ((QData)((IData)(
                                                              (0x21U 
                                                               | (((IData)(vlSelf->top__DOT___0609_) 
                                                                   << 0x12U) 
                                                                  | (((IData)(vlSelf->top__DOT___0241_) 
                                                                      << 0x11U) 
                                                                     | (((IData)(vlSelf->top__DOT___0071_) 
                                                                         << 0x10U) 
                                                                        | ((0xe000U 
                                                                            & (vlSelf->top__DOT___1900_[2U] 
                                                                               << 7U)) 
                                                                           | ((0x1000U 
                                                                               & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                              | ((0xe00U 
                                                                                & (vlSelf->top__DOT___1900_[2U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___1900_[1U] 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 1U))))))))))))))) 
                                              << 6U)) 
                               | (QData)((IData)((((IData)(vlSelf->top__DOT___1046_) 
                                                   << 5U) 
                                                  | ((0x10U 
                                                      & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                         << 4U)) 
                                                     | (((IData)(vlSelf->top__DOT___0404_) 
                                                         << 3U) 
                                                        | (7U 
                                                           & (vlSelf->top__DOT___1900_[2U] 
                                                              >> 6U))))))))) 
                      << 0x1bU) | ((0x4000000U & ((IData)(vlSelf->top__DOT___3822_) 
                                                  << 0x14U)) 
                                   | ((0x3800000U & 
                                       (vlSelf->top__DOT___1900_[2U] 
                                        << 0x15U)) 
                                      | ((0x400000U 
                                          & ((IData)(vlSelf->top__DOT___3822_) 
                                             << 0x14U)) 
                                         | ((0x200000U 
                                             & ((IData)(vlSelf->top__DOT___3822_) 
                                                << 0x14U)) 
                                            | ((0x100000U 
                                                & (vlSelf->top__DOT___1900_[1U] 
                                                   >> 0xbU)) 
                                               | ((0xfe000U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT___2199_ 
                                                               >> 0x15U)) 
                                                      << 0xdU)) 
                                                  | (((IData)(vlSelf->top__DOT___0996_) 
                                                      << 0xcU) 
                                                     | ((0xf00U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT___2199_ 
                                                                     >> 0x10U)) 
                                                            << 8U)) 
                                                        | ((0xe0U 
                                                            & ((IData)(vlSelf->top__DOT___2010_) 
                                                               << 4U)) 
                                                           | (((IData)(vlSelf->top__DOT___0240_) 
                                                               << 4U) 
                                                              | (((IData)(vlSelf->top__DOT___0197_) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelf->top__DOT___0232_) 
                                                                     << 2U) 
                                                                    | (((IData)(vlSelf->top__DOT___0893_) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelf->top__DOT___0154_)))))))))))))));
    __Vtemp_7[1U] = (((IData)(((((QData)((IData)((0xfffffU 
                                                  & ((vlSelf->top__DOT___2168_[1U] 
                                                      << 0x10U) 
                                                     | (vlSelf->top__DOT___2168_[0U] 
                                                        >> 0x10U))))) 
                                 << 0x19U) | ((QData)((IData)(
                                                              (0x21U 
                                                               | (((IData)(vlSelf->top__DOT___0609_) 
                                                                   << 0x12U) 
                                                                  | (((IData)(vlSelf->top__DOT___0241_) 
                                                                      << 0x11U) 
                                                                     | (((IData)(vlSelf->top__DOT___0071_) 
                                                                         << 0x10U) 
                                                                        | ((0xe000U 
                                                                            & (vlSelf->top__DOT___1900_[2U] 
                                                                               << 7U)) 
                                                                           | ((0x1000U 
                                                                               & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                              | ((0xe00U 
                                                                                & (vlSelf->top__DOT___1900_[2U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___1900_[1U] 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 1U))))))))))))))) 
                                              << 6U)) 
                               | (QData)((IData)((((IData)(vlSelf->top__DOT___1046_) 
                                                   << 5U) 
                                                  | ((0x10U 
                                                      & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                         << 4U)) 
                                                     | (((IData)(vlSelf->top__DOT___0404_) 
                                                         << 3U) 
                                                        | (7U 
                                                           & (vlSelf->top__DOT___1900_[2U] 
                                                              >> 6U))))))))) 
                      >> 5U) | ((IData)((((((QData)((IData)(
                                                            (0xfffffU 
                                                             & ((vlSelf->top__DOT___2168_[1U] 
                                                                 << 0x10U) 
                                                                | (vlSelf->top__DOT___2168_[0U] 
                                                                   >> 0x10U))))) 
                                            << 0x19U) 
                                           | ((QData)((IData)(
                                                              (0x21U 
                                                               | (((IData)(vlSelf->top__DOT___0609_) 
                                                                   << 0x12U) 
                                                                  | (((IData)(vlSelf->top__DOT___0241_) 
                                                                      << 0x11U) 
                                                                     | (((IData)(vlSelf->top__DOT___0071_) 
                                                                         << 0x10U) 
                                                                        | ((0xe000U 
                                                                            & (vlSelf->top__DOT___1900_[2U] 
                                                                               << 7U)) 
                                                                           | ((0x1000U 
                                                                               & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                              | ((0xe00U 
                                                                                & (vlSelf->top__DOT___1900_[2U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___1900_[1U] 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 1U))))))))))))))) 
                                              << 6U)) 
                                          | (QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT___1046_) 
                                                              << 5U) 
                                                             | ((0x10U 
                                                                 & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                    << 4U)) 
                                                                | (((IData)(vlSelf->top__DOT___0404_) 
                                                                    << 3U) 
                                                                   | (7U 
                                                                      & (vlSelf->top__DOT___1900_[2U] 
                                                                         >> 6U)))))))) 
                                         >> 0x20U)) 
                                << 0x1bU));
    __Vtemp_7[2U] = ((IData)((((((QData)((IData)((0xfffffU 
                                                  & ((vlSelf->top__DOT___2168_[1U] 
                                                      << 0x10U) 
                                                     | (vlSelf->top__DOT___2168_[0U] 
                                                        >> 0x10U))))) 
                                 << 0x19U) | ((QData)((IData)(
                                                              (0x21U 
                                                               | (((IData)(vlSelf->top__DOT___0609_) 
                                                                   << 0x12U) 
                                                                  | (((IData)(vlSelf->top__DOT___0241_) 
                                                                      << 0x11U) 
                                                                     | (((IData)(vlSelf->top__DOT___0071_) 
                                                                         << 0x10U) 
                                                                        | ((0xe000U 
                                                                            & (vlSelf->top__DOT___1900_[2U] 
                                                                               << 7U)) 
                                                                           | ((0x1000U 
                                                                               & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                              | ((0xe00U 
                                                                                & (vlSelf->top__DOT___1900_[2U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___1900_[1U] 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 1U))))))))))))))) 
                                              << 6U)) 
                               | (QData)((IData)((((IData)(vlSelf->top__DOT___1046_) 
                                                   << 5U) 
                                                  | ((0x10U 
                                                      & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                         << 4U)) 
                                                     | (((IData)(vlSelf->top__DOT___0404_) 
                                                         << 3U) 
                                                        | (7U 
                                                           & (vlSelf->top__DOT___1900_[2U] 
                                                              >> 6U)))))))) 
                              >> 0x20U)) >> 5U);
    __Vtemp_8[0U] = (((IData)((((QData)((IData)(((0x18000U 
                                                  & (vlSelf->top__DOT___2000_[3U] 
                                                     << 0xbU)) 
                                                 | (((IData)(vlSelf->top__DOT___1506_) 
                                                     << 0xeU) 
                                                    | ((0x2000U 
                                                        & (vlSelf->top__DOT___2000_[3U] 
                                                           << 0xbU)) 
                                                       | (((IData)(vlSelf->top__DOT___0113_) 
                                                           << 0xcU) 
                                                          | ((0xf80U 
                                                              & ((vlSelf->top__DOT___2000_[3U] 
                                                                  << 0xbU) 
                                                                 | (0x780U 
                                                                    & (vlSelf->top__DOT___2000_[2U] 
                                                                       >> 0x15U)))) 
                                                             | (((IData)(vlSelf->top__DOT___0313_) 
                                                                 << 6U) 
                                                                | ((0x3eU 
                                                                    & (vlSelf->top__DOT___2000_[2U] 
                                                                       >> 0x15U)) 
                                                                   | (IData)(vlSelf->top__DOT___0737_)))))))))) 
                                << 0x21U) | (((QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT___2000_[2U] 
                                                                  >> 0x10U)))) 
                                              << 0x1cU) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___0354_) 
                                                                 << 0x1bU) 
                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                    << 0x1aU) 
                                                                   | (((IData)(vlSelf->top__DOT___0071_) 
                                                                       << 0x19U) 
                                                                      | (((IData)(vlSelf->top__DOT___0463_) 
                                                                          << 0x18U) 
                                                                         | (((IData)(vlSelf->top__DOT___0134_) 
                                                                             << 0x17U) 
                                                                            | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 0x16U) 
                                                                               | ((0x3e0000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)) 
                                                                                << 0xcU)) 
                                                                                | ((0xfc0U 
                                                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU) 
                                                                                | (0x3c0U 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))))))))))))))))))) 
                      << 0x16U) | ((0x200000U & (vlSelf->top__DOT___2031_[2U] 
                                                 << 0x13U)) 
                                   | ((0x100000U & 
                                       ((IData)((vlSelf->top__DOT___3747_ 
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
                                                                       & vlSelf->top__DOT___2121_[0U]))))))))))))));
    __Vtemp_8[1U] = (((IData)((((QData)((IData)(((0x18000U 
                                                  & (vlSelf->top__DOT___2000_[3U] 
                                                     << 0xbU)) 
                                                 | (((IData)(vlSelf->top__DOT___1506_) 
                                                     << 0xeU) 
                                                    | ((0x2000U 
                                                        & (vlSelf->top__DOT___2000_[3U] 
                                                           << 0xbU)) 
                                                       | (((IData)(vlSelf->top__DOT___0113_) 
                                                           << 0xcU) 
                                                          | ((0xf80U 
                                                              & ((vlSelf->top__DOT___2000_[3U] 
                                                                  << 0xbU) 
                                                                 | (0x780U 
                                                                    & (vlSelf->top__DOT___2000_[2U] 
                                                                       >> 0x15U)))) 
                                                             | (((IData)(vlSelf->top__DOT___0313_) 
                                                                 << 6U) 
                                                                | ((0x3eU 
                                                                    & (vlSelf->top__DOT___2000_[2U] 
                                                                       >> 0x15U)) 
                                                                   | (IData)(vlSelf->top__DOT___0737_)))))))))) 
                                << 0x21U) | (((QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT___2000_[2U] 
                                                                  >> 0x10U)))) 
                                              << 0x1cU) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___0354_) 
                                                                 << 0x1bU) 
                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                    << 0x1aU) 
                                                                   | (((IData)(vlSelf->top__DOT___0071_) 
                                                                       << 0x19U) 
                                                                      | (((IData)(vlSelf->top__DOT___0463_) 
                                                                          << 0x18U) 
                                                                         | (((IData)(vlSelf->top__DOT___0134_) 
                                                                             << 0x17U) 
                                                                            | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 0x16U) 
                                                                               | ((0x3e0000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)) 
                                                                                << 0xcU)) 
                                                                                | ((0xfc0U 
                                                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU) 
                                                                                | (0x3c0U 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))))))))))))))))))) 
                      >> 0xaU) | ((IData)(((((QData)((IData)(
                                                             ((0x18000U 
                                                               & (vlSelf->top__DOT___2000_[3U] 
                                                                  << 0xbU)) 
                                                              | (((IData)(vlSelf->top__DOT___1506_) 
                                                                  << 0xeU) 
                                                                 | ((0x2000U 
                                                                     & (vlSelf->top__DOT___2000_[3U] 
                                                                        << 0xbU)) 
                                                                    | (((IData)(vlSelf->top__DOT___0113_) 
                                                                        << 0xcU) 
                                                                       | ((0xf80U 
                                                                           & ((vlSelf->top__DOT___2000_[3U] 
                                                                               << 0xbU) 
                                                                              | (0x780U 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0x15U)))) 
                                                                          | (((IData)(vlSelf->top__DOT___0313_) 
                                                                              << 6U) 
                                                                             | ((0x3eU 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0x15U)) 
                                                                                | (IData)(vlSelf->top__DOT___0737_)))))))))) 
                                             << 0x21U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & (vlSelf->top__DOT___2000_[2U] 
                                                                    >> 0x10U)))) 
                                                << 0x1cU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->top__DOT___0354_) 
                                                                   << 0x1bU) 
                                                                  | (((IData)(vlSelf->top__DOT___0226_) 
                                                                      << 0x1aU) 
                                                                     | (((IData)(vlSelf->top__DOT___0071_) 
                                                                         << 0x19U) 
                                                                        | (((IData)(vlSelf->top__DOT___0463_) 
                                                                            << 0x18U) 
                                                                           | (((IData)(vlSelf->top__DOT___0134_) 
                                                                               << 0x17U) 
                                                                              | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 0x16U) 
                                                                                | ((0x3e0000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)) 
                                                                                << 0xcU)) 
                                                                                | ((0xfc0U 
                                                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU) 
                                                                                | (0x3c0U 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U))))))))))))))))))) 
                                           >> 0x20U)) 
                                  << 0x16U));
    __Vtemp_8[2U] = ((IData)(((((QData)((IData)(((0x18000U 
                                                  & (vlSelf->top__DOT___2000_[3U] 
                                                     << 0xbU)) 
                                                 | (((IData)(vlSelf->top__DOT___1506_) 
                                                     << 0xeU) 
                                                    | ((0x2000U 
                                                        & (vlSelf->top__DOT___2000_[3U] 
                                                           << 0xbU)) 
                                                       | (((IData)(vlSelf->top__DOT___0113_) 
                                                           << 0xcU) 
                                                          | ((0xf80U 
                                                              & ((vlSelf->top__DOT___2000_[3U] 
                                                                  << 0xbU) 
                                                                 | (0x780U 
                                                                    & (vlSelf->top__DOT___2000_[2U] 
                                                                       >> 0x15U)))) 
                                                             | (((IData)(vlSelf->top__DOT___0313_) 
                                                                 << 6U) 
                                                                | ((0x3eU 
                                                                    & (vlSelf->top__DOT___2000_[2U] 
                                                                       >> 0x15U)) 
                                                                   | (IData)(vlSelf->top__DOT___0737_)))))))))) 
                                << 0x21U) | (((QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT___2000_[2U] 
                                                                  >> 0x10U)))) 
                                              << 0x1cU) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___0354_) 
                                                                 << 0x1bU) 
                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                    << 0x1aU) 
                                                                   | (((IData)(vlSelf->top__DOT___0071_) 
                                                                       << 0x19U) 
                                                                      | (((IData)(vlSelf->top__DOT___0463_) 
                                                                          << 0x18U) 
                                                                         | (((IData)(vlSelf->top__DOT___0134_) 
                                                                             << 0x17U) 
                                                                            | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 0x16U) 
                                                                               | ((0x3e0000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)) 
                                                                                << 0xcU)) 
                                                                                | ((0xfc0U 
                                                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU) 
                                                                                | (0x3c0U 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U))))))))))))))))))) 
                              >> 0x20U)) >> 0xaU);
    VL_ADD_W(3, __Vtemp_9, __Vtemp_7, __Vtemp_8);
    vlSelf->top__DOT___1768_ = (1U & (__Vtemp_9[0U] 
                                      >> 0x1dU));
    __Vtemp_12[0U] = (((IData)((((0xffffffffe000000ULL 
                                  & (((QData)((IData)(
                                                      vlSelf->top__DOT___2168_[1U])) 
                                      << 0x29U) | (0xfffffffffe000000ULL 
                                                   & ((QData)((IData)(
                                                                      vlSelf->top__DOT___2168_[0U])) 
                                                      << 9U)))) 
                                 | ((QData)((IData)(
                                                    (0x21U 
                                                     | (((IData)(vlSelf->top__DOT___0609_) 
                                                         << 0x12U) 
                                                        | (((IData)(vlSelf->top__DOT___0241_) 
                                                            << 0x11U) 
                                                           | (((IData)(vlSelf->top__DOT___0071_) 
                                                               << 0x10U) 
                                                              | ((0xe000U 
                                                                  & (vlSelf->top__DOT___1900_[2U] 
                                                                     << 7U)) 
                                                                 | ((0x1000U 
                                                                     & ((IData)(vlSelf->top__DOT___3822_) 
                                                                        << 6U)) 
                                                                    | ((0xe00U 
                                                                        & (vlSelf->top__DOT___1900_[2U] 
                                                                           << 7U)) 
                                                                       | ((0x100U 
                                                                           & ((IData)(vlSelf->top__DOT___3822_) 
                                                                              << 6U)) 
                                                                          | ((0x80U 
                                                                              & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                             | ((0x40U 
                                                                                & (vlSelf->top__DOT___1900_[1U] 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 1U))))))))))))))) 
                                    << 6U)) | (QData)((IData)(
                                                              (((IData)(vlSelf->top__DOT___1046_) 
                                                                << 5U) 
                                                               | ((0x10U 
                                                                   & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                      << 4U)) 
                                                                  | (((IData)(vlSelf->top__DOT___0404_) 
                                                                      << 3U) 
                                                                     | (7U 
                                                                        & (vlSelf->top__DOT___1900_[2U] 
                                                                           >> 6U))))))))) 
                       << 0x1bU) | ((0x4000000U & ((IData)(vlSelf->top__DOT___3822_) 
                                                   << 0x14U)) 
                                    | ((0x3800000U 
                                        & (vlSelf->top__DOT___1900_[2U] 
                                           << 0x15U)) 
                                       | ((0x400000U 
                                           & ((IData)(vlSelf->top__DOT___3822_) 
                                              << 0x14U)) 
                                          | ((0x200000U 
                                              & ((IData)(vlSelf->top__DOT___3822_) 
                                                 << 0x14U)) 
                                             | ((0x100000U 
                                                 & (vlSelf->top__DOT___1900_[1U] 
                                                    >> 0xbU)) 
                                                | ((0xfe000U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___2199_ 
                                                                >> 0x15U)) 
                                                       << 0xdU)) 
                                                   | (((IData)(vlSelf->top__DOT___0996_) 
                                                       << 0xcU) 
                                                      | ((0xf00U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT___2199_ 
                                                                      >> 0x10U)) 
                                                             << 8U)) 
                                                         | ((0xe0U 
                                                             & ((IData)(vlSelf->top__DOT___2010_) 
                                                                << 4U)) 
                                                            | (((IData)(vlSelf->top__DOT___0240_) 
                                                                << 4U) 
                                                               | (((IData)(vlSelf->top__DOT___0197_) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelf->top__DOT___0232_) 
                                                                      << 2U) 
                                                                     | (((IData)(vlSelf->top__DOT___0893_) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->top__DOT___0154_)))))))))))))));
    __Vtemp_12[1U] = (((IData)((((0xffffffffe000000ULL 
                                  & (((QData)((IData)(
                                                      vlSelf->top__DOT___2168_[1U])) 
                                      << 0x29U) | (0xfffffffffe000000ULL 
                                                   & ((QData)((IData)(
                                                                      vlSelf->top__DOT___2168_[0U])) 
                                                      << 9U)))) 
                                 | ((QData)((IData)(
                                                    (0x21U 
                                                     | (((IData)(vlSelf->top__DOT___0609_) 
                                                         << 0x12U) 
                                                        | (((IData)(vlSelf->top__DOT___0241_) 
                                                            << 0x11U) 
                                                           | (((IData)(vlSelf->top__DOT___0071_) 
                                                               << 0x10U) 
                                                              | ((0xe000U 
                                                                  & (vlSelf->top__DOT___1900_[2U] 
                                                                     << 7U)) 
                                                                 | ((0x1000U 
                                                                     & ((IData)(vlSelf->top__DOT___3822_) 
                                                                        << 6U)) 
                                                                    | ((0xe00U 
                                                                        & (vlSelf->top__DOT___1900_[2U] 
                                                                           << 7U)) 
                                                                       | ((0x100U 
                                                                           & ((IData)(vlSelf->top__DOT___3822_) 
                                                                              << 6U)) 
                                                                          | ((0x80U 
                                                                              & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                             | ((0x40U 
                                                                                & (vlSelf->top__DOT___1900_[1U] 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 1U))))))))))))))) 
                                    << 6U)) | (QData)((IData)(
                                                              (((IData)(vlSelf->top__DOT___1046_) 
                                                                << 5U) 
                                                               | ((0x10U 
                                                                   & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                      << 4U)) 
                                                                  | (((IData)(vlSelf->top__DOT___0404_) 
                                                                      << 3U) 
                                                                     | (7U 
                                                                        & (vlSelf->top__DOT___1900_[2U] 
                                                                           >> 6U))))))))) 
                       >> 5U) | ((IData)(((((0xffffffffe000000ULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->top__DOT___2168_[1U])) 
                                                 << 0x29U) 
                                                | (0xfffffffffe000000ULL 
                                                   & ((QData)((IData)(
                                                                      vlSelf->top__DOT___2168_[0U])) 
                                                      << 9U)))) 
                                            | ((QData)((IData)(
                                                               (0x21U 
                                                                | (((IData)(vlSelf->top__DOT___0609_) 
                                                                    << 0x12U) 
                                                                   | (((IData)(vlSelf->top__DOT___0241_) 
                                                                       << 0x11U) 
                                                                      | (((IData)(vlSelf->top__DOT___0071_) 
                                                                          << 0x10U) 
                                                                         | ((0xe000U 
                                                                             & (vlSelf->top__DOT___1900_[2U] 
                                                                                << 7U)) 
                                                                            | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                               | ((0xe00U 
                                                                                & (vlSelf->top__DOT___1900_[2U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___1900_[1U] 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 1U))))))))))))))) 
                                               << 6U)) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___1046_) 
                                                               << 5U) 
                                                              | ((0x10U 
                                                                  & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                     << 4U)) 
                                                                 | (((IData)(vlSelf->top__DOT___0404_) 
                                                                     << 3U) 
                                                                    | (7U 
                                                                       & (vlSelf->top__DOT___1900_[2U] 
                                                                          >> 6U)))))))) 
                                          >> 0x20U)) 
                                 << 0x1bU));
    __Vtemp_12[2U] = ((IData)(((((0xffffffffe000000ULL 
                                  & (((QData)((IData)(
                                                      vlSelf->top__DOT___2168_[1U])) 
                                      << 0x29U) | (0xfffffffffe000000ULL 
                                                   & ((QData)((IData)(
                                                                      vlSelf->top__DOT___2168_[0U])) 
                                                      << 9U)))) 
                                 | ((QData)((IData)(
                                                    (0x21U 
                                                     | (((IData)(vlSelf->top__DOT___0609_) 
                                                         << 0x12U) 
                                                        | (((IData)(vlSelf->top__DOT___0241_) 
                                                            << 0x11U) 
                                                           | (((IData)(vlSelf->top__DOT___0071_) 
                                                               << 0x10U) 
                                                              | ((0xe000U 
                                                                  & (vlSelf->top__DOT___1900_[2U] 
                                                                     << 7U)) 
                                                                 | ((0x1000U 
                                                                     & ((IData)(vlSelf->top__DOT___3822_) 
                                                                        << 6U)) 
                                                                    | ((0xe00U 
                                                                        & (vlSelf->top__DOT___1900_[2U] 
                                                                           << 7U)) 
                                                                       | ((0x100U 
                                                                           & ((IData)(vlSelf->top__DOT___3822_) 
                                                                              << 6U)) 
                                                                          | ((0x80U 
                                                                              & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                             | ((0x40U 
                                                                                & (vlSelf->top__DOT___1900_[1U] 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 1U))))))))))))))) 
                                    << 6U)) | (QData)((IData)(
                                                              (((IData)(vlSelf->top__DOT___1046_) 
                                                                << 5U) 
                                                               | ((0x10U 
                                                                   & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                      << 4U)) 
                                                                  | (((IData)(vlSelf->top__DOT___0404_) 
                                                                      << 3U) 
                                                                     | (7U 
                                                                        & (vlSelf->top__DOT___1900_[2U] 
                                                                           >> 6U)))))))) 
                               >> 0x20U)) >> 5U);
    __Vtemp_13[0U] = (((IData)((((QData)((IData)(((
                                                   (0xff800000U 
                                                    & (vlSelf->top__DOT___2000_[3U] 
                                                       << 0xbU)) 
                                                   | (((IData)(vlSelf->top__DOT___1361_) 
                                                       << 0x16U) 
                                                      | (0x3f8000U 
                                                         & (vlSelf->top__DOT___2000_[3U] 
                                                            << 0xbU)))) 
                                                  | (((IData)(vlSelf->top__DOT___1506_) 
                                                      << 0xeU) 
                                                     | ((0x2000U 
                                                         & (vlSelf->top__DOT___2000_[3U] 
                                                            << 0xbU)) 
                                                        | (((IData)(vlSelf->top__DOT___0113_) 
                                                            << 0xcU) 
                                                           | ((0xf80U 
                                                               & ((vlSelf->top__DOT___2000_[3U] 
                                                                   << 0xbU) 
                                                                  | (0x780U 
                                                                     & (vlSelf->top__DOT___2000_[2U] 
                                                                        >> 0x15U)))) 
                                                              | (((IData)(vlSelf->top__DOT___0313_) 
                                                                  << 6U) 
                                                                 | ((0x3eU 
                                                                     & (vlSelf->top__DOT___2000_[2U] 
                                                                        >> 0x15U)) 
                                                                    | (IData)(vlSelf->top__DOT___0737_)))))))))) 
                                 << 0x1cU) | (QData)((IData)(
                                                             ((0xf800000U 
                                                               & (vlSelf->top__DOT___2000_[2U] 
                                                                  << 7U)) 
                                                              | (((IData)(vlSelf->top__DOT___0354_) 
                                                                  << 0x16U) 
                                                                 | (((IData)(vlSelf->top__DOT___0226_) 
                                                                     << 0x15U) 
                                                                    | (((IData)(vlSelf->top__DOT___0071_) 
                                                                        << 0x14U) 
                                                                       | (((IData)(vlSelf->top__DOT___0463_) 
                                                                           << 0x13U) 
                                                                          | (((IData)(vlSelf->top__DOT___0134_) 
                                                                              << 0x12U) 
                                                                             | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 0x11U) 
                                                                                | ((0x1f000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 5U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                                << 0xaU) 
                                                                                | ((0x300U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 5U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)) 
                                                                                << 7U)) 
                                                                                | ((0x7eU 
                                                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                                                << 5U) 
                                                                                | (0x1eU 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x1bU)))) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU)))))))))))))))))))) 
                       << 0x1bU) | ((0x7c00000U & vlSelf->top__DOT___2121_[0U]) 
                                    | ((0x200000U & 
                                        (vlSelf->top__DOT___2031_[2U] 
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
                                                                           & vlSelf->top__DOT___2121_[0U])))))))))))))));
    __Vtemp_13[1U] = (((IData)((((QData)((IData)(((
                                                   (0xff800000U 
                                                    & (vlSelf->top__DOT___2000_[3U] 
                                                       << 0xbU)) 
                                                   | (((IData)(vlSelf->top__DOT___1361_) 
                                                       << 0x16U) 
                                                      | (0x3f8000U 
                                                         & (vlSelf->top__DOT___2000_[3U] 
                                                            << 0xbU)))) 
                                                  | (((IData)(vlSelf->top__DOT___1506_) 
                                                      << 0xeU) 
                                                     | ((0x2000U 
                                                         & (vlSelf->top__DOT___2000_[3U] 
                                                            << 0xbU)) 
                                                        | (((IData)(vlSelf->top__DOT___0113_) 
                                                            << 0xcU) 
                                                           | ((0xf80U 
                                                               & ((vlSelf->top__DOT___2000_[3U] 
                                                                   << 0xbU) 
                                                                  | (0x780U 
                                                                     & (vlSelf->top__DOT___2000_[2U] 
                                                                        >> 0x15U)))) 
                                                              | (((IData)(vlSelf->top__DOT___0313_) 
                                                                  << 6U) 
                                                                 | ((0x3eU 
                                                                     & (vlSelf->top__DOT___2000_[2U] 
                                                                        >> 0x15U)) 
                                                                    | (IData)(vlSelf->top__DOT___0737_)))))))))) 
                                 << 0x1cU) | (QData)((IData)(
                                                             ((0xf800000U 
                                                               & (vlSelf->top__DOT___2000_[2U] 
                                                                  << 7U)) 
                                                              | (((IData)(vlSelf->top__DOT___0354_) 
                                                                  << 0x16U) 
                                                                 | (((IData)(vlSelf->top__DOT___0226_) 
                                                                     << 0x15U) 
                                                                    | (((IData)(vlSelf->top__DOT___0071_) 
                                                                        << 0x14U) 
                                                                       | (((IData)(vlSelf->top__DOT___0463_) 
                                                                           << 0x13U) 
                                                                          | (((IData)(vlSelf->top__DOT___0134_) 
                                                                              << 0x12U) 
                                                                             | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 0x11U) 
                                                                                | ((0x1f000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 5U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                                << 0xaU) 
                                                                                | ((0x300U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 5U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)) 
                                                                                << 7U)) 
                                                                                | ((0x7eU 
                                                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                                                << 5U) 
                                                                                | (0x1eU 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x1bU)))) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU)))))))))))))))))))) 
                       >> 5U) | ((IData)(((((QData)((IData)(
                                                            (((0xff800000U 
                                                               & (vlSelf->top__DOT___2000_[3U] 
                                                                  << 0xbU)) 
                                                              | (((IData)(vlSelf->top__DOT___1361_) 
                                                                  << 0x16U) 
                                                                 | (0x3f8000U 
                                                                    & (vlSelf->top__DOT___2000_[3U] 
                                                                       << 0xbU)))) 
                                                             | (((IData)(vlSelf->top__DOT___1506_) 
                                                                 << 0xeU) 
                                                                | ((0x2000U 
                                                                    & (vlSelf->top__DOT___2000_[3U] 
                                                                       << 0xbU)) 
                                                                   | (((IData)(vlSelf->top__DOT___0113_) 
                                                                       << 0xcU) 
                                                                      | ((0xf80U 
                                                                          & ((vlSelf->top__DOT___2000_[3U] 
                                                                              << 0xbU) 
                                                                             | (0x780U 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0x15U)))) 
                                                                         | (((IData)(vlSelf->top__DOT___0313_) 
                                                                             << 6U) 
                                                                            | ((0x3eU 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0x15U)) 
                                                                               | (IData)(vlSelf->top__DOT___0737_)))))))))) 
                                            << 0x1cU) 
                                           | (QData)((IData)(
                                                             ((0xf800000U 
                                                               & (vlSelf->top__DOT___2000_[2U] 
                                                                  << 7U)) 
                                                              | (((IData)(vlSelf->top__DOT___0354_) 
                                                                  << 0x16U) 
                                                                 | (((IData)(vlSelf->top__DOT___0226_) 
                                                                     << 0x15U) 
                                                                    | (((IData)(vlSelf->top__DOT___0071_) 
                                                                        << 0x14U) 
                                                                       | (((IData)(vlSelf->top__DOT___0463_) 
                                                                           << 0x13U) 
                                                                          | (((IData)(vlSelf->top__DOT___0134_) 
                                                                              << 0x12U) 
                                                                             | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 0x11U) 
                                                                                | ((0x1f000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 5U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                                << 0xaU) 
                                                                                | ((0x300U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 5U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)) 
                                                                                << 7U)) 
                                                                                | ((0x7eU 
                                                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                                                << 5U) 
                                                                                | (0x1eU 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x1bU)))) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU))))))))))))))))))) 
                                          >> 0x20U)) 
                                 << 0x1bU));
    __Vtemp_13[2U] = ((IData)(((((QData)((IData)(((
                                                   (0xff800000U 
                                                    & (vlSelf->top__DOT___2000_[3U] 
                                                       << 0xbU)) 
                                                   | (((IData)(vlSelf->top__DOT___1361_) 
                                                       << 0x16U) 
                                                      | (0x3f8000U 
                                                         & (vlSelf->top__DOT___2000_[3U] 
                                                            << 0xbU)))) 
                                                  | (((IData)(vlSelf->top__DOT___1506_) 
                                                      << 0xeU) 
                                                     | ((0x2000U 
                                                         & (vlSelf->top__DOT___2000_[3U] 
                                                            << 0xbU)) 
                                                        | (((IData)(vlSelf->top__DOT___0113_) 
                                                            << 0xcU) 
                                                           | ((0xf80U 
                                                               & ((vlSelf->top__DOT___2000_[3U] 
                                                                   << 0xbU) 
                                                                  | (0x780U 
                                                                     & (vlSelf->top__DOT___2000_[2U] 
                                                                        >> 0x15U)))) 
                                                              | (((IData)(vlSelf->top__DOT___0313_) 
                                                                  << 6U) 
                                                                 | ((0x3eU 
                                                                     & (vlSelf->top__DOT___2000_[2U] 
                                                                        >> 0x15U)) 
                                                                    | (IData)(vlSelf->top__DOT___0737_)))))))))) 
                                 << 0x1cU) | (QData)((IData)(
                                                             ((0xf800000U 
                                                               & (vlSelf->top__DOT___2000_[2U] 
                                                                  << 7U)) 
                                                              | (((IData)(vlSelf->top__DOT___0354_) 
                                                                  << 0x16U) 
                                                                 | (((IData)(vlSelf->top__DOT___0226_) 
                                                                     << 0x15U) 
                                                                    | (((IData)(vlSelf->top__DOT___0071_) 
                                                                        << 0x14U) 
                                                                       | (((IData)(vlSelf->top__DOT___0463_) 
                                                                           << 0x13U) 
                                                                          | (((IData)(vlSelf->top__DOT___0134_) 
                                                                              << 0x12U) 
                                                                             | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 0x11U) 
                                                                                | ((0x1f000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 5U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                                << 0xaU) 
                                                                                | ((0x300U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 5U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)) 
                                                                                << 7U)) 
                                                                                | ((0x7eU 
                                                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                                                << 5U) 
                                                                                | (0x1eU 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x1bU)))) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU))))))))))))))))))) 
                               >> 0x20U)) >> 5U);
    VL_ADD_W(3, __Vtemp_14, __Vtemp_12, __Vtemp_13);
    vlSelf->top__DOT___1522_ = (1U & (__Vtemp_14[2U] 
                                      >> 0x16U));
    __Vtemp_17[0U] = (((IData)(((((QData)((IData)((0xfffffU 
                                                   & ((vlSelf->top__DOT___2168_[1U] 
                                                       << 0x10U) 
                                                      | (vlSelf->top__DOT___2168_[0U] 
                                                         >> 0x10U))))) 
                                  << 0x19U) | ((QData)((IData)(
                                                               (0x21U 
                                                                | (((IData)(vlSelf->top__DOT___0609_) 
                                                                    << 0x12U) 
                                                                   | (((IData)(vlSelf->top__DOT___0241_) 
                                                                       << 0x11U) 
                                                                      | (((IData)(vlSelf->top__DOT___0071_) 
                                                                          << 0x10U) 
                                                                         | ((0xe000U 
                                                                             & (vlSelf->top__DOT___1900_[2U] 
                                                                                << 7U)) 
                                                                            | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                               | ((0xe00U 
                                                                                & (vlSelf->top__DOT___1900_[2U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___1900_[1U] 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 1U))))))))))))))) 
                                               << 6U)) 
                                | (QData)((IData)((
                                                   ((IData)(vlSelf->top__DOT___1046_) 
                                                    << 5U) 
                                                   | ((0x10U 
                                                       & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                          << 4U)) 
                                                      | (((IData)(vlSelf->top__DOT___0404_) 
                                                          << 3U) 
                                                         | (7U 
                                                            & (vlSelf->top__DOT___1900_[2U] 
                                                               >> 6U))))))))) 
                       << 0x1bU) | ((0x4000000U & ((IData)(vlSelf->top__DOT___3822_) 
                                                   << 0x14U)) 
                                    | ((0x3800000U 
                                        & (vlSelf->top__DOT___1900_[2U] 
                                           << 0x15U)) 
                                       | ((0x400000U 
                                           & ((IData)(vlSelf->top__DOT___3822_) 
                                              << 0x14U)) 
                                          | ((0x200000U 
                                              & ((IData)(vlSelf->top__DOT___3822_) 
                                                 << 0x14U)) 
                                             | ((0x100000U 
                                                 & (vlSelf->top__DOT___1900_[1U] 
                                                    >> 0xbU)) 
                                                | ((0xfe000U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___2199_ 
                                                                >> 0x15U)) 
                                                       << 0xdU)) 
                                                   | (((IData)(vlSelf->top__DOT___0996_) 
                                                       << 0xcU) 
                                                      | ((0xf00U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT___2199_ 
                                                                      >> 0x10U)) 
                                                             << 8U)) 
                                                         | ((0xe0U 
                                                             & ((IData)(vlSelf->top__DOT___2010_) 
                                                                << 4U)) 
                                                            | (((IData)(vlSelf->top__DOT___0240_) 
                                                                << 4U) 
                                                               | (((IData)(vlSelf->top__DOT___0197_) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelf->top__DOT___0232_) 
                                                                      << 2U) 
                                                                     | (((IData)(vlSelf->top__DOT___0893_) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->top__DOT___0154_)))))))))))))));
    __Vtemp_17[1U] = (((IData)(((((QData)((IData)((0xfffffU 
                                                   & ((vlSelf->top__DOT___2168_[1U] 
                                                       << 0x10U) 
                                                      | (vlSelf->top__DOT___2168_[0U] 
                                                         >> 0x10U))))) 
                                  << 0x19U) | ((QData)((IData)(
                                                               (0x21U 
                                                                | (((IData)(vlSelf->top__DOT___0609_) 
                                                                    << 0x12U) 
                                                                   | (((IData)(vlSelf->top__DOT___0241_) 
                                                                       << 0x11U) 
                                                                      | (((IData)(vlSelf->top__DOT___0071_) 
                                                                          << 0x10U) 
                                                                         | ((0xe000U 
                                                                             & (vlSelf->top__DOT___1900_[2U] 
                                                                                << 7U)) 
                                                                            | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                               | ((0xe00U 
                                                                                & (vlSelf->top__DOT___1900_[2U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___1900_[1U] 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 1U))))))))))))))) 
                                               << 6U)) 
                                | (QData)((IData)((
                                                   ((IData)(vlSelf->top__DOT___1046_) 
                                                    << 5U) 
                                                   | ((0x10U 
                                                       & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                          << 4U)) 
                                                      | (((IData)(vlSelf->top__DOT___0404_) 
                                                          << 3U) 
                                                         | (7U 
                                                            & (vlSelf->top__DOT___1900_[2U] 
                                                               >> 6U))))))))) 
                       >> 5U) | ((IData)((((((QData)((IData)(
                                                             (0xfffffU 
                                                              & ((vlSelf->top__DOT___2168_[1U] 
                                                                  << 0x10U) 
                                                                 | (vlSelf->top__DOT___2168_[0U] 
                                                                    >> 0x10U))))) 
                                             << 0x19U) 
                                            | ((QData)((IData)(
                                                               (0x21U 
                                                                | (((IData)(vlSelf->top__DOT___0609_) 
                                                                    << 0x12U) 
                                                                   | (((IData)(vlSelf->top__DOT___0241_) 
                                                                       << 0x11U) 
                                                                      | (((IData)(vlSelf->top__DOT___0071_) 
                                                                          << 0x10U) 
                                                                         | ((0xe000U 
                                                                             & (vlSelf->top__DOT___1900_[2U] 
                                                                                << 7U)) 
                                                                            | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                               | ((0xe00U 
                                                                                & (vlSelf->top__DOT___1900_[2U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___1900_[1U] 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 1U))))))))))))))) 
                                               << 6U)) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___1046_) 
                                                               << 5U) 
                                                              | ((0x10U 
                                                                  & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                     << 4U)) 
                                                                 | (((IData)(vlSelf->top__DOT___0404_) 
                                                                     << 3U) 
                                                                    | (7U 
                                                                       & (vlSelf->top__DOT___1900_[2U] 
                                                                          >> 6U)))))))) 
                                          >> 0x20U)) 
                                 << 0x1bU));
    __Vtemp_17[2U] = ((IData)((((((QData)((IData)((0xfffffU 
                                                   & ((vlSelf->top__DOT___2168_[1U] 
                                                       << 0x10U) 
                                                      | (vlSelf->top__DOT___2168_[0U] 
                                                         >> 0x10U))))) 
                                  << 0x19U) | ((QData)((IData)(
                                                               (0x21U 
                                                                | (((IData)(vlSelf->top__DOT___0609_) 
                                                                    << 0x12U) 
                                                                   | (((IData)(vlSelf->top__DOT___0241_) 
                                                                       << 0x11U) 
                                                                      | (((IData)(vlSelf->top__DOT___0071_) 
                                                                          << 0x10U) 
                                                                         | ((0xe000U 
                                                                             & (vlSelf->top__DOT___1900_[2U] 
                                                                                << 7U)) 
                                                                            | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                               | ((0xe00U 
                                                                                & (vlSelf->top__DOT___1900_[2U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___1900_[1U] 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 1U))))))))))))))) 
                                               << 6U)) 
                                | (QData)((IData)((
                                                   ((IData)(vlSelf->top__DOT___1046_) 
                                                    << 5U) 
                                                   | ((0x10U 
                                                       & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                          << 4U)) 
                                                      | (((IData)(vlSelf->top__DOT___0404_) 
                                                          << 3U) 
                                                         | (7U 
                                                            & (vlSelf->top__DOT___1900_[2U] 
                                                               >> 6U)))))))) 
                               >> 0x20U)) >> 5U);
    __Vtemp_18[0U] = (((IData)((((QData)((IData)(((0x18000U 
                                                   & (vlSelf->top__DOT___2000_[3U] 
                                                      << 0xbU)) 
                                                  | (((IData)(vlSelf->top__DOT___1506_) 
                                                      << 0xeU) 
                                                     | ((0x2000U 
                                                         & (vlSelf->top__DOT___2000_[3U] 
                                                            << 0xbU)) 
                                                        | (((IData)(vlSelf->top__DOT___0113_) 
                                                            << 0xcU) 
                                                           | ((0xf80U 
                                                               & ((vlSelf->top__DOT___2000_[3U] 
                                                                   << 0xbU) 
                                                                  | (0x780U 
                                                                     & (vlSelf->top__DOT___2000_[2U] 
                                                                        >> 0x15U)))) 
                                                              | (((IData)(vlSelf->top__DOT___0313_) 
                                                                  << 6U) 
                                                                 | ((0x3eU 
                                                                     & (vlSelf->top__DOT___2000_[2U] 
                                                                        >> 0x15U)) 
                                                                    | (IData)(vlSelf->top__DOT___0737_)))))))))) 
                                 << 0x21U) | (((QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                   >> 0x10U)))) 
                                               << 0x1cU) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->top__DOT___0354_) 
                                                                  << 0x1bU) 
                                                                 | (((IData)(vlSelf->top__DOT___0226_) 
                                                                     << 0x1aU) 
                                                                    | (((IData)(vlSelf->top__DOT___0071_) 
                                                                        << 0x19U) 
                                                                       | (((IData)(vlSelf->top__DOT___0463_) 
                                                                           << 0x18U) 
                                                                          | (((IData)(vlSelf->top__DOT___0134_) 
                                                                              << 0x17U) 
                                                                             | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 0x16U) 
                                                                                | ((0x3e0000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)) 
                                                                                << 0xcU)) 
                                                                                | ((0xfc0U 
                                                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU) 
                                                                                | (0x3c0U 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))))))))))))))))))) 
                       << 0x16U) | ((0x200000U & (vlSelf->top__DOT___2031_[2U] 
                                                  << 0x13U)) 
                                    | ((0x100000U & 
                                        ((IData)((vlSelf->top__DOT___3747_ 
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
                                                                        & vlSelf->top__DOT___2121_[0U]))))))))))))));
    __Vtemp_18[1U] = (((IData)((((QData)((IData)(((0x18000U 
                                                   & (vlSelf->top__DOT___2000_[3U] 
                                                      << 0xbU)) 
                                                  | (((IData)(vlSelf->top__DOT___1506_) 
                                                      << 0xeU) 
                                                     | ((0x2000U 
                                                         & (vlSelf->top__DOT___2000_[3U] 
                                                            << 0xbU)) 
                                                        | (((IData)(vlSelf->top__DOT___0113_) 
                                                            << 0xcU) 
                                                           | ((0xf80U 
                                                               & ((vlSelf->top__DOT___2000_[3U] 
                                                                   << 0xbU) 
                                                                  | (0x780U 
                                                                     & (vlSelf->top__DOT___2000_[2U] 
                                                                        >> 0x15U)))) 
                                                              | (((IData)(vlSelf->top__DOT___0313_) 
                                                                  << 6U) 
                                                                 | ((0x3eU 
                                                                     & (vlSelf->top__DOT___2000_[2U] 
                                                                        >> 0x15U)) 
                                                                    | (IData)(vlSelf->top__DOT___0737_)))))))))) 
                                 << 0x21U) | (((QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                   >> 0x10U)))) 
                                               << 0x1cU) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->top__DOT___0354_) 
                                                                  << 0x1bU) 
                                                                 | (((IData)(vlSelf->top__DOT___0226_) 
                                                                     << 0x1aU) 
                                                                    | (((IData)(vlSelf->top__DOT___0071_) 
                                                                        << 0x19U) 
                                                                       | (((IData)(vlSelf->top__DOT___0463_) 
                                                                           << 0x18U) 
                                                                          | (((IData)(vlSelf->top__DOT___0134_) 
                                                                              << 0x17U) 
                                                                             | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 0x16U) 
                                                                                | ((0x3e0000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)) 
                                                                                << 0xcU)) 
                                                                                | ((0xfc0U 
                                                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU) 
                                                                                | (0x3c0U 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))))))))))))))))))) 
                       >> 0xaU) | ((IData)(((((QData)((IData)(
                                                              ((0x18000U 
                                                                & (vlSelf->top__DOT___2000_[3U] 
                                                                   << 0xbU)) 
                                                               | (((IData)(vlSelf->top__DOT___1506_) 
                                                                   << 0xeU) 
                                                                  | ((0x2000U 
                                                                      & (vlSelf->top__DOT___2000_[3U] 
                                                                         << 0xbU)) 
                                                                     | (((IData)(vlSelf->top__DOT___0113_) 
                                                                         << 0xcU) 
                                                                        | ((0xf80U 
                                                                            & ((vlSelf->top__DOT___2000_[3U] 
                                                                                << 0xbU) 
                                                                               | (0x780U 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0x15U)))) 
                                                                           | (((IData)(vlSelf->top__DOT___0313_) 
                                                                               << 6U) 
                                                                              | ((0x3eU 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0x15U)) 
                                                                                | (IData)(vlSelf->top__DOT___0737_)))))))))) 
                                              << 0x21U) 
                                             | (((QData)((IData)(
                                                                 (0x1fU 
                                                                  & (vlSelf->top__DOT___2000_[2U] 
                                                                     >> 0x10U)))) 
                                                 << 0x1cU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->top__DOT___0354_) 
                                                                    << 0x1bU) 
                                                                   | (((IData)(vlSelf->top__DOT___0226_) 
                                                                       << 0x1aU) 
                                                                      | (((IData)(vlSelf->top__DOT___0071_) 
                                                                          << 0x19U) 
                                                                         | (((IData)(vlSelf->top__DOT___0463_) 
                                                                             << 0x18U) 
                                                                            | (((IData)(vlSelf->top__DOT___0134_) 
                                                                                << 0x17U) 
                                                                               | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 0x16U) 
                                                                                | ((0x3e0000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)) 
                                                                                << 0xcU)) 
                                                                                | ((0xfc0U 
                                                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU) 
                                                                                | (0x3c0U 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U))))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 0x16U));
    __Vtemp_18[2U] = ((IData)(((((QData)((IData)(((0x18000U 
                                                   & (vlSelf->top__DOT___2000_[3U] 
                                                      << 0xbU)) 
                                                  | (((IData)(vlSelf->top__DOT___1506_) 
                                                      << 0xeU) 
                                                     | ((0x2000U 
                                                         & (vlSelf->top__DOT___2000_[3U] 
                                                            << 0xbU)) 
                                                        | (((IData)(vlSelf->top__DOT___0113_) 
                                                            << 0xcU) 
                                                           | ((0xf80U 
                                                               & ((vlSelf->top__DOT___2000_[3U] 
                                                                   << 0xbU) 
                                                                  | (0x780U 
                                                                     & (vlSelf->top__DOT___2000_[2U] 
                                                                        >> 0x15U)))) 
                                                              | (((IData)(vlSelf->top__DOT___0313_) 
                                                                  << 6U) 
                                                                 | ((0x3eU 
                                                                     & (vlSelf->top__DOT___2000_[2U] 
                                                                        >> 0x15U)) 
                                                                    | (IData)(vlSelf->top__DOT___0737_)))))))))) 
                                 << 0x21U) | (((QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                   >> 0x10U)))) 
                                               << 0x1cU) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->top__DOT___0354_) 
                                                                  << 0x1bU) 
                                                                 | (((IData)(vlSelf->top__DOT___0226_) 
                                                                     << 0x1aU) 
                                                                    | (((IData)(vlSelf->top__DOT___0071_) 
                                                                        << 0x19U) 
                                                                       | (((IData)(vlSelf->top__DOT___0463_) 
                                                                           << 0x18U) 
                                                                          | (((IData)(vlSelf->top__DOT___0134_) 
                                                                              << 0x17U) 
                                                                             | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 0x16U) 
                                                                                | ((0x3e0000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)) 
                                                                                << 0xcU)) 
                                                                                | ((0xfc0U 
                                                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU) 
                                                                                | (0x3c0U 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U))))))))))))))))))) 
                               >> 0x20U)) >> 0xaU);
    VL_ADD_W(3, __Vtemp_19, __Vtemp_17, __Vtemp_18);
    vlSelf->top__DOT___2016_ = ((0x3fffc0U & (__Vtemp_19[1U] 
                                              >> 2U)) 
                                | (((IData)(vlSelf->top__DOT___0145_) 
                                    << 5U) | (((IData)(vlSelf->top__DOT___0122_) 
                                               << 4U) 
                                              | (((IData)(vlSelf->top__DOT___0042_) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT___1449_) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->top__DOT___0594_) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->top__DOT___0521_)))))));
    vlSelf->top__DOT___0548_ = (1U & ((((0x300000U 
                                         & (vlSelf->top__DOT___2000_[0U] 
                                            << 1U)) 
                                        | (((IData)(vlSelf->top__DOT___0564_) 
                                            << 0x13U) 
                                           | ((0x78000U 
                                               & (vlSelf->top__DOT___2000_[0U] 
                                                  << 1U)) 
                                              | (((IData)(vlSelf->top__DOT___0925_) 
                                                  << 0xeU) 
                                                 | ((0x3e00U 
                                                     & ((IData)(vlSelf->top__DOT___1939_) 
                                                        << 1U)) 
                                                    | (((IData)(vlSelf->top__DOT___0501_) 
                                                        << 8U) 
                                                       | ((0x80U 
                                                           & ((IData)(vlSelf->top__DOT___1939_) 
                                                              << 1U)) 
                                                          | (((IData)(vlSelf->top__DOT___1306_) 
                                                              << 6U) 
                                                             | ((0x30U 
                                                                 & (vlSelf->top__DOT___2000_[0U] 
                                                                    << 1U)) 
                                                                | (((IData)(vlSelf->top__DOT___1632_) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSelf->top__DOT___1373_) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->top__DOT___0609_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0137_))))))))))))) 
                                       + ((0x3fffc0U 
                                           & vlSelf->top__DOT___2016_) 
                                          | (((IData)(vlSelf->top__DOT___0145_) 
                                              << 5U) 
                                             | (((IData)(vlSelf->top__DOT___0122_) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->top__DOT___0042_) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->top__DOT___1449_) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->top__DOT___0594_) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top__DOT___0521_)))))))) 
                                      >> 0x15U));
}

VL_INLINE_OPT void Vtop___024root___ico_comb__TOP__354(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__354\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    // Body
    __Vtemp_2[0U] = (((IData)(((((QData)((IData)((0xfffffU 
                                                  & ((vlSelf->top__DOT___2168_[1U] 
                                                      << 0x10U) 
                                                     | (vlSelf->top__DOT___2168_[0U] 
                                                        >> 0x10U))))) 
                                 << 0x19U) | ((QData)((IData)(
                                                              (0x21U 
                                                               | (((IData)(vlSelf->top__DOT___0609_) 
                                                                   << 0x12U) 
                                                                  | (((IData)(vlSelf->top__DOT___0241_) 
                                                                      << 0x11U) 
                                                                     | (((IData)(vlSelf->top__DOT___0071_) 
                                                                         << 0x10U) 
                                                                        | ((0xe000U 
                                                                            & (vlSelf->top__DOT___1900_[2U] 
                                                                               << 7U)) 
                                                                           | ((0x1000U 
                                                                               & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                              | ((0xe00U 
                                                                                & (vlSelf->top__DOT___1900_[2U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___1900_[1U] 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 1U))))))))))))))) 
                                              << 6U)) 
                               | (QData)((IData)((((IData)(vlSelf->top__DOT___1046_) 
                                                   << 5U) 
                                                  | ((0x10U 
                                                      & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                         << 4U)) 
                                                     | (((IData)(vlSelf->top__DOT___0404_) 
                                                         << 3U) 
                                                        | (7U 
                                                           & (vlSelf->top__DOT___1900_[2U] 
                                                              >> 6U))))))))) 
                      << 0x1bU) | ((0x4000000U & ((IData)(vlSelf->top__DOT___3822_) 
                                                  << 0x14U)) 
                                   | ((0x3800000U & 
                                       (vlSelf->top__DOT___1900_[2U] 
                                        << 0x15U)) 
                                      | ((0x400000U 
                                          & ((IData)(vlSelf->top__DOT___3822_) 
                                             << 0x14U)) 
                                         | ((0x200000U 
                                             & ((IData)(vlSelf->top__DOT___3822_) 
                                                << 0x14U)) 
                                            | ((0x100000U 
                                                & (vlSelf->top__DOT___1900_[1U] 
                                                   >> 0xbU)) 
                                               | ((0xfe000U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT___2199_ 
                                                               >> 0x15U)) 
                                                      << 0xdU)) 
                                                  | (((IData)(vlSelf->top__DOT___0996_) 
                                                      << 0xcU) 
                                                     | ((0xf00U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT___2199_ 
                                                                     >> 0x10U)) 
                                                            << 8U)) 
                                                        | ((0xe0U 
                                                            & ((IData)(vlSelf->top__DOT___2010_) 
                                                               << 4U)) 
                                                           | (((IData)(vlSelf->top__DOT___0240_) 
                                                               << 4U) 
                                                              | (((IData)(vlSelf->top__DOT___0197_) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelf->top__DOT___0232_) 
                                                                     << 2U) 
                                                                    | (((IData)(vlSelf->top__DOT___0893_) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelf->top__DOT___0154_)))))))))))))));
    __Vtemp_2[1U] = (((IData)(((((QData)((IData)((0xfffffU 
                                                  & ((vlSelf->top__DOT___2168_[1U] 
                                                      << 0x10U) 
                                                     | (vlSelf->top__DOT___2168_[0U] 
                                                        >> 0x10U))))) 
                                 << 0x19U) | ((QData)((IData)(
                                                              (0x21U 
                                                               | (((IData)(vlSelf->top__DOT___0609_) 
                                                                   << 0x12U) 
                                                                  | (((IData)(vlSelf->top__DOT___0241_) 
                                                                      << 0x11U) 
                                                                     | (((IData)(vlSelf->top__DOT___0071_) 
                                                                         << 0x10U) 
                                                                        | ((0xe000U 
                                                                            & (vlSelf->top__DOT___1900_[2U] 
                                                                               << 7U)) 
                                                                           | ((0x1000U 
                                                                               & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                              | ((0xe00U 
                                                                                & (vlSelf->top__DOT___1900_[2U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___1900_[1U] 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 1U))))))))))))))) 
                                              << 6U)) 
                               | (QData)((IData)((((IData)(vlSelf->top__DOT___1046_) 
                                                   << 5U) 
                                                  | ((0x10U 
                                                      & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                         << 4U)) 
                                                     | (((IData)(vlSelf->top__DOT___0404_) 
                                                         << 3U) 
                                                        | (7U 
                                                           & (vlSelf->top__DOT___1900_[2U] 
                                                              >> 6U))))))))) 
                      >> 5U) | ((IData)((((((QData)((IData)(
                                                            (0xfffffU 
                                                             & ((vlSelf->top__DOT___2168_[1U] 
                                                                 << 0x10U) 
                                                                | (vlSelf->top__DOT___2168_[0U] 
                                                                   >> 0x10U))))) 
                                            << 0x19U) 
                                           | ((QData)((IData)(
                                                              (0x21U 
                                                               | (((IData)(vlSelf->top__DOT___0609_) 
                                                                   << 0x12U) 
                                                                  | (((IData)(vlSelf->top__DOT___0241_) 
                                                                      << 0x11U) 
                                                                     | (((IData)(vlSelf->top__DOT___0071_) 
                                                                         << 0x10U) 
                                                                        | ((0xe000U 
                                                                            & (vlSelf->top__DOT___1900_[2U] 
                                                                               << 7U)) 
                                                                           | ((0x1000U 
                                                                               & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                              | ((0xe00U 
                                                                                & (vlSelf->top__DOT___1900_[2U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___1900_[1U] 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 1U))))))))))))))) 
                                              << 6U)) 
                                          | (QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT___1046_) 
                                                              << 5U) 
                                                             | ((0x10U 
                                                                 & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                    << 4U)) 
                                                                | (((IData)(vlSelf->top__DOT___0404_) 
                                                                    << 3U) 
                                                                   | (7U 
                                                                      & (vlSelf->top__DOT___1900_[2U] 
                                                                         >> 6U)))))))) 
                                         >> 0x20U)) 
                                << 0x1bU));
    __Vtemp_2[2U] = ((IData)((((((QData)((IData)((0xfffffU 
                                                  & ((vlSelf->top__DOT___2168_[1U] 
                                                      << 0x10U) 
                                                     | (vlSelf->top__DOT___2168_[0U] 
                                                        >> 0x10U))))) 
                                 << 0x19U) | ((QData)((IData)(
                                                              (0x21U 
                                                               | (((IData)(vlSelf->top__DOT___0609_) 
                                                                   << 0x12U) 
                                                                  | (((IData)(vlSelf->top__DOT___0241_) 
                                                                      << 0x11U) 
                                                                     | (((IData)(vlSelf->top__DOT___0071_) 
                                                                         << 0x10U) 
                                                                        | ((0xe000U 
                                                                            & (vlSelf->top__DOT___1900_[2U] 
                                                                               << 7U)) 
                                                                           | ((0x1000U 
                                                                               & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                              | ((0xe00U 
                                                                                & (vlSelf->top__DOT___1900_[2U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___1900_[1U] 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 1U))))))))))))))) 
                                              << 6U)) 
                               | (QData)((IData)((((IData)(vlSelf->top__DOT___1046_) 
                                                   << 5U) 
                                                  | ((0x10U 
                                                      & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                         << 4U)) 
                                                     | (((IData)(vlSelf->top__DOT___0404_) 
                                                         << 3U) 
                                                        | (7U 
                                                           & (vlSelf->top__DOT___1900_[2U] 
                                                              >> 6U)))))))) 
                              >> 0x20U)) >> 5U);
    __Vtemp_3[0U] = (((IData)((((QData)((IData)(((0x18000U 
                                                  & (vlSelf->top__DOT___2000_[3U] 
                                                     << 0xbU)) 
                                                 | (((IData)(vlSelf->top__DOT___1506_) 
                                                     << 0xeU) 
                                                    | ((0x2000U 
                                                        & (vlSelf->top__DOT___2000_[3U] 
                                                           << 0xbU)) 
                                                       | (((IData)(vlSelf->top__DOT___0113_) 
                                                           << 0xcU) 
                                                          | ((0xf80U 
                                                              & ((vlSelf->top__DOT___2000_[3U] 
                                                                  << 0xbU) 
                                                                 | (0x780U 
                                                                    & (vlSelf->top__DOT___2000_[2U] 
                                                                       >> 0x15U)))) 
                                                             | (((IData)(vlSelf->top__DOT___0313_) 
                                                                 << 6U) 
                                                                | ((0x3eU 
                                                                    & (vlSelf->top__DOT___2000_[2U] 
                                                                       >> 0x15U)) 
                                                                   | (IData)(vlSelf->top__DOT___0737_)))))))))) 
                                << 0x21U) | (((QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT___2000_[2U] 
                                                                  >> 0x10U)))) 
                                              << 0x1cU) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___0354_) 
                                                                 << 0x1bU) 
                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                    << 0x1aU) 
                                                                   | (((IData)(vlSelf->top__DOT___0071_) 
                                                                       << 0x19U) 
                                                                      | (((IData)(vlSelf->top__DOT___0463_) 
                                                                          << 0x18U) 
                                                                         | (((IData)(vlSelf->top__DOT___0134_) 
                                                                             << 0x17U) 
                                                                            | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 0x16U) 
                                                                               | ((0x3e0000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)) 
                                                                                << 0xcU)) 
                                                                                | ((0xfc0U 
                                                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU) 
                                                                                | (0x3c0U 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))))))))))))))))))) 
                      << 0x16U) | ((0x200000U & (vlSelf->top__DOT___2031_[2U] 
                                                 << 0x13U)) 
                                   | ((0x100000U & 
                                       ((IData)((vlSelf->top__DOT___3747_ 
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
                                                                       & vlSelf->top__DOT___2121_[0U]))))))))))))));
    __Vtemp_3[1U] = (((IData)((((QData)((IData)(((0x18000U 
                                                  & (vlSelf->top__DOT___2000_[3U] 
                                                     << 0xbU)) 
                                                 | (((IData)(vlSelf->top__DOT___1506_) 
                                                     << 0xeU) 
                                                    | ((0x2000U 
                                                        & (vlSelf->top__DOT___2000_[3U] 
                                                           << 0xbU)) 
                                                       | (((IData)(vlSelf->top__DOT___0113_) 
                                                           << 0xcU) 
                                                          | ((0xf80U 
                                                              & ((vlSelf->top__DOT___2000_[3U] 
                                                                  << 0xbU) 
                                                                 | (0x780U 
                                                                    & (vlSelf->top__DOT___2000_[2U] 
                                                                       >> 0x15U)))) 
                                                             | (((IData)(vlSelf->top__DOT___0313_) 
                                                                 << 6U) 
                                                                | ((0x3eU 
                                                                    & (vlSelf->top__DOT___2000_[2U] 
                                                                       >> 0x15U)) 
                                                                   | (IData)(vlSelf->top__DOT___0737_)))))))))) 
                                << 0x21U) | (((QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT___2000_[2U] 
                                                                  >> 0x10U)))) 
                                              << 0x1cU) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___0354_) 
                                                                 << 0x1bU) 
                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                    << 0x1aU) 
                                                                   | (((IData)(vlSelf->top__DOT___0071_) 
                                                                       << 0x19U) 
                                                                      | (((IData)(vlSelf->top__DOT___0463_) 
                                                                          << 0x18U) 
                                                                         | (((IData)(vlSelf->top__DOT___0134_) 
                                                                             << 0x17U) 
                                                                            | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 0x16U) 
                                                                               | ((0x3e0000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)) 
                                                                                << 0xcU)) 
                                                                                | ((0xfc0U 
                                                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU) 
                                                                                | (0x3c0U 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))))))))))))))))))) 
                      >> 0xaU) | ((IData)(((((QData)((IData)(
                                                             ((0x18000U 
                                                               & (vlSelf->top__DOT___2000_[3U] 
                                                                  << 0xbU)) 
                                                              | (((IData)(vlSelf->top__DOT___1506_) 
                                                                  << 0xeU) 
                                                                 | ((0x2000U 
                                                                     & (vlSelf->top__DOT___2000_[3U] 
                                                                        << 0xbU)) 
                                                                    | (((IData)(vlSelf->top__DOT___0113_) 
                                                                        << 0xcU) 
                                                                       | ((0xf80U 
                                                                           & ((vlSelf->top__DOT___2000_[3U] 
                                                                               << 0xbU) 
                                                                              | (0x780U 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0x15U)))) 
                                                                          | (((IData)(vlSelf->top__DOT___0313_) 
                                                                              << 6U) 
                                                                             | ((0x3eU 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0x15U)) 
                                                                                | (IData)(vlSelf->top__DOT___0737_)))))))))) 
                                             << 0x21U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & (vlSelf->top__DOT___2000_[2U] 
                                                                    >> 0x10U)))) 
                                                << 0x1cU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->top__DOT___0354_) 
                                                                   << 0x1bU) 
                                                                  | (((IData)(vlSelf->top__DOT___0226_) 
                                                                      << 0x1aU) 
                                                                     | (((IData)(vlSelf->top__DOT___0071_) 
                                                                         << 0x19U) 
                                                                        | (((IData)(vlSelf->top__DOT___0463_) 
                                                                            << 0x18U) 
                                                                           | (((IData)(vlSelf->top__DOT___0134_) 
                                                                               << 0x17U) 
                                                                              | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 0x16U) 
                                                                                | ((0x3e0000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)) 
                                                                                << 0xcU)) 
                                                                                | ((0xfc0U 
                                                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU) 
                                                                                | (0x3c0U 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U))))))))))))))))))) 
                                           >> 0x20U)) 
                                  << 0x16U));
    __Vtemp_3[2U] = ((IData)(((((QData)((IData)(((0x18000U 
                                                  & (vlSelf->top__DOT___2000_[3U] 
                                                     << 0xbU)) 
                                                 | (((IData)(vlSelf->top__DOT___1506_) 
                                                     << 0xeU) 
                                                    | ((0x2000U 
                                                        & (vlSelf->top__DOT___2000_[3U] 
                                                           << 0xbU)) 
                                                       | (((IData)(vlSelf->top__DOT___0113_) 
                                                           << 0xcU) 
                                                          | ((0xf80U 
                                                              & ((vlSelf->top__DOT___2000_[3U] 
                                                                  << 0xbU) 
                                                                 | (0x780U 
                                                                    & (vlSelf->top__DOT___2000_[2U] 
                                                                       >> 0x15U)))) 
                                                             | (((IData)(vlSelf->top__DOT___0313_) 
                                                                 << 6U) 
                                                                | ((0x3eU 
                                                                    & (vlSelf->top__DOT___2000_[2U] 
                                                                       >> 0x15U)) 
                                                                   | (IData)(vlSelf->top__DOT___0737_)))))))))) 
                                << 0x21U) | (((QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT___2000_[2U] 
                                                                  >> 0x10U)))) 
                                              << 0x1cU) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___0354_) 
                                                                 << 0x1bU) 
                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                    << 0x1aU) 
                                                                   | (((IData)(vlSelf->top__DOT___0071_) 
                                                                       << 0x19U) 
                                                                      | (((IData)(vlSelf->top__DOT___0463_) 
                                                                          << 0x18U) 
                                                                         | (((IData)(vlSelf->top__DOT___0134_) 
                                                                             << 0x17U) 
                                                                            | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 0x16U) 
                                                                               | ((0x3e0000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)) 
                                                                                << 0xcU)) 
                                                                                | ((0xfc0U 
                                                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU) 
                                                                                | (0x3c0U 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U))))))))))))))))))) 
                              >> 0x20U)) >> 0xaU);
    VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    __Vtemp_7[0U] = (((IData)(((((QData)((IData)((0xfffffU 
                                                  & ((vlSelf->top__DOT___2168_[1U] 
                                                      << 0x10U) 
                                                     | (vlSelf->top__DOT___2168_[0U] 
                                                        >> 0x10U))))) 
                                 << 0x19U) | ((QData)((IData)(
                                                              (0x21U 
                                                               | (((IData)(vlSelf->top__DOT___0609_) 
                                                                   << 0x12U) 
                                                                  | (((IData)(vlSelf->top__DOT___0241_) 
                                                                      << 0x11U) 
                                                                     | (((IData)(vlSelf->top__DOT___0071_) 
                                                                         << 0x10U) 
                                                                        | ((0xe000U 
                                                                            & (vlSelf->top__DOT___1900_[2U] 
                                                                               << 7U)) 
                                                                           | ((0x1000U 
                                                                               & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                              | ((0xe00U 
                                                                                & (vlSelf->top__DOT___1900_[2U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___1900_[1U] 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 1U))))))))))))))) 
                                              << 6U)) 
                               | (QData)((IData)((((IData)(vlSelf->top__DOT___1046_) 
                                                   << 5U) 
                                                  | ((0x10U 
                                                      & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                         << 4U)) 
                                                     | (((IData)(vlSelf->top__DOT___0404_) 
                                                         << 3U) 
                                                        | (7U 
                                                           & (vlSelf->top__DOT___1900_[2U] 
                                                              >> 6U))))))))) 
                      << 0x1bU) | ((0x4000000U & ((IData)(vlSelf->top__DOT___3822_) 
                                                  << 0x14U)) 
                                   | ((0x3800000U & 
                                       (vlSelf->top__DOT___1900_[2U] 
                                        << 0x15U)) 
                                      | ((0x400000U 
                                          & ((IData)(vlSelf->top__DOT___3822_) 
                                             << 0x14U)) 
                                         | ((0x200000U 
                                             & ((IData)(vlSelf->top__DOT___3822_) 
                                                << 0x14U)) 
                                            | ((0x100000U 
                                                & (vlSelf->top__DOT___1900_[1U] 
                                                   >> 0xbU)) 
                                               | ((0xfe000U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT___2199_ 
                                                               >> 0x15U)) 
                                                      << 0xdU)) 
                                                  | (((IData)(vlSelf->top__DOT___0996_) 
                                                      << 0xcU) 
                                                     | ((0xf00U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT___2199_ 
                                                                     >> 0x10U)) 
                                                            << 8U)) 
                                                        | ((0xe0U 
                                                            & ((IData)(vlSelf->top__DOT___2010_) 
                                                               << 4U)) 
                                                           | (((IData)(vlSelf->top__DOT___0240_) 
                                                               << 4U) 
                                                              | (((IData)(vlSelf->top__DOT___0197_) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelf->top__DOT___0232_) 
                                                                     << 2U) 
                                                                    | (((IData)(vlSelf->top__DOT___0893_) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelf->top__DOT___0154_)))))))))))))));
    __Vtemp_7[1U] = (((IData)(((((QData)((IData)((0xfffffU 
                                                  & ((vlSelf->top__DOT___2168_[1U] 
                                                      << 0x10U) 
                                                     | (vlSelf->top__DOT___2168_[0U] 
                                                        >> 0x10U))))) 
                                 << 0x19U) | ((QData)((IData)(
                                                              (0x21U 
                                                               | (((IData)(vlSelf->top__DOT___0609_) 
                                                                   << 0x12U) 
                                                                  | (((IData)(vlSelf->top__DOT___0241_) 
                                                                      << 0x11U) 
                                                                     | (((IData)(vlSelf->top__DOT___0071_) 
                                                                         << 0x10U) 
                                                                        | ((0xe000U 
                                                                            & (vlSelf->top__DOT___1900_[2U] 
                                                                               << 7U)) 
                                                                           | ((0x1000U 
                                                                               & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                              | ((0xe00U 
                                                                                & (vlSelf->top__DOT___1900_[2U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___1900_[1U] 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 1U))))))))))))))) 
                                              << 6U)) 
                               | (QData)((IData)((((IData)(vlSelf->top__DOT___1046_) 
                                                   << 5U) 
                                                  | ((0x10U 
                                                      & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                         << 4U)) 
                                                     | (((IData)(vlSelf->top__DOT___0404_) 
                                                         << 3U) 
                                                        | (7U 
                                                           & (vlSelf->top__DOT___1900_[2U] 
                                                              >> 6U))))))))) 
                      >> 5U) | ((IData)((((((QData)((IData)(
                                                            (0xfffffU 
                                                             & ((vlSelf->top__DOT___2168_[1U] 
                                                                 << 0x10U) 
                                                                | (vlSelf->top__DOT___2168_[0U] 
                                                                   >> 0x10U))))) 
                                            << 0x19U) 
                                           | ((QData)((IData)(
                                                              (0x21U 
                                                               | (((IData)(vlSelf->top__DOT___0609_) 
                                                                   << 0x12U) 
                                                                  | (((IData)(vlSelf->top__DOT___0241_) 
                                                                      << 0x11U) 
                                                                     | (((IData)(vlSelf->top__DOT___0071_) 
                                                                         << 0x10U) 
                                                                        | ((0xe000U 
                                                                            & (vlSelf->top__DOT___1900_[2U] 
                                                                               << 7U)) 
                                                                           | ((0x1000U 
                                                                               & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                              | ((0xe00U 
                                                                                & (vlSelf->top__DOT___1900_[2U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___1900_[1U] 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 1U))))))))))))))) 
                                              << 6U)) 
                                          | (QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT___1046_) 
                                                              << 5U) 
                                                             | ((0x10U 
                                                                 & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                    << 4U)) 
                                                                | (((IData)(vlSelf->top__DOT___0404_) 
                                                                    << 3U) 
                                                                   | (7U 
                                                                      & (vlSelf->top__DOT___1900_[2U] 
                                                                         >> 6U)))))))) 
                                         >> 0x20U)) 
                                << 0x1bU));
    __Vtemp_7[2U] = ((IData)((((((QData)((IData)((0xfffffU 
                                                  & ((vlSelf->top__DOT___2168_[1U] 
                                                      << 0x10U) 
                                                     | (vlSelf->top__DOT___2168_[0U] 
                                                        >> 0x10U))))) 
                                 << 0x19U) | ((QData)((IData)(
                                                              (0x21U 
                                                               | (((IData)(vlSelf->top__DOT___0609_) 
                                                                   << 0x12U) 
                                                                  | (((IData)(vlSelf->top__DOT___0241_) 
                                                                      << 0x11U) 
                                                                     | (((IData)(vlSelf->top__DOT___0071_) 
                                                                         << 0x10U) 
                                                                        | ((0xe000U 
                                                                            & (vlSelf->top__DOT___1900_[2U] 
                                                                               << 7U)) 
                                                                           | ((0x1000U 
                                                                               & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                              | ((0xe00U 
                                                                                & (vlSelf->top__DOT___1900_[2U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___3822_) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___1900_[1U] 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 1U))))))))))))))) 
                                              << 6U)) 
                               | (QData)((IData)((((IData)(vlSelf->top__DOT___1046_) 
                                                   << 5U) 
                                                  | ((0x10U 
                                                      & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                         << 4U)) 
                                                     | (((IData)(vlSelf->top__DOT___0404_) 
                                                         << 3U) 
                                                        | (7U 
                                                           & (vlSelf->top__DOT___1900_[2U] 
                                                              >> 6U)))))))) 
                              >> 0x20U)) >> 5U);
    __Vtemp_8[0U] = (((IData)((((QData)((IData)(((0x18000U 
                                                  & (vlSelf->top__DOT___2000_[3U] 
                                                     << 0xbU)) 
                                                 | (((IData)(vlSelf->top__DOT___1506_) 
                                                     << 0xeU) 
                                                    | ((0x2000U 
                                                        & (vlSelf->top__DOT___2000_[3U] 
                                                           << 0xbU)) 
                                                       | (((IData)(vlSelf->top__DOT___0113_) 
                                                           << 0xcU) 
                                                          | ((0xf80U 
                                                              & ((vlSelf->top__DOT___2000_[3U] 
                                                                  << 0xbU) 
                                                                 | (0x780U 
                                                                    & (vlSelf->top__DOT___2000_[2U] 
                                                                       >> 0x15U)))) 
                                                             | (((IData)(vlSelf->top__DOT___0313_) 
                                                                 << 6U) 
                                                                | ((0x3eU 
                                                                    & (vlSelf->top__DOT___2000_[2U] 
                                                                       >> 0x15U)) 
                                                                   | (IData)(vlSelf->top__DOT___0737_)))))))))) 
                                << 0x21U) | (((QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT___2000_[2U] 
                                                                  >> 0x10U)))) 
                                              << 0x1cU) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___0354_) 
                                                                 << 0x1bU) 
                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                    << 0x1aU) 
                                                                   | (((IData)(vlSelf->top__DOT___0071_) 
                                                                       << 0x19U) 
                                                                      | (((IData)(vlSelf->top__DOT___0463_) 
                                                                          << 0x18U) 
                                                                         | (((IData)(vlSelf->top__DOT___0134_) 
                                                                             << 0x17U) 
                                                                            | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 0x16U) 
                                                                               | ((0x3e0000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)) 
                                                                                << 0xcU)) 
                                                                                | ((0xfc0U 
                                                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU) 
                                                                                | (0x3c0U 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))))))))))))))))))) 
                      << 0x16U) | ((0x200000U & (vlSelf->top__DOT___2031_[2U] 
                                                 << 0x13U)) 
                                   | ((0x100000U & 
                                       ((IData)((vlSelf->top__DOT___3747_ 
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
                                                                       & vlSelf->top__DOT___2121_[0U]))))))))))))));
    __Vtemp_8[1U] = (((IData)((((QData)((IData)(((0x18000U 
                                                  & (vlSelf->top__DOT___2000_[3U] 
                                                     << 0xbU)) 
                                                 | (((IData)(vlSelf->top__DOT___1506_) 
                                                     << 0xeU) 
                                                    | ((0x2000U 
                                                        & (vlSelf->top__DOT___2000_[3U] 
                                                           << 0xbU)) 
                                                       | (((IData)(vlSelf->top__DOT___0113_) 
                                                           << 0xcU) 
                                                          | ((0xf80U 
                                                              & ((vlSelf->top__DOT___2000_[3U] 
                                                                  << 0xbU) 
                                                                 | (0x780U 
                                                                    & (vlSelf->top__DOT___2000_[2U] 
                                                                       >> 0x15U)))) 
                                                             | (((IData)(vlSelf->top__DOT___0313_) 
                                                                 << 6U) 
                                                                | ((0x3eU 
                                                                    & (vlSelf->top__DOT___2000_[2U] 
                                                                       >> 0x15U)) 
                                                                   | (IData)(vlSelf->top__DOT___0737_)))))))))) 
                                << 0x21U) | (((QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT___2000_[2U] 
                                                                  >> 0x10U)))) 
                                              << 0x1cU) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___0354_) 
                                                                 << 0x1bU) 
                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                    << 0x1aU) 
                                                                   | (((IData)(vlSelf->top__DOT___0071_) 
                                                                       << 0x19U) 
                                                                      | (((IData)(vlSelf->top__DOT___0463_) 
                                                                          << 0x18U) 
                                                                         | (((IData)(vlSelf->top__DOT___0134_) 
                                                                             << 0x17U) 
                                                                            | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 0x16U) 
                                                                               | ((0x3e0000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)) 
                                                                                << 0xcU)) 
                                                                                | ((0xfc0U 
                                                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU) 
                                                                                | (0x3c0U 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))))))))))))))))))) 
                      >> 0xaU) | ((IData)(((((QData)((IData)(
                                                             ((0x18000U 
                                                               & (vlSelf->top__DOT___2000_[3U] 
                                                                  << 0xbU)) 
                                                              | (((IData)(vlSelf->top__DOT___1506_) 
                                                                  << 0xeU) 
                                                                 | ((0x2000U 
                                                                     & (vlSelf->top__DOT___2000_[3U] 
                                                                        << 0xbU)) 
                                                                    | (((IData)(vlSelf->top__DOT___0113_) 
                                                                        << 0xcU) 
                                                                       | ((0xf80U 
                                                                           & ((vlSelf->top__DOT___2000_[3U] 
                                                                               << 0xbU) 
                                                                              | (0x780U 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0x15U)))) 
                                                                          | (((IData)(vlSelf->top__DOT___0313_) 
                                                                              << 6U) 
                                                                             | ((0x3eU 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0x15U)) 
                                                                                | (IData)(vlSelf->top__DOT___0737_)))))))))) 
                                             << 0x21U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & (vlSelf->top__DOT___2000_[2U] 
                                                                    >> 0x10U)))) 
                                                << 0x1cU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->top__DOT___0354_) 
                                                                   << 0x1bU) 
                                                                  | (((IData)(vlSelf->top__DOT___0226_) 
                                                                      << 0x1aU) 
                                                                     | (((IData)(vlSelf->top__DOT___0071_) 
                                                                         << 0x19U) 
                                                                        | (((IData)(vlSelf->top__DOT___0463_) 
                                                                            << 0x18U) 
                                                                           | (((IData)(vlSelf->top__DOT___0134_) 
                                                                               << 0x17U) 
                                                                              | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 0x16U) 
                                                                                | ((0x3e0000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)) 
                                                                                << 0xcU)) 
                                                                                | ((0xfc0U 
                                                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU) 
                                                                                | (0x3c0U 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U))))))))))))))))))) 
                                           >> 0x20U)) 
                                  << 0x16U));
    __Vtemp_8[2U] = ((IData)(((((QData)((IData)(((0x18000U 
                                                  & (vlSelf->top__DOT___2000_[3U] 
                                                     << 0xbU)) 
                                                 | (((IData)(vlSelf->top__DOT___1506_) 
                                                     << 0xeU) 
                                                    | ((0x2000U 
                                                        & (vlSelf->top__DOT___2000_[3U] 
                                                           << 0xbU)) 
                                                       | (((IData)(vlSelf->top__DOT___0113_) 
                                                           << 0xcU) 
                                                          | ((0xf80U 
                                                              & ((vlSelf->top__DOT___2000_[3U] 
                                                                  << 0xbU) 
                                                                 | (0x780U 
                                                                    & (vlSelf->top__DOT___2000_[2U] 
                                                                       >> 0x15U)))) 
                                                             | (((IData)(vlSelf->top__DOT___0313_) 
                                                                 << 6U) 
                                                                | ((0x3eU 
                                                                    & (vlSelf->top__DOT___2000_[2U] 
                                                                       >> 0x15U)) 
                                                                   | (IData)(vlSelf->top__DOT___0737_)))))))))) 
                                << 0x21U) | (((QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT___2000_[2U] 
                                                                  >> 0x10U)))) 
                                              << 0x1cU) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___0354_) 
                                                                 << 0x1bU) 
                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                    << 0x1aU) 
                                                                   | (((IData)(vlSelf->top__DOT___0071_) 
                                                                       << 0x19U) 
                                                                      | (((IData)(vlSelf->top__DOT___0463_) 
                                                                          << 0x18U) 
                                                                         | (((IData)(vlSelf->top__DOT___0134_) 
                                                                             << 0x17U) 
                                                                            | (((IData)(vlSelf->top__DOT___0043_) 
                                                                                << 0x16U) 
                                                                               | ((0x3e0000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1346_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)) 
                                                                                << 0xcU)) 
                                                                                | ((0xfc0U 
                                                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                                                << 0xaU) 
                                                                                | (0x3c0U 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U)))) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 0x16U))))))))))))))))))) 
                              >> 0x20U)) >> 0xaU);
    VL_ADD_W(3, __Vtemp_9, __Vtemp_7, __Vtemp_8);
    vlSelf->top__DOT___1943_[2U] = ((0x7ffffU & vlSelf->top__DOT___1943_[2U]) 
                                    | (0xfff80000U 
                                       & ((0xfe000000U 
                                           & (__Vtemp_9[0U] 
                                              << 0x11U)) 
                                          | (((IData)(vlSelf->top__DOT___0047_) 
                                              << 0x18U) 
                                             | (((IData)(vlSelf->top__DOT___0678_) 
                                                 << 0x17U) 
                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                    << 0x16U) 
                                                   | (((IData)(vlSelf->top__DOT___0094_) 
                                                       << 0x15U) 
                                                      | (((IData)(vlSelf->top__DOT___0619_) 
                                                          << 0x14U) 
                                                         | ((IData)(vlSelf->top__DOT___0253_) 
                                                            << 0x13U)))))))));
    vlSelf->top__DOT___1943_[3U] = (0xffffU & ((0x8000U 
                                                & (__Vtemp_4[0U] 
                                                   >> 0xfU)) 
                                               | ((0x7c000U 
                                                   & ((IData)(vlSelf->top__DOT___1768_) 
                                                      << 0xeU)) 
                                                  | ((0x3fffU 
                                                      & (__Vtemp_9[0U] 
                                                         >> 0xfU)) 
                                                     | ((0x7ffffU 
                                                         & ((IData)(vlSelf->top__DOT___0047_) 
                                                            >> 8U)) 
                                                        | ((0x7ffffU 
                                                            & ((IData)(vlSelf->top__DOT___0678_) 
                                                               >> 9U)) 
                                                           | ((0x7ffffU 
                                                               & ((IData)(vlSelf->top__DOT___0183_) 
                                                                  >> 0xaU)) 
                                                              | ((0x7ffffU 
                                                                  & ((IData)(vlSelf->top__DOT___0094_) 
                                                                     >> 0xbU)) 
                                                                 | ((0x7ffffU 
                                                                     & ((IData)(vlSelf->top__DOT___0619_) 
                                                                        >> 0xcU)) 
                                                                    | ((IData)(vlSelf->top__DOT___0253_) 
                                                                       >> 0xdU))))))))));
    vlSelf->top__DOT___1048_ = (1U & ((((vlSelf->top__DOT___1943_[2U] 
                                         << 5U) | (
                                                   vlSelf->top__DOT___1943_[2U] 
                                                   >> 0x1bU)) 
                                       + (((IData)(vlSelf->top__DOT___0270_) 
                                           << 4U) | 
                                          (((IData)(vlSelf->top__DOT___0043_) 
                                            << 3U) 
                                           | (((IData)(vlSelf->top__DOT___0122_) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT___0154_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT___0581_)))))) 
                                      >> 4U));
    vlSelf->top__DOT____VdfgTmp_h0b20b3c0__0 = ((0x10U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___3649_ 
                                                             >> 3U)) 
                                                    << 4U)) 
                                                | ((0xcU 
                                                    & vlSelf->top__DOT___1943_[0U]) 
                                                   | (((IData)(vlSelf->top__DOT___0018_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___1799_))));
    vlSelf->top__DOT___1167_ = (1U & ((vlSelf->top__DOT___1943_[2U] 
                                       >> 0x1bU) + (IData)(vlSelf->top__DOT___0581_)));
}
