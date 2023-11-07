// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__39(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__39\n"); );
    // Body
    vlSelf->top__DOT___4346_[2U] = ((0x1f807ffU & vlSelf->top__DOT___4346_[2U]) 
                                    | (0x1fff800U & 
                                       (((IData)(vlSelf->top__DOT___1533_) 
                                         << 0x12U) 
                                        | ((IData)(vlSelf->top__DOT___6963_) 
                                           << 0xbU))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__40(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__40\n"); );
    // Body
    vlSelf->top__DOT___3800_ = (1U & (((IData)(vlSelf->top__DOT___7024_) 
                                       >> 6U) ^ (IData)(vlSelf->top__DOT___1533_)));
    vlSelf->top__DOT___4458_[3U] = ((0xff7fffffU & 
                                     vlSelf->top__DOT___4458_[3U]) 
                                    | ((IData)(vlSelf->top__DOT___3800_) 
                                       << 0x17U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__41(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__41\n"); );
    // Body
    vlSelf->top__DOT___1435_ = ((IData)(vlSelf->top__DOT___0695_) 
                                | ((IData)(vlSelf->top__DOT___7188_) 
                                   >> 0xeU));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__42(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__42\n"); );
    // Body
    vlSelf->top__DOT___1132_ = (1U & ((~ (vlSelf->top__DOT___7160_ 
                                          >> 0xcU)) 
                                      & ((IData)(vlSelf->top__DOT___7188_) 
                                         >> 0xaU)));
    vlSelf->top__DOT___1945_ = ((IData)(vlSelf->top__DOT___0148_) 
                                ^ (IData)(vlSelf->top__DOT___1132_));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__336(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__336\n"); );
    // Body
    vlSelf->top__DOT___3758_ = (1U & (IData)((vlSelf->top__DOT___6989_ 
                                              >> 0x11U)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__337(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__337\n"); );
    // Body
    vlSelf->top__DOT___7158_ = ((8U & vlSelf->in_data[7U])
                                 ? 0x3738f386U : ((0x30000000U 
                                                   & (vlSelf->in_data[0xdU] 
                                                      << 0x18U)) 
                                                  | (((IData)(vlSelf->top__DOT___0830_) 
                                                      << 0x1bU) 
                                                     | (((IData)(vlSelf->top__DOT___0496_) 
                                                         << 0x1aU) 
                                                        | ((0x2000000U 
                                                            & ((IData)(vlSelf->top__DOT___7006_) 
                                                               << 0x15U)) 
                                                           | ((0x1000000U 
                                                               & ((IData)(vlSelf->top__DOT___7006_) 
                                                                  << 0x15U)) 
                                                              | ((0x800000U 
                                                                  & ((IData)(vlSelf->top__DOT___7006_) 
                                                                     << 0x15U)) 
                                                                 | ((0x400000U 
                                                                     & ((IData)(vlSelf->top__DOT___7006_) 
                                                                        << 0x15U)) 
                                                                    | ((0x200000U 
                                                                        & ((IData)(vlSelf->top__DOT___7006_) 
                                                                           << 0x15U)) 
                                                                       | (((IData)(vlSelf->top__DOT___0226_) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlSelf->top__DOT___0622_) 
                                                                              << 0x13U) 
                                                                             | (((IData)(vlSelf->top__DOT___2121_) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 0xfU) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___2121_) 
                                                                                << 9U) 
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
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0102_))))))))))))))))))))))))))))));
    vlSelf->top__DOT___0195_ = (1U & (((vlSelf->top__DOT___7158_ 
                                        >> 1U) & (IData)(vlSelf->top__DOT___0102_)) 
                                      | (vlSelf->top__DOT___7158_ 
                                         >> 0x12U)));
    vlSelf->top__DOT___3617_ = (1U & (vlSelf->top__DOT___7158_ 
                                      >> 0x10U));
    vlSelf->top__DOT___0023_ = (1U & (vlSelf->top__DOT___7158_ 
                                      >> 0x19U));
    vlSelf->top__DOT___0906_ = ((IData)(vlSelf->top__DOT___0195_) 
                                & (IData)(vlSelf->top__DOT___0023_));
    vlSelf->top__DOT___0779_ = ((IData)(vlSelf->top__DOT___0148_) 
                                ^ (IData)(vlSelf->top__DOT___0023_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__44(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__44\n"); );
    // Body
    vlSelf->top__DOT___4293_ = ((0x7fffffffffe7ULL 
                                 & vlSelf->top__DOT___4293_) 
                                | ((QData)((IData)(
                                                   (((IData)(vlSelf->top__DOT___3800_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___2531_)))) 
                                   << 3U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__45(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__45\n"); );
    // Body
    vlSelf->top__DOT___2481_ = (1U & ((IData)(vlSelf->top__DOT___3758_) 
                                      ^ ((IData)(vlSelf->top__DOT___7065_) 
                                         >> 1U)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__338(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__338\n"); );
    // Init
    CData/*3:0*/ top__DOT____VdfgTmp_h649b605f__0;
    top__DOT____VdfgTmp_h649b605f__0 = 0;
    CData/*1:0*/ top__DOT____VdfgTmp_h921e764a__0;
    top__DOT____VdfgTmp_h921e764a__0 = 0;
    // Body
    vlSelf->top__DOT___7006_ = ((IData)(vlSelf->top__DOT___0830_)
                                 ? 0x19U : ((0x1eU 
                                             & (vlSelf->in_data[0xeU] 
                                                >> 0x13U)) 
                                            | (IData)(vlSelf->top__DOT___0830_)));
    vlSelf->top__DOT___4276_ = ((0x3fffffffffffff7fULL 
                                 & vlSelf->top__DOT___4276_) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->top__DOT___0830_) 
                                                       | ((IData)(vlSelf->top__DOT___7006_) 
                                                          >> 3U))))) 
                                   << 7U));
    vlSelf->top__DOT___0218_ = (1U & ((IData)(vlSelf->top__DOT___0830_) 
                                      | ((IData)(vlSelf->top__DOT___7006_) 
                                         >> 3U)));
    vlSelf->top__DOT___1889_ = ((IData)(vlSelf->top__DOT___0830_) 
                                | (IData)(vlSelf->top__DOT___0218_));
    vlSelf->top__DOT___0226_ = ((~ (vlSelf->in_data[0x10U] 
                                    >> 4U)) & (IData)(vlSelf->top__DOT___0218_));
    vlSelf->top__DOT___0223_ = (1U & ((IData)(vlSelf->top__DOT___0218_) 
                                      + (vlSelf->in_data[0xcU] 
                                         >> 0x1bU)));
    vlSelf->top__DOT___0212_ = ((~ (IData)(vlSelf->top__DOT___0218_)) 
                                & (IData)(vlSelf->top__DOT___0223_));
    vlSelf->top__DOT___0496_ = ((IData)(vlSelf->top__DOT___0226_) 
                                | (IData)(vlSelf->top__DOT___0223_));
    top__DOT____VdfgTmp_h921e764a__0 = (((IData)(vlSelf->top__DOT___0223_) 
                                         << 1U) | (IData)(vlSelf->top__DOT___0699_));
    vlSelf->top__DOT___0992_ = ((IData)(vlSelf->top__DOT___0102_) 
                                | (IData)(vlSelf->top__DOT___0212_));
    vlSelf->top__DOT___0723_ = (1U & (~ (IData)(vlSelf->top__DOT___0496_)));
    vlSelf->top__DOT___1357_ = ((IData)(vlSelf->top__DOT___0699_) 
                                ^ (IData)(vlSelf->top__DOT___0496_));
    vlSelf->top__DOT___1743_ = (1U & (((IData)(top__DOT____VdfgTmp_h921e764a__0) 
                                       + (2U & ((IData)(vlSelf->top__DOT___7006_) 
                                                << 1U))) 
                                      >> 1U));
    top__DOT____VdfgTmp_h649b605f__0 = (((IData)(vlSelf->top__DOT___0218_) 
                                         << 3U) | (IData)(top__DOT____VdfgTmp_h921e764a__0));
    vlSelf->top__DOT___0520_ = (1U & (~ ((IData)(vlSelf->top__DOT___0148_) 
                                         & (IData)(vlSelf->top__DOT___1357_))));
    vlSelf->top__DOT___2121_ = (1U & ((((0x70U & ((IData)(vlSelf->top__DOT___7006_) 
                                                  << 4U)) 
                                        | (IData)(top__DOT____VdfgTmp_h649b605f__0)) 
                                       + ((IData)(vlSelf->top__DOT___7006_) 
                                          << 1U)) >> 6U));
    vlSelf->top__DOT___0843_ = (1U & (((IData)(top__DOT____VdfgTmp_h649b605f__0) 
                                       + (0xeU & ((IData)(vlSelf->top__DOT___7006_) 
                                                  << 1U))) 
                                      >> 3U));
    vlSelf->top__DOT___0268_ = (1U & ((((0x10U & ((IData)(vlSelf->top__DOT___7006_) 
                                                  << 4U)) 
                                        | (IData)(top__DOT____VdfgTmp_h649b605f__0)) 
                                       + VL_SHIFTL_III(5,5,32, (IData)(vlSelf->top__DOT___7006_), 1U)) 
                                      >> 4U));
    vlSelf->top__DOT___0622_ = (1U & ((((0xf0U & ((IData)(vlSelf->top__DOT___7006_) 
                                                  << 4U)) 
                                        | (IData)(top__DOT____VdfgTmp_h649b605f__0)) 
                                       + (((IData)(vlSelf->top__DOT___0102_) 
                                           << 7U) | 
                                          ((IData)(vlSelf->top__DOT___7006_) 
                                           << 1U))) 
                                      >> 7U));
    vlSelf->top__DOT___0116_ = ((IData)(vlSelf->top__DOT___0520_) 
                                | (IData)(vlSelf->top__DOT___0218_));
    vlSelf->top__DOT___0876_ = ((IData)(vlSelf->top__DOT___0268_) 
                                & ((IData)(vlSelf->top__DOT___7006_) 
                                   >> 1U));
    vlSelf->top__DOT___1208_ = ((IData)(vlSelf->top__DOT___0116_) 
                                & (IData)(vlSelf->top__DOT___0226_));
    vlSelf->top__DOT___0224_ = ((IData)(vlSelf->top__DOT___0876_) 
                                & (IData)(vlSelf->top__DOT___0226_));
    vlSelf->top__DOT___1007_ = ((IData)(vlSelf->top__DOT___0723_) 
                                & (~ (IData)(vlSelf->top__DOT___0876_)));
    vlSelf->top__DOT____VdfgTmp_hb3939a22__0 = ((2U 
                                                 & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                    << 1U)) 
                                                | (IData)(vlSelf->top__DOT___0699_));
    vlSelf->top__DOT___0995_ = ((IData)(vlSelf->top__DOT___0830_) 
                                & (~ (IData)(vlSelf->top__DOT___0876_)));
    vlSelf->top__DOT___4116_[3U] = ((0xfffdffffU & 
                                     vlSelf->top__DOT___4116_[3U]) 
                                    | ((IData)(vlSelf->top__DOT___0224_) 
                                       << 0x11U));
    vlSelf->top__DOT___0698_ = ((IData)(vlSelf->top__DOT___0224_) 
                                | (IData)(vlSelf->top__DOT___0622_));
    vlSelf->top__DOT___2627_ = (1U & (((IData)(vlSelf->top__DOT___0218_) 
                                       + (IData)(vlSelf->top__DOT____VdfgTmp_hb3939a22__0)) 
                                      >> 1U));
    vlSelf->top__DOT____VdfgTmp_h57390790__0 = (((IData)(vlSelf->top__DOT___0226_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0995_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__46(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__46\n"); );
    // Body
    vlSelf->top__DOT___2354_ = (1U & ((vlSelf->top__DOT___7158_ 
                                       >> 0x16U) | (IData)(vlSelf->top__DOT___2111_)));
    vlSelf->top__DOT___3354_ = (1U & ((IData)((vlSelf->top__DOT___6989_ 
                                               >> 5U)) 
                                      + (IData)(vlSelf->top__DOT___0023_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__47(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__47\n"); );
    // Body
    vlSelf->top__DOT___0864_ = ((~ (vlSelf->top__DOT___7145_ 
                                    >> 0x1eU)) & (IData)(vlSelf->top__DOT___0195_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__48(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__48\n"); );
    // Body
    vlSelf->top__DOT___0410_ = (1U & (((2U & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                              << 1U)) 
                                       + (vlSelf->top__DOT___7184_ 
                                          >> 0xfU)) 
                                      >> 1U));
    vlSelf->top__DOT___0406_ = ((~ (IData)(vlSelf->top__DOT___0148_)) 
                                & (IData)(vlSelf->top__DOT___0410_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__49(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__49\n"); );
    // Body
    vlSelf->top__DOT___4358_ = ((0x780000001ULL & vlSelf->top__DOT___4358_) 
                                | ((QData)((IData)(
                                                   ((vlSelf->top__DOT___7187_ 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___0023_)))) 
                                   << 1U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__50(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__50\n"); );
    // Body
    vlSelf->top__DOT___1507_ = (1U & (((IData)(vlSelf->top__DOT___7174_) 
                                       >> 4U) | (IData)(vlSelf->top__DOT___0023_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__51(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__51\n"); );
    // Body
    vlSelf->top__DOT___0372_ = ((IData)(vlSelf->top__DOT___3654_) 
                                ^ (IData)(vlSelf->top__DOT___0023_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__52(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__52\n"); );
    // Body
    vlSelf->top__DOT___1060_ = (1U & (((IData)((vlSelf->top__DOT___6989_ 
                                                >> 5U)) 
                                       + ((2U & ((IData)(vlSelf->top__DOT___7092_) 
                                                 << 1U)) 
                                          | (IData)(vlSelf->top__DOT___0023_))) 
                                      >> 1U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__53(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__53\n"); );
    // Body
    vlSelf->top__DOT___0048_ = (1U & ((IData)(vlSelf->top__DOT___7067_) 
                                      ^ (IData)(vlSelf->top__DOT___0779_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__54(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__54\n"); );
    // Body
    vlSelf->top__DOT___0826_ = (1U & ((vlSelf->top__DOT___7115_[0U] 
                                       >> 0xcU) | (IData)(vlSelf->top__DOT___0779_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__55(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__55\n"); );
    // Body
    vlSelf->top__DOT___0141_ = ((IData)(vlSelf->top__DOT___0143_) 
                                & (~ ((IData)(vlSelf->top__DOT___7006_) 
                                      >> 2U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__56(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__56\n"); );
    // Init
    CData/*0:0*/ top__DOT____VdfgTmp_h88b1f599__0;
    top__DOT____VdfgTmp_h88b1f599__0 = 0;
    // Body
    vlSelf->top__DOT___1168_ = (IData)((((IData)(vlSelf->top__DOT___7006_) 
                                         >> 4U) & (vlSelf->top__DOT___7158_ 
                                                   >> 0x14U)));
    vlSelf->top__DOT___0260_ = ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                & (IData)(vlSelf->top__DOT___0226_));
    vlSelf->top__DOT___1192_ = ((IData)(vlSelf->top__DOT___0520_) 
                                | (IData)(vlSelf->top__DOT___0023_));
    vlSelf->top__DOT___0170_ = (1U & ((IData)(vlSelf->top__DOT___0622_) 
                                      ^ (vlSelf->top__DOT___7158_ 
                                         >> 0xeU)));
    vlSelf->top__DOT___0522_ = ((IData)(vlSelf->top__DOT___0023_) 
                                | (IData)(vlSelf->top__DOT___1007_));
    vlSelf->top__DOT___4274_ = ((0xfff7U & (IData)(vlSelf->top__DOT___4274_)) 
                                | (((IData)(vlSelf->top__DOT___1168_) 
                                    ^ (IData)(vlSelf->top__DOT___0023_)) 
                                   << 3U));
    vlSelf->top__DOT___0084_ = ((IData)(vlSelf->top__DOT___1168_) 
                                ^ (IData)(vlSelf->top__DOT___0023_));
    vlSelf->top__DOT____VdfgTmp_heefe967e__0 = (((IData)(vlSelf->top__DOT___0102_) 
                                                 & (IData)(vlSelf->top__DOT___0223_)) 
                                                | ((IData)(vlSelf->top__DOT___0218_) 
                                                   & (IData)(vlSelf->top__DOT___1168_)));
    vlSelf->top__DOT___4344_ = ((0x3ffffffffdULL & vlSelf->top__DOT___4344_) 
                                | ((QData)((IData)(
                                                   ((IData)(vlSelf->top__DOT___0995_) 
                                                    & (IData)(vlSelf->top__DOT___1168_)))) 
                                   << 1U));
    vlSelf->top__DOT___0552_ = ((IData)(vlSelf->top__DOT___0995_) 
                                & (IData)(vlSelf->top__DOT___1168_));
    vlSelf->top__DOT___2596_ = (1U & (~ (((IData)(vlSelf->top__DOT___0212_) 
                                          & (IData)(vlSelf->top__DOT___0116_)) 
                                         | (IData)(vlSelf->top__DOT___1192_))));
    vlSelf->top__DOT___3903_[1U] = ((0xfffff7ffU & 
                                     vlSelf->top__DOT___3903_[1U]) 
                                    | ((IData)(vlSelf->top__DOT___0170_) 
                                       << 0xbU));
    vlSelf->top__DOT___0750_ = ((~ (IData)(vlSelf->top__DOT___0170_)) 
                                & (IData)(vlSelf->top__DOT___0116_));
    vlSelf->top__DOT___1881_ = ((IData)(vlSelf->top__DOT___0170_) 
                                ^ (IData)(vlSelf->top__DOT___0218_));
    vlSelf->top__DOT___0834_ = ((~ (IData)(vlSelf->top__DOT___0170_)) 
                                & (IData)(vlSelf->top__DOT___0843_));
    vlSelf->top__DOT___0198_ = ((IData)(vlSelf->top__DOT___3617_) 
                                ^ (IData)(vlSelf->top__DOT___0170_));
    vlSelf->top__DOT___0160_ = ((~ (IData)(vlSelf->top__DOT___0102_)) 
                                & (IData)(vlSelf->top__DOT___0170_));
    vlSelf->top__DOT___0181_ = ((~ (IData)(vlSelf->top__DOT___0102_)) 
                                & (IData)(vlSelf->top__DOT___0084_));
    vlSelf->top__DOT___0082_ = ((IData)(vlSelf->top__DOT___0023_) 
                                | (IData)(vlSelf->top__DOT___0084_));
    vlSelf->top__DOT___0629_ = (1U & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                      | (IData)(vlSelf->top__DOT___0084_)));
    vlSelf->top__DOT___0967_ = ((IData)(vlSelf->top__DOT____VdfgTmp_heefe967e__0) 
                                & (IData)(vlSelf->top__DOT___0223_));
    vlSelf->top__DOT___0069_ = (1U & (~ (IData)(vlSelf->top__DOT____VdfgTmp_heefe967e__0)));
    vlSelf->top__DOT___4343_[1U] = ((0xfbffffffU & 
                                     vlSelf->top__DOT___4343_[1U]) 
                                    | ((IData)(vlSelf->top__DOT___0552_) 
                                       << 0x1aU));
    vlSelf->top__DOT___1851_ = ((IData)(vlSelf->top__DOT___0148_) 
                                & (IData)(vlSelf->top__DOT___0198_));
    vlSelf->top__DOT___0300_ = ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                & (IData)(vlSelf->top__DOT___0198_));
    vlSelf->top__DOT___1887_ = (1U & (~ (((IData)(vlSelf->top__DOT___0830_) 
                                          & (IData)(vlSelf->top__DOT___0160_)) 
                                         | (IData)(vlSelf->top__DOT___0699_))));
    top__DOT____VdfgTmp_h88b1f599__0 = ((IData)(vlSelf->top__DOT___0226_) 
                                        & (IData)(vlSelf->top__DOT___0629_));
    vlSelf->top__DOT___1605_ = ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                & (IData)(vlSelf->top__DOT___1168_));
    vlSelf->top__DOT___0485_ = ((IData)(vlSelf->top__DOT___0069_) 
                                ^ (IData)(vlSelf->top__DOT___0170_));
    vlSelf->top__DOT____VdfgTmp_h38109f58__0 = (((IData)(vlSelf->top__DOT___0069_) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___0170_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___0226_))));
    vlSelf->top__DOT___0994_ = ((IData)(vlSelf->top__DOT___0069_) 
                                & (~ (IData)(vlSelf->top__DOT___0995_)));
    vlSelf->top__DOT___0156_ = ((IData)(vlSelf->top__DOT___0195_) 
                                ^ (IData)(vlSelf->top__DOT___1851_));
    vlSelf->top__DOT___0749_ = (1U & ((IData)(vlSelf->top__DOT___0300_) 
                                      | (vlSelf->in_data[5U] 
                                         >> 3U)));
    vlSelf->top__DOT___0290_ = ((~ (IData)(vlSelf->top__DOT___0170_)) 
                                & (IData)(vlSelf->top__DOT___0300_));
    vlSelf->top__DOT___3124_ = (1U & ((IData)(vlSelf->top__DOT___1887_) 
                                      + (IData)(vlSelf->top__DOT___0198_)));
    vlSelf->top__DOT___1080_ = ((IData)(top__DOT____VdfgTmp_h88b1f599__0) 
                                & (IData)(vlSelf->top__DOT___0906_));
    vlSelf->top__DOT___0183_ = (1U & (~ (IData)(top__DOT____VdfgTmp_h88b1f599__0)));
    vlSelf->top__DOT___0061_ = ((IData)(vlSelf->top__DOT___1605_) 
                                ^ (IData)(vlSelf->top__DOT___0212_));
    vlSelf->top__DOT___1366_ = ((IData)(vlSelf->top__DOT___0069_) 
                                & (IData)(vlSelf->top__DOT___1605_));
    vlSelf->top__DOT___1149_ = (1U & ((vlSelf->in_data[0x10U] 
                                       >> 8U) | (IData)(vlSelf->top__DOT___1605_)));
    vlSelf->top__DOT___1148_ = ((IData)(vlSelf->top__DOT___0485_) 
                                & (IData)(vlSelf->top__DOT___0223_));
    vlSelf->top__DOT___1066_ = ((IData)(vlSelf->top__DOT___0723_) 
                                ^ (IData)(vlSelf->top__DOT___0485_));
    vlSelf->top__DOT___2114_ = (1U & (~ (((IData)(vlSelf->top__DOT___0876_) 
                                          & (IData)(vlSelf->top__DOT___0023_)) 
                                         | (IData)(vlSelf->top__DOT___0485_))));
    vlSelf->top__DOT___4344_ = ((0x3fffffffdfULL & vlSelf->top__DOT___4344_) 
                                | ((QData)((IData)(
                                                   ((IData)(vlSelf->top__DOT___0723_) 
                                                    ^ (IData)(vlSelf->top__DOT___0485_)))) 
                                   << 5U));
    vlSelf->top__DOT____VdfgTmp_h052d7d43__0 = (((IData)(vlSelf->top__DOT___0485_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___1605_));
    vlSelf->top__DOT____VdfgTmp_h66cf21d2__0 = (((IData)(vlSelf->top__DOT___0023_) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->top__DOT___0226_) 
                                                       << 4U) 
                                                      | (IData)(vlSelf->top__DOT____VdfgTmp_h38109f58__0))));
    vlSelf->top__DOT___0056_ = ((IData)(vlSelf->top__DOT___0749_) 
                                ^ (IData)(vlSelf->top__DOT___0084_));
    vlSelf->top__DOT___0424_ = ((~ (IData)(vlSelf->top__DOT___0290_)) 
                                & (IData)(vlSelf->top__DOT___0102_));
    vlSelf->top__DOT___0987_ = ((IData)(vlSelf->top__DOT___1366_) 
                                & (IData)(vlSelf->top__DOT___0116_));
    vlSelf->top__DOT___2610_ = (1U & ((IData)(vlSelf->top__DOT___0723_) 
                                      + (IData)(vlSelf->top__DOT___1366_)));
    vlSelf->top__DOT___1526_ = (1U & (~ ((IData)(vlSelf->top__DOT___0069_) 
                                         & (IData)(vlSelf->top__DOT___1366_))));
    vlSelf->top__DOT___3183_ = (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT___1066_)));
    vlSelf->top__DOT___4105_ = ((0x7ff7U & (IData)(vlSelf->top__DOT___4105_)) 
                                | (((IData)(vlSelf->top__DOT___0056_) 
                                    | (IData)(vlSelf->top__DOT___0023_)) 
                                   << 3U));
    vlSelf->top__DOT___0242_ = ((IData)(vlSelf->top__DOT___0056_) 
                                ^ (IData)(vlSelf->top__DOT___0198_));
    vlSelf->top__DOT___0764_ = ((IData)(vlSelf->top__DOT___0056_) 
                                | (IData)(vlSelf->top__DOT___0023_));
    vlSelf->top__DOT____VdfgTmp_he54fef32__0 = (((IData)(vlSelf->top__DOT___0424_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0023_));
    vlSelf->top__DOT___0727_ = ((IData)(vlSelf->top__DOT___0876_) 
                                & (IData)(vlSelf->top__DOT___0424_));
    vlSelf->top__DOT___0804_ = ((~ (IData)(vlSelf->top__DOT___0102_)) 
                                & (IData)(vlSelf->top__DOT___0424_));
    vlSelf->top__DOT___0735_ = (((IData)(vlSelf->top__DOT___0069_) 
                                 & (IData)(vlSelf->top__DOT___0424_)) 
                                | (IData)(vlSelf->top__DOT___0424_));
    vlSelf->top__DOT___4173_[0U] = ((0xfffffffcU & 
                                     vlSelf->top__DOT___4173_[0U]) 
                                    | (((IData)(vlSelf->top__DOT___1526_) 
                                        << 1U) | (1U 
                                                  & (vlSelf->in_data[3U] 
                                                     >> 0x17U))));
    vlSelf->top__DOT___0106_ = ((IData)(vlSelf->top__DOT___1526_) 
                                & (IData)(vlSelf->top__DOT___0212_));
    vlSelf->top__DOT___0795_ = ((IData)(vlSelf->top__DOT___0727_) 
                                ^ (IData)(vlSelf->top__DOT___1192_));
    vlSelf->top__DOT___1836_ = ((IData)(vlSelf->top__DOT___0116_) 
                                | (IData)(vlSelf->top__DOT___0727_));
    vlSelf->top__DOT___0711_ = ((IData)(vlSelf->top__DOT___0723_) 
                                & (IData)(vlSelf->top__DOT___0735_));
    vlSelf->top__DOT___0715_ = (1U & (~ (IData)(vlSelf->top__DOT___0735_)));
    vlSelf->top__DOT___1593_ = ((IData)(vlSelf->top__DOT___0056_) 
                                | (IData)(vlSelf->top__DOT___0711_));
    vlSelf->top__DOT___0883_ = (1U & (~ (((IData)(vlSelf->top__DOT___0715_) 
                                          & (IData)(vlSelf->top__DOT___0830_)) 
                                         | ((IData)(vlSelf->top__DOT___0183_) 
                                            & (IData)(vlSelf->top__DOT___3124_)))));
    vlSelf->top__DOT___1082_ = ((IData)(vlSelf->top__DOT___0715_) 
                                | (IData)(vlSelf->top__DOT___0023_));
    vlSelf->top__DOT___0154_ = (1U & (~ (((IData)(vlSelf->top__DOT___0715_) 
                                          & (IData)(vlSelf->top__DOT___0268_)) 
                                         | (IData)(vlSelf->top__DOT___0023_))));
    vlSelf->top__DOT___2466_ = ((IData)(vlSelf->top__DOT___1593_) 
                                | (IData)(vlSelf->top__DOT___3183_));
    vlSelf->top__DOT___1833_ = (1U & ((IData)(vlSelf->top__DOT___0154_) 
                                      | ((IData)(vlSelf->top__DOT___7006_) 
                                         >> 3U)));
    vlSelf->top__DOT___1979_ = ((IData)(vlSelf->top__DOT___0183_) 
                                ^ (IData)(vlSelf->top__DOT___0154_));
    vlSelf->top__DOT___2259_ = ((IData)(vlSelf->top__DOT___1833_) 
                                ^ (IData)(vlSelf->top__DOT___0170_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__57(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__57\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h95f162d4__0 = (((IData)(vlSelf->top__DOT___0218_) 
                                                 << 1U) 
                                                | (1U 
                                                   & (IData)(vlSelf->top__DOT___4738_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__58(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__58\n"); );
    // Body
    vlSelf->top__DOT___0560_ = ((IData)(vlSelf->top__DOT___0218_) 
                                ^ (IData)(vlSelf->top__DOT___0880_));
    vlSelf->top__DOT___3594_ = (1U & ((IData)(vlSelf->top__DOT___0218_) 
                                      + (IData)(vlSelf->top__DOT___0880_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__59(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__59\n"); );
    // Body
    vlSelf->top__DOT___4105_ = ((0x1fU & (IData)(vlSelf->top__DOT___4105_)) 
                                | ((0x7fc0U & (vlSelf->top__DOT___7057_ 
                                               >> 0xbU)) 
                                   | ((IData)(vlSelf->top__DOT___0226_) 
                                      << 5U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__60(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__60\n"); );
    // Body
    vlSelf->top__DOT___2126_ = (1U & (~ (((IData)(vlSelf->top__DOT___0880_) 
                                          & (IData)(vlSelf->top__DOT___0236_)) 
                                         | ((vlSelf->top__DOT___4739_[3U] 
                                             >> 7U) 
                                            & (IData)(vlSelf->top__DOT___0226_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__61(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__61\n"); );
    // Body
    vlSelf->top__DOT___0592_ = (1U & (~ (((vlSelf->top__DOT___7158_ 
                                           >> 5U) & (IData)(vlSelf->top__DOT___0226_)) 
                                         | (IData)(vlSelf->top__DOT___2481_))));
    vlSelf->top__DOT___0344_ = (1U & (~ (((IData)(vlSelf->top__DOT___1605_) 
                                          & (IData)(vlSelf->top__DOT___1357_)) 
                                         | ((IData)(vlSelf->top__DOT___2481_) 
                                            & ((IData)(vlSelf->top__DOT___7006_) 
                                               >> 3U)))));
    vlSelf->top__DOT___2848_ = ((IData)(vlSelf->top__DOT___0592_) 
                                | (IData)(vlSelf->top__DOT___0300_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__62(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__62\n"); );
    // Body
    vlSelf->top__DOT___0330_ = (1U & ((IData)(vlSelf->top__DOT___0496_) 
                                      | ((IData)(vlSelf->top__DOT___7188_) 
                                         >> 6U)));
    vlSelf->top__DOT___0860_ = ((IData)(vlSelf->top__DOT___0330_) 
                                & (IData)(vlSelf->top__DOT___0226_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__63(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__63\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_hddb1d034__0[0U] = 
        (0xdfac7c58U | (((IData)(vlSelf->top__DOT___0496_) 
                         << 2U) | (((IData)(vlSelf->top__DOT___0699_) 
                                    << 1U) | (IData)(vlSelf->top__DOT___0781_))));
    vlSelf->top__DOT____VdfgTmp_hddb1d034__0[1U] = 1U;
    vlSelf->top__DOT____VdfgTmp_hddb1d034__0[2U] = 0U;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__64(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__64\n"); );
    // Body
    vlSelf->top__DOT___2359_ = (1U & (~ (((IData)(vlSelf->top__DOT___0723_) 
                                          & (IData)(
                                                    (vlSelf->top__DOT___6989_ 
                                                     >> 0x10U))) 
                                         | ((vlSelf->top__DOT___7110_ 
                                             >> 0x12U) 
                                            & (IData)(vlSelf->top__DOT___0880_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__65(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__65\n"); );
    // Body
    vlSelf->top__DOT___1288_ = (1U & ((IData)(vlSelf->top__DOT___0723_) 
                                      + (IData)(vlSelf->top__DOT___7102_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__66(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__66\n"); );
    // Body
    vlSelf->top__DOT___1667_ = (1U & ((IData)(vlSelf->top__DOT___0723_) 
                                      | (vlSelf->top__DOT___4749_[3U] 
                                         >> 1U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__67(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__67\n"); );
    // Body
    vlSelf->top__DOT___0448_ = ((IData)(vlSelf->top__DOT___0236_) 
                                ^ (IData)(vlSelf->top__DOT___1357_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__68(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__68\n"); );
    // Body
    vlSelf->top__DOT___0997_ = (1U & ((IData)(vlSelf->top__DOT___1357_) 
                                      ^ (IData)((vlSelf->top__DOT___7096_ 
                                                 >> 0xbU))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__69(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__69\n"); );
    // Body
    vlSelf->top__DOT___0310_ = (1U & ((IData)(vlSelf->top__DOT___0520_) 
                                      ^ (vlSelf->top__DOT___4740_[1U] 
                                         >> 0xbU)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__70(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__70\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h9032282a__0 = (((IData)(vlSelf->top__DOT___0622_) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->top__DOT___2121_) 
                                                    << 6U) 
                                                   | ((0x20U 
                                                       & (vlSelf->top__DOT___3872_[1U] 
                                                          >> 0x11U)) 
                                                      | (((IData)(vlSelf->top__DOT___0268_) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->top__DOT___0843_) 
                                                             << 3U) 
                                                            | ((4U 
                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                   >> 0x11U)) 
                                                               | (((IData)(vlSelf->top__DOT___1743_) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->top__DOT___0699_))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__71(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__71\n"); );
    // Body
    vlSelf->top__DOT___1063_ = (((IData)(vlSelf->top__DOT___7034_) 
                                 >> 7U) & (IData)(vlSelf->top__DOT___0116_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__72(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__72\n"); );
    // Body
    vlSelf->top__DOT___4160_ = ((2U & ((IData)((vlSelf->top__DOT___7155_ 
                                                >> 0x11U)) 
                                       << 1U)) | (IData)(vlSelf->top__DOT___0116_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__73(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__73\n"); );
    // Body
    vlSelf->top__DOT___0176_ = (1U & (~ (((IData)(vlSelf->top__DOT___7006_) 
                                          & (IData)(vlSelf->top__DOT___0116_)) 
                                         | (IData)(vlSelf->top__DOT___1249_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__74(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__74\n"); );
    // Body
    vlSelf->top__DOT___0959_ = (1U & ((IData)(vlSelf->top__DOT___0224_) 
                                      | (IData)(vlSelf->top__DOT___6971_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__75(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__75\n"); );
    // Body
    vlSelf->top__DOT___1991_ = (1U & ((IData)(vlSelf->top__DOT___0995_) 
                                      | ((IData)(vlSelf->top__DOT___7172_) 
                                         >> 8U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__76(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__76\n"); );
    // Body
    vlSelf->top__DOT___1369_ = (1U & ((IData)(vlSelf->top__DOT___6966_) 
                                      + (IData)(vlSelf->top__DOT___0995_)));
    vlSelf->top__DOT___0276_ = (1U & (((IData)(vlSelf->top__DOT___6966_) 
                                       + (IData)(vlSelf->top__DOT____VdfgTmp_h57390790__0)) 
                                      >> 1U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__77(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__77\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h3d101cf7__0 = (8U 
                                                | (((IData)(vlSelf->top__DOT___2354_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___0102_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___1208_))));
    vlSelf->top__DOT___1166_ = (1U & ((~ (IData)(vlSelf->top__DOT___1168_)) 
                                      & (IData)((vlSelf->top__DOT___6989_ 
                                                 >> 5U))));
    vlSelf->top__DOT___1672_ = (1U & (~ ((IData)(vlSelf->top__DOT___1192_) 
                                         | ((IData)(vlSelf->top__DOT___0496_) 
                                            & (IData)(
                                                      (vlSelf->top__DOT___6989_ 
                                                       >> 6U))))));
    vlSelf->top__DOT___0201_ = (1U & ((IData)((vlSelf->top__DOT___6989_ 
                                               >> 0x16U)) 
                                      | (IData)(vlSelf->top__DOT___1881_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__78(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__78\n"); );
    // Body
    vlSelf->top__DOT___1159_ = ((~ ((IData)(vlSelf->top__DOT___7139_) 
                                    >> 2U)) & (IData)(vlSelf->top__DOT___0372_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__79(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__79\n"); );
    // Body
    vlSelf->top__DOT___1929_ = ((IData)(vlSelf->top__DOT___2129_) 
                                | (IData)(vlSelf->top__DOT___1060_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__80(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__80\n"); );
    // Body
    vlSelf->top__DOT___1688_ = (1U & (~ (((IData)(vlSelf->top__DOT___1060_) 
                                          & ((IData)(vlSelf->top__DOT___6992_) 
                                             >> 1U)) 
                                         | (IData)(vlSelf->top__DOT___0226_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__81(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__81\n"); );
    // Body
    vlSelf->top__DOT___1051_ = ((IData)(vlSelf->top__DOT___0116_) 
                                | (IData)(vlSelf->top__DOT___1060_));
    vlSelf->top__DOT___0341_ = ((IData)(vlSelf->top__DOT___1051_) 
                                & (IData)(vlSelf->top__DOT___1060_));
    vlSelf->top__DOT____VdfgTmp_h8a786f86__0 = ((IData)(vlSelf->top__DOT___0154_) 
                                                | (IData)(vlSelf->top__DOT___0341_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__82(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__82\n"); );
    // Body
    vlSelf->top__DOT___0047_ = (1U & ((~ (IData)(vlSelf->top__DOT___0048_)) 
                                      & (vlSelf->top__DOT___4776_ 
                                         >> 6U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__83(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__83\n"); );
    // Body
    vlSelf->top__DOT___4328_[0U] = ((0x7fffffU & vlSelf->top__DOT___4328_[0U]) 
                                    | (0xff800000U 
                                       & ((vlSelf->top__DOT___7029_ 
                                           << 0x19U) 
                                          | ((0x1000000U 
                                              & ((IData)(vlSelf->top__DOT___7062_) 
                                                 << 0x16U)) 
                                             | (0x800000U 
                                                & ((IData)(vlSelf->top__DOT___7103_) 
                                                   << 0x14U))))));
    vlSelf->top__DOT___4328_[1U] = ((0xffffe000U & 
                                     vlSelf->top__DOT___4328_[1U]) 
                                    | (0x7fffffU & 
                                       ((0x7ff000U 
                                         & ((IData)(vlSelf->top__DOT___0141_) 
                                            << 0xcU)) 
                                        | (0x7fffffU 
                                           & (vlSelf->top__DOT___7029_ 
                                              >> 7U)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__84(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__84\n"); );
    // Body
    vlSelf->top__DOT___0493_ = (1U & ((((IData)(2U) 
                                        + ((vlSelf->top__DOT___4749_[0U] 
                                            << 0x1dU) 
                                           | (vlSelf->top__DOT___4749_[0U] 
                                              >> 3U))) 
                                       >> 2U) & (~ (IData)(vlSelf->top__DOT___0141_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__85(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__85\n"); );
    // Body
    vlSelf->top__DOT___4435_[1U] = ((0xfbffffffU & 
                                     vlSelf->top__DOT___4435_[1U]) 
                                    | (0x4000000U & 
                                       ((~ (((IData)(vlSelf->top__DOT___0102_) 
                                             & (IData)(vlSelf->top__DOT___1168_)) 
                                            | (vlSelf->top__DOT___4740_[0U] 
                                               >> 0x1cU))) 
                                        << 0x1aU)));
    vlSelf->top__DOT___2502_ = (1U & (~ (((IData)(vlSelf->top__DOT___0102_) 
                                          & (IData)(vlSelf->top__DOT___1168_)) 
                                         | (vlSelf->top__DOT___4740_[0U] 
                                            >> 0x1cU))));
    vlSelf->top__DOT___0074_ = (1U & ((~ (IData)(vlSelf->top__DOT___0084_)) 
                                      & (vlSelf->top__DOT___4740_[2U] 
                                         >> 0x18U)));
    vlSelf->top__DOT___0066_ = ((IData)(vlSelf->top__DOT___1526_) 
                                ^ (IData)(vlSelf->top__DOT___0310_));
    vlSelf->top__DOT___0844_ = ((~ (IData)(vlSelf->top__DOT___0074_)) 
                                & (IData)(vlSelf->top__DOT___0195_));
    vlSelf->top__DOT___0534_ = (1U ^ ((IData)(vlSelf->top__DOT___1366_) 
                                      ^ (IData)(vlSelf->top__DOT___0074_)));
    vlSelf->top__DOT___0393_ = ((IData)(vlSelf->top__DOT___2502_) 
                                | (IData)(vlSelf->top__DOT___0066_));
    vlSelf->top__DOT___1172_ = ((~ (IData)(vlSelf->top__DOT___0995_)) 
                                & (IData)(vlSelf->top__DOT___0844_));
    vlSelf->top__DOT___4631_[5U] = ((0xfffff7ffU & 
                                     vlSelf->top__DOT___4631_[5U]) 
                                    | (((IData)(vlSelf->top__DOT___0534_) 
                                        | (IData)(vlSelf->top__DOT___0699_)) 
                                       << 0xbU));
    vlSelf->top__DOT___4201_ = ((0xf7ffU & (IData)(vlSelf->top__DOT___4201_)) 
                                | ((IData)(vlSelf->top__DOT___0534_) 
                                   << 0xbU));
    vlSelf->top__DOT___2257_ = ((IData)(vlSelf->top__DOT___0534_) 
                                | (IData)(vlSelf->top__DOT___0290_));
    vlSelf->top__DOT___1639_ = ((IData)(vlSelf->top__DOT___0534_) 
                                | (IData)(vlSelf->top__DOT___0699_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__87(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__87\n"); );
    // Body
    vlSelf->top__DOT___1343_ = (1U & ((IData)(vlSelf->top__DOT___7096_) 
                                      | (IData)(vlSelf->top__DOT___1192_)));
    vlSelf->top__DOT___0338_ = (1U & (~ (((IData)((vlSelf->top__DOT___7096_ 
                                                   >> 0x11U)) 
                                          & (IData)(vlSelf->top__DOT___1192_)) 
                                         | (IData)(vlSelf->top__DOT___0082_))));
    vlSelf->top__DOT___1602_ = (1U & ((IData)(vlSelf->top__DOT___0424_) 
                                      ^ (IData)((vlSelf->top__DOT___7096_ 
                                                 >> 5U))));
    vlSelf->top__DOT___0042_ = (1U & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                      | (IData)(vlSelf->top__DOT___1343_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__89(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__89\n"); );
    // Body
    vlSelf->top__DOT___1840_ = (1U & ((IData)(vlSelf->top__DOT___0170_) 
                                      ^ (IData)(vlSelf->top__DOT___4761_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__90(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__90\n"); );
    // Body
    vlSelf->top__DOT___0334_ = (1U & (~ (((IData)(vlSelf->top__DOT___0170_) 
                                          & ((IData)(vlSelf->top__DOT___7049_) 
                                             >> 8U)) 
                                         | ((vlSelf->top__DOT___7025_ 
                                             >> 0x13U) 
                                            & (IData)(vlSelf->top__DOT___0372_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__91(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__91\n"); );
    // Body
    vlSelf->top__DOT___0694_ = ((IData)(vlSelf->top__DOT___0695_) 
                                & (~ (IData)(vlSelf->top__DOT___0170_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__92(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__92\n"); );
    // Body
    vlSelf->top__DOT___1140_ = (1U & ((IData)(vlSelf->top__DOT___0265_) 
                                      + (IData)(vlSelf->top__DOT___0170_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__93(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__93\n"); );
    // Body
    vlSelf->top__DOT___0070_ = ((IData)(vlSelf->top__DOT___0781_) 
                                & (IData)(vlSelf->top__DOT___0170_));
    vlSelf->top__DOT___0866_ = ((~ (IData)(vlSelf->top__DOT___0781_)) 
                                & (IData)(vlSelf->top__DOT___1149_));
    vlSelf->top__DOT___0078_ = ((IData)(vlSelf->top__DOT___0226_) 
                                & (IData)(vlSelf->top__DOT___0070_));
    vlSelf->top__DOT___0662_ = ((IData)(vlSelf->top__DOT___0070_) 
                                | (IData)(vlSelf->top__DOT___0764_));
    vlSelf->top__DOT___0153_ = ((IData)(vlSelf->top__DOT___0154_) 
                                & (~ (IData)(vlSelf->top__DOT___0070_)));
    vlSelf->top__DOT___2922_ = (1U & ((IData)(vlSelf->top__DOT___0866_) 
                                      + (IData)(vlSelf->top__DOT___0300_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__94(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__94\n"); );
    // Body
    vlSelf->top__DOT___0746_ = (1U & (~ (((IData)(vlSelf->top__DOT___0830_) 
                                          & (vlSelf->top__DOT___7117_[1U] 
                                             >> 0x1fU)) 
                                         | ((IData)(vlSelf->top__DOT___0102_) 
                                            & (IData)(vlSelf->top__DOT___0552_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__95(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__95\n"); );
    // Body
    vlSelf->top__DOT___0332_ = (1U & ((IData)(vlSelf->top__DOT___0750_) 
                                      | (IData)((vlSelf->top__DOT___6988_ 
                                                 >> 0x18U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__96(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__96\n"); );
    // Body
    vlSelf->top__DOT___4317_[3U] = ((0xfffff3ffU & 
                                     vlSelf->top__DOT___4317_[3U]) 
                                    | (0xfffffc00U 
                                       & ((0x800U & 
                                           ((IData)(vlSelf->top__DOT___7095_) 
                                            << 4U)) 
                                          | ((IData)(vlSelf->top__DOT___0750_) 
                                             << 0xaU))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__97(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__97\n"); );
    // Body
    vlSelf->top__DOT___2804_ = (1U & (~ (((IData)(vlSelf->top__DOT___2121_) 
                                          & (vlSelf->top__DOT___4773_[1U] 
                                             >> 0x1aU)) 
                                         | ((IData)(vlSelf->top__DOT___0116_) 
                                            & (IData)(vlSelf->top__DOT___0750_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__98(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__98\n"); );
    // Body
    vlSelf->top__DOT___1040_ = ((IData)(vlSelf->top__DOT___0567_) 
                                & (~ (IData)(vlSelf->top__DOT___0750_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__99(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__99\n"); );
    // Body
    vlSelf->top__DOT___1594_ = (1U & ((vlSelf->top__DOT___7160_ 
                                       >> 1U) ^ (IData)(vlSelf->top__DOT___1881_)));
    vlSelf->top__DOT___1310_ = ((IData)(vlSelf->top__DOT___0183_) 
                                | (IData)(vlSelf->top__DOT___0880_));
    vlSelf->top__DOT___3192_ = (1U & (((((IData)(vlSelf->top__DOT___0804_) 
                                         << 1U) | (IData)(vlSelf->top__DOT___0218_)) 
                                       + (((IData)(vlSelf->top__DOT___0424_) 
                                           << 1U) | (IData)(vlSelf->top__DOT___0880_))) 
                                      >> 1U));
    vlSelf->top__DOT___0878_ = ((IData)(vlSelf->top__DOT___0883_) 
                                & (~ (IData)(vlSelf->top__DOT___0880_)));
    vlSelf->top__DOT___0355_ = ((IData)(vlSelf->top__DOT___0520_) 
                                & (IData)(vlSelf->top__DOT___1594_));
    vlSelf->top__DOT___0972_ = ((~ (IData)(vlSelf->top__DOT___0102_)) 
                                & (IData)(vlSelf->top__DOT___0878_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__100(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__100\n"); );
    // Body
    vlSelf->top__DOT___0922_ = (1U & ((IData)((vlSelf->top__DOT___7090_ 
                                               >> 0xfU)) 
                                      ^ (IData)(vlSelf->top__DOT___0834_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__101(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__101\n"); );
    // Body
    vlSelf->top__DOT___1749_ = (1U & (~ (((IData)(vlSelf->top__DOT___1168_) 
                                          & ((IData)(vlSelf->top__DOT___7174_) 
                                             >> 1U)) 
                                         | (IData)(vlSelf->top__DOT___0834_))));
    vlSelf->top__DOT___0304_ = (1U & (~ ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                         | ((IData)(vlSelf->top__DOT___0830_) 
                                            & ((IData)(vlSelf->top__DOT___7174_) 
                                               >> 7U)))));
    vlSelf->top__DOT___0868_ = ((IData)(vlSelf->top__DOT___1749_) 
                                ^ (IData)(vlSelf->top__DOT___0995_));
    vlSelf->top__DOT___0119_ = ((IData)(vlSelf->top__DOT___1749_) 
                                | (IData)(vlSelf->top__DOT___0102_));
    vlSelf->top__DOT___0312_ = ((IData)(vlSelf->top__DOT___0304_) 
                                ^ (IData)(vlSelf->top__DOT___0069_));
    vlSelf->top__DOT___1226_ = ((IData)(vlSelf->top__DOT___0119_) 
                                & (IData)(vlSelf->top__DOT___0226_));
    vlSelf->top__DOT___0134_ = ((IData)(vlSelf->top__DOT___0119_) 
                                | (IData)(vlSelf->top__DOT___0187_));
    vlSelf->top__DOT___3553_ = (1U & ((IData)(vlSelf->top__DOT___0148_) 
                                      + (IData)(vlSelf->top__DOT___0119_)));
    vlSelf->top__DOT___0322_ = ((IData)(vlSelf->top__DOT___0520_) 
                                | (IData)(vlSelf->top__DOT___0312_));
    vlSelf->top__DOT____VdfgTmp_hc95200b7__0 = (((IData)(vlSelf->top__DOT___0312_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0727_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__102(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__102\n"); );
    // Body
    vlSelf->top__DOT___4435_[1U] = ((0xfffe0003U & 
                                     vlSelf->top__DOT___4435_[1U]) 
                                    | (0xfffffffcU 
                                       & (((IData)(vlSelf->top__DOT___0198_) 
                                           << 0x10U) 
                                          | ((IData)(vlSelf->top__DOT___7164_) 
                                             << 2U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__103(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__103\n"); );
    // Body
    vlSelf->top__DOT___0425_ = (1U & ((IData)(vlSelf->top__DOT___0198_) 
                                      ^ ((IData)(vlSelf->top__DOT___7185_) 
                                         >> 2U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__104(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__104\n"); );
    // Body
    vlSelf->top__DOT___0979_ = (1U & (((((IData)(vlSelf->top__DOT___1357_) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->top__DOT___0198_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0723_))) 
                                       + (IData)(vlSelf->top__DOT___7102_)) 
                                      >> 2U));
    vlSelf->top__DOT___2876_ = (1U & (((IData)(vlSelf->top__DOT___7102_) 
                                       + (((IData)(vlSelf->top__DOT___0834_) 
                                           << 1U) | 
                                          (1U & (~ (IData)(vlSelf->top__DOT___1366_))))) 
                                      >> 1U));
    vlSelf->top__DOT___1229_ = ((IData)(vlSelf->top__DOT___0198_) 
                                & (IData)(vlSelf->top__DOT___1288_));
    vlSelf->top__DOT___3221_ = ((IData)(vlSelf->top__DOT___0883_) 
                                ^ (IData)(vlSelf->top__DOT___1229_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__105(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__105\n"); );
    // Body
    vlSelf->top__DOT___1817_ = ((IData)(vlSelf->top__DOT___4741_) 
                                & (IData)(vlSelf->top__DOT___0160_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__106(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__106\n"); );
    // Body
    vlSelf->top__DOT___4468_[1U] = ((0xffffffdfU & 
                                     vlSelf->top__DOT___4468_[1U]) 
                                    | (0x20U & (((IData)(vlSelf->top__DOT___0629_) 
                                                 ^ 
                                                 vlSelf->top__DOT___6979_[2U]) 
                                                << 5U)));
    vlSelf->top__DOT___0571_ = (1U & ((IData)(vlSelf->top__DOT___0629_) 
                                      ^ vlSelf->top__DOT___6979_[2U]));
    vlSelf->top__DOT___0306_ = ((IData)(vlSelf->top__DOT___1526_) 
                                & (vlSelf->top__DOT___6979_[0U] 
                                   >> 0x11U));
    vlSelf->top__DOT___2403_ = (1U & ((IData)(vlSelf->top__DOT___0571_) 
                                      + (IData)(vlSelf->top__DOT___0023_)));
    vlSelf->top__DOT____VdfgTmp_he139e82f__0 = (((IData)(vlSelf->top__DOT___0830_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0571_));
    vlSelf->top__DOT___1820_ = (1U & (((IData)(vlSelf->top__DOT____VdfgTmp_he139e82f__0) 
                                       + (IData)(vlSelf->top__DOT____VdfgTmp_he54fef32__0)) 
                                      >> 1U));
    vlSelf->top__DOT____VdfgTmp_h377f22b7__0 = (((IData)(vlSelf->top__DOT___1820_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___2403_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__107(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__107\n"); );
    // Body
    vlSelf->top__DOT___0815_ = ((IData)(vlSelf->top__DOT___0629_) 
                                ^ (IData)(vlSelf->top__DOT___2420_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__108(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__108\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_hcf12c1ce__0 = (((IData)(vlSelf->top__DOT___0160_) 
                                                 & (vlSelf->in_data[0x14U] 
                                                    >> 1U)) 
                                                | ((IData)(vlSelf->top__DOT___0629_) 
                                                   & ((IData)(vlSelf->top__DOT___7188_) 
                                                      >> 3U)));
    vlSelf->top__DOT___0688_ = (1U & (~ ((IData)(vlSelf->top__DOT___0069_) 
                                         | ((IData)(vlSelf->top__DOT___0723_) 
                                            & ((IData)(vlSelf->top__DOT___7188_) 
                                               >> 0xaU)))));
    vlSelf->top__DOT____Vconcswap_1_h08085d2f__0 = 
        ((0x8000000U & (vlSelf->top__DOT___7158_ << 0x12U)) 
         | ((0x4000000U & (vlSelf->top__DOT___7158_ 
                           << 0x13U)) | ((0x2000000U 
                                          & (vlSelf->top__DOT___7158_ 
                                             << 0x14U)) 
                                         | ((0x1c00000U 
                                             & (vlSelf->top__DOT___7158_ 
                                                << 0x15U)) 
                                            | (((IData)(vlSelf->top__DOT___0102_) 
                                                << 0x14U) 
                                               | (((IData)(vlSelf->top__DOT___0226_) 
                                                   << 0x13U) 
                                                  | (((IData)(vlSelf->top__DOT___0223_) 
                                                      << 0x12U) 
                                                     | (((IData)(vlSelf->top__DOT___0170_) 
                                                         << 0x11U) 
                                                        | (((IData)(vlSelf->top__DOT___0170_) 
                                                            << 0x10U) 
                                                           | ((0x8000U 
                                                               & ((IData)(vlSelf->top__DOT___7188_) 
                                                                  << 1U)) 
                                                              | ((0x7000U 
                                                                  & ((IData)(vlSelf->top__DOT___7188_) 
                                                                     << 3U)) 
                                                                 | ((0x800U 
                                                                     & ((IData)(vlSelf->top__DOT___7188_) 
                                                                        << 5U)) 
                                                                    | ((0x600U 
                                                                        & ((IData)(vlSelf->top__DOT___7188_) 
                                                                           << 6U)) 
                                                                       | (((IData)(vlSelf->top__DOT___1931_) 
                                                                           << 8U) 
                                                                          | (IData)(vlSelf->top__DOT____VdfgTmp_h66cf21d2__0)))))))))))))));
    vlSelf->top__DOT___1693_ = ((IData)(vlSelf->top__DOT___0424_) 
                                & ((IData)(vlSelf->top__DOT___7188_) 
                                   >> 4U));
    vlSelf->top__DOT___1194_ = (1U & (~ ((IData)(vlSelf->top__DOT___0330_) 
                                         & (IData)(vlSelf->top__DOT___0260_))));
    vlSelf->top__DOT___0113_ = ((IData)(vlSelf->top__DOT____VdfgTmp_hcf12c1ce__0) 
                                & (IData)(vlSelf->top__DOT___0212_));
    vlSelf->top__DOT___0038_ = (1U & (~ (IData)(vlSelf->top__DOT____VdfgTmp_hcf12c1ce__0)));
    vlSelf->top__DOT___2202_ = (1U & ((IData)(vlSelf->top__DOT___1693_) 
                                      | ((IData)(vlSelf->top__DOT___7188_) 
                                         >> 0xaU)));
    vlSelf->top__DOT___0586_ = ((IData)(vlSelf->top__DOT___1693_) 
                                | (IData)(vlSelf->top__DOT___0992_));
    vlSelf->top__DOT___0132_ = ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                & (IData)(vlSelf->top__DOT___1693_));
    vlSelf->top__DOT___3433_ = ((IData)(vlSelf->top__DOT___0038_) 
                                ^ (IData)(vlSelf->top__DOT___1007_));
    vlSelf->top__DOT____VdfgTmp_h1075c4b5__0 = (((IData)(vlSelf->top__DOT___0586_) 
                                                 & (IData)(vlSelf->top__DOT___0764_)) 
                                                | (IData)(vlSelf->top__DOT___0226_));
    vlSelf->top__DOT___0445_ = (1U & (~ (((IData)(vlSelf->top__DOT___1526_) 
                                          & (IData)(vlSelf->top__DOT___0132_)) 
                                         | (IData)(vlSelf->top__DOT___0552_))));
    vlSelf->top__DOT___1030_ = (1U & (~ (IData)(vlSelf->top__DOT____VdfgTmp_h1075c4b5__0)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__109(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__109\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h4e9534e0__0 = (3U 
                                                & ((IData)(vlSelf->top__DOT___7055_) 
                                                   + 
                                                   ((IData)(vlSelf->top__DOT___0300_) 
                                                    << 1U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__110(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__110\n"); );
    // Init
    CData/*0:0*/ top__DOT____VdfgTmp_hdf819ba6__0;
    top__DOT____VdfgTmp_hdf819ba6__0 = 0;
    // Body
    top__DOT____VdfgTmp_hdf819ba6__0 = (1U & (((IData)(vlSelf->top__DOT___1887_) 
                                               & ((IData)(vlSelf->top__DOT___7174_) 
                                                  >> 5U)) 
                                              | ((IData)(vlSelf->top__DOT___7092_) 
                                                 >> 4U)));
    vlSelf->top__DOT___1845_ = (1U & ((IData)(vlSelf->top__DOT___0119_) 
                                      + (IData)(vlSelf->top__DOT___7092_)));
    vlSelf->top__DOT___0427_ = ((IData)(top__DOT____VdfgTmp_hdf819ba6__0) 
                                & (IData)(vlSelf->top__DOT___0226_));
    vlSelf->top__DOT___0428_ = (1U & (~ (IData)(top__DOT____VdfgTmp_hdf819ba6__0)));
    vlSelf->top__DOT___1918_ = (1U & ((IData)(vlSelf->top__DOT___1208_) 
                                      + (IData)(vlSelf->top__DOT___0427_)));
    vlSelf->top__DOT___1584_ = ((IData)(vlSelf->top__DOT___0428_) 
                                & (IData)(vlSelf->top__DOT___0300_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__111(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__111\n"); );
    // Body
    vlSelf->top__DOT___0807_ = (1U & ((IData)((vlSelf->top__DOT___7116_ 
                                               >> 0x1fU)) 
                                      | (IData)(vlSelf->top__DOT___1605_)));
    vlSelf->top__DOT___1731_ = (1U & ((IData)((vlSelf->top__DOT___7116_ 
                                               >> 0x14U)) 
                                      ^ (IData)(vlSelf->top__DOT___0485_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__112(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__112\n"); );
    // Body
    vlSelf->top__DOT___0816_ = ((IData)(vlSelf->top__DOT___0485_) 
                                | (IData)(vlSelf->top__DOT___0236_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__113(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__113\n"); );
    // Body
    vlSelf->top__DOT___0563_ = (1U & ((IData)(vlSelf->top__DOT___0994_) 
                                      | (vlSelf->top__DOT___7051_ 
                                         >> 0x15U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__114(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__114\n"); );
    // Body
    vlSelf->top__DOT___1016_ = ((~ ((IData)(vlSelf->top__DOT___7118_) 
                                    >> 0xcU)) & (IData)(vlSelf->top__DOT___0290_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__115(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__115\n"); );
    // Body
    vlSelf->top__DOT___0164_ = ((IData)(vlSelf->top__DOT___0183_) 
                                & (vlSelf->top__DOT___7003_ 
                                   >> 0x1cU));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__116(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__116\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h46598784__0 = ((2U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___6971_ 
                                                             >> 0x25U)) 
                                                    << 1U)) 
                                                | (IData)(vlSelf->top__DOT___1066_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__117(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__117\n"); );
    // Body
    vlSelf->top__DOT___4471_ = ((0xcU & ((IData)((vlSelf->top__DOT___7087_ 
                                                  >> 0x20U)) 
                                         << 2U)) | 
                                ((2U & ((IData)((vlSelf->top__DOT___4344_ 
                                                 >> 0x25U)) 
                                        << 1U)) | (IData)(vlSelf->top__DOT___0880_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__118(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__118\n"); );
    // Body
    vlSelf->top__DOT___0616_ = ((IData)(vlSelf->top__DOT___0056_) 
                                & (~ (IData)(vlSelf->top__DOT___0141_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__119(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__119\n"); );
    // Body
    vlSelf->top__DOT___0055_ = (1U & ((~ (IData)(vlSelf->top__DOT___0056_)) 
                                      & (vlSelf->top__DOT___7025_ 
                                         >> 0x13U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__120(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__120\n"); );
    // Body
    vlSelf->top__DOT___1683_ = (1U & (~ (((IData)(vlSelf->top__DOT___0764_) 
                                          & (IData)(vlSelf->top__DOT___2486_)) 
                                         | (IData)(vlSelf->top__DOT___1615_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__121(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__121\n"); );
    // Body
    vlSelf->top__DOT___4335_ = ((0xfdfffffffffULL & vlSelf->top__DOT___4335_) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->top__DOT___0727_) 
                                                       | (vlSelf->top__DOT___4739_[2U] 
                                                          >> 0x14U))))) 
                                   << 0x25U));
    vlSelf->top__DOT___0990_ = (1U & ((IData)(vlSelf->top__DOT___0727_) 
                                      | (vlSelf->top__DOT___4739_[2U] 
                                         >> 0x14U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__122(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__122\n"); );
    // Body
    vlSelf->top__DOT___1012_ = ((~ ((IData)(vlSelf->top__DOT___7034_) 
                                    >> 5U)) & (IData)(vlSelf->top__DOT___0727_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__123(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__123\n"); );
    // Body
    vlSelf->top__DOT___2054_ = (IData)((((IData)(vlSelf->top__DOT___4753_) 
                                         >> 7U) | (IData)(vlSelf->top__DOT___0727_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__124(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__124\n"); );
    // Body
    vlSelf->top__DOT___0193_ = (1U & ((~ (IData)(vlSelf->top__DOT___0727_)) 
                                      & (vlSelf->top__DOT___4749_[0U] 
                                         >> 0xeU)));
    vlSelf->top__DOT___2177_ = (1U & (~ ((IData)(vlSelf->top__DOT___1667_) 
                                         & (IData)(vlSelf->top__DOT___1082_))));
    vlSelf->top__DOT___0192_ = ((~ (IData)(vlSelf->top__DOT___0193_)) 
                                & (IData)(vlSelf->top__DOT___0195_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__126(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__126\n"); );
    // Body
    vlSelf->top__DOT___4346_[0U] = ((0xfffffff7U & 
                                     vlSelf->top__DOT___4346_[0U]) 
                                    | (8U & ((~ ((IData)(vlSelf->top__DOT___0715_) 
                                                 | ((IData)(
                                                            (vlSelf->top__DOT___7089_ 
                                                             >> 0x15U)) 
                                                    & (IData)(vlSelf->top__DOT___0290_)))) 
                                             << 3U)));
    vlSelf->top__DOT___0011_ = (1U & (~ ((IData)(vlSelf->top__DOT___0715_) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT___7089_ 
                                                     >> 0x15U)) 
                                            & (IData)(vlSelf->top__DOT___0290_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__127(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__127\n"); );
    // Body
    vlSelf->top__DOT___1558_ = ((IData)(vlSelf->top__DOT___0154_) 
                                & ((IData)(vlSelf->top__DOT___7007_) 
                                   >> 4U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__128(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__128\n"); );
    // Body
    vlSelf->top__DOT___0551_ = (1U & ((IData)(vlSelf->top__DOT___0154_) 
                                      | (vlSelf->top__DOT___4785_ 
                                         >> 0xaU)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__129(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__129\n"); );
    // Body
    vlSelf->top__DOT___0635_ = ((IData)(vlSelf->top__DOT___0154_) 
                                & (~ vlSelf->top__DOT___7098_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__130(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__130\n"); );
    // Body
    vlSelf->top__DOT___2858_ = ((IData)(vlSelf->top__DOT___2126_) 
                                | (IData)(vlSelf->top__DOT___0242_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__132(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__132\n"); );
    // Body
    vlSelf->top__DOT___4523_[0U] = vlSelf->top__DOT____VdfgTmp_hddb1d034__0[0U];
    vlSelf->top__DOT___4523_[1U] = vlSelf->top__DOT____VdfgTmp_hddb1d034__0[1U];
    vlSelf->top__DOT___4523_[2U] = ((0x3fe0U & (vlSelf->top__DOT___4739_[2U] 
                                                >> 2U)) 
                                    | vlSelf->top__DOT____VdfgTmp_hddb1d034__0[2U]);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__133(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__133\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    __Vtemp_2[0U] = vlSelf->top__DOT____VdfgTmp_hddb1d034__0[0U];
    __Vtemp_2[1U] = vlSelf->top__DOT____VdfgTmp_hddb1d034__0[1U];
    __Vtemp_2[2U] = ((0x3e0U & (vlSelf->top__DOT___4739_[2U] 
                                >> 2U)) | vlSelf->top__DOT____VdfgTmp_hddb1d034__0[2U]);
    __Vtemp_5[0U] = 0U;
    __Vtemp_5[1U] = 0U;
    __Vtemp_5[2U] = (((IData)(vlSelf->top__DOT___0183_) 
                      << 9U) | ((IData)(vlSelf->top__DOT___0082_) 
                                << 8U));
    VL_ADD_W(3, __Vtemp_6, __Vtemp_2, __Vtemp_5);
    vlSelf->top__DOT____VdfgTmp_hed41f4bb__0[0U] = 
        __Vtemp_6[0U];
    vlSelf->top__DOT____VdfgTmp_hed41f4bb__0[1U] = 
        __Vtemp_6[1U];
    vlSelf->top__DOT____VdfgTmp_hed41f4bb__0[2U] = 
        (0x3ffU & __Vtemp_6[2U]);
    vlSelf->top__DOT___0503_ = (1U & ((vlSelf->top__DOT____VdfgTmp_hed41f4bb__0[2U] 
                                       >> 1U) & (vlSelf->top__DOT___7158_ 
                                                 >> 2U)));
    vlSelf->top__DOT___3858_ = ((0xfffffffeU & ((vlSelf->top__DOT____VdfgTmp_hed41f4bb__0[2U] 
                                                 << 0x16U) 
                                                | (0x3ffffeU 
                                                   & (vlSelf->top__DOT____VdfgTmp_hed41f4bb__0[1U] 
                                                      >> 0xaU)))) 
                                | (IData)(vlSelf->top__DOT___0223_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__134(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__134\n"); );
    // Body
    vlSelf->top__DOT___0681_ = ((IData)(vlSelf->top__DOT___2359_) 
                                ^ (IData)(vlSelf->top__DOT___0938_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__135(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__135\n"); );
    // Body
    vlSelf->top__DOT___1380_ = ((IData)(vlSelf->top__DOT___0031_) 
                                | (IData)(vlSelf->top__DOT___1667_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__136(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__136\n"); );
    // Body
    vlSelf->top__DOT___0040_ = (1U & ((IData)(vlSelf->top__DOT___0997_) 
                                      | (vlSelf->top__DOT___4740_[1U] 
                                         >> 0xdU)));
    vlSelf->top__DOT___2046_ = ((IData)(vlSelf->top__DOT___0040_) 
                                ^ (IData)(vlSelf->top__DOT___0226_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__137(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__137\n"); );
    // Body
    vlSelf->top__DOT___2958_ = (1U & (((((IData)(vlSelf->top__DOT___0529_) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->top__DOT___0183_) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (~ (IData)(vlSelf->top__DOT___0876_))))) 
                                       + (((IData)(vlSelf->top__DOT___0310_) 
                                           << 2U) | 
                                          (((IData)(vlSelf->top__DOT___0218_) 
                                            << 1U) 
                                           | (1U & 
                                              (vlSelf->top__DOT___4749_[2U] 
                                               >> 0x16U))))) 
                                      >> 2U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__138(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__138\n"); );
    // Body
    vlSelf->top__DOT___2187_ = ((IData)(vlSelf->top__DOT___0406_) 
                                | (IData)(vlSelf->top__DOT___0176_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__139(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__139\n"); );
    // Body
    vlSelf->top__DOT___3317_ = (1U & (((IData)(vlSelf->top__DOT___0176_) 
                                       | (IData)(vlSelf->top__DOT___1082_)) 
                                      | (vlSelf->top__DOT___4773_[2U] 
                                         >> 7U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__141(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__141\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_hed643286__0 = ((0x3ffffff0U 
                                                 & ((IData)(vlSelf->top__DOT___7096_) 
                                                    << 4U)) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h3d101cf7__0));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__142(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__142\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_hc3435163__0 = (((IData)(vlSelf->top__DOT___1667_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___1672_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0723_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__143(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__143\n"); );
    // Body
    vlSelf->top__DOT___0342_ = (1U & ((~ (IData)((vlSelf->top__DOT___7106_ 
                                                  >> 4U))) 
                                      & (~ (IData)(vlSelf->top__DOT___1051_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__144(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__144\n"); );
    // Body
    vlSelf->top__DOT___1561_ = (1U & (~ (((IData)(vlSelf->top__DOT___2502_) 
                                          & (IData)(vlSelf->top__DOT___0170_)) 
                                         | ((IData)(vlSelf->top__DOT___0023_) 
                                            & (IData)(vlSelf->top__DOT___4738_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__145(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__145\n"); );
    // Body
    vlSelf->top__DOT___0072_ = ((~ (IData)(vlSelf->top__DOT___0073_)) 
                                & (IData)(vlSelf->top__DOT___0074_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__146(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__146\n"); );
    // Body
    vlSelf->top__DOT___0417_ = ((IData)(vlSelf->top__DOT___0074_) 
                                & (IData)(vlSelf->top__DOT___1800_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__147(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__147\n"); );
    // Body
    vlSelf->top__DOT___1389_ = (1U & (~ ((IData)(vlSelf->top__DOT___0880_) 
                                         & (IData)(vlSelf->top__DOT___0844_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__148(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__148\n"); );
    // Body
    vlSelf->top__DOT___0867_ = (1U & (~ (((IData)(vlSelf->top__DOT___0218_) 
                                          & (IData)(vlSelf->top__DOT___0844_)) 
                                         | ((IData)(vlSelf->top__DOT___1667_) 
                                            & (IData)(vlSelf->top__DOT___7067_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__149(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__149\n"); );
    // Body
    vlSelf->top__DOT___1996_ = ((IData)(vlSelf->top__DOT___0284_) 
                                | ((IData)(vlSelf->top__DOT___0844_) 
                                   | (IData)(vlSelf->top__DOT___0622_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__150(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__150\n"); );
    // Body
    vlSelf->top__DOT___1880_ = (1U & (~ (((IData)(vlSelf->top__DOT___1672_) 
                                          & (vlSelf->top__DOT___7183_ 
                                             >> 0x10U)) 
                                         | (IData)(vlSelf->top__DOT___0844_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__153(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__153\n"); );
    // Body
    vlSelf->top__DOT___4150_ = ((0xffULL & vlSelf->top__DOT___4150_) 
                                | ((QData)((IData)(
                                                   ((0x1fffffeU 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___7039_ 
                                                                 >> 9U)) 
                                                        << 1U)) 
                                                    | (IData)(vlSelf->top__DOT___1343_)))) 
                                   << 8U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__154(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__154\n"); );
    // Init
    CData/*6:0*/ top__DOT___4351_;
    top__DOT___4351_ = 0;
    // Body
    top__DOT___4351_ = ((0x7eU & (IData)(top__DOT___4351_)) 
                        | ((IData)(vlSelf->top__DOT___1343_) 
                           & (IData)(vlSelf->top__DOT___0066_)));
    vlSelf->top__DOT___0942_ = ((IData)(vlSelf->top__DOT___1343_) 
                                & (IData)(vlSelf->top__DOT___0066_));
    vlSelf->top__DOT___0450_ = (1U & (~ (((IData)(vlSelf->top__DOT___0338_) 
                                          & (IData)(vlSelf->top__DOT___0183_)) 
                                         | (IData)(vlSelf->top__DOT___1172_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__155(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__155\n"); );
    // Body
    vlSelf->top__DOT___1838_ = ((IData)(vlSelf->top__DOT___1840_) 
                                & (vlSelf->top__DOT___7176_ 
                                   >> 2U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__156(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__156\n"); );
    // Body
    vlSelf->top__DOT___1827_ = (1U & (~ (((IData)(vlSelf->top__DOT___1887_) 
                                          & (IData)(vlSelf->top__DOT___0070_)) 
                                         | ((IData)(vlSelf->top__DOT___7007_) 
                                            >> 2U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__157(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__157\n"); );
    // Body
    vlSelf->top__DOT___1578_ = ((IData)(vlSelf->top__DOT___0393_) 
                                ^ (IData)(vlSelf->top__DOT___0866_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__158(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__158\n"); );
    // Body
    vlSelf->top__DOT___2445_ = (1U & (~ (((vlSelf->top__DOT___4749_[2U] 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->top__DOT___0662_)) 
                                         | (IData)(vlSelf->top__DOT___0393_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__159(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__159\n"); );
    // Body
    vlSelf->top__DOT___2855_ = (1U & ((vlSelf->top__DOT___7098_ 
                                       >> 1U) | (IData)(vlSelf->top__DOT___0662_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__160(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__160\n"); );
    // Body
    vlSelf->top__DOT___0090_ = (1U & (~ (((IData)(vlSelf->top__DOT___1672_) 
                                          & (IData)(vlSelf->top__DOT___1594_)) 
                                         | ((IData)(vlSelf->top__DOT___0226_) 
                                            & (IData)(vlSelf->top__DOT___2886_)))));
    vlSelf->top__DOT___1352_ = ((IData)(vlSelf->top__DOT___0300_) 
                                | (IData)(vlSelf->top__DOT___0090_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__161(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__161\n"); );
    // Body
    vlSelf->top__DOT___0194_ = ((IData)(vlSelf->top__DOT___0304_) 
                                & (~ ((IData)(vlSelf->top__DOT___4759_) 
                                      >> 4U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__162(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__162\n"); );
    // Body
    vlSelf->top__DOT___1981_ = (1U & ((IData)(vlSelf->top__DOT___0868_) 
                                      | (vlSelf->top__DOT___7166_ 
                                         >> 2U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__163(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__163\n"); );
    // Body
    vlSelf->top__DOT___1245_ = (1U & (((((IData)(vlSelf->top__DOT___2420_) 
                                         << 1U) | (IData)(vlSelf->top__DOT___1672_)) 
                                       + (((IData)(vlSelf->top__DOT___0069_) 
                                           << 1U) | (IData)(vlSelf->top__DOT___0119_))) 
                                      >> 1U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__164(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__164\n"); );
    // Body
    vlSelf->top__DOT___0639_ = (1U & ((IData)(vlSelf->top__DOT___1672_) 
                                      + (IData)(vlSelf->top__DOT___0119_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__165(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__165\n"); );
    // Body
    vlSelf->top__DOT___1842_ = ((IData)(vlSelf->top__DOT___1172_) 
                                ^ (IData)(vlSelf->top__DOT___0119_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__166(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__166\n"); );
    // Body
    vlSelf->top__DOT___3771_ = (1U & (((((IData)(vlSelf->top__DOT___1672_) 
                                         << 2U) | (IData)(vlSelf->top__DOT___0148_)) 
                                       + (((IData)(vlSelf->top__DOT___0304_) 
                                           << 3U) | 
                                          (((IData)(vlSelf->top__DOT___0176_) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT___1366_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___0119_))))) 
                                      >> 3U));
    vlSelf->top__DOT___0748_ = ((IData)(vlSelf->top__DOT___3771_) 
                                ^ (IData)(vlSelf->top__DOT___0195_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__167(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__167\n"); );
    // Body
    vlSelf->top__DOT___0325_ = (1U & (((((IData)(vlSelf->top__DOT___0102_) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->top__DOT___0100_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___2420_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___1672_)))) 
                                       + (4U | (((IData)(vlSelf->top__DOT___0122_) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0119_))))) 
                                      >> 3U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__168(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__168\n"); );
    // Body
    vlSelf->top__DOT___3899_[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___0781_)) 
                                             << 0x2fU) 
                                            | (((QData)((IData)(vlSelf->top__DOT___0119_)) 
                                                << 0x2eU) 
                                               | (((QData)((IData)(vlSelf->top__DOT___0781_)) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(vlSelf->top__DOT___0218_)) 
                                                      << 0x2cU) 
                                                     | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                         << 0x2bU) 
                                                        | (((QData)((IData)(vlSelf->top__DOT___0116_)) 
                                                            << 0x2aU) 
                                                           | ((vlSelf->top__DOT___7096_ 
                                                               << 2U) 
                                                              | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_hb3939a22__0))))))))));
    vlSelf->top__DOT___3899_[1U] = ((0xffff0000U & 
                                     ((vlSelf->top__DOT___7237_[1U] 
                                       << 0x17U) | 
                                      (0x7f0000U & 
                                       (vlSelf->top__DOT___7237_[0U] 
                                        >> 9U)))) | (IData)(
                                                            ((((QData)((IData)(vlSelf->top__DOT___0781_)) 
                                                               << 0x2fU) 
                                                              | (((QData)((IData)(vlSelf->top__DOT___0119_)) 
                                                                  << 0x2eU) 
                                                                 | (((QData)((IData)(vlSelf->top__DOT___0781_)) 
                                                                     << 0x2dU) 
                                                                    | (((QData)((IData)(vlSelf->top__DOT___0218_)) 
                                                                        << 0x2cU) 
                                                                       | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                                           << 0x2bU) 
                                                                          | (((QData)((IData)(vlSelf->top__DOT___0116_)) 
                                                                              << 0x2aU) 
                                                                             | ((vlSelf->top__DOT___7096_ 
                                                                                << 2U) 
                                                                                | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_hb3939a22__0))))))))) 
                                                             >> 0x20U)));
    vlSelf->top__DOT___3899_[2U] = (0x3fU & (vlSelf->top__DOT___7237_[1U] 
                                             >> 9U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__169(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__169\n"); );
    // Body
    vlSelf->top__DOT___1717_ = (1U & (((((IData)(vlSelf->top__DOT___0100_) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->top__DOT___2420_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___1672_))) 
                                       + (4U | (((IData)(vlSelf->top__DOT___0069_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0119_)))) 
                                      >> 2U));
    vlSelf->top__DOT___2883_ = (1U & ((IData)(vlSelf->top__DOT___0300_) 
                                      + (IData)(vlSelf->top__DOT___1717_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__170(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__170\n"); );
    // Body
    vlSelf->top__DOT___2357_ = (1U & (((IData)(vlSelf->top__DOT___7152_) 
                                       >> 2U) | (IData)(vlSelf->top__DOT___3553_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__171(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__171\n"); );
    // Body
    vlSelf->top__DOT___3864_ = ((0xfffff80U & vlSelf->top__DOT___3864_) 
                                | (((IData)(vlSelf->top__DOT___0425_) 
                                    << 6U) | ((0x30U 
                                               & ((IData)(vlSelf->top__DOT___4778_) 
                                                  << 1U)) 
                                              | (7U 
                                                 & (IData)(vlSelf->top__DOT___4778_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__172(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__172\n"); );
    // Body
    vlSelf->top__DOT___1171_ = ((IData)(vlSelf->top__DOT___1037_) 
                                & (IData)(vlSelf->top__DOT___0425_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__173(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__173\n"); );
    // Body
    vlSelf->top__DOT___0978_ = (1U & ((~ (IData)(vlSelf->top__DOT___0979_)) 
                                      & ((IData)(vlSelf->top__DOT___7188_) 
                                         >> 0xaU)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__174(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__174\n"); );
    // Body
    vlSelf->top__DOT___1938_ = (1U & (~ (((IData)(vlSelf->top__DOT___0183_) 
                                          & ((IData)(vlSelf->top__DOT___1229_) 
                                             & (vlSelf->top__DOT___6960_ 
                                                >> 0x17U))) 
                                         | (vlSelf->top__DOT___7138_ 
                                            >> 0x11U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__175(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__175\n"); );
    // Body
    vlSelf->top__DOT___4084_ = (0xb74U | ((0x1fc0000U 
                                           & (vlSelf->top__DOT___4744_[0U] 
                                              << 0xdU)) 
                                          | (((IData)(vlSelf->top__DOT___0695_) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->top__DOT___0571_) 
                                                 << 0xfU) 
                                                | ((IData)(vlSelf->top__DOT___0074_) 
                                                   << 0xeU)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__176(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__176\n"); );
    // Body
    vlSelf->top__DOT___2484_ = (1U & (~ ((((IData)(vlSelf->top__DOT___7102_) 
                                           >> 5U) & (IData)(vlSelf->top__DOT___0571_)) 
                                         | (IData)(vlSelf->top__DOT___0834_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__177(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__177\n"); );
    // Body
    vlSelf->top__DOT___0352_ = (1U & (~ ((IData)(vlSelf->top__DOT___0571_) 
                                         | ((IData)(vlSelf->top__DOT___0834_) 
                                            & (IData)(vlSelf->top__DOT___0880_)))));
    vlSelf->top__DOT___0117_ = ((IData)(vlSelf->top__DOT___0352_) 
                                ^ (IData)(vlSelf->top__DOT___0061_));
    vlSelf->top__DOT___0289_ = (1U & (~ (((IData)(vlSelf->top__DOT___0352_) 
                                          & (IData)(vlSelf->top__DOT___2610_)) 
                                         | (IData)(vlSelf->top__DOT___0170_))));
    vlSelf->top__DOT___0272_ = ((IData)(vlSelf->top__DOT___0352_) 
                                & (IData)(vlSelf->top__DOT___1082_));
    vlSelf->top__DOT___4059_ = ((0xfffffdfU & vlSelf->top__DOT___4059_) 
                                | ((IData)(vlSelf->top__DOT___0117_) 
                                   << 5U));
    vlSelf->top__DOT___0115_ = ((~ (IData)(vlSelf->top__DOT___0116_)) 
                                & (IData)(vlSelf->top__DOT___0117_));
    vlSelf->top__DOT___0020_ = ((IData)(vlSelf->top__DOT___0289_) 
                                & (~ (IData)(vlSelf->top__DOT___0148_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__178(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__178\n"); );
    // Body
    vlSelf->top__DOT___1460_ = (1U & (~ (((IData)(vlSelf->top__DOT___0520_) 
                                          & (IData)(vlSelf->top__DOT___0995_)) 
                                         | ((IData)(vlSelf->top__DOT___0571_) 
                                            & (IData)(vlSelf->top__DOT___0844_)))));
    vlSelf->top__DOT___1792_ = ((IData)(vlSelf->top__DOT___1460_) 
                                | (IData)(vlSelf->top__DOT___0727_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__179(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__179\n"); );
    // Body
    vlSelf->top__DOT___3165_ = (1U & ((((0x10U & ((IData)(
                                                          (vlSelf->top__DOT___6989_ 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                        | ((8U & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                  << 3U)) 
                                           | (((IData)(vlSelf->top__DOT___0160_) 
                                               << 2U) 
                                              | (IData)(vlSelf->top__DOT____VdfgTmp_he139e82f__0)))) 
                                       + ((0x10U & 
                                           (vlSelf->top__DOT___3872_[1U] 
                                            >> 0xfU)) 
                                          | (((IData)(vlSelf->top__DOT___1743_) 
                                              << 3U) 
                                             | (((IData)(vlSelf->top__DOT___0699_) 
                                                 << 2U) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_he54fef32__0))))) 
                                      >> 4U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__180(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__180\n"); );
    // Body
    vlSelf->top__DOT___0576_ = (1U & (((0xaU | (IData)(vlSelf->top__DOT___1820_)) 
                                       + (vlSelf->top__DOT___7003_ 
                                          >> 0xeU)) 
                                      >> 3U));
    vlSelf->top__DOT___3765_ = (1U & (((2U | (IData)(vlSelf->top__DOT___1820_)) 
                                       + (vlSelf->top__DOT___7003_ 
                                          >> 0xeU)) 
                                      >> 1U));
    vlSelf->top__DOT___1022_ = (1U & ((IData)(vlSelf->top__DOT___1820_) 
                                      + (vlSelf->top__DOT___7003_ 
                                         >> 0xeU)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__181(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__181\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h09d4ce40__0 = (((IData)(vlSelf->top__DOT___1605_) 
                                                 & (IData)(
                                                           (vlSelf->top__DOT___7089_ 
                                                            >> 0xbU))) 
                                                | ((IData)(vlSelf->top__DOT___0195_) 
                                                   & (IData)(vlSelf->top__DOT___1820_)));
    vlSelf->top__DOT___2094_ = (1U & ((((2U & ((~ (IData)(vlSelf->top__DOT____VdfgTmp_h09d4ce40__0)) 
                                               << 1U)) 
                                        | (IData)(vlSelf->top__DOT___1366_)) 
                                       + (((IData)(vlSelf->top__DOT___0069_) 
                                           << 1U) | (IData)(vlSelf->top__DOT___0723_))) 
                                      >> 1U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__182(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__182\n"); );
    // Init
    CData/*3:0*/ top__DOT____VdfgTmp_hb3f709ae__0;
    top__DOT____VdfgTmp_hb3f709ae__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((7U & 
                                               (vlSelf->top__DOT___7158_ 
                                                >> 0x1bU)))) 
                              << 0x38U) | (((QData)((IData)(
                                                            (0x1ffU 
                                                             & (vlSelf->top__DOT____Vconcswap_1_h57a25666__0 
                                                                >> 2U)))) 
                                            << 0x2fU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT___7158_ 
                                                                   >> 0x11U)))) 
                                               << 0x2eU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT____Vconcswap_1_h57a25666__0 
                                                                      >> 1U)))) 
                                                  << 0x2dU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT___7158_ 
                                                                         >> 0xfU)))) 
                                                     << 0x2cU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & vlSelf->top__DOT____Vconcswap_1_h57a25666__0))) 
                                                        << 0x2bU) 
                                                       | (((QData)((IData)(
                                                                           (0xfU 
                                                                            & (vlSelf->top__DOT___7158_ 
                                                                               >> 0xaU)))) 
                                                           << 0x27U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->top__DOT____Vconcswap_1_h08085d2f__0 
                                                                                >> 0x1bU)))) 
                                                              << 0x26U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 8U)))) 
                                                                 << 0x25U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h08085d2f__0 
                                                                                >> 0x1aU)))) 
                                                                    << 0x24U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 6U)))) 
                                                                       << 0x23U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h08085d2f__0 
                                                                                >> 0x19U)))) 
                                                                          << 0x22U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)))) 
                                                                             << 0x21U) 
                                                                            | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h08085d2f__0 
                                                                                >> 0x16U)))) 
                                                                                << 0x1eU) 
                                                                               | (QData)((IData)(
                                                                                ((0x20000000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0x1dU)) 
                                                                                | ((0x1fc00000U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h08085d2f__0 
                                                                                << 7U)) 
                                                                                | ((0x300000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 8U)) 
                                                                                | ((0xe0000U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h08085d2f__0 
                                                                                << 5U)) 
                                                                                | ((0x18000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 8U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h08085d2f__0 
                                                                                << 3U)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 8U)) 
                                                                                | ((0x1800U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h08085d2f__0 
                                                                                << 2U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 8U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h08085d2f__0 
                                                                                << 1U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & vlSelf->top__DOT____Vconcswap_1_h08085d2f__0)))))))))))))))))))))))))))));
    __Vtemp_1[1U] = ((0xf8000000U & (vlSelf->top__DOT____Vconcswap_1_h57a25666__0 
                                     << 0x10U)) | (IData)(
                                                          ((((QData)((IData)(
                                                                             (7U 
                                                                              & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x1bU)))) 
                                                             << 0x38U) 
                                                            | (((QData)((IData)(
                                                                                (0x1ffU 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h57a25666__0 
                                                                                >> 2U)))) 
                                                                << 0x2fU) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x11U)))) 
                                                                   << 0x2eU) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h57a25666__0 
                                                                                >> 1U)))) 
                                                                      << 0x2dU) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0xfU)))) 
                                                                         << 0x2cU) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->top__DOT____Vconcswap_1_h57a25666__0))) 
                                                                            << 0x2bU) 
                                                                           | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0xaU)))) 
                                                                               << 0x27U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h08085d2f__0 
                                                                                >> 0x1bU)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 8U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h08085d2f__0 
                                                                                >> 0x1aU)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 6U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h08085d2f__0 
                                                                                >> 0x19U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h08085d2f__0 
                                                                                >> 0x16U)))) 
                                                                                << 0x1eU) 
                                                                                | (QData)((IData)(
                                                                                ((0x20000000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0x1dU)) 
                                                                                | ((0x1fc00000U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h08085d2f__0 
                                                                                << 7U)) 
                                                                                | ((0x300000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 8U)) 
                                                                                | ((0xe0000U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h08085d2f__0 
                                                                                << 5U)) 
                                                                                | ((0x18000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 8U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h08085d2f__0 
                                                                                << 3U)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 8U)) 
                                                                                | ((0x1800U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h08085d2f__0 
                                                                                << 2U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 8U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h08085d2f__0 
                                                                                << 1U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & vlSelf->top__DOT____Vconcswap_1_h08085d2f__0)))))))))))))))))))))))))))) 
                                                           >> 0x20U)));
    vlSelf->top__DOT___3863_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___3863_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___3863_[2U] = ((0x10000U & (vlSelf->top__DOT____Vconcswap_1_h57a25666__0 
                                                 >> 0xfU)) 
                                    | ((0x8000U & (vlSelf->top__DOT___7158_ 
                                                   >> 9U)) 
                                       | (0x7fffU & 
                                          (vlSelf->top__DOT____Vconcswap_1_h57a25666__0 
                                           >> 0x10U))));
    vlSelf->top__DOT____Vconcswap_1_h57a25666__0 = 
        (0x16e8000U | (((IData)(vlSelf->top__DOT___0023_) 
                        << 0x1fU) | ((0x40000000U & 
                                      (vlSelf->top__DOT___7158_ 
                                       << 7U)) | ((0x20000000U 
                                                   & (vlSelf->top__DOT___7158_ 
                                                      << 7U)) 
                                                  | (((IData)(vlSelf->top__DOT___0830_) 
                                                      << 0x1cU) 
                                                     | ((0x1000U 
                                                         & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                            << 0xcU)) 
                                                        | (((IData)(vlSelf->top__DOT___0102_) 
                                                            << 0xbU) 
                                                           | ((0x400U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  >> 0x10U)) 
                                                              | (((IData)(vlSelf->top__DOT___0023_) 
                                                                  << 9U) 
                                                                 | ((0x100U 
                                                                     & (vlSelf->top__DOT___3863_[2U] 
                                                                        >> 7U)) 
                                                                    | ((0x80U 
                                                                        & (vlSelf->top__DOT___7158_ 
                                                                           >> 0x10U)) 
                                                                       | ((0x40U 
                                                                           & (vlSelf->top__DOT___7158_ 
                                                                              >> 0x10U)) 
                                                                          | ((0x20U 
                                                                              & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x10U)) 
                                                                             | ((0x10U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x10U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x10U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0xeU)))))))))))))))))));
    vlSelf->top__DOT___3703_ = (1U & ((vlSelf->top__DOT___3863_[0U] 
                                       >> 0x1dU) + (IData)(vlSelf->top__DOT___1357_)));
    vlSelf->__VdfgTmp_h795d220d__0 = ((0x8000U & (vlSelf->top__DOT___3863_[1U] 
                                                  << 3U)) 
                                      | ((0x4000U & vlSelf->top__DOT___7158_) 
                                         | ((0x3c00U 
                                             & (vlSelf->top__DOT___3863_[1U] 
                                                << 3U)) 
                                            | ((0x200U 
                                                & vlSelf->top__DOT___7158_) 
                                               | ((0x100U 
                                                   & (vlSelf->top__DOT___3863_[1U] 
                                                      << 3U)) 
                                                  | ((0x80U 
                                                      & vlSelf->top__DOT___7158_) 
                                                     | ((0x40U 
                                                         & (vlSelf->top__DOT___3863_[1U] 
                                                            << 3U)) 
                                                        | ((0x20U 
                                                            & vlSelf->top__DOT___7158_) 
                                                           | ((0x10U 
                                                               & (vlSelf->top__DOT___3863_[1U] 
                                                                  << 3U)) 
                                                              | ((0xeU 
                                                                  & vlSelf->top__DOT___7158_) 
                                                                 | (1U 
                                                                    & (vlSelf->top__DOT___3863_[0U] 
                                                                       >> 0x1dU))))))))))));
    vlSelf->top__DOT____VdfgTmp_h4badb945__0 = ((0x18000U 
                                                 & vlSelf->top__DOT___3863_[0U]) 
                                                | ((0x4000U 
                                                    & ((IData)(vlSelf->top__DOT___7188_) 
                                                       << 8U)) 
                                                   | ((0x2000U 
                                                       & vlSelf->top__DOT___3863_[0U]) 
                                                      | ((0x1800U 
                                                          & ((IData)(vlSelf->top__DOT___7188_) 
                                                             << 8U)) 
                                                         | ((0x400U 
                                                             & vlSelf->top__DOT___3863_[0U]) 
                                                            | (((IData)(vlSelf->top__DOT___1931_) 
                                                                << 9U) 
                                                               | ((0x100U 
                                                                   & vlSelf->top__DOT___3863_[0U]) 
                                                                  | (IData)(vlSelf->top__DOT____VdfgTmp_h66cf21d2__0))))))));
    top__DOT____VdfgTmp_hb3f709ae__0 = (((IData)(vlSelf->top__DOT___1931_) 
                                         << 3U) | (
                                                   (4U 
                                                    & (vlSelf->top__DOT___3863_[0U] 
                                                       >> 6U)) 
                                                   | (((IData)(vlSelf->top__DOT___0218_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___0069_))));
    vlSelf->top__DOT___2888_ = (1U & (((IData)(vlSelf->__VdfgTmp_h795d220d__0) 
                                       + ((0x8000U 
                                           & ((IData)(vlSelf->top__DOT___7188_) 
                                              << 1U)) 
                                          | ((0x6000U 
                                              & (vlSelf->top__DOT___3863_[0U] 
                                                 >> 7U)) 
                                             | ((0x1c00U 
                                                 & ((IData)(vlSelf->top__DOT___7188_) 
                                                    << 1U)) 
                                                | ((0x300U 
                                                    & (vlSelf->top__DOT___3863_[0U] 
                                                       >> 7U)) 
                                                   | ((0x80U 
                                                       & ((IData)(vlSelf->top__DOT___7188_) 
                                                          << 1U)) 
                                                      | ((0x40U 
                                                          & (vlSelf->top__DOT___3863_[0U] 
                                                             >> 7U)) 
                                                         | ((0x30U 
                                                             & ((IData)(vlSelf->top__DOT___7188_) 
                                                                << 1U)) 
                                                            | ((8U 
                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                   >> 7U)) 
                                                               | (((IData)(vlSelf->top__DOT___1931_) 
                                                                   << 2U) 
                                                                  | ((2U 
                                                                      & (vlSelf->top__DOT___3863_[0U] 
                                                                         >> 7U)) 
                                                                     | (IData)(vlSelf->top__DOT___1357_)))))))))))) 
                                      >> 0xfU));
    vlSelf->top__DOT____VdfgTmp_h19d17f12__0 = ((0x10000U 
                                                 & ((IData)(vlSelf->top__DOT___7188_) 
                                                    << 2U)) 
                                                | ((0xc000U 
                                                    & (vlSelf->top__DOT___3863_[0U] 
                                                       >> 6U)) 
                                                   | ((0x3800U 
                                                       & ((IData)(vlSelf->top__DOT___7188_) 
                                                          << 2U)) 
                                                      | ((0x600U 
                                                          & (vlSelf->top__DOT___3863_[0U] 
                                                             >> 6U)) 
                                                         | ((0x100U 
                                                             & ((IData)(vlSelf->top__DOT___7188_) 
                                                                << 2U)) 
                                                            | ((0x80U 
                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                   >> 6U)) 
                                                               | ((0x60U 
                                                                   & ((IData)(vlSelf->top__DOT___7188_) 
                                                                      << 2U)) 
                                                                  | ((0x10U 
                                                                      & (vlSelf->top__DOT___3863_[0U] 
                                                                         >> 6U)) 
                                                                     | (IData)(top__DOT____VdfgTmp_hb3f709ae__0)))))))));
    vlSelf->top__DOT___2520_ = (1U & (((IData)(top__DOT____VdfgTmp_hb3f709ae__0) 
                                       + (IData)(vlSelf->top__DOT____VdfgTmp_h38109f58__0)) 
                                      >> 3U));
    vlSelf->top__DOT___0919_ = (1U & ((vlSelf->top__DOT____VdfgTmp_h19d17f12__0 
                                       + vlSelf->top__DOT____VdfgTmp_h4badb945__0) 
                                      >> 0x10U));
    vlSelf->top__DOT___0293_ = (1U & (~ (((IData)(vlSelf->top__DOT___1192_) 
                                          & (IData)(vlSelf->top__DOT___2520_)) 
                                         | ((IData)(vlSelf->top__DOT___7188_) 
                                            >> 0xaU))));
    vlSelf->top__DOT___0652_ = ((IData)(vlSelf->top__DOT___0293_) 
                                ^ (IData)(vlSelf->top__DOT___0496_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__183(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__183\n"); );
    // Body
    vlSelf->top__DOT___0614_ = ((IData)(vlSelf->top__DOT___0534_) 
                                & (IData)(vlSelf->top__DOT___1693_));
    vlSelf->top__DOT___1209_ = ((IData)(vlSelf->top__DOT___0038_) 
                                & (IData)(vlSelf->top__DOT___1172_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__184(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__184\n"); );
    // Body
    vlSelf->top__DOT___1322_ = ((IData)(vlSelf->top__DOT___1820_) 
                                & (IData)(vlSelf->top__DOT___1693_));
    vlSelf->top__DOT___4250_ = ((0xffffffffff7ULL & vlSelf->top__DOT___4250_) 
                                | ((QData)((IData)(
                                                   ((IData)(vlSelf->top__DOT___1887_) 
                                                    | (IData)(vlSelf->top__DOT___1322_)))) 
                                   << 3U));
    vlSelf->top__DOT___0147_ = ((IData)(vlSelf->top__DOT___1887_) 
                                | (IData)(vlSelf->top__DOT___1322_));
    vlSelf->top__DOT___0619_ = (1U & (~ ((IData)(vlSelf->top__DOT___0147_) 
                                         & (IData)(vlSelf->top__DOT___1605_))));
    vlSelf->top__DOT___0144_ = ((~ (IData)(vlSelf->top__DOT___0147_)) 
                                & (IData)(vlSelf->top__DOT___0148_));
    vlSelf->top__DOT___2554_ = (1U & ((IData)(vlSelf->top__DOT___0144_) 
                                      + (IData)(vlSelf->top__DOT___0147_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__185(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__185\n"); );
    // Body
    vlSelf->top__DOT___0014_ = ((IData)(vlSelf->top__DOT___1610_) 
                                ^ (IData)(vlSelf->top__DOT___0038_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__186(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__186\n"); );
    // Body
    vlSelf->top__DOT___0097_ = (1U & (~ ((IData)(vlSelf->top__DOT___0038_) 
                                         | ((IData)(vlSelf->top__DOT___0830_) 
                                            & (IData)(vlSelf->top__DOT___0997_)))));
    vlSelf->top__DOT___0079_ = (1U & (~ ((IData)(vlSelf->top__DOT___0097_) 
                                         & ((IData)(vlSelf->top__DOT___7006_) 
                                            >> 3U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__187(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__187\n"); );
    // Body
    vlSelf->top__DOT___0729_ = ((~ (IData)(vlSelf->top__DOT___0586_)) 
                                & (IData)(vlSelf->top__DOT___0265_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__188(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__188\n"); );
    // Body
    vlSelf->top__DOT___2291_ = (1U & (((((IData)(vlSelf->top__DOT___0183_) 
                                         << 4U) | (
                                                   ((IData)(vlSelf->top__DOT___1667_) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->top__DOT___0300_) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->top__DOT___0844_) 
                                                          << 1U) 
                                                         | (1U 
                                                            & ((IData)(vlSelf->top__DOT___7188_) 
                                                               >> 0xaU)))))) 
                                       + ((0x80U & 
                                           ((IData)(vlSelf->top__DOT___7102_) 
                                            << 7U)) 
                                          | (((IData)(vlSelf->top__DOT___0830_) 
                                              << 6U) 
                                             | (((IData)(vlSelf->top__DOT___0023_) 
                                                 << 5U) 
                                                | (((IData)(vlSelf->top__DOT___1366_) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->top__DOT___0132_) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->top__DOT___0218_) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top__DOT___0183_)))))))) 
                                      >> 7U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__189(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__189\n"); );
    // Body
    vlSelf->top__DOT___0933_ = (((IData)(vlSelf->top__DOT___0132_) 
                                 & (IData)(vlSelf->top__DOT___0176_)) 
                                & (IData)(vlSelf->top__DOT___0223_));
    vlSelf->top__DOT___0361_ = ((IData)(vlSelf->top__DOT___0933_) 
                                & (~ (IData)(vlSelf->top__DOT___0932_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__190(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__190\n"); );
    // Body
    vlSelf->top__DOT___0039_ = ((IData)(vlSelf->top__DOT____VdfgTmp_h1075c4b5__0) 
                                & (vlSelf->top__DOT___7003_ 
                                   >> 0x1aU));
    vlSelf->top__DOT___1069_ = ((IData)(vlSelf->top__DOT___0586_) 
                                ^ (IData)(vlSelf->top__DOT___0164_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__191(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__191\n"); );
    // Body
    vlSelf->top__DOT___2350_ = (1U & (~ (((IData)(vlSelf->top__DOT___0445_) 
                                          & (vlSelf->top__DOT___4746_[1U] 
                                             >> 5U)) 
                                         | (IData)(vlSelf->top__DOT___0425_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__192(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__192\n"); );
    // Body
    vlSelf->top__DOT___1866_ = ((IData)(vlSelf->top__DOT___1845_) 
                                & (IData)(vlSelf->top__DOT___0493_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__193(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__193\n"); );
    // Body
    vlSelf->top__DOT___1207_ = (1U & ((IData)(vlSelf->top__DOT___1845_) 
                                      ^ (vlSelf->top__DOT___7117_[2U] 
                                         >> 1U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__194(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__194\n"); );
    // Body
    vlSelf->top__DOT___0617_ = ((~ (IData)(vlSelf->top__DOT___0070_)) 
                                & (IData)(vlSelf->top__DOT___0427_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__195(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__195\n"); );
    // Body
    vlSelf->top__DOT___2332_ = (1U & (~ (((IData)(vlSelf->top__DOT___0830_) 
                                          & (IData)(vlSelf->top__DOT___0428_)) 
                                         | (IData)(vlSelf->top__DOT___1343_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__196(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__196\n"); );
    // Body
    vlSelf->top__DOT___4223_ = ((0x7ffffcU & vlSelf->top__DOT___4223_) 
                                | (((IData)(vlSelf->top__DOT___0428_) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSelf->top__DOT___7077_) 
                                               >> 1U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__199(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__199\n"); );
    // Body
    vlSelf->top__DOT___1483_ = (1U & ((vlSelf->top__DOT___7170_[0U] 
                                       >> 9U) | (IData)(vlSelf->top__DOT___1016_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__200(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__200\n"); );
    // Body
    vlSelf->top__DOT___0336_ = ((IData)(vlSelf->top__DOT___1825_) 
                                ^ (IData)(vlSelf->top__DOT___0164_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__201(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__201\n"); );
    // Body
    vlSelf->top__DOT___0163_ = ((~ (IData)(vlSelf->top__DOT___0164_)) 
                                & (IData)(vlSelf->top__DOT___0165_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__202(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__202\n"); );
    // Body
    vlSelf->top__DOT___2348_ = (1U & (((IData)(3U) 
                                       + ((0xcU & ((IData)(vlSelf->top__DOT___7062_) 
                                                   << 2U)) 
                                          | (IData)(vlSelf->top__DOT____VdfgTmp_h46598784__0))) 
                                      >> 3U));
    vlSelf->top__DOT___1260_ = (1U & (((IData)(3U) 
                                       + ((4U & ((IData)(vlSelf->top__DOT___7062_) 
                                                 << 2U)) 
                                          | (IData)(vlSelf->top__DOT____VdfgTmp_h46598784__0))) 
                                      >> 2U));
    vlSelf->top__DOT___4307_ = (((IData)(vlSelf->top__DOT___7062_) 
                                 << 2U) | (IData)(vlSelf->top__DOT____VdfgTmp_h46598784__0));
    vlSelf->top__DOT___4256_ = ((7U & (IData)(vlSelf->top__DOT___4256_)) 
                                | ((0x80U & (((IData)(0x13U) 
                                              + (IData)(vlSelf->top__DOT___4307_)) 
                                             << 3U)) 
                                   | (((IData)(vlSelf->top__DOT___2348_) 
                                       << 6U) | (((IData)(vlSelf->top__DOT___1260_) 
                                                  << 5U) 
                                                 | ((0x10U 
                                                     & (((IData)(3U) 
                                                         + (IData)(vlSelf->top__DOT____VdfgTmp_h46598784__0)) 
                                                        << 3U)) 
                                                    | ((IData)(vlSelf->top__DOT___3183_) 
                                                       << 3U))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__203(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__203\n"); );
    // Body
    vlSelf->top__DOT___0408_ = ((~ ((IData)(vlSelf->top__DOT___7111_) 
                                    >> 5U)) & (IData)(vlSelf->top__DOT___0990_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__204(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__204\n"); );
    // Body
    vlSelf->top__DOT___0757_ = ((IData)(vlSelf->top__DOT___0410_) 
                                & (IData)(vlSelf->top__DOT___0990_));
    vlSelf->top__DOT___0756_ = ((~ (IData)(vlSelf->top__DOT___0757_)) 
                                & (IData)(vlSelf->top__DOT___0735_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__205(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__205\n"); );
    // Body
    vlSelf->top__DOT___0444_ = (1U & (((IData)(vlSelf->top__DOT___6966_) 
                                       + (((IData)(vlSelf->top__DOT___0193_) 
                                           << 2U) | (IData)(vlSelf->top__DOT____VdfgTmp_h57390790__0))) 
                                      >> 2U));
    vlSelf->top__DOT___0527_ = ((IData)(vlSelf->top__DOT___0444_) 
                                | (IData)(vlSelf->top__DOT___1357_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__206(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__206\n"); );
    // Body
    vlSelf->top__DOT___1312_ = ((IData)(vlSelf->top__DOT___0551_) 
                                & (IData)(vlSelf->top__DOT___0122_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__207(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__207\n"); );
    // Body
    vlSelf->top__DOT___4433_[3U] = ((0xfffff7ffU & 
                                     vlSelf->top__DOT___4433_[3U]) 
                                    | (0x800U & ((vlSelf->top__DOT____VdfgTmp_hed41f4bb__0[2U] 
                                                  << 3U) 
                                                 | (vlSelf->top__DOT___4744_[1U] 
                                                    << 8U))));
    vlSelf->top__DOT___1513_ = (1U & ((vlSelf->top__DOT____VdfgTmp_hed41f4bb__0[2U] 
                                       >> 8U) | (vlSelf->top__DOT___4744_[1U] 
                                                 >> 3U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__208(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__208\n"); );
    // Body
    vlSelf->top__DOT___2638_ = (1U & (~ (((IData)(vlSelf->top__DOT___0503_) 
                                          & (IData)(vlSelf->top__DOT___0938_)) 
                                         | ((IData)(vlSelf->top__DOT___0834_) 
                                            & ((IData)(vlSelf->top__DOT___6964_) 
                                               >> 9U)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__209(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__209\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h75a7dafe__0 = (1U 
                                                & ((IData)(vlSelf->top__DOT___2187_) 
                                                   + (IData)(vlSelf->top__DOT___4738_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__210(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__210\n"); );
    // Body
    vlSelf->top__DOT___3369_ = (1U & ((((vlSelf->top__DOT___4772_[0U] 
                                         << 0x13U) 
                                        | (vlSelf->top__DOT___4772_[0U] 
                                           >> 0xdU)) 
                                       + (((IData)(vlSelf->top__DOT___0417_) 
                                           << 1U) | (IData)(vlSelf->top__DOT___0830_))) 
                                      >> 1U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__211(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__211\n"); );
    // Body
    vlSelf->top__DOT___0415_ = ((IData)(vlSelf->top__DOT___0417_) 
                                & (~ (IData)(vlSelf->top__DOT___0070_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__212(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__212\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h73e4fea7__0 = (((IData)(vlSelf->top__DOT___0102_) 
                                                 << 6U) 
                                                | ((0x20U 
                                                    & ((~ (IData)(vlSelf->top__DOT___1366_)) 
                                                       << 5U)) 
                                                   | (((IData)(vlSelf->top__DOT___0417_) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->top__DOT___2114_) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->top__DOT___0410_) 
                                                             << 2U) 
                                                            | ((2U 
                                                                & (vlSelf->top__DOT___7184_ 
                                                                   >> 0xeU)) 
                                                               | (IData)(vlSelf->top__DOT___0427_)))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__213(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__213\n"); );
    // Body
    vlSelf->top__DOT___0071_ = ((IData)(vlSelf->top__DOT___1827_) 
                                & (IData)(vlSelf->top__DOT___1132_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__214(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__214\n"); );
    // Body
    vlSelf->top__DOT___0414_ = (1U & (~ (((IData)(vlSelf->top__DOT___0560_) 
                                          & (IData)(
                                                    (vlSelf->top__DOT___7131_ 
                                                     >> 0x2cU))) 
                                         | ((IData)(vlSelf->top__DOT___2445_) 
                                            & (IData)(vlSelf->top__DOT___1317_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__216(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__216\n"); );
    // Body
    vlSelf->top__DOT___0324_ = (1U & ((~ (IData)(vlSelf->top__DOT___0325_)) 
                                      & ((IData)(vlSelf->top__DOT___7111_) 
                                         >> 2U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__217(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__217\n"); );
    // Body
    vlSelf->top__DOT___3794_ = (1U & (((8U | ((0xe0U 
                                               & (vlSelf->top__DOT___3899_[0U] 
                                                  << 2U)) 
                                              | ((0x10U 
                                                  & ((IData)(vlSelf->top__DOT___7096_) 
                                                     << 4U)) 
                                                 | (((IData)(vlSelf->top__DOT___2354_) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->top__DOT___0102_) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->top__DOT___1208_)))))) 
                                       + (((IData)(vlSelf->top__DOT___0372_) 
                                           << 7U) | 
                                          (((IData)(vlSelf->top__DOT___0102_) 
                                            << 6U) 
                                           | ((0x20U 
                                               & ((~ (IData)(vlSelf->top__DOT___1366_)) 
                                                  << 5U)) 
                                              | (((IData)(vlSelf->top__DOT___0417_) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->top__DOT___2114_) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT___0410_) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (vlSelf->top__DOT___7184_ 
                                                              >> 0xeU)) 
                                                          | (IData)(vlSelf->top__DOT___0427_))))))))) 
                                      >> 7U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__218(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__218\n"); );
    // Body
    vlSelf->top__DOT___1854_ = ((IData)(vlSelf->top__DOT___1717_) 
                                & vlSelf->top__DOT___7214_);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__219(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__219\n"); );
    // Body
    vlSelf->top__DOT___4268_ = ((0x3ffffffcU & vlSelf->top__DOT___4268_) 
                                | (((IData)(vlSelf->top__DOT___1717_) 
                                    << 1U) | (1U & 
                                              (vlSelf->top__DOT___7112_ 
                                               >> 0x12U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__221(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__221\n"); );
    // Body
    vlSelf->top__DOT___0696_ = (1U & (~ (((IData)(vlSelf->top__DOT___0290_) 
                                          & (IData)(vlSelf->top__DOT___0978_)) 
                                         | ((IData)(vlSelf->top__DOT___0427_) 
                                            & (vlSelf->top__DOT___7069_[0U] 
                                               >> 0x17U)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__222(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__222\n"); );
    // Body
    vlSelf->top__DOT___1424_ = ((IData)(vlSelf->top__DOT___1938_) 
                                ^ (IData)(vlSelf->top__DOT___0860_));
    vlSelf->top__DOT___4410_ = ((0x7fff7ffU & vlSelf->top__DOT___4410_) 
                                | ((IData)(vlSelf->top__DOT___1424_) 
                                   << 0xbU));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__223(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__223\n"); );
    // Body
    vlSelf->top__DOT___0182_ = (1U & ((IData)(vlSelf->top__DOT___0352_) 
                                      | (vlSelf->top__DOT___4744_[0U] 
                                         >> 0x1cU)));
    vlSelf->top__DOT___0973_ = (1U & (~ (((IData)(vlSelf->top__DOT___0182_) 
                                          & (IData)(vlSelf->top__DOT___1605_)) 
                                         | ((IData)(vlSelf->top__DOT___1881_) 
                                            & (IData)(vlSelf->top__DOT___0552_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__224(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__224\n"); );
    // Body
    vlSelf->top__DOT___0135_ = ((IData)(vlSelf->top__DOT___0117_) 
                                & (~ (IData)(vlSelf->top__DOT___0911_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__225(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__225\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h7609dce3__0 = (((IData)(vlSelf->top__DOT___1749_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0020_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__226(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__226\n"); );
    // Body
    vlSelf->top__DOT___0452_ = ((~ vlSelf->top__DOT___7237_[0U]) 
                                & (IData)(vlSelf->top__DOT___0020_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__227(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__227\n"); );
    // Body
    vlSelf->top__DOT___4346_[2U] = ((0x1fffdffU & vlSelf->top__DOT___4346_[2U]) 
                                    | (0x1ffffffU & 
                                       (((IData)(vlSelf->top__DOT___6976_) 
                                         & (IData)(vlSelf->top__DOT___1792_)) 
                                        << 9U)));
    vlSelf->top__DOT___1791_ = ((IData)(vlSelf->top__DOT___6976_) 
                                & (IData)(vlSelf->top__DOT___1792_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__228(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__228\n"); );
    // Body
    vlSelf->top__DOT___1273_ = (1U & (~ (((IData)(vlSelf->top__DOT___0234_) 
                                          & (IData)(vlSelf->top__DOT___3165_)) 
                                         | ((IData)(vlSelf->top__DOT___7127_) 
                                            & (IData)(vlSelf->top__DOT___0599_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__229(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__229\n"); );
    // Body
    vlSelf->top__DOT___4382_[0U] = ((0xfffffff3U & 
                                     vlSelf->top__DOT___4382_[0U]) 
                                    | (0xfffffffcU 
                                       & (((IData)(vlSelf->top__DOT___1037_) 
                                           << 3U) | 
                                          (4U & ((~ (IData)(vlSelf->top__DOT____VdfgTmp_h09d4ce40__0)) 
                                                 << 2U)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__230(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__230\n"); );
    // Body
    vlSelf->top__DOT___0577_ = ((IData)(vlSelf->top__DOT____VdfgTmp_h09d4ce40__0) 
                                & (vlSelf->top__DOT___7160_ 
                                   >> 0xeU));
    vlSelf->top__DOT___1678_ = (1U & ((IData)(vlSelf->top__DOT___0577_) 
                                      ^ (vlSelf->top__DOT___7158_ 
                                         >> 9U)));
    vlSelf->top__DOT___3878_ = ((0x6ffU & (IData)(vlSelf->top__DOT___3878_)) 
                                | ((IData)(vlSelf->top__DOT___1678_) 
                                   << 8U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__231(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__231\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_15;
    VlWide<4>/*127:0*/ __Vtemp_16;
    VlWide<4>/*127:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_31;
    // Body
    __Vtemp_5[0U] = (((vlSelf->in_data[4U] << 0x16U) 
                      | (0x3f8000U & (vlSelf->in_data[3U] 
                                      >> 0xaU))) | 
                     (((IData)(vlSelf->top__DOT___1168_) 
                       << 0xeU) | (((IData)(vlSelf->top__DOT___0699_) 
                                    << 0xdU) | (((IData)(vlSelf->top__DOT___0226_) 
                                                 << 0xcU) 
                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                    << 0xbU) 
                                                   | (((IData)(vlSelf->top__DOT___0830_) 
                                                       << 0xaU) 
                                                      | (((IData)(vlSelf->top__DOT___0226_) 
                                                          << 9U) 
                                                         | (((IData)(vlSelf->top__DOT___0496_) 
                                                             << 8U) 
                                                            | ((0xe0U 
                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                   >> 0x13U)) 
                                                               | ((0x10U 
                                                                   & (vlSelf->top__DOT___7158_ 
                                                                      >> 0x16U)) 
                                                                  | (((IData)(vlSelf->top__DOT___0023_) 
                                                                      << 3U) 
                                                                     | ((4U 
                                                                         & (vlSelf->top__DOT___3863_[2U] 
                                                                            >> 0xdU)) 
                                                                        | (3U 
                                                                           & (vlSelf->top__DOT___7158_ 
                                                                              >> 0x16U))))))))))))));
    __Vtemp_6[0U] = ((__Vtemp_5[0U] << 0x16U) | ((0x200000U 
                                                  & vlSelf->top__DOT___7158_) 
                                                 | ((0x100000U 
                                                     & vlSelf->top__DOT___7158_) 
                                                    | ((0x80000U 
                                                        & vlSelf->top__DOT___7158_) 
                                                       | ((0x40000U 
                                                           & vlSelf->top__DOT___7158_) 
                                                          | ((0x20000U 
                                                              & (vlSelf->top__DOT___3863_[1U] 
                                                                 << 3U)) 
                                                             | (((IData)(vlSelf->top__DOT___3617_) 
                                                                 << 0x10U) 
                                                                | ((0x8000U 
                                                                    & (vlSelf->top__DOT___3863_[1U] 
                                                                       << 3U)) 
                                                                   | ((0x4000U 
                                                                       & vlSelf->top__DOT___7158_) 
                                                                      | ((0x3c00U 
                                                                          & (vlSelf->top__DOT___3863_[1U] 
                                                                             << 3U)) 
                                                                         | ((0x200U 
                                                                             & vlSelf->top__DOT___7158_) 
                                                                            | ((0x100U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                               | ((0x80U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | ((8U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((4U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((2U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x1dU)))))))))))))))))))));
    __Vtemp_6[1U] = ((__Vtemp_5[0U] >> 0xaU) | (0xffc00000U 
                                                & (vlSelf->in_data[4U] 
                                                   << 0xcU)));
    __Vtemp_6[2U] = (((0x1fU & (vlSelf->in_data[4U] 
                                >> 0x14U)) | ((0x3ff000U 
                                               & (vlSelf->in_data[5U] 
                                                  << 0xcU)) 
                                              | (0xfe0U 
                                                 & (vlSelf->in_data[4U] 
                                                    >> 0x14U)))) 
                     | (0xffc00000U & (vlSelf->in_data[5U] 
                                       << 0xcU)));
    __Vtemp_6[3U] = ((0x1fU & (vlSelf->in_data[5U] 
                               >> 0x14U)) | (0x1ffe0U 
                                             & ((0x3ff000U 
                                                 & (vlSelf->in_data[6U] 
                                                    << 0xcU)) 
                                                | (0xfe0U 
                                                   & (vlSelf->in_data[5U] 
                                                      >> 0x14U)))));
    __Vtemp_7[0U] = (((IData)(vlSelf->top__DOT___0268_) 
                      << 0x1fU) | (((IData)(vlSelf->top__DOT___0843_) 
                                    << 0x1eU) | ((0x20000000U 
                                                  & (vlSelf->top__DOT___3872_[1U] 
                                                     << 0xaU)) 
                                                 | (((IData)(vlSelf->top__DOT___1743_) 
                                                     << 0x1cU) 
                                                    | (((IData)(vlSelf->top__DOT___0699_) 
                                                        << 0x1bU) 
                                                       | (((IData)(vlSelf->top__DOT___0496_) 
                                                           << 0x1aU) 
                                                          | (((IData)(vlSelf->top__DOT___1168_) 
                                                              << 0x19U) 
                                                             | (((IData)(vlSelf->top__DOT___0218_) 
                                                                 << 0x18U) 
                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                    << 0x17U) 
                                                                   | ((0x700000U 
                                                                       & (vlSelf->top__DOT___3863_[1U] 
                                                                          >> 4U)) 
                                                                      | ((0x80000U 
                                                                          & (vlSelf->top__DOT___7158_ 
                                                                             >> 7U)) 
                                                                         | (((IData)(vlSelf->top__DOT___0023_) 
                                                                             << 0x12U) 
                                                                            | ((0x20000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 2U)) 
                                                                               | ((0x10000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 7U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 7U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 7U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 7U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 7U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 9U) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 4U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 7U)) 
                                                                                | ((0x78U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 7U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 7U))))))))))))))))))))))))))));
    __Vtemp_8[0U] = ((__Vtemp_7[0U] << 0x16U) | ((0x200000U 
                                                  & (vlSelf->top__DOT___3863_[1U] 
                                                     << 0x12U)) 
                                                 | ((0x100000U 
                                                     & (vlSelf->top__DOT___7158_ 
                                                        << 0xfU)) 
                                                    | ((0x80000U 
                                                        & (vlSelf->top__DOT___3863_[1U] 
                                                           << 0x12U)) 
                                                       | ((0x40000U 
                                                           & (vlSelf->top__DOT___7158_ 
                                                              << 0xfU)) 
                                                          | ((0x20000U 
                                                              & (vlSelf->top__DOT___7158_ 
                                                                 << 0xfU)) 
                                                             | ((0x10000U 
                                                                 & (vlSelf->top__DOT___7158_ 
                                                                    << 0xfU)) 
                                                                | ((0x8000U 
                                                                    & (vlSelf->top__DOT___3863_[0U] 
                                                                       >> 0xeU)) 
                                                                   | (((IData)(vlSelf->top__DOT___0496_) 
                                                                       << 0xeU) 
                                                                      | (((IData)(vlSelf->top__DOT___0226_) 
                                                                          << 0xdU) 
                                                                         | (((IData)(vlSelf->top__DOT___0496_) 
                                                                             << 0xcU) 
                                                                            | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                               | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2121_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_))))))))))))))))))))));
    __Vtemp_8[1U] = ((__Vtemp_7[0U] >> 0xaU) | ((IData)(
                                                        ((0x7fffffffffffff8ULL 
                                                          & (((QData)((IData)(
                                                                              vlSelf->in_data[7U])) 
                                                              << 0x21U) 
                                                             | (0xfffffffffffffff8ULL 
                                                                & ((QData)((IData)(
                                                                                vlSelf->in_data[6U])) 
                                                                   << 1U)))) 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlSelf->top__DOT___0622_) 
                                                                             << 2U) 
                                                                            | (((IData)(vlSelf->top__DOT___2121_) 
                                                                                << 1U) 
                                                                               | (1U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0x16U)))))))) 
                                                << 0x16U));
    __Vtemp_8[2U] = (((IData)(((0x7fffffffffffff8ULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[7U])) 
                                    << 0x21U) | (0xfffffffffffffff8ULL 
                                                 & ((QData)((IData)(
                                                                    vlSelf->in_data[6U])) 
                                                    << 1U)))) 
                               | (QData)((IData)((((IData)(vlSelf->top__DOT___0622_) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->top__DOT___2121_) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (vlSelf->top__DOT___3872_[1U] 
                                                           >> 0x16U)))))))) 
                      >> 0xaU) | ((IData)((((0x7fffffffffffff8ULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->in_data[7U])) 
                                                 << 0x21U) 
                                                | (0xfffffffffffffff8ULL 
                                                   & ((QData)((IData)(
                                                                      vlSelf->in_data[6U])) 
                                                      << 1U)))) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->top__DOT___0622_) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->top__DOT___2121_) 
                                                                   << 1U) 
                                                                  | (1U 
                                                                     & (vlSelf->top__DOT___3872_[1U] 
                                                                        >> 0x16U))))))) 
                                           >> 0x20U)) 
                                  << 0x16U));
    __Vtemp_8[3U] = ((IData)((((0x7fffffffffffff8ULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[7U])) 
                                    << 0x21U) | (0xfffffffffffffff8ULL 
                                                 & ((QData)((IData)(
                                                                    vlSelf->in_data[6U])) 
                                                    << 1U)))) 
                               | (QData)((IData)((((IData)(vlSelf->top__DOT___0622_) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->top__DOT___2121_) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (vlSelf->top__DOT___3872_[1U] 
                                                           >> 0x16U))))))) 
                              >> 0x20U)) >> 0xaU);
    VL_ADD_W(4, __Vtemp_9, __Vtemp_6, __Vtemp_8);
    vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[0U] 
        = __Vtemp_9[0U];
    vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[1U] 
        = __Vtemp_9[1U];
    vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
        = __Vtemp_9[2U];
    vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
        = (0x1ffffU & __Vtemp_9[3U]);
    __Vtemp_15[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___1168_)) 
                               << 0x24U) | (((QData)((IData)(vlSelf->top__DOT___0699_)) 
                                             << 0x23U) 
                                            | (((QData)((IData)(vlSelf->top__DOT___0226_)) 
                                                << 0x22U) 
                                               | (((QData)((IData)(vlSelf->top__DOT___0102_)) 
                                                   << 0x21U) 
                                                  | (((QData)((IData)(vlSelf->top__DOT___0830_)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelf->top__DOT___0226_) 
                                                                         << 0x1fU) 
                                                                        | (((IData)(vlSelf->top__DOT___0496_) 
                                                                            << 0x1eU) 
                                                                           | ((0x38000000U 
                                                                               & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                              | ((0x6000000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 9U)) 
                                                                                | ((0xfc0000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h795d220d__0)))))))))))))))));
    __Vtemp_15[1U] = (((vlSelf->in_data[4U] << 0xcU) 
                       | (0xfe0U & (vlSelf->in_data[3U] 
                                    >> 0x14U))) | (IData)(
                                                          ((((QData)((IData)(vlSelf->top__DOT___1168_)) 
                                                             << 0x24U) 
                                                            | (((QData)((IData)(vlSelf->top__DOT___0699_)) 
                                                                << 0x23U) 
                                                               | (((QData)((IData)(vlSelf->top__DOT___0226_)) 
                                                                   << 0x22U) 
                                                                  | (((QData)((IData)(vlSelf->top__DOT___0102_)) 
                                                                      << 0x21U) 
                                                                     | (((QData)((IData)(vlSelf->top__DOT___0830_)) 
                                                                         << 0x20U) 
                                                                        | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___0496_) 
                                                                                << 0x1eU) 
                                                                                | ((0x38000000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | ((0x6000000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 9U)) 
                                                                                | ((0xfc0000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h795d220d__0)))))))))))))))) 
                                                           >> 0x20U)));
    __Vtemp_15[2U] = ((0x1fU & (vlSelf->in_data[4U] 
                                >> 0x14U)) | ((vlSelf->in_data[5U] 
                                               << 0xcU) 
                                              | (0xfe0U 
                                                 & (vlSelf->in_data[4U] 
                                                    >> 0x14U))));
    __Vtemp_15[3U] = ((0x1fU & (vlSelf->in_data[5U] 
                                >> 0x14U)) | (0x3fffe0U 
                                              & ((vlSelf->in_data[6U] 
                                                  << 0xcU) 
                                                 | (0xfe0U 
                                                    & (vlSelf->in_data[5U] 
                                                       >> 0x14U)))));
    __Vtemp_16[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___0622_)) 
                               << 0x38U) | (((QData)((IData)(vlSelf->top__DOT___2121_)) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT___3872_[1U] 
                                                                    >> 0x16U)))) 
                                                << 0x36U) 
                                               | (((QData)((IData)(vlSelf->top__DOT___0268_)) 
                                                   << 0x35U) 
                                                  | (((QData)((IData)(vlSelf->top__DOT___0843_)) 
                                                      << 0x34U) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->top__DOT___3872_[1U] 
                                                                             >> 0x13U)))) 
                                                         << 0x33U) 
                                                        | (((QData)((IData)(vlSelf->top__DOT___1743_)) 
                                                            << 0x32U) 
                                                           | (((QData)((IData)(vlSelf->top__DOT___0699_)) 
                                                               << 0x31U) 
                                                              | (((QData)((IData)(vlSelf->top__DOT___0496_)) 
                                                                  << 0x30U) 
                                                                 | (((QData)((IData)(vlSelf->top__DOT___1168_)) 
                                                                     << 0x2fU) 
                                                                    | (((QData)((IData)(vlSelf->top__DOT___0218_)) 
                                                                        << 0x2eU) 
                                                                       | (((QData)((IData)(vlSelf->top__DOT___0226_)) 
                                                                           << 0x2dU) 
                                                                          | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 0x18U)))) 
                                                                              << 0x2aU) 
                                                                             | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x19U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                >> 0xfU)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x3fU 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x12U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 0xeU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0x12U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xfU)) 
                                                                                | ((0x1e000000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0x12U)) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xfU)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0x12U)) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xfU)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0x12U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0x12U)) 
                                                                                | ((0x70000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0496_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0496_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 8U) 
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h9032282a__0)))))))))))))))))))))))))))))))))))))));
    __Vtemp_16[1U] = (((IData)((0x1fffffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[7U])) 
                                    << 0x1eU) | ((QData)((IData)(
                                                                 vlSelf->in_data[6U])) 
                                                 >> 2U)))) 
                       << 0x19U) | (IData)(((((QData)((IData)(vlSelf->top__DOT___0622_)) 
                                              << 0x38U) 
                                             | (((QData)((IData)(vlSelf->top__DOT___2121_)) 
                                                 << 0x37U) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->top__DOT___3872_[1U] 
                                                                        >> 0x16U)))) 
                                                    << 0x36U) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___0268_)) 
                                                       << 0x35U) 
                                                      | (((QData)((IData)(vlSelf->top__DOT___0843_)) 
                                                          << 0x34U) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0x13U)))) 
                                                             << 0x33U) 
                                                            | (((QData)((IData)(vlSelf->top__DOT___1743_)) 
                                                                << 0x32U) 
                                                               | (((QData)((IData)(vlSelf->top__DOT___0699_)) 
                                                                   << 0x31U) 
                                                                  | (((QData)((IData)(vlSelf->top__DOT___0496_)) 
                                                                      << 0x30U) 
                                                                     | (((QData)((IData)(vlSelf->top__DOT___1168_)) 
                                                                         << 0x2fU) 
                                                                        | (((QData)((IData)(vlSelf->top__DOT___0218_)) 
                                                                            << 0x2eU) 
                                                                           | (((QData)((IData)(vlSelf->top__DOT___0226_)) 
                                                                               << 0x2dU) 
                                                                              | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 0x18U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x19U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                >> 0xfU)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x3fU 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x12U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 0xeU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0x12U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xfU)) 
                                                                                | ((0x1e000000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0x12U)) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xfU)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0x12U)) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xfU)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0x12U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0x12U)) 
                                                                                | ((0x70000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0496_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0496_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 8U) 
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h9032282a__0)))))))))))))))))))))))))))))))))))))) 
                                            >> 0x20U)));
    __Vtemp_16[2U] = (((IData)((0x1fffffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[7U])) 
                                    << 0x1eU) | ((QData)((IData)(
                                                                 vlSelf->in_data[6U])) 
                                                 >> 2U)))) 
                       >> 7U) | ((IData)(((0x1fffffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->in_data[7U])) 
                                               << 0x1eU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->in_data[6U])) 
                                                 >> 2U))) 
                                          >> 0x20U)) 
                                 << 0x19U));
    __Vtemp_16[3U] = ((IData)(((0x1fffffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->in_data[7U])) 
                                    << 0x1eU) | ((QData)((IData)(
                                                                 vlSelf->in_data[6U])) 
                                                 >> 2U))) 
                               >> 0x20U)) >> 7U);
    VL_ADD_W(4, __Vtemp_17, __Vtemp_15, __Vtemp_16);
    vlSelf->top__DOT____Vconcswap_1_hf386247a__0 = 
        (0x1fU & (__Vtemp_17[3U] >> 0x11U));
    __Vtemp_19[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___0622_)) 
                               << 0x38U) | (((QData)((IData)(vlSelf->top__DOT___2121_)) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & ((((0x20U 
                                                                       & ((IData)(vlSelf->top__DOT___7006_) 
                                                                          << 4U)) 
                                                                      | ((0x10U 
                                                                          & ((IData)(vlSelf->top__DOT___7006_) 
                                                                             << 4U)) 
                                                                         | (((IData)(vlSelf->top__DOT___0218_) 
                                                                             << 3U) 
                                                                            | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 1U) 
                                                                               | (IData)(vlSelf->top__DOT___0699_))))) 
                                                                     + 
                                                                     ((0x20U 
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
                                                                               | (2U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 1U))))))) 
                                                                    >> 5U)))) 
                                                << 0x36U) 
                                               | (((QData)((IData)(vlSelf->top__DOT___0268_)) 
                                                   << 0x35U) 
                                                  | (((QData)((IData)(vlSelf->top__DOT___0843_)) 
                                                      << 0x34U) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (((((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 1U) 
                                                                               | (IData)(vlSelf->top__DOT___0699_)) 
                                                                              + 
                                                                              ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 1U)) 
                                                                               | (2U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 1U)))) 
                                                                             >> 2U)))) 
                                                         << 0x33U) 
                                                        | (((QData)((IData)(vlSelf->top__DOT___1743_)) 
                                                            << 0x32U) 
                                                           | (((QData)((IData)(vlSelf->top__DOT___0699_)) 
                                                               << 0x31U) 
                                                              | (((QData)((IData)(vlSelf->top__DOT___1168_)) 
                                                                  << 0x30U) 
                                                                 | (((QData)((IData)(vlSelf->top__DOT___0218_)) 
                                                                     << 0x2fU) 
                                                                    | (((QData)((IData)(vlSelf->top__DOT___0699_)) 
                                                                        << 0x2eU) 
                                                                       | (((QData)((IData)(vlSelf->top__DOT___0226_)) 
                                                                           << 0x2dU) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 0xeU)))) 
                                                                              << 0x2cU) 
                                                                             | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x14U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0932_)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 0xaU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xfU)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 6U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xdU)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 4U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xaU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x1bU) 
                                                                                | ((0x4000000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 0x1aU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x11U) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 2U)) 
                                                                                | ((0xc000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 2U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 2U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 6U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 2U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 6U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 2U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 2U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0069_))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_19[1U] = ((0xfe000000U & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                      << 0xdU)) | (IData)(
                                                          ((((QData)((IData)(vlSelf->top__DOT___0622_)) 
                                                             << 0x38U) 
                                                            | (((QData)((IData)(vlSelf->top__DOT___2121_)) 
                                                                << 0x37U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 4U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_))))) 
                                                                                + 
                                                                                ((0x20U 
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
                                                                                | (2U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 1U))))))) 
                                                                                >> 5U)))) 
                                                                   << 0x36U) 
                                                                  | (((QData)((IData)(vlSelf->top__DOT___0268_)) 
                                                                      << 0x35U) 
                                                                     | (((QData)((IData)(vlSelf->top__DOT___0843_)) 
                                                                         << 0x34U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_)) 
                                                                                + 
                                                                                ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 1U)) 
                                                                                | (2U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 1U)))) 
                                                                                >> 2U)))) 
                                                                            << 0x33U) 
                                                                           | (((QData)((IData)(vlSelf->top__DOT___1743_)) 
                                                                               << 0x32U) 
                                                                              | (((QData)((IData)(vlSelf->top__DOT___0699_)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1168_)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0218_)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0699_)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0226_)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 0xeU)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x14U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0932_)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 0xaU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xfU)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 6U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xdU)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 4U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xaU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x1bU) 
                                                                                | ((0x4000000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 0x1aU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x11U) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 2U)) 
                                                                                | ((0xc000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 2U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 2U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 6U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 2U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 6U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 2U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 2U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0069_))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                                           >> 0x20U)));
    vlSelf->top__DOT___3872_[0U] = __Vtemp_19[0U];
    vlSelf->top__DOT___3872_[1U] = __Vtemp_19[1U];
    vlSelf->top__DOT___3872_[2U] = ((0x1c000U & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                 << 0xdU)) 
                                    | ((0x2000U & (
                                                   vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                   << 0xdU)) 
                                       | (0x1ffffffU 
                                          & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                             >> 0x13U))));
    vlSelf->top__DOT___1304_ = (1U & (~ (((IData)(vlSelf->top__DOT___0183_) 
                                          & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[0U] 
                                             >> 0x13U)) 
                                         | ((IData)(vlSelf->top__DOT___0224_) 
                                            & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                               >> 7U)))));
    vlSelf->top__DOT___0923_ = (IData)(((vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                         >> 0x10U) 
                                        ^ (IData)(vlSelf->top__DOT___0699_)));
    __Vtemp_23[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT____VdfgTmp_h9032282a__0)) 
                               << 0x31U) | (((QData)((IData)(vlSelf->top__DOT___1168_)) 
                                             << 0x30U) 
                                            | (((QData)((IData)(vlSelf->top__DOT___0218_)) 
                                                << 0x2fU) 
                                               | (((QData)((IData)(vlSelf->top__DOT___0699_)) 
                                                   << 0x2eU) 
                                                  | (((QData)((IData)(vlSelf->top__DOT___0226_)) 
                                                      << 0x2dU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->top__DOT___7188_) 
                                                                             >> 0xeU)))) 
                                                         << 0x2cU) 
                                                        | (((QData)((IData)(
                                                                            (3U 
                                                                             & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x14U)))) 
                                                            << 0x2aU) 
                                                           | (((QData)((IData)(
                                                                               (7U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)))) 
                                                               << 0x27U) 
                                                              | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xfU)))) 
                                                                  << 0x25U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 6U)))) 
                                                                     << 0x24U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xdU)))) 
                                                                        << 0x23U) 
                                                                       | (((QData)((IData)(
                                                                                (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)))) 
                                                                           << 0x21U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xaU)))) 
                                                                              << 0x20U) 
                                                                             | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x1bU) 
                                                                                | ((0x4000000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 0x1aU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x11U) 
                                                                                | vlSelf->top__DOT____VdfgTmp_h19d17f12__0)))))))))))))))))))))))))))))));
    __Vtemp_23[1U] = ((0xfe000000U & vlSelf->top__DOT___3872_[1U]) 
                      | (IData)(((((QData)((IData)(vlSelf->top__DOT____VdfgTmp_h9032282a__0)) 
                                   << 0x31U) | (((QData)((IData)(vlSelf->top__DOT___1168_)) 
                                                 << 0x30U) 
                                                | (((QData)((IData)(vlSelf->top__DOT___0218_)) 
                                                    << 0x2fU) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___0699_)) 
                                                       << 0x2eU) 
                                                      | (((QData)((IData)(vlSelf->top__DOT___0226_)) 
                                                          << 0x2dU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 0xeU)))) 
                                                             << 0x2cU) 
                                                            | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x14U)))) 
                                                                << 0x2aU) 
                                                               | (((QData)((IData)(
                                                                                (7U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)))) 
                                                                   << 0x27U) 
                                                                  | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xfU)))) 
                                                                      << 0x25U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 6U)))) 
                                                                         << 0x24U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xdU)))) 
                                                                            << 0x23U) 
                                                                           | (((QData)((IData)(
                                                                                (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)))) 
                                                                               << 0x21U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xaU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x1bU) 
                                                                                | ((0x4000000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 0x1aU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x11U) 
                                                                                | vlSelf->top__DOT____VdfgTmp_h19d17f12__0)))))))))))))))))))))))))))))) 
                                 >> 0x20U)));
    __Vtemp_25[0U] = __Vtemp_23[0U];
    __Vtemp_25[1U] = __Vtemp_23[1U];
    __Vtemp_25[2U] = ((0x1c000U & vlSelf->top__DOT___3872_[2U]) 
                      | ((0x2000U & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                     << 0xdU)) | (0x1fffU 
                                                  & vlSelf->top__DOT___3872_[2U])));
    __Vtemp_26[0U] = (IData)((((QData)((IData)((1U 
                                                & (~ (IData)(vlSelf->top__DOT___0195_))))) 
                               << 0x3cU) | (((QData)((IData)(vlSelf->top__DOT___0102_)) 
                                             << 0x3bU) 
                                            | (((QData)((IData)(
                                                                (7U 
                                                                 & (vlSelf->top__DOT___3863_[1U] 
                                                                    >> 0x18U)))) 
                                                << 0x38U) 
                                               | (((QData)((IData)(
                                                                   (3U 
                                                                    & (vlSelf->top__DOT___7158_ 
                                                                       >> 0x19U)))) 
                                                   << 0x36U) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->top__DOT___3863_[2U] 
                                                                          >> 0xfU)))) 
                                                      << 0x35U) 
                                                     | (((QData)((IData)(
                                                                         (0x3fU 
                                                                          & (vlSelf->top__DOT___7158_ 
                                                                             >> 0x12U)))) 
                                                         << 0x2fU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 0xeU)))) 
                                                            << 0x2eU) 
                                                           | (((QData)((IData)(vlSelf->top__DOT___3617_)) 
                                                               << 0x2dU) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 0xcU)))) 
                                                                  << 0x2cU) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0xeU)))) 
                                                                     << 0x2bU) 
                                                                    | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 7U)))) 
                                                                        << 0x27U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 9U)))) 
                                                                           << 0x26U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 5U)))) 
                                                                              << 0x25U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 7U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 3U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 5U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 1U)))) 
                                                                                << 0x1eU) 
                                                                                | (QData)((IData)(
                                                                                ((0x20000000U 
                                                                                & vlSelf->top__DOT___3863_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 8U)) 
                                                                                | ((0x300000U 
                                                                                & vlSelf->top__DOT___3863_[0U]) 
                                                                                | ((0xe0000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 8U)) 
                                                                                | vlSelf->top__DOT____VdfgTmp_h4badb945__0))))))))))))))))))))))))))))));
    __Vtemp_26[1U] = (0x80000000U | (IData)(((((QData)((IData)(
                                                               (1U 
                                                                & (~ (IData)(vlSelf->top__DOT___0195_))))) 
                                               << 0x3cU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0102_)) 
                                                  << 0x3bU) 
                                                 | (((QData)((IData)(
                                                                     (7U 
                                                                      & (vlSelf->top__DOT___3863_[1U] 
                                                                         >> 0x18U)))) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(
                                                                        (3U 
                                                                         & (vlSelf->top__DOT___7158_ 
                                                                            >> 0x19U)))) 
                                                        << 0x36U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->top__DOT___3863_[2U] 
                                                                               >> 0xfU)))) 
                                                           << 0x35U) 
                                                          | (((QData)((IData)(
                                                                              (0x3fU 
                                                                               & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x12U)))) 
                                                              << 0x2fU) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 0xeU)))) 
                                                                 << 0x2eU) 
                                                                | (((QData)((IData)(vlSelf->top__DOT___3617_)) 
                                                                    << 0x2dU) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 0xcU)))) 
                                                                       << 0x2cU) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0xeU)))) 
                                                                          << 0x2bU) 
                                                                         | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 7U)))) 
                                                                             << 0x27U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 9U)))) 
                                                                                << 0x26U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 5U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 7U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 3U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 5U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 1U)))) 
                                                                                << 0x1eU) 
                                                                                | (QData)((IData)(
                                                                                ((0x20000000U 
                                                                                & vlSelf->top__DOT___3863_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 8U)) 
                                                                                | ((0x300000U 
                                                                                & vlSelf->top__DOT___3863_[0U]) 
                                                                                | ((0xe0000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 8U)) 
                                                                                | vlSelf->top__DOT____VdfgTmp_h4badb945__0))))))))))))))))))))))))))))) 
                                             >> 0x20U)));
    __Vtemp_30[0U] = __Vtemp_26[0U];
    __Vtemp_30[1U] = __Vtemp_26[1U];
    __Vtemp_30[2U] = (0x16eU | (((IData)(vlSelf->top__DOT___0023_) 
                                 << 0x10U) | ((0x8000U 
                                               & vlSelf->top__DOT___3863_[2U]) 
                                              | ((0x6000U 
                                                  & (vlSelf->top__DOT___7158_ 
                                                     >> 9U)) 
                                                 | ((IData)(vlSelf->top__DOT___0830_) 
                                                    << 0xcU)))));
    VL_ADD_W(3, __Vtemp_31, __Vtemp_25, __Vtemp_30);
    vlSelf->top__DOT____VdfgTmp_h5214cb79__0[0U] = 
        __Vtemp_31[0U];
    vlSelf->top__DOT____VdfgTmp_h5214cb79__0[1U] = 
        __Vtemp_31[1U];
    vlSelf->top__DOT____VdfgTmp_h5214cb79__0[2U] = 
        (0x1ffffU & __Vtemp_31[2U]);
    vlSelf->top__DOT___1811_ = ((vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[1U] 
                                 >> 5U) & (IData)(vlSelf->top__DOT___0652_));
    vlSelf->top__DOT___0186_ = ((IData)(vlSelf->top__DOT___0106_) 
                                | (IData)(vlSelf->top__DOT___0923_));
    vlSelf->top__DOT___1228_ = ((IData)(vlSelf->top__DOT___0834_) 
                                ^ (IData)(vlSelf->top__DOT___0923_));
    vlSelf->top__DOT___0991_ = (1U & ((~ (IData)(vlSelf->top__DOT___0992_)) 
                                      & (vlSelf->top__DOT____VdfgTmp_h5214cb79__0[1U] 
                                         >> 0x17U)));
    vlSelf->top__DOT___1075_ = ((IData)(vlSelf->top__DOT___0749_) 
                                ^ (IData)(vlSelf->top__DOT___1228_));
    vlSelf->top__DOT___1205_ = ((IData)(vlSelf->top__DOT___1228_) 
                                & (IData)(vlSelf->top__DOT___0424_));
    vlSelf->top__DOT____VdfgTmp_h89e9c86c__0 = (((IData)(vlSelf->top__DOT___0038_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___1205_));
    vlSelf->top__DOT___0489_ = ((IData)(vlSelf->top__DOT___1205_) 
                                & (IData)(vlSelf->top__DOT___0023_));
    vlSelf->top__DOT____VdfgTmp_h666a9191__0 = (1U 
                                                & (((((IData)(vlSelf->top__DOT___0923_) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->top__DOT___0290_)) 
                                                    + 
                                                    (((IData)(vlSelf->top__DOT___1066_) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->top__DOT___0489_))) 
                                                   >> 1U));
    vlSelf->top__DOT___1290_ = (1U & ((IData)(vlSelf->top__DOT___0290_) 
                                      + (IData)(vlSelf->top__DOT___0489_)));
    vlSelf->top__DOT___3982_ = (((IData)(vlSelf->top__DOT____VdfgTmp_h666a9191__0) 
                                 << 1U) | (IData)(vlSelf->top__DOT___1290_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__232(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__232\n"); );
    // Body
    vlSelf->top__DOT___1116_ = (1U & ((vlSelf->top__DOT___4749_[2U] 
                                       >> 0x16U) ^ (IData)(vlSelf->top__DOT___3703_)));
    vlSelf->top__DOT___1115_ = ((~ (IData)(vlSelf->top__DOT___0056_)) 
                                & (IData)(vlSelf->top__DOT___1116_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__233(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__233\n"); );
    // Body
    vlSelf->top__DOT___4314_ = ((0xfffU & vlSelf->top__DOT___4314_) 
                                | ((0xffc00000U & (vlSelf->top__DOT___4764_ 
                                                   << 0xcU)) 
                                   | ((0xf8000U & (vlSelf->top__DOT___4764_ 
                                                   << 0xaU)) 
                                      | ((IData)(vlSelf->top__DOT___0293_) 
                                         << 0xcU))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__234(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__234\n"); );
    // Body
    vlSelf->top__DOT___0885_ = (1U & (~ ((IData)(vlSelf->top__DOT___0293_) 
                                         | ((IData)(vlSelf->top__DOT___0192_) 
                                            & (vlSelf->top__DOT___7138_ 
                                               >> 4U)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__235(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__235\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h975d555e__0 = (((IData)(vlSelf->top__DOT___0503_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0652_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__236(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__236\n"); );
    // Body
    vlSelf->top__DOT___3361_ = (1U & ((IData)(vlSelf->top__DOT___0592_) 
                                      + (IData)(vlSelf->top__DOT___0614_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__237(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__237\n"); );
    // Body
    vlSelf->top__DOT___0091_ = ((IData)(vlSelf->top__DOT___1762_) 
                                | (IData)(vlSelf->top__DOT___0614_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__238(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__238\n"); );
    // Body
    vlSelf->top__DOT___0842_ = ((IData)(vlSelf->top__DOT___1209_) 
                                & (IData)(vlSelf->top__DOT___4738_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__239(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__239\n"); );
    // Body
    vlSelf->top__DOT___2601_ = (1U & (~ (((IData)(vlSelf->top__DOT___0344_) 
                                          & (IData)(vlSelf->top__DOT___0290_)) 
                                         | (IData)(vlSelf->top__DOT___1322_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__240(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__240\n"); );
    // Body
    vlSelf->top__DOT___2523_ = (1U & (((IData)(vlSelf->top__DOT___7092_) 
                                       >> 5U) | (IData)(vlSelf->top__DOT___1322_)));
    vlSelf->top__DOT___1482_ = (((IData)(vlSelf->top__DOT___7092_) 
                                 >> 8U) & (IData)(vlSelf->top__DOT___0147_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__241(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__241\n"); );
    // Body
    vlSelf->top__DOT___2578_ = (1U & ((vlSelf->top__DOT___4785_ 
                                       >> 4U) | (IData)(vlSelf->top__DOT___1322_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__242(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__242\n"); );
    // Body
    vlSelf->top__DOT___2100_ = (1U & (((IData)(vlSelf->top__DOT___7011_) 
                                       >> 4U) ^ (IData)(vlSelf->top__DOT___0147_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__243(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__243\n"); );
    // Body
    vlSelf->top__DOT___1906_ = (1U & (~ (((IData)(vlSelf->top__DOT___7102_) 
                                          & (IData)(vlSelf->top__DOT___0147_)) 
                                         | (((IData)(vlSelf->top__DOT___6992_) 
                                             >> 6U) 
                                            & (IData)(vlSelf->top__DOT___2876_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__244(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__244\n"); );
    // Body
    vlSelf->top__DOT___1071_ = ((IData)(vlSelf->top__DOT___1343_) 
                                & (IData)(vlSelf->top__DOT___0147_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__245(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__245\n"); );
    // Body
    vlSelf->top__DOT___2439_ = ((IData)(vlSelf->top__DOT___3091_) 
                                | (IData)(vlSelf->top__DOT___0619_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__246(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__246\n"); );
    // Body
    vlSelf->top__DOT___3346_ = (1U & (((IData)(vlSelf->top__DOT___7103_) 
                                       >> 3U) | (IData)(vlSelf->top__DOT___0014_)));
    vlSelf->top__DOT___4420_ = ((0x7fff7fffffffULL 
                                 & vlSelf->top__DOT___4420_) 
                                | ((QData)((IData)(vlSelf->top__DOT___3346_)) 
                                   << 0x1fU));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__247(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__247\n"); );
    // Body
    vlSelf->top__DOT___1089_ = ((IData)(vlSelf->top__DOT___0097_) 
                                & (~ (IData)(vlSelf->top__DOT___4783_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__248(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__248\n"); );
    // Body
    vlSelf->top__DOT___2193_ = (1U & (~ (((IData)(vlSelf->top__DOT___0097_) 
                                          & (IData)(vlSelf->top__DOT___0972_)) 
                                         | (IData)(vlSelf->top__DOT___0816_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__249(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__249\n"); );
    // Body
    vlSelf->top__DOT___4455_[2U] = ((0xfbfffffU & vlSelf->top__DOT___4455_[2U]) 
                                    | (0xfffffffU & 
                                       (((IData)(vlSelf->top__DOT___0079_) 
                                         | (IData)(vlSelf->top__DOT___1166_)) 
                                        << 0x16U)));
    vlSelf->top__DOT___0281_ = ((IData)(vlSelf->top__DOT___0079_) 
                                | (IData)(vlSelf->top__DOT___1166_));
    vlSelf->top__DOT___0093_ = ((IData)(vlSelf->top__DOT___2202_) 
                                | (IData)(vlSelf->top__DOT___0281_));
    vlSelf->top__DOT___1774_ = ((IData)(vlSelf->top__DOT___0997_) 
                                & (IData)(vlSelf->top__DOT___0281_));
    vlSelf->top__DOT___4085_ = ((0x1fbffffU & vlSelf->top__DOT___4085_) 
                                | ((IData)(vlSelf->top__DOT___0093_) 
                                   << 0x12U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__251(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__251\n"); );
    // Body
    vlSelf->top__DOT___0464_ = ((IData)(vlSelf->top__DOT___0079_) 
                                ^ (IData)(vlSelf->top__DOT___1310_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__252(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__252\n"); );
    // Body
    vlSelf->top__DOT___2176_ = (1U & (((((IData)(vlSelf->top__DOT___0729_) 
                                         << 1U) | (IData)(vlSelf->top__DOT___0300_)) 
                                       + (((IData)(vlSelf->top__DOT___0325_) 
                                           << 1U) | (IData)(vlSelf->top__DOT___1717_))) 
                                      >> 1U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__253(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__253\n"); );
    // Body
    vlSelf->top__DOT___0921_ = (1U & (~ (((IData)(vlSelf->top__DOT___0866_) 
                                          & (IData)(vlSelf->top__DOT___2187_)) 
                                         | ((IData)(vlSelf->top__DOT___0729_) 
                                            & (IData)(vlSelf->top__DOT___2786_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__254(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__254\n"); );
    // Body
    vlSelf->top__DOT___0216_ = (1U & (~ (((IData)(vlSelf->top__DOT___0450_) 
                                          & (IData)(vlSelf->top__DOT___0880_)) 
                                         | (IData)(vlSelf->top__DOT___2291_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__255(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__255\n"); );
    // Body
    vlSelf->top__DOT___0258_ = ((IData)((vlSelf->top__DOT___7096_ 
                                         >> 5U)) & (IData)(vlSelf->top__DOT___0933_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__256(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__256\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h4aea1403__0 = (((IData)(vlSelf->top__DOT___0132_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                    << 1U) 
                                                   | ((IData)(vlSelf->top__DOT___0039_) 
                                                      | (IData)(vlSelf->top__DOT___1060_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__257(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__257\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h4be41ef3__0 = (((IData)(vlSelf->top__DOT___1069_) 
                                                 << 2U) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_hc95200b7__0));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__258(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__258\n"); );
    // Body
    vlSelf->top__DOT___1530_ = (1U & (~ (((IData)(vlSelf->top__DOT___0055_) 
                                          & (IData)(
                                                    (vlSelf->top__DOT___7116_ 
                                                     >> 0x27U))) 
                                         | (IData)(vlSelf->top__DOT___0163_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__259(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__259\n"); );
    // Body
    vlSelf->top__DOT___0881_ = (1U & (~ ((IData)(vlSelf->top__DOT___0408_) 
                                         & (vlSelf->top__DOT___4782_ 
                                            >> 9U))));
    vlSelf->top__DOT___4410_ = ((0x7fffdffU & vlSelf->top__DOT___4410_) 
                                | ((IData)(vlSelf->top__DOT___0881_) 
                                   << 9U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__260(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__260\n"); );
    // Body
    vlSelf->top__DOT___0434_ = (1U & (~ (((IData)(vlSelf->top__DOT___0757_) 
                                          & (IData)(vlSelf->top__DOT___4738_)) 
                                         | (vlSelf->top__DOT___4766_[0U] 
                                            >> 0x12U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__261(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__261\n"); );
    // Body
    vlSelf->top__DOT___1003_ = ((~ (IData)(vlSelf->top__DOT___0756_)) 
                                & (IData)(vlSelf->top__DOT___0193_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__262(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__262\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_he090a1f5__0 = (((IData)(vlSelf->top__DOT___0183_) 
                                                 << 6U) 
                                                | ((0x20U 
                                                    & ((IData)(vlSelf->top__DOT___7188_) 
                                                       >> 5U)) 
                                                   | (((IData)(vlSelf->top__DOT___0444_) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->top__DOT___0276_) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->top__DOT___1369_) 
                                                             << 2U) 
                                                            | ((2U 
                                                                & ((~ (IData)(
                                                                              (vlSelf->top__DOT___7059_ 
                                                                               >> 0x17U))) 
                                                                   << 1U)) 
                                                               | (IData)(vlSelf->top__DOT___1366_)))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__263(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__263\n"); );
    // Body
    vlSelf->top__DOT___0924_ = ((IData)(vlSelf->top__DOT___0444_) 
                                & (IData)(vlSelf->top__DOT___0078_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__264(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__264\n"); );
    // Body
    vlSelf->top__DOT___0948_ = ((~ (IData)(vlSelf->top__DOT___0444_)) 
                                & (IData)(vlSelf->top__DOT___0393_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__265(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__265\n"); );
    // Body
    vlSelf->top__DOT___3806_ = (1U & ((((0x1fe0U & 
                                         (vlSelf->top__DOT___3885_ 
                                          >> 2U)) | 
                                        ((0x10U & (vlSelf->top__DOT___7066_ 
                                                   >> 2U)) 
                                         | ((0xcU & 
                                             (vlSelf->top__DOT___3885_ 
                                              >> 2U)) 
                                            | ((2U 
                                                & (vlSelf->top__DOT___7066_ 
                                                   >> 2U)) 
                                               | (1U 
                                                  & (vlSelf->top__DOT___3885_ 
                                                     >> 2U)))))) 
                                       + ((0x1ff8U 
                                           & ((IData)(
                                                      (vlSelf->top__DOT___4344_ 
                                                       >> 0x14U)) 
                                              << 3U)) 
                                          | (((IData)(vlSelf->top__DOT___0444_) 
                                              << 2U) 
                                             | (((IData)(vlSelf->top__DOT___0276_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___1369_))))) 
                                      >> 0xcU));
    vlSelf->top__DOT___3179_ = (1U & ((((0x3e0U & (vlSelf->top__DOT___3885_ 
                                                   >> 2U)) 
                                        | ((0x10U & 
                                            (vlSelf->top__DOT___7066_ 
                                             >> 2U)) 
                                           | ((0xcU 
                                               & (vlSelf->top__DOT___3885_ 
                                                  >> 2U)) 
                                              | ((2U 
                                                  & (vlSelf->top__DOT___7066_ 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (vlSelf->top__DOT___3885_ 
                                                       >> 2U)))))) 
                                       + ((0x3f8U & 
                                           ((IData)(
                                                    (vlSelf->top__DOT___4344_ 
                                                     >> 0x14U)) 
                                            << 3U)) 
                                          | (((IData)(vlSelf->top__DOT___0444_) 
                                              << 2U) 
                                             | (((IData)(vlSelf->top__DOT___0276_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___1369_))))) 
                                      >> 9U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__266(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__266\n"); );
    // Body
    vlSelf->top__DOT___1196_ = (1U & (~ (((vlSelf->top__DOT___4749_[2U] 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->top__DOT___1584_)) 
                                         | (IData)(vlSelf->top__DOT___0527_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__267(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__267\n"); );
    // Body
    vlSelf->top__DOT___0526_ = ((~ (IData)(vlSelf->top__DOT___0527_)) 
                                & (IData)(vlSelf->top__DOT___0529_));
    vlSelf->top__DOT___0835_ = ((IData)(vlSelf->top__DOT___0526_) 
                                | (IData)(vlSelf->top__DOT___0218_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__268(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__268\n"); );
    // Body
    vlSelf->top__DOT___2097_ = (1U & (((IData)(3U) 
                                       + ((4U & (vlSelf->top__DOT___4749_[2U] 
                                                 >> 0x14U)) 
                                          | (((IData)(vlSelf->top__DOT___0195_) 
                                              << 1U) 
                                             | (IData)(vlSelf->top__DOT___1513_)))) 
                                      >> 2U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__269(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__269\n"); );
    // Body
    vlSelf->top__DOT___2459_ = ((IData)(vlSelf->top__DOT___2638_) 
                                | (IData)(vlSelf->top__DOT___1929_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__270(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__270\n"); );
    // Body
    vlSelf->top__DOT___1697_ = ((IData)(vlSelf->top__DOT___0334_) 
                                ^ (IData)(vlSelf->top__DOT___3794_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__271(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__271\n"); );
    // Body
    vlSelf->top__DOT___4542_ = ((0x7e000U & (vlSelf->top__DOT___4749_[3U] 
                                             << 7U)) 
                                | ((0x1000U & (vlSelf->top__DOT___4268_ 
                                               >> 0x11U)) 
                                   | ((0x800U & (vlSelf->top__DOT___4749_[3U] 
                                                 << 7U)) 
                                      | ((0x600U & 
                                          (vlSelf->top__DOT___4268_ 
                                           >> 0x11U)) 
                                         | ((0x100U 
                                             & (vlSelf->top__DOT___4749_[3U] 
                                                << 7U)) 
                                            | ((0xe0U 
                                                & (vlSelf->top__DOT___4268_ 
                                                   >> 0x11U)) 
                                               | (((IData)(vlSelf->top__DOT___0218_) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->top__DOT___0212_) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->top__DOT___0485_) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->top__DOT___0834_) 
                                                            << 1U) 
                                                           | (1U 
                                                              & (~ (IData)(vlSelf->top__DOT___1366_)))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__272(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__272\n"); );
    // Body
    vlSelf->top__DOT___0133_ = ((~ (IData)(vlSelf->top__DOT___0134_)) 
                                & (IData)(vlSelf->top__DOT___0135_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__273(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__273\n"); );
    // Body
    vlSelf->top__DOT___1259_ = ((IData)(vlSelf->top__DOT___3765_) 
                                ^ (IData)(vlSelf->top__DOT___0135_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__274(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__274\n"); );
    // Body
    vlSelf->top__DOT___1032_ = ((~ (IData)((vlSelf->top__DOT___7059_ 
                                            >> 0x29U))) 
                                & (IData)(vlSelf->top__DOT___0452_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__275(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__275\n"); );
    // Body
    vlSelf->top__DOT___1272_ = ((IData)(vlSelf->top__DOT___0122_) 
                                & (IData)(vlSelf->top__DOT___1273_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__276(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__276\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((7U & 
                                               (vlSelf->top__DOT___3872_[2U] 
                                                >> 0xeU)))) 
                              << 0x3dU) | (((QData)((IData)(
                                                            (1U 
                                                             & vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U]))) 
                                            << 0x3cU) 
                                           | (((QData)((IData)(
                                                               (0xfffffU 
                                                                & ((vlSelf->top__DOT___3872_[2U] 
                                                                    << 7U) 
                                                                   | (vlSelf->top__DOT___3872_[1U] 
                                                                      >> 0x19U))))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                      >> 0xbU)))) 
                                                  << 0x27U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                         >> 0xaU)))) 
                                                     << 0x26U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                            >> 9U)))) 
                                                        << 0x25U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U))))) 
                                                           << 0x24U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                                >> 7U)))) 
                                                              << 0x23U) 
                                                             | (((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x1dU))))) 
                                                                 << 0x21U) 
                                                                | (((QData)((IData)(
                                                                                (0x3fffU 
                                                                                & ((vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                                << 9U) 
                                                                                | (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[1U] 
                                                                                >> 0x17U))))) 
                                                                    << 0x13U) 
                                                                   | (QData)((IData)(
                                                                                ((0x60000U 
                                                                                & ((- (IData)((IData)(vlSelf->top__DOT___0830_))) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0148_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 1U)) 
                                                                                | ((0x6000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 1U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 1U)) 
                                                                                | ((0x300U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 7U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 1U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 7U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 7U)) 
                                                                                | (IData)(vlSelf->top__DOT___1357_)))))))))))))))))))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)((7U 
                                                & (vlSelf->top__DOT___3872_[2U] 
                                                   >> 0xeU)))) 
                               << 0x3dU) | (((QData)((IData)(
                                                             (1U 
                                                              & vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U]))) 
                                             << 0x3cU) 
                                            | (((QData)((IData)(
                                                                (0xfffffU 
                                                                 & ((vlSelf->top__DOT___3872_[2U] 
                                                                     << 7U) 
                                                                    | (vlSelf->top__DOT___3872_[1U] 
                                                                       >> 0x19U))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                       >> 0xbU)))) 
                                                   << 0x27U) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                          >> 0xaU)))) 
                                                      << 0x26U) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                             >> 9U)))) 
                                                         << 0x25U) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U))))) 
                                                            << 0x24U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                                >> 7U)))) 
                                                               << 0x23U) 
                                                              | (((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x1dU))))) 
                                                                  << 0x21U) 
                                                                 | (((QData)((IData)(
                                                                                (0x3fffU 
                                                                                & ((vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                                << 9U) 
                                                                                | (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[1U] 
                                                                                >> 0x17U))))) 
                                                                     << 0x13U) 
                                                                    | (QData)((IData)(
                                                                                ((0x60000U 
                                                                                & ((- (IData)((IData)(vlSelf->top__DOT___0830_))) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0148_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 1U)) 
                                                                                | ((0x6000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 1U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 1U)) 
                                                                                | ((0x300U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 7U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 1U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 7U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 7U)) 
                                                                                | (IData)(vlSelf->top__DOT___1357_)))))))))))))))))))))))))))) 
                             >> 0x20U));
    vlSelf->top__DOT___4295_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___4295_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___4295_[2U] = ((0xcU & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                             >> 4U)) 
                                    | ((2U & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                              >> 4U)) 
                                       | (1U & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                >> 4U))));
    vlSelf->top__DOT___4347_ = ((0x3ff00U & (vlSelf->top__DOT___4295_[0U] 
                                             >> 0xbU)) 
                                | ((0xfeU & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[1U] 
                                             >> 0xfU)) 
                                   | (IData)(vlSelf->top__DOT___1887_)));
    vlSelf->top__DOT___0227_ = (1U & ((((0x3ff00U & 
                                         (vlSelf->top__DOT___4295_[0U] 
                                          >> 0xbU)) 
                                        | ((0xfeU & vlSelf->top__DOT___4347_) 
                                           | (IData)(vlSelf->top__DOT___1887_))) 
                                       + ((0x3fff8U 
                                           & ((vlSelf->in_data[0xeU] 
                                               << 0xaU) 
                                              | (0x3f8U 
                                                 & (vlSelf->in_data[0xdU] 
                                                    >> 0x16U)))) 
                                          | (((IData)(vlSelf->top__DOT___0218_) 
                                              << 2U) 
                                             | (((IData)(vlSelf->top__DOT___0195_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0198_))))) 
                                      >> 0x11U));
    vlSelf->top__DOT___2980_ = (1U & ((((0x300U & (
                                                   vlSelf->top__DOT___4295_[0U] 
                                                   >> 0xbU)) 
                                        | ((0xfeU & vlSelf->top__DOT___4347_) 
                                           | (IData)(vlSelf->top__DOT___1887_))) 
                                       + ((0x3f8U & 
                                           (vlSelf->in_data[0xdU] 
                                            >> 0x16U)) 
                                          | (((IData)(vlSelf->top__DOT___0218_) 
                                              << 2U) 
                                             | (((IData)(vlSelf->top__DOT___0195_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0198_))))) 
                                      >> 9U));
    vlSelf->top__DOT___2369_ = (1U & ((((0x3f00U & 
                                         (vlSelf->top__DOT___4295_[0U] 
                                          >> 0xbU)) 
                                        | ((0xfeU & vlSelf->top__DOT___4347_) 
                                           | (IData)(vlSelf->top__DOT___1887_))) 
                                       + ((0x3ff8U 
                                           & ((vlSelf->in_data[0xeU] 
                                               << 0xaU) 
                                              | (0x3f8U 
                                                 & (vlSelf->in_data[0xdU] 
                                                    >> 0x16U)))) 
                                          | (((IData)(vlSelf->top__DOT___0218_) 
                                              << 2U) 
                                             | (((IData)(vlSelf->top__DOT___0195_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0198_))))) 
                                      >> 0xdU));
    vlSelf->top__DOT___0760_ = (1U & ((((6U & vlSelf->top__DOT___4347_) 
                                        | (IData)(vlSelf->top__DOT___1887_)) 
                                       + (((IData)(vlSelf->top__DOT___0218_) 
                                           << 2U) | 
                                          (((IData)(vlSelf->top__DOT___0195_) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT___0198_)))) 
                                      >> 2U));
    vlSelf->top__DOT___3738_ = (1U & ((((0x7eU & vlSelf->top__DOT___4347_) 
                                        | (IData)(vlSelf->top__DOT___1887_)) 
                                       + ((0x78U & 
                                           (vlSelf->in_data[0xdU] 
                                            >> 0x16U)) 
                                          | (((IData)(vlSelf->top__DOT___0218_) 
                                              << 2U) 
                                             | (((IData)(vlSelf->top__DOT___0195_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0198_))))) 
                                      >> 6U));
    vlSelf->top__DOT___1394_ = (1U & ((((2U & vlSelf->top__DOT___4347_) 
                                        | (IData)(vlSelf->top__DOT___1887_)) 
                                       + (((IData)(vlSelf->top__DOT___0195_) 
                                           << 1U) | (IData)(vlSelf->top__DOT___0198_))) 
                                      >> 1U));
    vlSelf->top__DOT___1084_ = (1U & ((((0x700U & (
                                                   vlSelf->top__DOT___4295_[0U] 
                                                   >> 0xbU)) 
                                        | ((0xfeU & vlSelf->top__DOT___4347_) 
                                           | (IData)(vlSelf->top__DOT___1887_))) 
                                       + ((0x7f8U & 
                                           ((vlSelf->in_data[0xeU] 
                                             << 0xaU) 
                                            | (0x3f8U 
                                               & (vlSelf->in_data[0xdU] 
                                                  >> 0x16U)))) 
                                          | (((IData)(vlSelf->top__DOT___0218_) 
                                              << 2U) 
                                             | (((IData)(vlSelf->top__DOT___0195_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0198_))))) 
                                      >> 0xaU));
    vlSelf->top__DOT___0758_ = ((IData)(vlSelf->top__DOT___0170_) 
                                & (~ (IData)(vlSelf->top__DOT___0760_)));
    vlSelf->top__DOT___1100_ = (1U & (~ (((IData)(vlSelf->top__DOT___0760_) 
                                          & (IData)(vlSelf->top__DOT___0226_)) 
                                         | (IData)(vlSelf->top__DOT___1357_))));
    vlSelf->top__DOT___0442_ = ((IData)(vlSelf->top__DOT___1693_) 
                                ^ (IData)(vlSelf->top__DOT___3738_));
    vlSelf->top__DOT___0018_ = (1U & (~ ((IData)(vlSelf->top__DOT___1394_) 
                                         & (IData)(vlSelf->top__DOT___0226_))));
    vlSelf->top__DOT___1696_ = ((IData)(vlSelf->top__DOT___0102_) 
                                & (IData)(vlSelf->top__DOT___0758_));
    vlSelf->top__DOT___0208_ = ((IData)(vlSelf->top__DOT___0699_) 
                                & (IData)(vlSelf->top__DOT___0442_));
    vlSelf->top__DOT___0088_ = ((IData)(vlSelf->top__DOT___1366_) 
                                & (IData)(vlSelf->top__DOT___0442_));
    vlSelf->top__DOT___0732_ = ((IData)(vlSelf->top__DOT___0445_) 
                                ^ (IData)(vlSelf->top__DOT___0018_));
    vlSelf->top__DOT___3082_ = ((IData)(vlSelf->top__DOT___0088_) 
                                | (IData)(vlSelf->top__DOT___0834_));
    vlSelf->top__DOT___0778_ = ((IData)(vlSelf->top__DOT___0779_) 
                                & (~ (IData)(vlSelf->top__DOT___0088_)));
    vlSelf->top__DOT___0905_ = ((IData)(vlSelf->top__DOT___0088_) 
                                & (IData)(vlSelf->top__DOT___0069_));
    vlSelf->top__DOT___0295_ = ((IData)(vlSelf->top__DOT___0088_) 
                                & (IData)(vlSelf->top__DOT___1082_));
    vlSelf->top__DOT___2555_ = (1U & (~ (((IData)(vlSelf->top__DOT___0778_) 
                                          & (IData)(vlSelf->top__DOT___0102_)) 
                                         | (IData)(vlSelf->top__DOT___0445_))));
    vlSelf->top__DOT___0419_ = ((IData)(vlSelf->top__DOT___0295_) 
                                & (IData)(vlSelf->top__DOT___0038_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__277(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__277\n"); );
    // Body
    vlSelf->top__DOT___2005_ = (1U & (~ (((IData)(vlSelf->top__DOT___1304_) 
                                          & (IData)(vlSelf->top__DOT___2359_)) 
                                         | (IData)(vlSelf->top__DOT___1366_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__278(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__278\n"); );
    // Body
    vlSelf->top__DOT___0702_ = (1U & ((IData)(vlSelf->top__DOT___0923_) 
                                      + (IData)(vlSelf->top__DOT___7102_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__279(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__279\n"); );
    // Body
    vlSelf->top__DOT___1691_ = ((vlSelf->top__DOT___7003_ 
                                 >> 0xbU) & (IData)(vlSelf->top__DOT___0923_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__280(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__280\n"); );
    // Body
    vlSelf->top__DOT___3447_ = (1U & (((((IData)(vlSelf->top__DOT___0866_) 
                                         << 1U) | (IData)(vlSelf->top__DOT___0186_)) 
                                       + (((IData)(vlSelf->top__DOT___0293_) 
                                           << 1U) | (IData)(vlSelf->top__DOT___0441_))) 
                                      >> 1U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__281(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__281\n"); );
    // Body
    vlSelf->top__DOT___1419_ = ((IData)(vlSelf->top__DOT___0344_) 
                                | (IData)(vlSelf->top__DOT___1228_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__283(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__283\n"); );
    // Body
    vlSelf->top__DOT___0672_ = (1U & (~ ((((IData)(vlSelf->top__DOT___4753_) 
                                           >> 4U) & (IData)(vlSelf->top__DOT___0991_)) 
                                         | (IData)(vlSelf->top__DOT___0170_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__284(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__284\n"); );
    // Body
    vlSelf->top__DOT___0961_ = (1U & (~ ((IData)(vlSelf->top__DOT___1118_) 
                                         & (IData)(vlSelf->top__DOT___0991_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__285(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__285\n"); );
    // Body
    vlSelf->top__DOT___1091_ = (1U & ((~ (IData)(vlSelf->top__DOT___1075_)) 
                                      & (IData)((vlSelf->top__DOT___7190_ 
                                                 >> 0xbU))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__286(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__286\n"); );
    // Body
    vlSelf->top__DOT___1074_ = (1U & ((~ (IData)(vlSelf->top__DOT___1075_)) 
                                      & (vlSelf->top__DOT___4776_ 
                                         >> 6U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__287(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__287\n"); );
    // Body
    vlSelf->top__DOT___1796_ = (1U & (~ (((IData)(vlSelf->top__DOT___1075_) 
                                          & (IData)(vlSelf->top__DOT___1132_)) 
                                         | ((IData)(vlSelf->top__DOT___0293_) 
                                            & (vlSelf->top__DOT___7158_ 
                                               >> 0x13U)))));
    vlSelf->top__DOT___4343_[1U] = ((0x7fffffffU & 
                                     vlSelf->top__DOT___4343_[1U]) 
                                    | ((IData)(vlSelf->top__DOT___1796_) 
                                       << 0x1fU));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__288(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__288\n"); );
    // Body
    vlSelf->top__DOT___1674_ = ((vlSelf->top__DOT___7051_ 
                                 >> 7U) & (IData)(vlSelf->top__DOT___1205_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__289(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__289\n"); );
    // Body
    vlSelf->top__DOT___2641_ = (1U & ((IData)(vlSelf->top__DOT___1205_) 
                                      ^ (vlSelf->top__DOT___7140_ 
                                         >> 0xeU)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__290(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__290\n"); );
    // Body
    vlSelf->top__DOT___2494_ = ((IData)(vlSelf->top__DOT___1205_) 
                                | (IData)(vlSelf->top__DOT___0042_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__292(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__292\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h1d0fa539__0 = (((IData)(vlSelf->top__DOT___0834_) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->top__DOT___0144_) 
                                                    << 2U) 
                                                   | (IData)(vlSelf->top__DOT____VdfgTmp_h89e9c86c__0)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__293(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__293\n"); );
    // Body
    vlSelf->top__DOT___0219_ = ((IData)(vlSelf->top__DOT___0489_) 
                                | (IData)(vlSelf->top__DOT___1086_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__294(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__294\n"); );
    // Body
    vlSelf->top__DOT___0089_ = ((IData)(vlSelf->top__DOT___0091_) 
                                & (~ (IData)(vlSelf->top__DOT___0090_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__295(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__295\n"); );
    // Body
    vlSelf->top__DOT___4045_ = ((0x3fU & vlSelf->top__DOT___4045_) 
                                | ((0x1fff80U & (vlSelf->top__DOT___7088_ 
                                                 >> 3U)) 
                                   | ((IData)(vlSelf->top__DOT___1482_) 
                                      << 6U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__296(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__296\n"); );
    // Body
    vlSelf->top__DOT___3030_ = ((IData)(vlSelf->top__DOT___1482_) 
                                | (IData)(vlSelf->top__DOT___1762_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__297(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__297\n"); );
    // Body
    vlSelf->top__DOT___4251_ = (8U | ((0x1fffff0U & 
                                       (vlSelf->top__DOT___4773_[1U] 
                                        << 4U)) | (
                                                   ((IData)(vlSelf->top__DOT___1688_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___0300_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___1071_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__298(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__298\n"); );
    // Body
    vlSelf->top__DOT___1070_ = ((~ (IData)(vlSelf->top__DOT___0165_)) 
                                & (IData)(vlSelf->top__DOT___1071_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__299(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__299\n"); );
    // Body
    vlSelf->top__DOT___4142_ = ((0xe7fffffffffULL & vlSelf->top__DOT___4142_) 
                                | ((QData)((IData)(
                                                   (((IData)(vlSelf->top__DOT___2439_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___0097_)))) 
                                   << 0x27U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__301(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__301\n"); );
    // Body
    vlSelf->top__DOT___0232_ = ((IData)(vlSelf->top__DOT___0923_) 
                                & (IData)(vlSelf->top__DOT___0464_));
    vlSelf->top__DOT____VdfgTmp_hd3712d8f__0 = (((IData)(vlSelf->top__DOT___1343_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___1796_));
    vlSelf->top__DOT___0231_ = ((~ (IData)(vlSelf->top__DOT___0224_)) 
                                & (IData)(vlSelf->top__DOT___0232_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__302(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__302\n"); );
    // Body
    vlSelf->top__DOT___2089_ = (1U & (~ ((vlSelf->top__DOT___7184_ 
                                          >> 9U) & (IData)(vlSelf->top__DOT___0464_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__303(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__303\n"); );
    // Body
    vlSelf->top__DOT___2823_ = (1U & ((IData)(vlSelf->top__DOT___0921_) 
                                      ^ ((IData)(vlSelf->top__DOT___7171_) 
                                         >> 4U)));
    vlSelf->top__DOT___4367_ = ((0xfffffff7fffULL & vlSelf->top__DOT___4367_) 
                                | ((QData)((IData)(vlSelf->top__DOT___2823_)) 
                                   << 0xfU));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__304(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__304\n"); );
    // Body
    vlSelf->top__DOT___1462_ = (1U & (~ (((IData)(vlSelf->top__DOT___2523_) 
                                          & (IData)(vlSelf->top__DOT___2136_)) 
                                         | ((IData)(vlSelf->top__DOT___0216_) 
                                            & (IData)(vlSelf->top__DOT___0226_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__305(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__305\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h47a69e75__0 = (((IData)(vlSelf->top__DOT___0415_) 
                                                 << 3U) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h4aea1403__0));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__306(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__306\n"); );
    // Body
    vlSelf->top__DOT___4054_[0U] = ((0xe00003ffU & 
                                     vlSelf->top__DOT___4054_[0U]) 
                                    | (0xfffffc00U 
                                       & (((IData)(vlSelf->top__DOT___0212_) 
                                           << 0x1cU) 
                                          | ((0xc000000U 
                                              & ((IData)(vlSelf->top__DOT___7123_) 
                                                 << 0xfU)) 
                                             | ((0x2000000U 
                                                 & ((IData)(vlSelf->top__DOT___7123_) 
                                                    << 0xfU)) 
                                                | ((0x1000000U 
                                                    & ((IData)(vlSelf->top__DOT___7123_) 
                                                       << 0xfU)) 
                                                   | ((0x800000U 
                                                       & ((IData)(vlSelf->top__DOT___7123_) 
                                                          << 0xfU)) 
                                                      | ((0x7f8000U 
                                                          & ((IData)(vlSelf->top__DOT___7123_) 
                                                             << 0xfU)) 
                                                         | (((IData)(vlSelf->top__DOT___0881_) 
                                                             << 0xeU) 
                                                            | (((IData)(vlSelf->top__DOT___0496_) 
                                                                << 0xdU) 
                                                               | ((0x1000U 
                                                                   & (((IData)(5U) 
                                                                       + (IData)(vlSelf->top__DOT____VdfgTmp_h4be41ef3__0)) 
                                                                      << 0xaU)) 
                                                                  | (((IData)(vlSelf->top__DOT___0325_) 
                                                                      << 0xbU) 
                                                                     | ((IData)(vlSelf->top__DOT___1594_) 
                                                                        << 0xaU)))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__307(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__307\n"); );
    // Body
    vlSelf->top__DOT___1105_ = ((~ (IData)(vlSelf->top__DOT___0924_)) 
                                & ((IData)(vlSelf->top__DOT___7152_) 
                                   >> 3U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__309(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__309\n"); );
    // Body
    vlSelf->top__DOT___1857_ = (1U & (~ ((IData)(vlSelf->top__DOT___1196_) 
                                         & (IData)(vlSelf->top__DOT___1012_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__310(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__310\n"); );
    // Body
    vlSelf->top__DOT___1109_ = ((~ (IData)(vlSelf->top__DOT___4738_)) 
                                & (IData)(vlSelf->top__DOT___0526_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__311(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__311\n"); );
    // Body
    vlSelf->top__DOT___4379_ = ((0x1fe03U & vlSelf->top__DOT___4379_) 
                                | ((0x180U & (((0xaU 
                                                | (IData)(vlSelf->top__DOT___1820_)) 
                                               + (vlSelf->top__DOT___7003_ 
                                                  >> 0xeU)) 
                                              << 3U)) 
                                   | (((IData)(vlSelf->top__DOT___0576_) 
                                       << 6U) | ((0x20U 
                                                  & (((2U 
                                                       | (IData)(vlSelf->top__DOT___1820_)) 
                                                      + 
                                                      (vlSelf->top__DOT___7003_ 
                                                       >> 0xeU)) 
                                                     << 3U)) 
                                                 | (((IData)(vlSelf->top__DOT___3765_) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->top__DOT___1022_) 
                                                        << 3U) 
                                                       | ((IData)(vlSelf->top__DOT___0835_) 
                                                          << 2U)))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__312(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__312\n"); );
    // Body
    vlSelf->top__DOT___4410_ = ((0x7fffff3U & vlSelf->top__DOT___4410_) 
                                | ((8U & ((IData)(vlSelf->top__DOT___7162_) 
                                          << 3U)) | 
                                   ((IData)(vlSelf->top__DOT___0835_) 
                                    << 2U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__313(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__313\n"); );
    // Body
    vlSelf->top__DOT___3032_ = (1U & ((IData)(vlSelf->top__DOT___2097_) 
                                      ^ (IData)((vlSelf->top__DOT___4779_ 
                                                 >> 0x25U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__314(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__314\n"); );
    // Body
    vlSelf->top__DOT___1532_ = (1U & (~ (((IData)(vlSelf->top__DOT___0804_) 
                                          & (IData)(vlSelf->top__DOT___2054_)) 
                                         | (IData)(vlSelf->top__DOT___2097_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__316(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__316\n"); );
    // Body
    vlSelf->top__DOT___1950_ = ((IData)(vlSelf->top__DOT___0227_) 
                                ^ (IData)(vlSelf->top__DOT___0193_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__317(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__317\n"); );
    // Body
    vlSelf->top__DOT___1046_ = (1U & (~ (((IData)(vlSelf->top__DOT___0165_) 
                                          & (IData)(vlSelf->top__DOT___0520_)) 
                                         | (((IData)(vlSelf->top__DOT___7092_) 
                                             >> 7U) 
                                            & (IData)(vlSelf->top__DOT___0227_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__318(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__318\n"); );
    // Body
    vlSelf->top__DOT___0970_ = ((IData)(vlSelf->top__DOT___0147_) 
                                & (IData)(vlSelf->top__DOT___2369_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__319(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__319\n"); );
    // Body
    vlSelf->top__DOT___0254_ = (1U & (~ ((((~ (IData)(vlSelf->top__DOT___2369_)) 
                                           & (~ (IData)(vlSelf->top__DOT___0361_))) 
                                          & (IData)(
                                                    (vlSelf->top__DOT___6959_ 
                                                     >> 0x18U))) 
                                         | (~ (IData)(vlSelf->top__DOT____VdfgTmp_h09d4ce40__0)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__320(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__320\n"); );
    // Body
    vlSelf->top__DOT___4029_ = ((0x7fffcU & ((IData)(
                                                     (vlSelf->top__DOT___7175_ 
                                                      >> 0xeU)) 
                                             << 2U)) 
                                | (((IData)(vlSelf->top__DOT___0760_) 
                                    << 1U) | (IData)(vlSelf->top__DOT___0921_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__321(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__321\n"); );
    // Init
    CData/*3:0*/ top__DOT____VdfgTmp_h32fce726__0;
    top__DOT____VdfgTmp_h32fce726__0 = 0;
    // Body
    top__DOT____VdfgTmp_h32fce726__0 = (((IData)(vlSelf->top__DOT___1394_) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->top__DOT___3124_) 
                                                    << 2U) 
                                                   | ((IData)(vlSelf->top__DOT___1558_) 
                                                      << 1U)));
    vlSelf->top__DOT____VdfgTmp_he70e1033__0 = (((IData)(vlSelf->top__DOT___0760_) 
                                                 << 4U) 
                                                | (IData)(top__DOT____VdfgTmp_h32fce726__0));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__323(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__323\n"); );
    // Body
    vlSelf->top__DOT___4396_ = ((0x3ff00000U & (vlSelf->top__DOT___6979_[2U] 
                                                << 0x13U)) 
                                | ((0x80000U & (vlSelf->top__DOT___6979_[2U] 
                                                << 0x13U)) 
                                   | ((0x70000U & (
                                                   vlSelf->top__DOT___6979_[1U] 
                                                   >> 0xdU)) 
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
                                                                                | (IData)(vlSelf->top__DOT___1610_))))))))))))))))));
    vlSelf->top__DOT___4470_ = (((QData)((IData)((7U 
                                                  & (vlSelf->top__DOT___4396_ 
                                                     >> 0x10U)))) 
                                 << 0x2aU) | (0x3ffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->top__DOT___6979_[1U])) 
                                                  << 0xdU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top__DOT___6979_[0U])) 
                                                    >> 0x13U))));
    vlSelf->top__DOT___3626_ = (1U & (IData)((0xfULL 
                                              & (((((QData)((IData)(
                                                                    (7U 
                                                                     & (vlSelf->top__DOT___4396_ 
                                                                        >> 0x10U)))) 
                                                    << 0x2aU) 
                                                   | (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT___4470_ 
                                                                                >> 0x1aU))))) 
                                                       << 0x1aU) 
                                                      | (QData)((IData)(
                                                                        ((0x2000000U 
                                                                          & (vlSelf->top__DOT___6979_[1U] 
                                                                             << 0xdU)) 
                                                                         | (0x1ffffffU 
                                                                            & (IData)(vlSelf->top__DOT___4470_))))))) 
                                                  + 
                                                  (((QData)((IData)(vlSelf->top__DOT___0074_)) 
                                                    << 3U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0170_) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->top__DOT___0170_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0154_))))))) 
                                                 >> 0x29U))));
    vlSelf->top__DOT___2712_ = (1U & (((IData)(vlSelf->top__DOT___4470_) 
                                       + ((0x1ff8U 
                                           & ((IData)((QData)((IData)(vlSelf->top__DOT___0074_))) 
                                              << 3U)) 
                                          | (((IData)(vlSelf->top__DOT___0170_) 
                                              << 2U) 
                                             | (((IData)(vlSelf->top__DOT___0170_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0154_))))) 
                                      >> 0xcU));
    vlSelf->top__DOT___3577_ = (1U & (((IData)(vlSelf->top__DOT___4470_) 
                                       + ((0x18U & 
                                           ((IData)((QData)((IData)(vlSelf->top__DOT___0074_))) 
                                            << 3U)) 
                                          | (((IData)(vlSelf->top__DOT___0170_) 
                                              << 2U) 
                                             | (((IData)(vlSelf->top__DOT___0170_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0154_))))) 
                                      >> 4U));
    vlSelf->top__DOT___3196_ = (1U & (((IData)(vlSelf->top__DOT___4470_) 
                                       + ((0x38U & 
                                           ((IData)((QData)((IData)(vlSelf->top__DOT___0074_))) 
                                            << 3U)) 
                                          | (((IData)(vlSelf->top__DOT___0170_) 
                                              << 2U) 
                                             | (((IData)(vlSelf->top__DOT___0170_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0154_))))) 
                                      >> 5U));
    vlSelf->top__DOT___1257_ = (1U & (((IData)(vlSelf->top__DOT___4470_) 
                                       + (((IData)(vlSelf->top__DOT___0074_) 
                                           << 3U) | 
                                          (((IData)(vlSelf->top__DOT___0170_) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT___0170_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___0154_))))) 
                                      >> 3U));
    vlSelf->top__DOT___1178_ = (1U & (IData)((0x1ffffffULL 
                                              & (((((QData)((IData)(
                                                                    (7U 
                                                                     & (vlSelf->top__DOT___4396_ 
                                                                        >> 0x10U)))) 
                                                    << 0x2aU) 
                                                   | (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT___4470_ 
                                                                                >> 0x1aU))))) 
                                                       << 0x1aU) 
                                                      | (QData)((IData)(
                                                                        ((0x2000000U 
                                                                          & (vlSelf->top__DOT___6979_[1U] 
                                                                             << 0xdU)) 
                                                                         | (0x1ffffffU 
                                                                            & (IData)(vlSelf->top__DOT___4470_))))))) 
                                                  + 
                                                  (((QData)((IData)(vlSelf->top__DOT___0074_)) 
                                                    << 3U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0170_) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->top__DOT___0170_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0154_))))))) 
                                                 >> 0x14U))));
    vlSelf->top__DOT___3203_ = (1U & (IData)((0x3fULL 
                                              & (((((QData)((IData)(
                                                                    (7U 
                                                                     & (vlSelf->top__DOT___4396_ 
                                                                        >> 0x10U)))) 
                                                    << 0x2aU) 
                                                   | (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT___4470_ 
                                                                                >> 0x1aU))))) 
                                                       << 0x1aU) 
                                                      | (QData)((IData)(
                                                                        ((0x2000000U 
                                                                          & (vlSelf->top__DOT___6979_[1U] 
                                                                             << 0xdU)) 
                                                                         | (0x1ffffffU 
                                                                            & (IData)(vlSelf->top__DOT___4470_))))))) 
                                                  + 
                                                  (((QData)((IData)(vlSelf->top__DOT___0074_)) 
                                                    << 3U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0170_) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->top__DOT___0170_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0154_))))))) 
                                                 >> 0x27U))));
    vlSelf->top__DOT___0399_ = (1U & ((IData)(vlSelf->top__DOT___4470_) 
                                      + (IData)(vlSelf->top__DOT___0154_)));
    vlSelf->top__DOT___0998_ = (1U & (IData)((0x3ffffULL 
                                              & (((((QData)((IData)(
                                                                    (7U 
                                                                     & (vlSelf->top__DOT___4396_ 
                                                                        >> 0x10U)))) 
                                                    << 0x2aU) 
                                                   | (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT___4470_ 
                                                                                >> 0x1aU))))) 
                                                       << 0x1aU) 
                                                      | (QData)((IData)(
                                                                        ((0x2000000U 
                                                                          & (vlSelf->top__DOT___6979_[1U] 
                                                                             << 0xdU)) 
                                                                         | (0x1ffffffU 
                                                                            & (IData)(vlSelf->top__DOT___4470_))))))) 
                                                  + 
                                                  (((QData)((IData)(vlSelf->top__DOT___0074_)) 
                                                    << 3U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0170_) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->top__DOT___0170_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0154_))))))) 
                                                 >> 0x1bU))));
    vlSelf->top__DOT___3126_ = (1U & (IData)((0x3ffffffULL 
                                              & (((((QData)((IData)(
                                                                    (7U 
                                                                     & (vlSelf->top__DOT___4396_ 
                                                                        >> 0x10U)))) 
                                                    << 0x2aU) 
                                                   | (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT___4470_ 
                                                                                >> 0x1aU))))) 
                                                       << 0x1aU) 
                                                      | (QData)((IData)(
                                                                        ((0x2000000U 
                                                                          & (vlSelf->top__DOT___6979_[1U] 
                                                                             << 0xdU)) 
                                                                         | (0x1ffffffU 
                                                                            & (IData)(vlSelf->top__DOT___4470_))))))) 
                                                  + 
                                                  (((QData)((IData)(vlSelf->top__DOT___0074_)) 
                                                    << 3U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0170_) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->top__DOT___0170_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0154_))))))) 
                                                 >> 0x13U))));
    vlSelf->top__DOT___0648_ = ((IData)(vlSelf->top__DOT___1887_) 
                                ^ (IData)(vlSelf->top__DOT___3577_));
    vlSelf->top__DOT___0375_ = (1U & (~ ((IData)(vlSelf->top__DOT___1357_) 
                                         & (IData)(vlSelf->top__DOT___3196_))));
    vlSelf->top__DOT___0204_ = (1U & (~ (((IData)(vlSelf->top__DOT___0830_) 
                                          & (IData)(vlSelf->top__DOT___1257_)) 
                                         | ((IData)(vlSelf->top__DOT___1887_) 
                                            & (IData)(vlSelf->top__DOT___0442_)))));
    vlSelf->top__DOT___1177_ = ((IData)(vlSelf->top__DOT___1178_) 
                                & (IData)(vlSelf->top__DOT___0074_));
    vlSelf->top__DOT___1183_ = (1U & (~ ((IData)(vlSelf->top__DOT___3126_) 
                                         & (IData)(vlSelf->top__DOT___0116_))));
    vlSelf->top__DOT___0202_ = ((IData)(vlSelf->top__DOT___0208_) 
                                & (~ (IData)(vlSelf->top__DOT___0204_)));
    vlSelf->top__DOT___2053_ = (1U & (((((IData)(vlSelf->top__DOT___0218_) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->top__DOT___0310_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0290_))) 
                                       + (((IData)(vlSelf->top__DOT___0023_) 
                                           << 5U) | 
                                          (((IData)(vlSelf->top__DOT___0310_) 
                                            << 4U) 
                                           | (((IData)(vlSelf->top__DOT___1183_) 
                                               << 3U) 
                                              | (((IData)(vlSelf->top__DOT___0193_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT___1820_)))))) 
                                      >> 2U));
    vlSelf->top__DOT___1463_ = ((IData)(vlSelf->top__DOT___1357_) 
                                ^ (IData)(vlSelf->top__DOT___1183_));
    vlSelf->top__DOT___3381_ = (1U & (((((IData)(vlSelf->top__DOT___0629_) 
                                         << 1U) | (IData)(vlSelf->top__DOT___0723_)) 
                                       + (IData)(vlSelf->top__DOT___1183_)) 
                                      >> 1U));
    vlSelf->top__DOT___0389_ = (1U & ((IData)(vlSelf->top__DOT___0723_) 
                                      + (IData)(vlSelf->top__DOT___1183_)));
    vlSelf->top__DOT___1144_ = (1U & (((((IData)(vlSelf->top__DOT___0735_) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->top__DOT___0170_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___0629_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___0723_)))) 
                                       + (0xcU | (IData)(vlSelf->top__DOT___1183_))) 
                                      >> 3U));
    vlSelf->top__DOT___4173_[0U] = ((0xfffbffffU & 
                                     vlSelf->top__DOT___4173_[0U]) 
                                    | ((IData)(vlSelf->top__DOT___1144_) 
                                       << 0x12U));
    vlSelf->top__DOT___0111_ = ((IData)(vlSelf->top__DOT___1144_) 
                                & (~ (IData)(vlSelf->top__DOT___0088_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__324(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__324\n"); );
    // Body
    vlSelf->top__DOT___1722_ = (1U & (((((IData)(vlSelf->top__DOT___2655_) 
                                         << 1U) | (IData)(vlSelf->top__DOT___1100_)) 
                                       + (((IData)(vlSelf->top__DOT___0943_) 
                                           << 1U) | (IData)(vlSelf->top__DOT___0691_))) 
                                      >> 1U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__325(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__325\n"); );
    // Body
    vlSelf->top__DOT___2650_ = (1U & (~ (((IData)(vlSelf->top__DOT___0090_) 
                                          & (IData)(vlSelf->top__DOT___0147_)) 
                                         | ((IData)(vlSelf->top__DOT___0442_) 
                                            & (IData)(vlSelf->top__DOT___0056_)))));
    vlSelf->top__DOT___1869_ = ((IData)(vlSelf->top__DOT___0698_) 
                                | (IData)(vlSelf->top__DOT___2650_));
    vlSelf->top__DOT___1315_ = (1U & (~ ((IData)(vlSelf->top__DOT___0485_) 
                                         & (IData)(vlSelf->top__DOT___2650_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__326(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__326\n"); );
    // Body
    vlSelf->top__DOT___0440_ = ((IData)(vlSelf->top__DOT___0442_) 
                                & (~ (IData)(vlSelf->top__DOT___0441_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__327(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__327\n"); );
    // Body
    vlSelf->top__DOT___0985_ = (1U & (~ (((IData)(vlSelf->top__DOT___0442_) 
                                          & (IData)(vlSelf->top__DOT___0148_)) 
                                         | (IData)(vlSelf->top__DOT___6976_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__328(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__328\n"); );
    // Body
    vlSelf->top__DOT___0548_ = (1U & (~ (((IData)(vlSelf->top__DOT___1696_) 
                                          & (IData)(vlSelf->top__DOT___0187_)) 
                                         | ((IData)(vlSelf->top__DOT___0300_) 
                                            & (IData)(vlSelf->top__DOT___0082_)))));
    vlSelf->top__DOT___4430_[3U] = ((0xffffbfffU & 
                                     vlSelf->top__DOT___4430_[3U]) 
                                    | ((IData)(vlSelf->top__DOT___0548_) 
                                       << 0xeU));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__329(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__329\n"); );
    // Body
    vlSelf->top__DOT___1552_ = (1U & (~ (((IData)(vlSelf->top__DOT___0208_) 
                                          & ((IData)(vlSelf->top__DOT___7150_) 
                                             >> 6U)) 
                                         | (IData)(vlSelf->top__DOT___0830_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__330(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__330\n"); );
    // Body
    vlSelf->top__DOT___0601_ = ((IData)(vlSelf->top__DOT___0444_) 
                                & (~ (IData)(vlSelf->top__DOT___0088_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__331(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__331\n"); );
    // Body
    vlSelf->top__DOT___0167_ = (1U & (((((IData)(vlSelf->top__DOT___0218_) 
                                         << 4U) | (
                                                   ((IData)(vlSelf->top__DOT___0088_) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->top__DOT___0830_) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->top__DOT___0170_) 
                                                          << 1U) 
                                                         | (1U 
                                                            & ((IData)(vlSelf->top__DOT___7188_) 
                                                               >> 0xaU)))))) 
                                       + (((IData)(vlSelf->top__DOT___0088_) 
                                           << 6U) | 
                                          (((IData)(vlSelf->top__DOT___1605_) 
                                            << 5U) 
                                           | (((IData)(vlSelf->top__DOT___0023_) 
                                               << 3U) 
                                              | (((IData)(vlSelf->top__DOT___0154_) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT___0997_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___0614_))))))) 
                                      >> 4U));
    vlSelf->top__DOT___3264_ = (1U & (((IData)(vlSelf->top__DOT___7188_) 
                                       >> 0xaU) + (
                                                   ((IData)(vlSelf->top__DOT___0088_) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->top__DOT___1605_) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->top__DOT___0023_) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->top__DOT___0154_) 
                                                             << 2U) 
                                                            | (((IData)(vlSelf->top__DOT___0997_) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->top__DOT___0614_))))))));
    vlSelf->top__DOT___0477_ = (1U & (((((IData)(vlSelf->top__DOT___0170_) 
                                         << 1U) | (1U 
                                                   & ((IData)(vlSelf->top__DOT___7188_) 
                                                      >> 0xaU))) 
                                       + (((IData)(vlSelf->top__DOT___0088_) 
                                           << 6U) | 
                                          (((IData)(vlSelf->top__DOT___1605_) 
                                            << 5U) 
                                           | (((IData)(vlSelf->top__DOT___0023_) 
                                               << 3U) 
                                              | (((IData)(vlSelf->top__DOT___0154_) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT___0997_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___0614_))))))) 
                                      >> 1U));
    vlSelf->top__DOT___0476_ = ((IData)(vlSelf->top__DOT___0477_) 
                                & (~ (IData)(vlSelf->top__DOT___0038_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__333(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__333\n"); );
    // Body
    vlSelf->top__DOT___1004_ = ((IData)(vlSelf->top__DOT___0088_) 
                                & (~ (IData)((vlSelf->top__DOT___6971_ 
                                              >> 0x2eU))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__334(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__334\n"); );
    // Body
    vlSelf->top__DOT___1834_ = (1U & (~ (((IData)(vlSelf->top__DOT___0183_) 
                                          & (IData)(vlSelf->top__DOT___0201_)) 
                                         | (IData)(vlSelf->top__DOT___0088_))));
    vlSelf->top__DOT___1832_ = ((IData)(vlSelf->top__DOT___1834_) 
                                & (IData)(vlSelf->top__DOT___1833_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__335(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__335\n"); );
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
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_31;
    // Body
    __Vtemp_2[0U] = (((IData)((((QData)((IData)(((0xe0000000U 
                                                  & (vlSelf->top__DOT___3872_[2U] 
                                                     << 0xfU)) 
                                                 | ((0x10000000U 
                                                     & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                        << 0x1cU)) 
                                                    | ((0xfffff00U 
                                                        & ((vlSelf->top__DOT___3872_[2U] 
                                                            << 0xfU) 
                                                           | (0x7f00U 
                                                              & (vlSelf->top__DOT___3872_[1U] 
                                                                 >> 0x11U)))) 
                                                       | (((IData)(vlSelf->top__DOT___0622_) 
                                                           << 7U) 
                                                          | (((IData)(vlSelf->top__DOT___2121_) 
                                                              << 6U) 
                                                             | ((0x20U 
                                                                 & (vlSelf->top__DOT___3872_[1U] 
                                                                    >> 0x11U)) 
                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                    << 4U) 
                                                                   | (((IData)(vlSelf->top__DOT___0843_) 
                                                                       << 3U) 
                                                                      | ((4U 
                                                                          & (vlSelf->top__DOT___3872_[1U] 
                                                                             >> 0x11U)) 
                                                                         | (((IData)(vlSelf->top__DOT___1743_) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelf->top__DOT___0699_))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT___1168_) 
                                                              << 0x1fU) 
                                                             | (((IData)(vlSelf->top__DOT___0218_) 
                                                                 << 0x1eU) 
                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                    << 0x1dU) 
                                                                   | (((IData)(vlSelf->top__DOT___0226_) 
                                                                       << 0x1cU) 
                                                                      | ((0x8000000U 
                                                                          & ((IData)(vlSelf->top__DOT___7188_) 
                                                                             << 0xdU)) 
                                                                         | ((0x6000000U 
                                                                             & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                            | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0x18U) 
                                                                               | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x300000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_)))))))))))))))))))))))))))))))))) 
                      << 0x11U) | ((0x10000U & ((IData)(vlSelf->top__DOT___7188_) 
                                                << 2U)) 
                                   | ((0xc000U & (vlSelf->top__DOT___3863_[0U] 
                                                  >> 6U)) 
                                      | (((IData)(vlSelf->top__DOT___0932_) 
                                          << 0xdU) 
                                         | ((0x1000U 
                                             & ((IData)(vlSelf->top__DOT___7188_) 
                                                << 2U)) 
                                            | ((0x800U 
                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                   << 2U)) 
                                               | ((0x600U 
                                                   & (vlSelf->top__DOT___3863_[0U] 
                                                      >> 6U)) 
                                                  | ((0x100U 
                                                      & ((IData)(vlSelf->top__DOT___7188_) 
                                                         << 2U)) 
                                                     | ((0x80U 
                                                         & (vlSelf->top__DOT___3863_[0U] 
                                                            >> 6U)) 
                                                        | ((0x40U 
                                                            & ((IData)(vlSelf->top__DOT___7188_) 
                                                               << 2U)) 
                                                           | ((0x20U 
                                                               & ((IData)(vlSelf->top__DOT___7188_) 
                                                                  << 2U)) 
                                                              | ((0x10U 
                                                                  & (vlSelf->top__DOT___3863_[0U] 
                                                                     >> 6U)) 
                                                                 | (((IData)(vlSelf->top__DOT___1931_) 
                                                                     << 3U) 
                                                                    | ((4U 
                                                                        & (vlSelf->top__DOT___3863_[0U] 
                                                                           >> 6U)) 
                                                                       | (((IData)(vlSelf->top__DOT___0218_) 
                                                                           << 1U) 
                                                                          | (IData)(vlSelf->top__DOT___0069_))))))))))))))));
    __Vtemp_2[1U] = (((IData)((((QData)((IData)(((0xe0000000U 
                                                  & (vlSelf->top__DOT___3872_[2U] 
                                                     << 0xfU)) 
                                                 | ((0x10000000U 
                                                     & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                        << 0x1cU)) 
                                                    | ((0xfffff00U 
                                                        & ((vlSelf->top__DOT___3872_[2U] 
                                                            << 0xfU) 
                                                           | (0x7f00U 
                                                              & (vlSelf->top__DOT___3872_[1U] 
                                                                 >> 0x11U)))) 
                                                       | (((IData)(vlSelf->top__DOT___0622_) 
                                                           << 7U) 
                                                          | (((IData)(vlSelf->top__DOT___2121_) 
                                                              << 6U) 
                                                             | ((0x20U 
                                                                 & (vlSelf->top__DOT___3872_[1U] 
                                                                    >> 0x11U)) 
                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                    << 4U) 
                                                                   | (((IData)(vlSelf->top__DOT___0843_) 
                                                                       << 3U) 
                                                                      | ((4U 
                                                                          & (vlSelf->top__DOT___3872_[1U] 
                                                                             >> 0x11U)) 
                                                                         | (((IData)(vlSelf->top__DOT___1743_) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelf->top__DOT___0699_))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT___1168_) 
                                                              << 0x1fU) 
                                                             | (((IData)(vlSelf->top__DOT___0218_) 
                                                                 << 0x1eU) 
                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                    << 0x1dU) 
                                                                   | (((IData)(vlSelf->top__DOT___0226_) 
                                                                       << 0x1cU) 
                                                                      | ((0x8000000U 
                                                                          & ((IData)(vlSelf->top__DOT___7188_) 
                                                                             << 0xdU)) 
                                                                         | ((0x6000000U 
                                                                             & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                            | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0x18U) 
                                                                               | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x300000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_)))))))))))))))))))))))))))))))))) 
                      >> 0xfU) | ((IData)(((((QData)((IData)(
                                                             ((0xe0000000U 
                                                               & (vlSelf->top__DOT___3872_[2U] 
                                                                  << 0xfU)) 
                                                              | ((0x10000000U 
                                                                  & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                     << 0x1cU)) 
                                                                 | ((0xfffff00U 
                                                                     & ((vlSelf->top__DOT___3872_[2U] 
                                                                         << 0xfU) 
                                                                        | (0x7f00U 
                                                                           & (vlSelf->top__DOT___3872_[1U] 
                                                                              >> 0x11U)))) 
                                                                    | (((IData)(vlSelf->top__DOT___0622_) 
                                                                        << 7U) 
                                                                       | (((IData)(vlSelf->top__DOT___2121_) 
                                                                           << 6U) 
                                                                          | ((0x20U 
                                                                              & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0x11U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_))))))))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->top__DOT___1168_) 
                                                                << 0x1fU) 
                                                               | (((IData)(vlSelf->top__DOT___0218_) 
                                                                   << 0x1eU) 
                                                                  | (((IData)(vlSelf->top__DOT___0699_) 
                                                                      << 0x1dU) 
                                                                     | (((IData)(vlSelf->top__DOT___0226_) 
                                                                         << 0x1cU) 
                                                                        | ((0x8000000U 
                                                                            & ((IData)(vlSelf->top__DOT___7188_) 
                                                                               << 0xdU)) 
                                                                           | ((0x6000000U 
                                                                               & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                              | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x300000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_))))))))))))))))))))))))))))))))) 
                                           >> 0x20U)) 
                                  << 0x11U));
    __Vtemp_2[2U] = ((IData)(((((QData)((IData)(((0xe0000000U 
                                                  & (vlSelf->top__DOT___3872_[2U] 
                                                     << 0xfU)) 
                                                 | ((0x10000000U 
                                                     & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                        << 0x1cU)) 
                                                    | ((0xfffff00U 
                                                        & ((vlSelf->top__DOT___3872_[2U] 
                                                            << 0xfU) 
                                                           | (0x7f00U 
                                                              & (vlSelf->top__DOT___3872_[1U] 
                                                                 >> 0x11U)))) 
                                                       | (((IData)(vlSelf->top__DOT___0622_) 
                                                           << 7U) 
                                                          | (((IData)(vlSelf->top__DOT___2121_) 
                                                              << 6U) 
                                                             | ((0x20U 
                                                                 & (vlSelf->top__DOT___3872_[1U] 
                                                                    >> 0x11U)) 
                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                    << 4U) 
                                                                   | (((IData)(vlSelf->top__DOT___0843_) 
                                                                       << 3U) 
                                                                      | ((4U 
                                                                          & (vlSelf->top__DOT___3872_[1U] 
                                                                             >> 0x11U)) 
                                                                         | (((IData)(vlSelf->top__DOT___1743_) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelf->top__DOT___0699_))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT___1168_) 
                                                              << 0x1fU) 
                                                             | (((IData)(vlSelf->top__DOT___0218_) 
                                                                 << 0x1eU) 
                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                    << 0x1dU) 
                                                                   | (((IData)(vlSelf->top__DOT___0226_) 
                                                                       << 0x1cU) 
                                                                      | ((0x8000000U 
                                                                          & ((IData)(vlSelf->top__DOT___7188_) 
                                                                             << 0xdU)) 
                                                                         | ((0x6000000U 
                                                                             & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                            | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0x18U) 
                                                                               | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x300000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_))))))))))))))))))))))))))))))))) 
                              >> 0x20U)) >> 0xfU);
    __Vtemp_3[0U] = (((IData)((((QData)((IData)((0xb74000U 
                                                 | (((IData)(vlSelf->top__DOT___0023_) 
                                                     << 0x1fU) 
                                                    | ((0x40000000U 
                                                        & (vlSelf->top__DOT___3863_[2U] 
                                                           << 0xfU)) 
                                                       | ((0x20000000U 
                                                           & (vlSelf->top__DOT___7158_ 
                                                              << 6U)) 
                                                          | ((0x10000000U 
                                                              & (vlSelf->top__DOT___7158_ 
                                                                 << 6U)) 
                                                             | (((IData)(vlSelf->top__DOT___0830_) 
                                                                 << 0x1bU) 
                                                                | ((0x800U 
                                                                    & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                       << 0xbU)) 
                                                                   | (((IData)(vlSelf->top__DOT___0102_) 
                                                                       << 0xaU) 
                                                                      | ((0x380U 
                                                                          & (vlSelf->top__DOT___3863_[1U] 
                                                                             >> 0x11U)) 
                                                                         | ((0x40U 
                                                                             & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)) 
                                                                            | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 5U) 
                                                                               | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                >> 0xbU)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x80000000U 
                                                              & (vlSelf->top__DOT___7158_ 
                                                                 << 0xcU)) 
                                                             | ((0x40000000U 
                                                                 & (vlSelf->top__DOT___7158_ 
                                                                    << 0xcU)) 
                                                                | ((0x20000000U 
                                                                    & (vlSelf->top__DOT___3863_[1U] 
                                                                       << 0xfU)) 
                                                                   | (((IData)(vlSelf->top__DOT___3617_) 
                                                                       << 0x1cU) 
                                                                      | ((0x8000000U 
                                                                          & (vlSelf->top__DOT___3863_[1U] 
                                                                             << 0xfU)) 
                                                                         | ((0x4000000U 
                                                                             & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                            | ((0x3c00000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                               | ((0x200000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U))))))))))))))))))))))))))))))) 
                      << 0x11U) | ((0x18000U & vlSelf->top__DOT___3863_[0U]) 
                                   | ((0x4000U & ((IData)(vlSelf->top__DOT___7188_) 
                                                  << 8U)) 
                                      | ((0x2000U & 
                                          vlSelf->top__DOT___3863_[0U]) 
                                         | ((0x1000U 
                                             & ((IData)(vlSelf->top__DOT___7188_) 
                                                << 8U)) 
                                            | ((0x800U 
                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                   << 8U)) 
                                               | ((0x400U 
                                                   & vlSelf->top__DOT___3863_[0U]) 
                                                  | (((IData)(vlSelf->top__DOT___1931_) 
                                                      << 9U) 
                                                     | ((0x100U 
                                                         & vlSelf->top__DOT___3863_[0U]) 
                                                        | (((IData)(vlSelf->top__DOT___0023_) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->top__DOT___0830_) 
                                                               << 6U) 
                                                              | (((IData)(vlSelf->top__DOT___0226_) 
                                                                  << 4U) 
                                                                 | (((IData)(vlSelf->top__DOT___0069_) 
                                                                     << 3U) 
                                                                    | (((IData)(vlSelf->top__DOT___0102_) 
                                                                        << 2U) 
                                                                       | (((IData)(vlSelf->top__DOT___0170_) 
                                                                           << 1U) 
                                                                          | (IData)(vlSelf->top__DOT___0226_))))))))))))))));
    __Vtemp_3[1U] = (((IData)((((QData)((IData)((0xb74000U 
                                                 | (((IData)(vlSelf->top__DOT___0023_) 
                                                     << 0x1fU) 
                                                    | ((0x40000000U 
                                                        & (vlSelf->top__DOT___3863_[2U] 
                                                           << 0xfU)) 
                                                       | ((0x20000000U 
                                                           & (vlSelf->top__DOT___7158_ 
                                                              << 6U)) 
                                                          | ((0x10000000U 
                                                              & (vlSelf->top__DOT___7158_ 
                                                                 << 6U)) 
                                                             | (((IData)(vlSelf->top__DOT___0830_) 
                                                                 << 0x1bU) 
                                                                | ((0x800U 
                                                                    & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                       << 0xbU)) 
                                                                   | (((IData)(vlSelf->top__DOT___0102_) 
                                                                       << 0xaU) 
                                                                      | ((0x380U 
                                                                          & (vlSelf->top__DOT___3863_[1U] 
                                                                             >> 0x11U)) 
                                                                         | ((0x40U 
                                                                             & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)) 
                                                                            | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 5U) 
                                                                               | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                >> 0xbU)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x80000000U 
                                                              & (vlSelf->top__DOT___7158_ 
                                                                 << 0xcU)) 
                                                             | ((0x40000000U 
                                                                 & (vlSelf->top__DOT___7158_ 
                                                                    << 0xcU)) 
                                                                | ((0x20000000U 
                                                                    & (vlSelf->top__DOT___3863_[1U] 
                                                                       << 0xfU)) 
                                                                   | (((IData)(vlSelf->top__DOT___3617_) 
                                                                       << 0x1cU) 
                                                                      | ((0x8000000U 
                                                                          & (vlSelf->top__DOT___3863_[1U] 
                                                                             << 0xfU)) 
                                                                         | ((0x4000000U 
                                                                             & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                            | ((0x3c00000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                               | ((0x200000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U))))))))))))))))))))))))))))))) 
                      >> 0xfU) | ((IData)(((((QData)((IData)(
                                                             (0xb74000U 
                                                              | (((IData)(vlSelf->top__DOT___0023_) 
                                                                  << 0x1fU) 
                                                                 | ((0x40000000U 
                                                                     & (vlSelf->top__DOT___3863_[2U] 
                                                                        << 0xfU)) 
                                                                    | ((0x20000000U 
                                                                        & (vlSelf->top__DOT___7158_ 
                                                                           << 6U)) 
                                                                       | ((0x10000000U 
                                                                           & (vlSelf->top__DOT___7158_ 
                                                                              << 6U)) 
                                                                          | (((IData)(vlSelf->top__DOT___0830_) 
                                                                              << 0x1bU) 
                                                                             | ((0x800U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | ((0x380U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                >> 0xbU)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)))))))))))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((0x80000000U 
                                                                & (vlSelf->top__DOT___7158_ 
                                                                   << 0xcU)) 
                                                               | ((0x40000000U 
                                                                   & (vlSelf->top__DOT___7158_ 
                                                                      << 0xcU)) 
                                                                  | ((0x20000000U 
                                                                      & (vlSelf->top__DOT___3863_[1U] 
                                                                         << 0xfU)) 
                                                                     | (((IData)(vlSelf->top__DOT___3617_) 
                                                                         << 0x1cU) 
                                                                        | ((0x8000000U 
                                                                            & (vlSelf->top__DOT___3863_[1U] 
                                                                               << 0xfU)) 
                                                                           | ((0x4000000U 
                                                                               & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                              | ((0x3c00000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)))))))))))))))))))))))))))))) 
                                           >> 0x20U)) 
                                  << 0x11U));
    __Vtemp_3[2U] = ((IData)(((((QData)((IData)((0xb74000U 
                                                 | (((IData)(vlSelf->top__DOT___0023_) 
                                                     << 0x1fU) 
                                                    | ((0x40000000U 
                                                        & (vlSelf->top__DOT___3863_[2U] 
                                                           << 0xfU)) 
                                                       | ((0x20000000U 
                                                           & (vlSelf->top__DOT___7158_ 
                                                              << 6U)) 
                                                          | ((0x10000000U 
                                                              & (vlSelf->top__DOT___7158_ 
                                                                 << 6U)) 
                                                             | (((IData)(vlSelf->top__DOT___0830_) 
                                                                 << 0x1bU) 
                                                                | ((0x800U 
                                                                    & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                       << 0xbU)) 
                                                                   | (((IData)(vlSelf->top__DOT___0102_) 
                                                                       << 0xaU) 
                                                                      | ((0x380U 
                                                                          & (vlSelf->top__DOT___3863_[1U] 
                                                                             >> 0x11U)) 
                                                                         | ((0x40U 
                                                                             & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)) 
                                                                            | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 5U) 
                                                                               | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                >> 0xbU)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x80000000U 
                                                              & (vlSelf->top__DOT___7158_ 
                                                                 << 0xcU)) 
                                                             | ((0x40000000U 
                                                                 & (vlSelf->top__DOT___7158_ 
                                                                    << 0xcU)) 
                                                                | ((0x20000000U 
                                                                    & (vlSelf->top__DOT___3863_[1U] 
                                                                       << 0xfU)) 
                                                                   | (((IData)(vlSelf->top__DOT___3617_) 
                                                                       << 0x1cU) 
                                                                      | ((0x8000000U 
                                                                          & (vlSelf->top__DOT___3863_[1U] 
                                                                             << 0xfU)) 
                                                                         | ((0x4000000U 
                                                                             & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                            | ((0x3c00000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                               | ((0x200000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)))))))))))))))))))))))))))))) 
                              >> 0x20U)) >> 0xfU);
    VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    __Vtemp_7[0U] = (((IData)((((QData)((IData)(((0xe0000000U 
                                                  & (vlSelf->top__DOT___3872_[2U] 
                                                     << 0xfU)) 
                                                 | ((0x10000000U 
                                                     & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                        << 0x1cU)) 
                                                    | ((0xfffff00U 
                                                        & ((vlSelf->top__DOT___3872_[2U] 
                                                            << 0xfU) 
                                                           | (0x7f00U 
                                                              & (vlSelf->top__DOT___3872_[1U] 
                                                                 >> 0x11U)))) 
                                                       | (((IData)(vlSelf->top__DOT___0622_) 
                                                           << 7U) 
                                                          | (((IData)(vlSelf->top__DOT___2121_) 
                                                              << 6U) 
                                                             | ((0x20U 
                                                                 & (vlSelf->top__DOT___3872_[1U] 
                                                                    >> 0x11U)) 
                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                    << 4U) 
                                                                   | (((IData)(vlSelf->top__DOT___0843_) 
                                                                       << 3U) 
                                                                      | ((4U 
                                                                          & (vlSelf->top__DOT___3872_[1U] 
                                                                             >> 0x11U)) 
                                                                         | (((IData)(vlSelf->top__DOT___1743_) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelf->top__DOT___0699_))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT___1168_) 
                                                              << 0x1fU) 
                                                             | (((IData)(vlSelf->top__DOT___0218_) 
                                                                 << 0x1eU) 
                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                    << 0x1dU) 
                                                                   | (((IData)(vlSelf->top__DOT___0226_) 
                                                                       << 0x1cU) 
                                                                      | ((0x8000000U 
                                                                          & ((IData)(vlSelf->top__DOT___7188_) 
                                                                             << 0xdU)) 
                                                                         | ((0x6000000U 
                                                                             & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                            | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0x18U) 
                                                                               | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x300000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_)))))))))))))))))))))))))))))))))) 
                      << 0x11U) | ((0x10000U & ((IData)(vlSelf->top__DOT___7188_) 
                                                << 2U)) 
                                   | ((0xc000U & (vlSelf->top__DOT___3863_[0U] 
                                                  >> 6U)) 
                                      | (((IData)(vlSelf->top__DOT___0932_) 
                                          << 0xdU) 
                                         | ((0x1000U 
                                             & ((IData)(vlSelf->top__DOT___7188_) 
                                                << 2U)) 
                                            | ((0x800U 
                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                   << 2U)) 
                                               | ((0x600U 
                                                   & (vlSelf->top__DOT___3863_[0U] 
                                                      >> 6U)) 
                                                  | ((0x100U 
                                                      & ((IData)(vlSelf->top__DOT___7188_) 
                                                         << 2U)) 
                                                     | ((0x80U 
                                                         & (vlSelf->top__DOT___3863_[0U] 
                                                            >> 6U)) 
                                                        | ((0x40U 
                                                            & ((IData)(vlSelf->top__DOT___7188_) 
                                                               << 2U)) 
                                                           | ((0x20U 
                                                               & ((IData)(vlSelf->top__DOT___7188_) 
                                                                  << 2U)) 
                                                              | ((0x10U 
                                                                  & (vlSelf->top__DOT___3863_[0U] 
                                                                     >> 6U)) 
                                                                 | (((IData)(vlSelf->top__DOT___1931_) 
                                                                     << 3U) 
                                                                    | ((4U 
                                                                        & (vlSelf->top__DOT___3863_[0U] 
                                                                           >> 6U)) 
                                                                       | (((IData)(vlSelf->top__DOT___0218_) 
                                                                           << 1U) 
                                                                          | (IData)(vlSelf->top__DOT___0069_))))))))))))))));
    __Vtemp_7[1U] = (((IData)((((QData)((IData)(((0xe0000000U 
                                                  & (vlSelf->top__DOT___3872_[2U] 
                                                     << 0xfU)) 
                                                 | ((0x10000000U 
                                                     & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                        << 0x1cU)) 
                                                    | ((0xfffff00U 
                                                        & ((vlSelf->top__DOT___3872_[2U] 
                                                            << 0xfU) 
                                                           | (0x7f00U 
                                                              & (vlSelf->top__DOT___3872_[1U] 
                                                                 >> 0x11U)))) 
                                                       | (((IData)(vlSelf->top__DOT___0622_) 
                                                           << 7U) 
                                                          | (((IData)(vlSelf->top__DOT___2121_) 
                                                              << 6U) 
                                                             | ((0x20U 
                                                                 & (vlSelf->top__DOT___3872_[1U] 
                                                                    >> 0x11U)) 
                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                    << 4U) 
                                                                   | (((IData)(vlSelf->top__DOT___0843_) 
                                                                       << 3U) 
                                                                      | ((4U 
                                                                          & (vlSelf->top__DOT___3872_[1U] 
                                                                             >> 0x11U)) 
                                                                         | (((IData)(vlSelf->top__DOT___1743_) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelf->top__DOT___0699_))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT___1168_) 
                                                              << 0x1fU) 
                                                             | (((IData)(vlSelf->top__DOT___0218_) 
                                                                 << 0x1eU) 
                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                    << 0x1dU) 
                                                                   | (((IData)(vlSelf->top__DOT___0226_) 
                                                                       << 0x1cU) 
                                                                      | ((0x8000000U 
                                                                          & ((IData)(vlSelf->top__DOT___7188_) 
                                                                             << 0xdU)) 
                                                                         | ((0x6000000U 
                                                                             & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                            | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0x18U) 
                                                                               | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x300000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_)))))))))))))))))))))))))))))))))) 
                      >> 0xfU) | ((IData)(((((QData)((IData)(
                                                             ((0xe0000000U 
                                                               & (vlSelf->top__DOT___3872_[2U] 
                                                                  << 0xfU)) 
                                                              | ((0x10000000U 
                                                                  & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                     << 0x1cU)) 
                                                                 | ((0xfffff00U 
                                                                     & ((vlSelf->top__DOT___3872_[2U] 
                                                                         << 0xfU) 
                                                                        | (0x7f00U 
                                                                           & (vlSelf->top__DOT___3872_[1U] 
                                                                              >> 0x11U)))) 
                                                                    | (((IData)(vlSelf->top__DOT___0622_) 
                                                                        << 7U) 
                                                                       | (((IData)(vlSelf->top__DOT___2121_) 
                                                                           << 6U) 
                                                                          | ((0x20U 
                                                                              & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0x11U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_))))))))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->top__DOT___1168_) 
                                                                << 0x1fU) 
                                                               | (((IData)(vlSelf->top__DOT___0218_) 
                                                                   << 0x1eU) 
                                                                  | (((IData)(vlSelf->top__DOT___0699_) 
                                                                      << 0x1dU) 
                                                                     | (((IData)(vlSelf->top__DOT___0226_) 
                                                                         << 0x1cU) 
                                                                        | ((0x8000000U 
                                                                            & ((IData)(vlSelf->top__DOT___7188_) 
                                                                               << 0xdU)) 
                                                                           | ((0x6000000U 
                                                                               & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                              | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x300000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_))))))))))))))))))))))))))))))))) 
                                           >> 0x20U)) 
                                  << 0x11U));
    __Vtemp_7[2U] = ((IData)(((((QData)((IData)(((0xe0000000U 
                                                  & (vlSelf->top__DOT___3872_[2U] 
                                                     << 0xfU)) 
                                                 | ((0x10000000U 
                                                     & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                        << 0x1cU)) 
                                                    | ((0xfffff00U 
                                                        & ((vlSelf->top__DOT___3872_[2U] 
                                                            << 0xfU) 
                                                           | (0x7f00U 
                                                              & (vlSelf->top__DOT___3872_[1U] 
                                                                 >> 0x11U)))) 
                                                       | (((IData)(vlSelf->top__DOT___0622_) 
                                                           << 7U) 
                                                          | (((IData)(vlSelf->top__DOT___2121_) 
                                                              << 6U) 
                                                             | ((0x20U 
                                                                 & (vlSelf->top__DOT___3872_[1U] 
                                                                    >> 0x11U)) 
                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                    << 4U) 
                                                                   | (((IData)(vlSelf->top__DOT___0843_) 
                                                                       << 3U) 
                                                                      | ((4U 
                                                                          & (vlSelf->top__DOT___3872_[1U] 
                                                                             >> 0x11U)) 
                                                                         | (((IData)(vlSelf->top__DOT___1743_) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelf->top__DOT___0699_))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT___1168_) 
                                                              << 0x1fU) 
                                                             | (((IData)(vlSelf->top__DOT___0218_) 
                                                                 << 0x1eU) 
                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                    << 0x1dU) 
                                                                   | (((IData)(vlSelf->top__DOT___0226_) 
                                                                       << 0x1cU) 
                                                                      | ((0x8000000U 
                                                                          & ((IData)(vlSelf->top__DOT___7188_) 
                                                                             << 0xdU)) 
                                                                         | ((0x6000000U 
                                                                             & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                            | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0x18U) 
                                                                               | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x300000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_))))))))))))))))))))))))))))))))) 
                              >> 0x20U)) >> 0xfU);
    __Vtemp_8[0U] = (((IData)((((QData)((IData)((0xb74000U 
                                                 | (((IData)(vlSelf->top__DOT___0023_) 
                                                     << 0x1fU) 
                                                    | ((0x40000000U 
                                                        & (vlSelf->top__DOT___3863_[2U] 
                                                           << 0xfU)) 
                                                       | ((0x20000000U 
                                                           & (vlSelf->top__DOT___7158_ 
                                                              << 6U)) 
                                                          | ((0x10000000U 
                                                              & (vlSelf->top__DOT___7158_ 
                                                                 << 6U)) 
                                                             | (((IData)(vlSelf->top__DOT___0830_) 
                                                                 << 0x1bU) 
                                                                | ((0x800U 
                                                                    & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                       << 0xbU)) 
                                                                   | (((IData)(vlSelf->top__DOT___0102_) 
                                                                       << 0xaU) 
                                                                      | ((0x380U 
                                                                          & (vlSelf->top__DOT___3863_[1U] 
                                                                             >> 0x11U)) 
                                                                         | ((0x40U 
                                                                             & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)) 
                                                                            | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 5U) 
                                                                               | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                >> 0xbU)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x80000000U 
                                                              & (vlSelf->top__DOT___7158_ 
                                                                 << 0xcU)) 
                                                             | ((0x40000000U 
                                                                 & (vlSelf->top__DOT___7158_ 
                                                                    << 0xcU)) 
                                                                | ((0x20000000U 
                                                                    & (vlSelf->top__DOT___3863_[1U] 
                                                                       << 0xfU)) 
                                                                   | (((IData)(vlSelf->top__DOT___3617_) 
                                                                       << 0x1cU) 
                                                                      | ((0x8000000U 
                                                                          & (vlSelf->top__DOT___3863_[1U] 
                                                                             << 0xfU)) 
                                                                         | ((0x4000000U 
                                                                             & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                            | ((0x3c00000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                               | ((0x200000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U))))))))))))))))))))))))))))))) 
                      << 0x11U) | ((0x18000U & vlSelf->top__DOT___3863_[0U]) 
                                   | ((0x4000U & ((IData)(vlSelf->top__DOT___7188_) 
                                                  << 8U)) 
                                      | ((0x2000U & 
                                          vlSelf->top__DOT___3863_[0U]) 
                                         | ((0x1000U 
                                             & ((IData)(vlSelf->top__DOT___7188_) 
                                                << 8U)) 
                                            | ((0x800U 
                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                   << 8U)) 
                                               | ((0x400U 
                                                   & vlSelf->top__DOT___3863_[0U]) 
                                                  | (((IData)(vlSelf->top__DOT___1931_) 
                                                      << 9U) 
                                                     | ((0x100U 
                                                         & vlSelf->top__DOT___3863_[0U]) 
                                                        | (((IData)(vlSelf->top__DOT___0023_) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->top__DOT___0830_) 
                                                               << 6U) 
                                                              | (((IData)(vlSelf->top__DOT___0226_) 
                                                                  << 4U) 
                                                                 | (((IData)(vlSelf->top__DOT___0069_) 
                                                                     << 3U) 
                                                                    | (((IData)(vlSelf->top__DOT___0102_) 
                                                                        << 2U) 
                                                                       | (((IData)(vlSelf->top__DOT___0170_) 
                                                                           << 1U) 
                                                                          | (IData)(vlSelf->top__DOT___0226_))))))))))))))));
    __Vtemp_8[1U] = (((IData)((((QData)((IData)((0xb74000U 
                                                 | (((IData)(vlSelf->top__DOT___0023_) 
                                                     << 0x1fU) 
                                                    | ((0x40000000U 
                                                        & (vlSelf->top__DOT___3863_[2U] 
                                                           << 0xfU)) 
                                                       | ((0x20000000U 
                                                           & (vlSelf->top__DOT___7158_ 
                                                              << 6U)) 
                                                          | ((0x10000000U 
                                                              & (vlSelf->top__DOT___7158_ 
                                                                 << 6U)) 
                                                             | (((IData)(vlSelf->top__DOT___0830_) 
                                                                 << 0x1bU) 
                                                                | ((0x800U 
                                                                    & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                       << 0xbU)) 
                                                                   | (((IData)(vlSelf->top__DOT___0102_) 
                                                                       << 0xaU) 
                                                                      | ((0x380U 
                                                                          & (vlSelf->top__DOT___3863_[1U] 
                                                                             >> 0x11U)) 
                                                                         | ((0x40U 
                                                                             & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)) 
                                                                            | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 5U) 
                                                                               | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                >> 0xbU)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x80000000U 
                                                              & (vlSelf->top__DOT___7158_ 
                                                                 << 0xcU)) 
                                                             | ((0x40000000U 
                                                                 & (vlSelf->top__DOT___7158_ 
                                                                    << 0xcU)) 
                                                                | ((0x20000000U 
                                                                    & (vlSelf->top__DOT___3863_[1U] 
                                                                       << 0xfU)) 
                                                                   | (((IData)(vlSelf->top__DOT___3617_) 
                                                                       << 0x1cU) 
                                                                      | ((0x8000000U 
                                                                          & (vlSelf->top__DOT___3863_[1U] 
                                                                             << 0xfU)) 
                                                                         | ((0x4000000U 
                                                                             & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                            | ((0x3c00000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                               | ((0x200000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U))))))))))))))))))))))))))))))) 
                      >> 0xfU) | ((IData)(((((QData)((IData)(
                                                             (0xb74000U 
                                                              | (((IData)(vlSelf->top__DOT___0023_) 
                                                                  << 0x1fU) 
                                                                 | ((0x40000000U 
                                                                     & (vlSelf->top__DOT___3863_[2U] 
                                                                        << 0xfU)) 
                                                                    | ((0x20000000U 
                                                                        & (vlSelf->top__DOT___7158_ 
                                                                           << 6U)) 
                                                                       | ((0x10000000U 
                                                                           & (vlSelf->top__DOT___7158_ 
                                                                              << 6U)) 
                                                                          | (((IData)(vlSelf->top__DOT___0830_) 
                                                                              << 0x1bU) 
                                                                             | ((0x800U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | ((0x380U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                >> 0xbU)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)))))))))))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((0x80000000U 
                                                                & (vlSelf->top__DOT___7158_ 
                                                                   << 0xcU)) 
                                                               | ((0x40000000U 
                                                                   & (vlSelf->top__DOT___7158_ 
                                                                      << 0xcU)) 
                                                                  | ((0x20000000U 
                                                                      & (vlSelf->top__DOT___3863_[1U] 
                                                                         << 0xfU)) 
                                                                     | (((IData)(vlSelf->top__DOT___3617_) 
                                                                         << 0x1cU) 
                                                                        | ((0x8000000U 
                                                                            & (vlSelf->top__DOT___3863_[1U] 
                                                                               << 0xfU)) 
                                                                           | ((0x4000000U 
                                                                               & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                              | ((0x3c00000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)))))))))))))))))))))))))))))) 
                                           >> 0x20U)) 
                                  << 0x11U));
    __Vtemp_8[2U] = ((IData)(((((QData)((IData)((0xb74000U 
                                                 | (((IData)(vlSelf->top__DOT___0023_) 
                                                     << 0x1fU) 
                                                    | ((0x40000000U 
                                                        & (vlSelf->top__DOT___3863_[2U] 
                                                           << 0xfU)) 
                                                       | ((0x20000000U 
                                                           & (vlSelf->top__DOT___7158_ 
                                                              << 6U)) 
                                                          | ((0x10000000U 
                                                              & (vlSelf->top__DOT___7158_ 
                                                                 << 6U)) 
                                                             | (((IData)(vlSelf->top__DOT___0830_) 
                                                                 << 0x1bU) 
                                                                | ((0x800U 
                                                                    & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                       << 0xbU)) 
                                                                   | (((IData)(vlSelf->top__DOT___0102_) 
                                                                       << 0xaU) 
                                                                      | ((0x380U 
                                                                          & (vlSelf->top__DOT___3863_[1U] 
                                                                             >> 0x11U)) 
                                                                         | ((0x40U 
                                                                             & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)) 
                                                                            | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 5U) 
                                                                               | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                >> 0xbU)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x80000000U 
                                                              & (vlSelf->top__DOT___7158_ 
                                                                 << 0xcU)) 
                                                             | ((0x40000000U 
                                                                 & (vlSelf->top__DOT___7158_ 
                                                                    << 0xcU)) 
                                                                | ((0x20000000U 
                                                                    & (vlSelf->top__DOT___3863_[1U] 
                                                                       << 0xfU)) 
                                                                   | (((IData)(vlSelf->top__DOT___3617_) 
                                                                       << 0x1cU) 
                                                                      | ((0x8000000U 
                                                                          & (vlSelf->top__DOT___3863_[1U] 
                                                                             << 0xfU)) 
                                                                         | ((0x4000000U 
                                                                             & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                            | ((0x3c00000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                               | ((0x200000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)))))))))))))))))))))))))))))) 
                              >> 0x20U)) >> 0xfU);
    VL_ADD_W(3, __Vtemp_9, __Vtemp_7, __Vtemp_8);
    __Vtemp_12[0U] = (((IData)((((QData)((IData)(((0xe0000000U 
                                                   & (vlSelf->top__DOT___3872_[2U] 
                                                      << 0xfU)) 
                                                  | ((0x10000000U 
                                                      & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                         << 0x1cU)) 
                                                     | ((0xfffff00U 
                                                         & ((vlSelf->top__DOT___3872_[2U] 
                                                             << 0xfU) 
                                                            | (0x7f00U 
                                                               & (vlSelf->top__DOT___3872_[1U] 
                                                                  >> 0x11U)))) 
                                                        | (((IData)(vlSelf->top__DOT___0622_) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->top__DOT___2121_) 
                                                               << 6U) 
                                                              | ((0x20U 
                                                                  & (vlSelf->top__DOT___3872_[1U] 
                                                                     >> 0x11U)) 
                                                                 | (((IData)(vlSelf->top__DOT___0268_) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->top__DOT___0843_) 
                                                                        << 3U) 
                                                                       | ((4U 
                                                                           & (vlSelf->top__DOT___3872_[1U] 
                                                                              >> 0x11U)) 
                                                                          | (((IData)(vlSelf->top__DOT___1743_) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->top__DOT___0699_))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___1168_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___0218_) 
                                                                  << 0x1eU) 
                                                                 | (((IData)(vlSelf->top__DOT___0699_) 
                                                                     << 0x1dU) 
                                                                    | (((IData)(vlSelf->top__DOT___0226_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & ((IData)(vlSelf->top__DOT___7188_) 
                                                                              << 0xdU)) 
                                                                          | ((0x6000000U 
                                                                              & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x300000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_)))))))))))))))))))))))))))))))))) 
                       << 0x11U) | ((0x10000U & ((IData)(vlSelf->top__DOT___7188_) 
                                                 << 2U)) 
                                    | ((0xc000U & (
                                                   vlSelf->top__DOT___3863_[0U] 
                                                   >> 6U)) 
                                       | (((IData)(vlSelf->top__DOT___0932_) 
                                           << 0xdU) 
                                          | ((0x1000U 
                                              & ((IData)(vlSelf->top__DOT___7188_) 
                                                 << 2U)) 
                                             | ((0x800U 
                                                 & ((IData)(vlSelf->top__DOT___7188_) 
                                                    << 2U)) 
                                                | ((0x600U 
                                                    & (vlSelf->top__DOT___3863_[0U] 
                                                       >> 6U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSelf->top__DOT___7188_) 
                                                          << 2U)) 
                                                      | ((0x80U 
                                                          & (vlSelf->top__DOT___3863_[0U] 
                                                             >> 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSelf->top__DOT___7188_) 
                                                                << 2U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                   << 2U)) 
                                                               | ((0x10U 
                                                                   & (vlSelf->top__DOT___3863_[0U] 
                                                                      >> 6U)) 
                                                                  | (((IData)(vlSelf->top__DOT___1931_) 
                                                                      << 3U) 
                                                                     | ((4U 
                                                                         & (vlSelf->top__DOT___3863_[0U] 
                                                                            >> 6U)) 
                                                                        | (((IData)(vlSelf->top__DOT___0218_) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelf->top__DOT___0069_))))))))))))))));
    __Vtemp_12[1U] = (((IData)((((QData)((IData)(((0xe0000000U 
                                                   & (vlSelf->top__DOT___3872_[2U] 
                                                      << 0xfU)) 
                                                  | ((0x10000000U 
                                                      & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                         << 0x1cU)) 
                                                     | ((0xfffff00U 
                                                         & ((vlSelf->top__DOT___3872_[2U] 
                                                             << 0xfU) 
                                                            | (0x7f00U 
                                                               & (vlSelf->top__DOT___3872_[1U] 
                                                                  >> 0x11U)))) 
                                                        | (((IData)(vlSelf->top__DOT___0622_) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->top__DOT___2121_) 
                                                               << 6U) 
                                                              | ((0x20U 
                                                                  & (vlSelf->top__DOT___3872_[1U] 
                                                                     >> 0x11U)) 
                                                                 | (((IData)(vlSelf->top__DOT___0268_) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->top__DOT___0843_) 
                                                                        << 3U) 
                                                                       | ((4U 
                                                                           & (vlSelf->top__DOT___3872_[1U] 
                                                                              >> 0x11U)) 
                                                                          | (((IData)(vlSelf->top__DOT___1743_) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->top__DOT___0699_))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___1168_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___0218_) 
                                                                  << 0x1eU) 
                                                                 | (((IData)(vlSelf->top__DOT___0699_) 
                                                                     << 0x1dU) 
                                                                    | (((IData)(vlSelf->top__DOT___0226_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & ((IData)(vlSelf->top__DOT___7188_) 
                                                                              << 0xdU)) 
                                                                          | ((0x6000000U 
                                                                              & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x300000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_)))))))))))))))))))))))))))))))))) 
                       >> 0xfU) | ((IData)(((((QData)((IData)(
                                                              ((0xe0000000U 
                                                                & (vlSelf->top__DOT___3872_[2U] 
                                                                   << 0xfU)) 
                                                               | ((0x10000000U 
                                                                   & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                      << 0x1cU)) 
                                                                  | ((0xfffff00U 
                                                                      & ((vlSelf->top__DOT___3872_[2U] 
                                                                          << 0xfU) 
                                                                         | (0x7f00U 
                                                                            & (vlSelf->top__DOT___3872_[1U] 
                                                                               >> 0x11U)))) 
                                                                     | (((IData)(vlSelf->top__DOT___0622_) 
                                                                         << 7U) 
                                                                        | (((IData)(vlSelf->top__DOT___2121_) 
                                                                            << 6U) 
                                                                           | ((0x20U 
                                                                               & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0x11U)) 
                                                                              | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_))))))))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___1168_) 
                                                                 << 0x1fU) 
                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                    << 0x1eU) 
                                                                   | (((IData)(vlSelf->top__DOT___0699_) 
                                                                       << 0x1dU) 
                                                                      | (((IData)(vlSelf->top__DOT___0226_) 
                                                                          << 0x1cU) 
                                                                         | ((0x8000000U 
                                                                             & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                            | ((0x6000000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                               | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x300000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_))))))))))))))))))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 0x11U));
    __Vtemp_12[2U] = ((IData)(((((QData)((IData)(((0xe0000000U 
                                                   & (vlSelf->top__DOT___3872_[2U] 
                                                      << 0xfU)) 
                                                  | ((0x10000000U 
                                                      & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                         << 0x1cU)) 
                                                     | ((0xfffff00U 
                                                         & ((vlSelf->top__DOT___3872_[2U] 
                                                             << 0xfU) 
                                                            | (0x7f00U 
                                                               & (vlSelf->top__DOT___3872_[1U] 
                                                                  >> 0x11U)))) 
                                                        | (((IData)(vlSelf->top__DOT___0622_) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->top__DOT___2121_) 
                                                               << 6U) 
                                                              | ((0x20U 
                                                                  & (vlSelf->top__DOT___3872_[1U] 
                                                                     >> 0x11U)) 
                                                                 | (((IData)(vlSelf->top__DOT___0268_) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->top__DOT___0843_) 
                                                                        << 3U) 
                                                                       | ((4U 
                                                                           & (vlSelf->top__DOT___3872_[1U] 
                                                                              >> 0x11U)) 
                                                                          | (((IData)(vlSelf->top__DOT___1743_) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->top__DOT___0699_))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___1168_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___0218_) 
                                                                  << 0x1eU) 
                                                                 | (((IData)(vlSelf->top__DOT___0699_) 
                                                                     << 0x1dU) 
                                                                    | (((IData)(vlSelf->top__DOT___0226_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & ((IData)(vlSelf->top__DOT___7188_) 
                                                                              << 0xdU)) 
                                                                          | ((0x6000000U 
                                                                              & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x300000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_))))))))))))))))))))))))))))))))) 
                               >> 0x20U)) >> 0xfU);
    __Vtemp_13[0U] = (((IData)((((QData)((IData)((0xb74000U 
                                                  | (((IData)(vlSelf->top__DOT___0023_) 
                                                      << 0x1fU) 
                                                     | ((0x40000000U 
                                                         & (vlSelf->top__DOT___3863_[2U] 
                                                            << 0xfU)) 
                                                        | ((0x20000000U 
                                                            & (vlSelf->top__DOT___7158_ 
                                                               << 6U)) 
                                                           | ((0x10000000U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  << 6U)) 
                                                              | (((IData)(vlSelf->top__DOT___0830_) 
                                                                  << 0x1bU) 
                                                                 | ((0x800U 
                                                                     & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                        << 0xbU)) 
                                                                    | (((IData)(vlSelf->top__DOT___0102_) 
                                                                        << 0xaU) 
                                                                       | ((0x380U 
                                                                           & (vlSelf->top__DOT___3863_[1U] 
                                                                              >> 0x11U)) 
                                                                          | ((0x40U 
                                                                              & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                >> 0xbU)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  << 0xcU)) 
                                                              | ((0x40000000U 
                                                                  & (vlSelf->top__DOT___7158_ 
                                                                     << 0xcU)) 
                                                                 | ((0x20000000U 
                                                                     & (vlSelf->top__DOT___3863_[1U] 
                                                                        << 0xfU)) 
                                                                    | (((IData)(vlSelf->top__DOT___3617_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & (vlSelf->top__DOT___3863_[1U] 
                                                                              << 0xfU)) 
                                                                          | ((0x4000000U 
                                                                              & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                             | ((0x3c00000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U))))))))))))))))))))))))))))))) 
                       << 0x11U) | ((0x18000U & vlSelf->top__DOT___3863_[0U]) 
                                    | ((0x4000U & ((IData)(vlSelf->top__DOT___7188_) 
                                                   << 8U)) 
                                       | ((0x2000U 
                                           & vlSelf->top__DOT___3863_[0U]) 
                                          | ((0x1000U 
                                              & ((IData)(vlSelf->top__DOT___7188_) 
                                                 << 8U)) 
                                             | ((0x800U 
                                                 & ((IData)(vlSelf->top__DOT___7188_) 
                                                    << 8U)) 
                                                | ((0x400U 
                                                    & vlSelf->top__DOT___3863_[0U]) 
                                                   | (((IData)(vlSelf->top__DOT___1931_) 
                                                       << 9U) 
                                                      | ((0x100U 
                                                          & vlSelf->top__DOT___3863_[0U]) 
                                                         | (((IData)(vlSelf->top__DOT___0023_) 
                                                             << 7U) 
                                                            | (((IData)(vlSelf->top__DOT___0830_) 
                                                                << 6U) 
                                                               | (((IData)(vlSelf->top__DOT___0226_) 
                                                                   << 4U) 
                                                                  | (((IData)(vlSelf->top__DOT___0069_) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSelf->top__DOT___0102_) 
                                                                         << 2U) 
                                                                        | (((IData)(vlSelf->top__DOT___0170_) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelf->top__DOT___0226_))))))))))))))));
    __Vtemp_13[1U] = (((IData)((((QData)((IData)((0xb74000U 
                                                  | (((IData)(vlSelf->top__DOT___0023_) 
                                                      << 0x1fU) 
                                                     | ((0x40000000U 
                                                         & (vlSelf->top__DOT___3863_[2U] 
                                                            << 0xfU)) 
                                                        | ((0x20000000U 
                                                            & (vlSelf->top__DOT___7158_ 
                                                               << 6U)) 
                                                           | ((0x10000000U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  << 6U)) 
                                                              | (((IData)(vlSelf->top__DOT___0830_) 
                                                                  << 0x1bU) 
                                                                 | ((0x800U 
                                                                     & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                        << 0xbU)) 
                                                                    | (((IData)(vlSelf->top__DOT___0102_) 
                                                                        << 0xaU) 
                                                                       | ((0x380U 
                                                                           & (vlSelf->top__DOT___3863_[1U] 
                                                                              >> 0x11U)) 
                                                                          | ((0x40U 
                                                                              & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                >> 0xbU)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  << 0xcU)) 
                                                              | ((0x40000000U 
                                                                  & (vlSelf->top__DOT___7158_ 
                                                                     << 0xcU)) 
                                                                 | ((0x20000000U 
                                                                     & (vlSelf->top__DOT___3863_[1U] 
                                                                        << 0xfU)) 
                                                                    | (((IData)(vlSelf->top__DOT___3617_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & (vlSelf->top__DOT___3863_[1U] 
                                                                              << 0xfU)) 
                                                                          | ((0x4000000U 
                                                                              & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                             | ((0x3c00000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U))))))))))))))))))))))))))))))) 
                       >> 0xfU) | ((IData)(((((QData)((IData)(
                                                              (0xb74000U 
                                                               | (((IData)(vlSelf->top__DOT___0023_) 
                                                                   << 0x1fU) 
                                                                  | ((0x40000000U 
                                                                      & (vlSelf->top__DOT___3863_[2U] 
                                                                         << 0xfU)) 
                                                                     | ((0x20000000U 
                                                                         & (vlSelf->top__DOT___7158_ 
                                                                            << 6U)) 
                                                                        | ((0x10000000U 
                                                                            & (vlSelf->top__DOT___7158_ 
                                                                               << 6U)) 
                                                                           | (((IData)(vlSelf->top__DOT___0830_) 
                                                                               << 0x1bU) 
                                                                              | ((0x800U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | ((0x380U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                >> 0xbU)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)))))))))))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((0x80000000U 
                                                                 & (vlSelf->top__DOT___7158_ 
                                                                    << 0xcU)) 
                                                                | ((0x40000000U 
                                                                    & (vlSelf->top__DOT___7158_ 
                                                                       << 0xcU)) 
                                                                   | ((0x20000000U 
                                                                       & (vlSelf->top__DOT___3863_[1U] 
                                                                          << 0xfU)) 
                                                                      | (((IData)(vlSelf->top__DOT___3617_) 
                                                                          << 0x1cU) 
                                                                         | ((0x8000000U 
                                                                             & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                            | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                               | ((0x3c00000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)))))))))))))))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 0x11U));
    __Vtemp_13[2U] = ((IData)(((((QData)((IData)((0xb74000U 
                                                  | (((IData)(vlSelf->top__DOT___0023_) 
                                                      << 0x1fU) 
                                                     | ((0x40000000U 
                                                         & (vlSelf->top__DOT___3863_[2U] 
                                                            << 0xfU)) 
                                                        | ((0x20000000U 
                                                            & (vlSelf->top__DOT___7158_ 
                                                               << 6U)) 
                                                           | ((0x10000000U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  << 6U)) 
                                                              | (((IData)(vlSelf->top__DOT___0830_) 
                                                                  << 0x1bU) 
                                                                 | ((0x800U 
                                                                     & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                        << 0xbU)) 
                                                                    | (((IData)(vlSelf->top__DOT___0102_) 
                                                                        << 0xaU) 
                                                                       | ((0x380U 
                                                                           & (vlSelf->top__DOT___3863_[1U] 
                                                                              >> 0x11U)) 
                                                                          | ((0x40U 
                                                                              & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                >> 0xbU)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  << 0xcU)) 
                                                              | ((0x40000000U 
                                                                  & (vlSelf->top__DOT___7158_ 
                                                                     << 0xcU)) 
                                                                 | ((0x20000000U 
                                                                     & (vlSelf->top__DOT___3863_[1U] 
                                                                        << 0xfU)) 
                                                                    | (((IData)(vlSelf->top__DOT___3617_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & (vlSelf->top__DOT___3863_[1U] 
                                                                              << 0xfU)) 
                                                                          | ((0x4000000U 
                                                                              & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                             | ((0x3c00000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)))))))))))))))))))))))))))))) 
                               >> 0x20U)) >> 0xfU);
    VL_ADD_W(3, __Vtemp_14, __Vtemp_12, __Vtemp_13);
    vlSelf->top__DOT___3835_ = (((QData)((IData)((1U 
                                                  & (__Vtemp_4[1U] 
                                                     >> 0x18U)))) 
                                 << 0x34U) | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT____VdfgTmp_h5214cb79__0[1U] 
                                                                   >> 0x17U)))) 
                                               << 0x33U) 
                                              | (((QData)((IData)(
                                                                  (0x1ffU 
                                                                   & (__Vtemp_9[1U] 
                                                                      >> 0xeU)))) 
                                                  << 0x2aU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT____VdfgTmp_h5214cb79__0[1U] 
                                                                         >> 0xdU)))) 
                                                     << 0x29U) 
                                                    | (((QData)((IData)(
                                                                        (0x3ffffU 
                                                                         & ((__Vtemp_14[1U] 
                                                                             << 5U) 
                                                                            | (__Vtemp_14[0U] 
                                                                               >> 0x1bU))))) 
                                                        << 0x17U) 
                                                       | (QData)((IData)(
                                                                         (0x5ba00U 
                                                                          | (((IData)(vlSelf->top__DOT___1166_) 
                                                                              << 0x16U) 
                                                                             | (((IData)(vlSelf->top__DOT___1249_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1605_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0997_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0614_))))))))))))))));
    __Vtemp_17[0U] = (((IData)((((QData)((IData)(((0xe0000000U 
                                                   & (vlSelf->top__DOT___3872_[2U] 
                                                      << 0xfU)) 
                                                  | ((0x10000000U 
                                                      & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                         << 0x1cU)) 
                                                     | ((0xfffff00U 
                                                         & ((vlSelf->top__DOT___3872_[2U] 
                                                             << 0xfU) 
                                                            | (0x7f00U 
                                                               & (vlSelf->top__DOT___3872_[1U] 
                                                                  >> 0x11U)))) 
                                                        | (((IData)(vlSelf->top__DOT___0622_) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->top__DOT___2121_) 
                                                               << 6U) 
                                                              | ((0x20U 
                                                                  & (vlSelf->top__DOT___3872_[1U] 
                                                                     >> 0x11U)) 
                                                                 | (((IData)(vlSelf->top__DOT___0268_) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->top__DOT___0843_) 
                                                                        << 3U) 
                                                                       | ((4U 
                                                                           & (vlSelf->top__DOT___3872_[1U] 
                                                                              >> 0x11U)) 
                                                                          | (((IData)(vlSelf->top__DOT___1743_) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->top__DOT___0699_))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___1168_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___0218_) 
                                                                  << 0x1eU) 
                                                                 | (((IData)(vlSelf->top__DOT___0699_) 
                                                                     << 0x1dU) 
                                                                    | (((IData)(vlSelf->top__DOT___0226_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & ((IData)(vlSelf->top__DOT___7188_) 
                                                                              << 0xdU)) 
                                                                          | ((0x6000000U 
                                                                              & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x300000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_)))))))))))))))))))))))))))))))))) 
                       << 0x11U) | ((0x10000U & ((IData)(vlSelf->top__DOT___7188_) 
                                                 << 2U)) 
                                    | ((0xc000U & (
                                                   vlSelf->top__DOT___3863_[0U] 
                                                   >> 6U)) 
                                       | (((IData)(vlSelf->top__DOT___0932_) 
                                           << 0xdU) 
                                          | ((0x1000U 
                                              & ((IData)(vlSelf->top__DOT___7188_) 
                                                 << 2U)) 
                                             | ((0x800U 
                                                 & ((IData)(vlSelf->top__DOT___7188_) 
                                                    << 2U)) 
                                                | ((0x600U 
                                                    & (vlSelf->top__DOT___3863_[0U] 
                                                       >> 6U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSelf->top__DOT___7188_) 
                                                          << 2U)) 
                                                      | ((0x80U 
                                                          & (vlSelf->top__DOT___3863_[0U] 
                                                             >> 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSelf->top__DOT___7188_) 
                                                                << 2U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                   << 2U)) 
                                                               | ((0x10U 
                                                                   & (vlSelf->top__DOT___3863_[0U] 
                                                                      >> 6U)) 
                                                                  | (((IData)(vlSelf->top__DOT___1931_) 
                                                                      << 3U) 
                                                                     | ((4U 
                                                                         & (vlSelf->top__DOT___3863_[0U] 
                                                                            >> 6U)) 
                                                                        | (((IData)(vlSelf->top__DOT___0218_) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelf->top__DOT___0069_))))))))))))))));
    __Vtemp_17[1U] = (((IData)((((QData)((IData)(((0xe0000000U 
                                                   & (vlSelf->top__DOT___3872_[2U] 
                                                      << 0xfU)) 
                                                  | ((0x10000000U 
                                                      & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                         << 0x1cU)) 
                                                     | ((0xfffff00U 
                                                         & ((vlSelf->top__DOT___3872_[2U] 
                                                             << 0xfU) 
                                                            | (0x7f00U 
                                                               & (vlSelf->top__DOT___3872_[1U] 
                                                                  >> 0x11U)))) 
                                                        | (((IData)(vlSelf->top__DOT___0622_) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->top__DOT___2121_) 
                                                               << 6U) 
                                                              | ((0x20U 
                                                                  & (vlSelf->top__DOT___3872_[1U] 
                                                                     >> 0x11U)) 
                                                                 | (((IData)(vlSelf->top__DOT___0268_) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->top__DOT___0843_) 
                                                                        << 3U) 
                                                                       | ((4U 
                                                                           & (vlSelf->top__DOT___3872_[1U] 
                                                                              >> 0x11U)) 
                                                                          | (((IData)(vlSelf->top__DOT___1743_) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->top__DOT___0699_))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___1168_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___0218_) 
                                                                  << 0x1eU) 
                                                                 | (((IData)(vlSelf->top__DOT___0699_) 
                                                                     << 0x1dU) 
                                                                    | (((IData)(vlSelf->top__DOT___0226_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & ((IData)(vlSelf->top__DOT___7188_) 
                                                                              << 0xdU)) 
                                                                          | ((0x6000000U 
                                                                              & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x300000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_)))))))))))))))))))))))))))))))))) 
                       >> 0xfU) | ((IData)(((((QData)((IData)(
                                                              ((0xe0000000U 
                                                                & (vlSelf->top__DOT___3872_[2U] 
                                                                   << 0xfU)) 
                                                               | ((0x10000000U 
                                                                   & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                      << 0x1cU)) 
                                                                  | ((0xfffff00U 
                                                                      & ((vlSelf->top__DOT___3872_[2U] 
                                                                          << 0xfU) 
                                                                         | (0x7f00U 
                                                                            & (vlSelf->top__DOT___3872_[1U] 
                                                                               >> 0x11U)))) 
                                                                     | (((IData)(vlSelf->top__DOT___0622_) 
                                                                         << 7U) 
                                                                        | (((IData)(vlSelf->top__DOT___2121_) 
                                                                            << 6U) 
                                                                           | ((0x20U 
                                                                               & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0x11U)) 
                                                                              | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_))))))))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___1168_) 
                                                                 << 0x1fU) 
                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                    << 0x1eU) 
                                                                   | (((IData)(vlSelf->top__DOT___0699_) 
                                                                       << 0x1dU) 
                                                                      | (((IData)(vlSelf->top__DOT___0226_) 
                                                                          << 0x1cU) 
                                                                         | ((0x8000000U 
                                                                             & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                            | ((0x6000000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                               | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x300000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_))))))))))))))))))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 0x11U));
    __Vtemp_17[2U] = ((IData)(((((QData)((IData)(((0xe0000000U 
                                                   & (vlSelf->top__DOT___3872_[2U] 
                                                      << 0xfU)) 
                                                  | ((0x10000000U 
                                                      & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                         << 0x1cU)) 
                                                     | ((0xfffff00U 
                                                         & ((vlSelf->top__DOT___3872_[2U] 
                                                             << 0xfU) 
                                                            | (0x7f00U 
                                                               & (vlSelf->top__DOT___3872_[1U] 
                                                                  >> 0x11U)))) 
                                                        | (((IData)(vlSelf->top__DOT___0622_) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->top__DOT___2121_) 
                                                               << 6U) 
                                                              | ((0x20U 
                                                                  & (vlSelf->top__DOT___3872_[1U] 
                                                                     >> 0x11U)) 
                                                                 | (((IData)(vlSelf->top__DOT___0268_) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->top__DOT___0843_) 
                                                                        << 3U) 
                                                                       | ((4U 
                                                                           & (vlSelf->top__DOT___3872_[1U] 
                                                                              >> 0x11U)) 
                                                                          | (((IData)(vlSelf->top__DOT___1743_) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->top__DOT___0699_))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___1168_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___0218_) 
                                                                  << 0x1eU) 
                                                                 | (((IData)(vlSelf->top__DOT___0699_) 
                                                                     << 0x1dU) 
                                                                    | (((IData)(vlSelf->top__DOT___0226_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & ((IData)(vlSelf->top__DOT___7188_) 
                                                                              << 0xdU)) 
                                                                          | ((0x6000000U 
                                                                              & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x300000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_))))))))))))))))))))))))))))))))) 
                               >> 0x20U)) >> 0xfU);
    __Vtemp_18[0U] = (((IData)((((QData)((IData)((0xb74000U 
                                                  | (((IData)(vlSelf->top__DOT___0023_) 
                                                      << 0x1fU) 
                                                     | ((0x40000000U 
                                                         & (vlSelf->top__DOT___3863_[2U] 
                                                            << 0xfU)) 
                                                        | ((0x20000000U 
                                                            & (vlSelf->top__DOT___7158_ 
                                                               << 6U)) 
                                                           | ((0x10000000U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  << 6U)) 
                                                              | (((IData)(vlSelf->top__DOT___0830_) 
                                                                  << 0x1bU) 
                                                                 | ((0x800U 
                                                                     & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                        << 0xbU)) 
                                                                    | (((IData)(vlSelf->top__DOT___0102_) 
                                                                        << 0xaU) 
                                                                       | ((0x380U 
                                                                           & (vlSelf->top__DOT___3863_[1U] 
                                                                              >> 0x11U)) 
                                                                          | ((0x40U 
                                                                              & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                >> 0xbU)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  << 0xcU)) 
                                                              | ((0x40000000U 
                                                                  & (vlSelf->top__DOT___7158_ 
                                                                     << 0xcU)) 
                                                                 | ((0x20000000U 
                                                                     & (vlSelf->top__DOT___3863_[1U] 
                                                                        << 0xfU)) 
                                                                    | (((IData)(vlSelf->top__DOT___3617_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & (vlSelf->top__DOT___3863_[1U] 
                                                                              << 0xfU)) 
                                                                          | ((0x4000000U 
                                                                              & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                             | ((0x3c00000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U))))))))))))))))))))))))))))))) 
                       << 0x11U) | ((0x18000U & vlSelf->top__DOT___3863_[0U]) 
                                    | ((0x4000U & ((IData)(vlSelf->top__DOT___7188_) 
                                                   << 8U)) 
                                       | ((0x2000U 
                                           & vlSelf->top__DOT___3863_[0U]) 
                                          | ((0x1000U 
                                              & ((IData)(vlSelf->top__DOT___7188_) 
                                                 << 8U)) 
                                             | ((0x800U 
                                                 & ((IData)(vlSelf->top__DOT___7188_) 
                                                    << 8U)) 
                                                | ((0x400U 
                                                    & vlSelf->top__DOT___3863_[0U]) 
                                                   | (((IData)(vlSelf->top__DOT___1931_) 
                                                       << 9U) 
                                                      | ((0x100U 
                                                          & vlSelf->top__DOT___3863_[0U]) 
                                                         | (((IData)(vlSelf->top__DOT___0023_) 
                                                             << 7U) 
                                                            | (((IData)(vlSelf->top__DOT___0830_) 
                                                                << 6U) 
                                                               | (((IData)(vlSelf->top__DOT___0226_) 
                                                                   << 4U) 
                                                                  | (((IData)(vlSelf->top__DOT___0069_) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSelf->top__DOT___0102_) 
                                                                         << 2U) 
                                                                        | (((IData)(vlSelf->top__DOT___0170_) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelf->top__DOT___0226_))))))))))))))));
    __Vtemp_18[1U] = (((IData)((((QData)((IData)((0xb74000U 
                                                  | (((IData)(vlSelf->top__DOT___0023_) 
                                                      << 0x1fU) 
                                                     | ((0x40000000U 
                                                         & (vlSelf->top__DOT___3863_[2U] 
                                                            << 0xfU)) 
                                                        | ((0x20000000U 
                                                            & (vlSelf->top__DOT___7158_ 
                                                               << 6U)) 
                                                           | ((0x10000000U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  << 6U)) 
                                                              | (((IData)(vlSelf->top__DOT___0830_) 
                                                                  << 0x1bU) 
                                                                 | ((0x800U 
                                                                     & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                        << 0xbU)) 
                                                                    | (((IData)(vlSelf->top__DOT___0102_) 
                                                                        << 0xaU) 
                                                                       | ((0x380U 
                                                                           & (vlSelf->top__DOT___3863_[1U] 
                                                                              >> 0x11U)) 
                                                                          | ((0x40U 
                                                                              & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                >> 0xbU)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  << 0xcU)) 
                                                              | ((0x40000000U 
                                                                  & (vlSelf->top__DOT___7158_ 
                                                                     << 0xcU)) 
                                                                 | ((0x20000000U 
                                                                     & (vlSelf->top__DOT___3863_[1U] 
                                                                        << 0xfU)) 
                                                                    | (((IData)(vlSelf->top__DOT___3617_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & (vlSelf->top__DOT___3863_[1U] 
                                                                              << 0xfU)) 
                                                                          | ((0x4000000U 
                                                                              & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                             | ((0x3c00000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U))))))))))))))))))))))))))))))) 
                       >> 0xfU) | ((IData)(((((QData)((IData)(
                                                              (0xb74000U 
                                                               | (((IData)(vlSelf->top__DOT___0023_) 
                                                                   << 0x1fU) 
                                                                  | ((0x40000000U 
                                                                      & (vlSelf->top__DOT___3863_[2U] 
                                                                         << 0xfU)) 
                                                                     | ((0x20000000U 
                                                                         & (vlSelf->top__DOT___7158_ 
                                                                            << 6U)) 
                                                                        | ((0x10000000U 
                                                                            & (vlSelf->top__DOT___7158_ 
                                                                               << 6U)) 
                                                                           | (((IData)(vlSelf->top__DOT___0830_) 
                                                                               << 0x1bU) 
                                                                              | ((0x800U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | ((0x380U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                >> 0xbU)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)))))))))))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((0x80000000U 
                                                                 & (vlSelf->top__DOT___7158_ 
                                                                    << 0xcU)) 
                                                                | ((0x40000000U 
                                                                    & (vlSelf->top__DOT___7158_ 
                                                                       << 0xcU)) 
                                                                   | ((0x20000000U 
                                                                       & (vlSelf->top__DOT___3863_[1U] 
                                                                          << 0xfU)) 
                                                                      | (((IData)(vlSelf->top__DOT___3617_) 
                                                                          << 0x1cU) 
                                                                         | ((0x8000000U 
                                                                             & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                            | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                               | ((0x3c00000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)))))))))))))))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 0x11U));
    __Vtemp_18[2U] = ((IData)(((((QData)((IData)((0xb74000U 
                                                  | (((IData)(vlSelf->top__DOT___0023_) 
                                                      << 0x1fU) 
                                                     | ((0x40000000U 
                                                         & (vlSelf->top__DOT___3863_[2U] 
                                                            << 0xfU)) 
                                                        | ((0x20000000U 
                                                            & (vlSelf->top__DOT___7158_ 
                                                               << 6U)) 
                                                           | ((0x10000000U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  << 6U)) 
                                                              | (((IData)(vlSelf->top__DOT___0830_) 
                                                                  << 0x1bU) 
                                                                 | ((0x800U 
                                                                     & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                        << 0xbU)) 
                                                                    | (((IData)(vlSelf->top__DOT___0102_) 
                                                                        << 0xaU) 
                                                                       | ((0x380U 
                                                                           & (vlSelf->top__DOT___3863_[1U] 
                                                                              >> 0x11U)) 
                                                                          | ((0x40U 
                                                                              & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                >> 0xbU)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  << 0xcU)) 
                                                              | ((0x40000000U 
                                                                  & (vlSelf->top__DOT___7158_ 
                                                                     << 0xcU)) 
                                                                 | ((0x20000000U 
                                                                     & (vlSelf->top__DOT___3863_[1U] 
                                                                        << 0xfU)) 
                                                                    | (((IData)(vlSelf->top__DOT___3617_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & (vlSelf->top__DOT___3863_[1U] 
                                                                              << 0xfU)) 
                                                                          | ((0x4000000U 
                                                                              & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                             | ((0x3c00000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)))))))))))))))))))))))))))))) 
                               >> 0x20U)) >> 0xfU);
    VL_ADD_W(3, __Vtemp_19, __Vtemp_17, __Vtemp_18);
    __Vtemp_22[0U] = (((IData)((((QData)((IData)(((0xe0000000U 
                                                   & (vlSelf->top__DOT___3872_[2U] 
                                                      << 0xfU)) 
                                                  | ((0x10000000U 
                                                      & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                         << 0x1cU)) 
                                                     | ((0xfffff00U 
                                                         & ((vlSelf->top__DOT___3872_[2U] 
                                                             << 0xfU) 
                                                            | (0x7f00U 
                                                               & (vlSelf->top__DOT___3872_[1U] 
                                                                  >> 0x11U)))) 
                                                        | (((IData)(vlSelf->top__DOT___0622_) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->top__DOT___2121_) 
                                                               << 6U) 
                                                              | ((0x20U 
                                                                  & (vlSelf->top__DOT___3872_[1U] 
                                                                     >> 0x11U)) 
                                                                 | (((IData)(vlSelf->top__DOT___0268_) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->top__DOT___0843_) 
                                                                        << 3U) 
                                                                       | ((4U 
                                                                           & (vlSelf->top__DOT___3872_[1U] 
                                                                              >> 0x11U)) 
                                                                          | (((IData)(vlSelf->top__DOT___1743_) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->top__DOT___0699_))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___1168_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___0218_) 
                                                                  << 0x1eU) 
                                                                 | (((IData)(vlSelf->top__DOT___0699_) 
                                                                     << 0x1dU) 
                                                                    | (((IData)(vlSelf->top__DOT___0226_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & ((IData)(vlSelf->top__DOT___7188_) 
                                                                              << 0xdU)) 
                                                                          | ((0x6000000U 
                                                                              & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x300000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_)))))))))))))))))))))))))))))))))) 
                       << 0x11U) | ((0x10000U & ((IData)(vlSelf->top__DOT___7188_) 
                                                 << 2U)) 
                                    | ((0xc000U & (
                                                   vlSelf->top__DOT___3863_[0U] 
                                                   >> 6U)) 
                                       | (((IData)(vlSelf->top__DOT___0932_) 
                                           << 0xdU) 
                                          | ((0x1000U 
                                              & ((IData)(vlSelf->top__DOT___7188_) 
                                                 << 2U)) 
                                             | ((0x800U 
                                                 & ((IData)(vlSelf->top__DOT___7188_) 
                                                    << 2U)) 
                                                | ((0x600U 
                                                    & (vlSelf->top__DOT___3863_[0U] 
                                                       >> 6U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSelf->top__DOT___7188_) 
                                                          << 2U)) 
                                                      | ((0x80U 
                                                          & (vlSelf->top__DOT___3863_[0U] 
                                                             >> 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSelf->top__DOT___7188_) 
                                                                << 2U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                   << 2U)) 
                                                               | ((0x10U 
                                                                   & (vlSelf->top__DOT___3863_[0U] 
                                                                      >> 6U)) 
                                                                  | (((IData)(vlSelf->top__DOT___1931_) 
                                                                      << 3U) 
                                                                     | ((4U 
                                                                         & (vlSelf->top__DOT___3863_[0U] 
                                                                            >> 6U)) 
                                                                        | (((IData)(vlSelf->top__DOT___0218_) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelf->top__DOT___0069_))))))))))))))));
    __Vtemp_22[1U] = (((IData)((((QData)((IData)(((0xe0000000U 
                                                   & (vlSelf->top__DOT___3872_[2U] 
                                                      << 0xfU)) 
                                                  | ((0x10000000U 
                                                      & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                         << 0x1cU)) 
                                                     | ((0xfffff00U 
                                                         & ((vlSelf->top__DOT___3872_[2U] 
                                                             << 0xfU) 
                                                            | (0x7f00U 
                                                               & (vlSelf->top__DOT___3872_[1U] 
                                                                  >> 0x11U)))) 
                                                        | (((IData)(vlSelf->top__DOT___0622_) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->top__DOT___2121_) 
                                                               << 6U) 
                                                              | ((0x20U 
                                                                  & (vlSelf->top__DOT___3872_[1U] 
                                                                     >> 0x11U)) 
                                                                 | (((IData)(vlSelf->top__DOT___0268_) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->top__DOT___0843_) 
                                                                        << 3U) 
                                                                       | ((4U 
                                                                           & (vlSelf->top__DOT___3872_[1U] 
                                                                              >> 0x11U)) 
                                                                          | (((IData)(vlSelf->top__DOT___1743_) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->top__DOT___0699_))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___1168_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___0218_) 
                                                                  << 0x1eU) 
                                                                 | (((IData)(vlSelf->top__DOT___0699_) 
                                                                     << 0x1dU) 
                                                                    | (((IData)(vlSelf->top__DOT___0226_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & ((IData)(vlSelf->top__DOT___7188_) 
                                                                              << 0xdU)) 
                                                                          | ((0x6000000U 
                                                                              & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x300000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_)))))))))))))))))))))))))))))))))) 
                       >> 0xfU) | ((IData)(((((QData)((IData)(
                                                              ((0xe0000000U 
                                                                & (vlSelf->top__DOT___3872_[2U] 
                                                                   << 0xfU)) 
                                                               | ((0x10000000U 
                                                                   & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                      << 0x1cU)) 
                                                                  | ((0xfffff00U 
                                                                      & ((vlSelf->top__DOT___3872_[2U] 
                                                                          << 0xfU) 
                                                                         | (0x7f00U 
                                                                            & (vlSelf->top__DOT___3872_[1U] 
                                                                               >> 0x11U)))) 
                                                                     | (((IData)(vlSelf->top__DOT___0622_) 
                                                                         << 7U) 
                                                                        | (((IData)(vlSelf->top__DOT___2121_) 
                                                                            << 6U) 
                                                                           | ((0x20U 
                                                                               & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0x11U)) 
                                                                              | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_))))))))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___1168_) 
                                                                 << 0x1fU) 
                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                    << 0x1eU) 
                                                                   | (((IData)(vlSelf->top__DOT___0699_) 
                                                                       << 0x1dU) 
                                                                      | (((IData)(vlSelf->top__DOT___0226_) 
                                                                          << 0x1cU) 
                                                                         | ((0x8000000U 
                                                                             & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                            | ((0x6000000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                               | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x300000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_))))))))))))))))))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 0x11U));
    __Vtemp_22[2U] = ((IData)(((((QData)((IData)(((0xe0000000U 
                                                   & (vlSelf->top__DOT___3872_[2U] 
                                                      << 0xfU)) 
                                                  | ((0x10000000U 
                                                      & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                         << 0x1cU)) 
                                                     | ((0xfffff00U 
                                                         & ((vlSelf->top__DOT___3872_[2U] 
                                                             << 0xfU) 
                                                            | (0x7f00U 
                                                               & (vlSelf->top__DOT___3872_[1U] 
                                                                  >> 0x11U)))) 
                                                        | (((IData)(vlSelf->top__DOT___0622_) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->top__DOT___2121_) 
                                                               << 6U) 
                                                              | ((0x20U 
                                                                  & (vlSelf->top__DOT___3872_[1U] 
                                                                     >> 0x11U)) 
                                                                 | (((IData)(vlSelf->top__DOT___0268_) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->top__DOT___0843_) 
                                                                        << 3U) 
                                                                       | ((4U 
                                                                           & (vlSelf->top__DOT___3872_[1U] 
                                                                              >> 0x11U)) 
                                                                          | (((IData)(vlSelf->top__DOT___1743_) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->top__DOT___0699_))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___1168_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___0218_) 
                                                                  << 0x1eU) 
                                                                 | (((IData)(vlSelf->top__DOT___0699_) 
                                                                     << 0x1dU) 
                                                                    | (((IData)(vlSelf->top__DOT___0226_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & ((IData)(vlSelf->top__DOT___7188_) 
                                                                              << 0xdU)) 
                                                                          | ((0x6000000U 
                                                                              & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x300000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_))))))))))))))))))))))))))))))))) 
                               >> 0x20U)) >> 0xfU);
    __Vtemp_23[0U] = (((IData)((((QData)((IData)((0xb74000U 
                                                  | (((IData)(vlSelf->top__DOT___0023_) 
                                                      << 0x1fU) 
                                                     | ((0x40000000U 
                                                         & (vlSelf->top__DOT___3863_[2U] 
                                                            << 0xfU)) 
                                                        | ((0x20000000U 
                                                            & (vlSelf->top__DOT___7158_ 
                                                               << 6U)) 
                                                           | ((0x10000000U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  << 6U)) 
                                                              | (((IData)(vlSelf->top__DOT___0830_) 
                                                                  << 0x1bU) 
                                                                 | ((0x800U 
                                                                     & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                        << 0xbU)) 
                                                                    | (((IData)(vlSelf->top__DOT___0102_) 
                                                                        << 0xaU) 
                                                                       | ((0x380U 
                                                                           & (vlSelf->top__DOT___3863_[1U] 
                                                                              >> 0x11U)) 
                                                                          | ((0x40U 
                                                                              & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                >> 0xbU)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  << 0xcU)) 
                                                              | ((0x40000000U 
                                                                  & (vlSelf->top__DOT___7158_ 
                                                                     << 0xcU)) 
                                                                 | ((0x20000000U 
                                                                     & (vlSelf->top__DOT___3863_[1U] 
                                                                        << 0xfU)) 
                                                                    | (((IData)(vlSelf->top__DOT___3617_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & (vlSelf->top__DOT___3863_[1U] 
                                                                              << 0xfU)) 
                                                                          | ((0x4000000U 
                                                                              & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                             | ((0x3c00000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U))))))))))))))))))))))))))))))) 
                       << 0x11U) | ((0x18000U & vlSelf->top__DOT___3863_[0U]) 
                                    | ((0x4000U & ((IData)(vlSelf->top__DOT___7188_) 
                                                   << 8U)) 
                                       | ((0x2000U 
                                           & vlSelf->top__DOT___3863_[0U]) 
                                          | ((0x1000U 
                                              & ((IData)(vlSelf->top__DOT___7188_) 
                                                 << 8U)) 
                                             | ((0x800U 
                                                 & ((IData)(vlSelf->top__DOT___7188_) 
                                                    << 8U)) 
                                                | ((0x400U 
                                                    & vlSelf->top__DOT___3863_[0U]) 
                                                   | (((IData)(vlSelf->top__DOT___1931_) 
                                                       << 9U) 
                                                      | ((0x100U 
                                                          & vlSelf->top__DOT___3863_[0U]) 
                                                         | (((IData)(vlSelf->top__DOT___0023_) 
                                                             << 7U) 
                                                            | (((IData)(vlSelf->top__DOT___0830_) 
                                                                << 6U) 
                                                               | (((IData)(vlSelf->top__DOT___0226_) 
                                                                   << 4U) 
                                                                  | (((IData)(vlSelf->top__DOT___0069_) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSelf->top__DOT___0102_) 
                                                                         << 2U) 
                                                                        | (((IData)(vlSelf->top__DOT___0170_) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelf->top__DOT___0226_))))))))))))))));
    __Vtemp_23[1U] = (((IData)((((QData)((IData)((0xb74000U 
                                                  | (((IData)(vlSelf->top__DOT___0023_) 
                                                      << 0x1fU) 
                                                     | ((0x40000000U 
                                                         & (vlSelf->top__DOT___3863_[2U] 
                                                            << 0xfU)) 
                                                        | ((0x20000000U 
                                                            & (vlSelf->top__DOT___7158_ 
                                                               << 6U)) 
                                                           | ((0x10000000U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  << 6U)) 
                                                              | (((IData)(vlSelf->top__DOT___0830_) 
                                                                  << 0x1bU) 
                                                                 | ((0x800U 
                                                                     & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                        << 0xbU)) 
                                                                    | (((IData)(vlSelf->top__DOT___0102_) 
                                                                        << 0xaU) 
                                                                       | ((0x380U 
                                                                           & (vlSelf->top__DOT___3863_[1U] 
                                                                              >> 0x11U)) 
                                                                          | ((0x40U 
                                                                              & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                >> 0xbU)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  << 0xcU)) 
                                                              | ((0x40000000U 
                                                                  & (vlSelf->top__DOT___7158_ 
                                                                     << 0xcU)) 
                                                                 | ((0x20000000U 
                                                                     & (vlSelf->top__DOT___3863_[1U] 
                                                                        << 0xfU)) 
                                                                    | (((IData)(vlSelf->top__DOT___3617_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & (vlSelf->top__DOT___3863_[1U] 
                                                                              << 0xfU)) 
                                                                          | ((0x4000000U 
                                                                              & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                             | ((0x3c00000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U))))))))))))))))))))))))))))))) 
                       >> 0xfU) | ((IData)(((((QData)((IData)(
                                                              (0xb74000U 
                                                               | (((IData)(vlSelf->top__DOT___0023_) 
                                                                   << 0x1fU) 
                                                                  | ((0x40000000U 
                                                                      & (vlSelf->top__DOT___3863_[2U] 
                                                                         << 0xfU)) 
                                                                     | ((0x20000000U 
                                                                         & (vlSelf->top__DOT___7158_ 
                                                                            << 6U)) 
                                                                        | ((0x10000000U 
                                                                            & (vlSelf->top__DOT___7158_ 
                                                                               << 6U)) 
                                                                           | (((IData)(vlSelf->top__DOT___0830_) 
                                                                               << 0x1bU) 
                                                                              | ((0x800U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | ((0x380U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                >> 0xbU)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)))))))))))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((0x80000000U 
                                                                 & (vlSelf->top__DOT___7158_ 
                                                                    << 0xcU)) 
                                                                | ((0x40000000U 
                                                                    & (vlSelf->top__DOT___7158_ 
                                                                       << 0xcU)) 
                                                                   | ((0x20000000U 
                                                                       & (vlSelf->top__DOT___3863_[1U] 
                                                                          << 0xfU)) 
                                                                      | (((IData)(vlSelf->top__DOT___3617_) 
                                                                          << 0x1cU) 
                                                                         | ((0x8000000U 
                                                                             & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                            | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                               | ((0x3c00000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)))))))))))))))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 0x11U));
    __Vtemp_23[2U] = ((IData)(((((QData)((IData)((0xb74000U 
                                                  | (((IData)(vlSelf->top__DOT___0023_) 
                                                      << 0x1fU) 
                                                     | ((0x40000000U 
                                                         & (vlSelf->top__DOT___3863_[2U] 
                                                            << 0xfU)) 
                                                        | ((0x20000000U 
                                                            & (vlSelf->top__DOT___7158_ 
                                                               << 6U)) 
                                                           | ((0x10000000U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  << 6U)) 
                                                              | (((IData)(vlSelf->top__DOT___0830_) 
                                                                  << 0x1bU) 
                                                                 | ((0x800U 
                                                                     & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                        << 0xbU)) 
                                                                    | (((IData)(vlSelf->top__DOT___0102_) 
                                                                        << 0xaU) 
                                                                       | ((0x380U 
                                                                           & (vlSelf->top__DOT___3863_[1U] 
                                                                              >> 0x11U)) 
                                                                          | ((0x40U 
                                                                              & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                >> 0xbU)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  << 0xcU)) 
                                                              | ((0x40000000U 
                                                                  & (vlSelf->top__DOT___7158_ 
                                                                     << 0xcU)) 
                                                                 | ((0x20000000U 
                                                                     & (vlSelf->top__DOT___3863_[1U] 
                                                                        << 0xfU)) 
                                                                    | (((IData)(vlSelf->top__DOT___3617_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & (vlSelf->top__DOT___3863_[1U] 
                                                                              << 0xfU)) 
                                                                          | ((0x4000000U 
                                                                              & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                             | ((0x3c00000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)))))))))))))))))))))))))))))) 
                               >> 0x20U)) >> 0xfU);
    VL_ADD_W(3, __Vtemp_24, __Vtemp_22, __Vtemp_23);
    __Vtemp_27[0U] = (((IData)((((QData)((IData)(((0xe0000000U 
                                                   & (vlSelf->top__DOT___3872_[2U] 
                                                      << 0xfU)) 
                                                  | ((0x10000000U 
                                                      & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                         << 0x1cU)) 
                                                     | ((0xfffff00U 
                                                         & ((vlSelf->top__DOT___3872_[2U] 
                                                             << 0xfU) 
                                                            | (0x7f00U 
                                                               & (vlSelf->top__DOT___3872_[1U] 
                                                                  >> 0x11U)))) 
                                                        | (((IData)(vlSelf->top__DOT___0622_) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->top__DOT___2121_) 
                                                               << 6U) 
                                                              | ((0x20U 
                                                                  & (vlSelf->top__DOT___3872_[1U] 
                                                                     >> 0x11U)) 
                                                                 | (((IData)(vlSelf->top__DOT___0268_) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->top__DOT___0843_) 
                                                                        << 3U) 
                                                                       | ((4U 
                                                                           & (vlSelf->top__DOT___3872_[1U] 
                                                                              >> 0x11U)) 
                                                                          | (((IData)(vlSelf->top__DOT___1743_) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->top__DOT___0699_))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___1168_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___0218_) 
                                                                  << 0x1eU) 
                                                                 | (((IData)(vlSelf->top__DOT___0699_) 
                                                                     << 0x1dU) 
                                                                    | (((IData)(vlSelf->top__DOT___0226_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & ((IData)(vlSelf->top__DOT___7188_) 
                                                                              << 0xdU)) 
                                                                          | ((0x6000000U 
                                                                              & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x300000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_)))))))))))))))))))))))))))))))))) 
                       << 0x11U) | ((0x10000U & ((IData)(vlSelf->top__DOT___7188_) 
                                                 << 2U)) 
                                    | ((0xc000U & (
                                                   vlSelf->top__DOT___3863_[0U] 
                                                   >> 6U)) 
                                       | (((IData)(vlSelf->top__DOT___0932_) 
                                           << 0xdU) 
                                          | ((0x1000U 
                                              & ((IData)(vlSelf->top__DOT___7188_) 
                                                 << 2U)) 
                                             | ((0x800U 
                                                 & ((IData)(vlSelf->top__DOT___7188_) 
                                                    << 2U)) 
                                                | ((0x600U 
                                                    & (vlSelf->top__DOT___3863_[0U] 
                                                       >> 6U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSelf->top__DOT___7188_) 
                                                          << 2U)) 
                                                      | ((0x80U 
                                                          & (vlSelf->top__DOT___3863_[0U] 
                                                             >> 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSelf->top__DOT___7188_) 
                                                                << 2U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                   << 2U)) 
                                                               | ((0x10U 
                                                                   & (vlSelf->top__DOT___3863_[0U] 
                                                                      >> 6U)) 
                                                                  | (((IData)(vlSelf->top__DOT___1931_) 
                                                                      << 3U) 
                                                                     | ((4U 
                                                                         & (vlSelf->top__DOT___3863_[0U] 
                                                                            >> 6U)) 
                                                                        | (((IData)(vlSelf->top__DOT___0218_) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelf->top__DOT___0069_))))))))))))))));
    __Vtemp_27[1U] = (((IData)((((QData)((IData)(((0xe0000000U 
                                                   & (vlSelf->top__DOT___3872_[2U] 
                                                      << 0xfU)) 
                                                  | ((0x10000000U 
                                                      & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                         << 0x1cU)) 
                                                     | ((0xfffff00U 
                                                         & ((vlSelf->top__DOT___3872_[2U] 
                                                             << 0xfU) 
                                                            | (0x7f00U 
                                                               & (vlSelf->top__DOT___3872_[1U] 
                                                                  >> 0x11U)))) 
                                                        | (((IData)(vlSelf->top__DOT___0622_) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->top__DOT___2121_) 
                                                               << 6U) 
                                                              | ((0x20U 
                                                                  & (vlSelf->top__DOT___3872_[1U] 
                                                                     >> 0x11U)) 
                                                                 | (((IData)(vlSelf->top__DOT___0268_) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->top__DOT___0843_) 
                                                                        << 3U) 
                                                                       | ((4U 
                                                                           & (vlSelf->top__DOT___3872_[1U] 
                                                                              >> 0x11U)) 
                                                                          | (((IData)(vlSelf->top__DOT___1743_) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->top__DOT___0699_))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___1168_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___0218_) 
                                                                  << 0x1eU) 
                                                                 | (((IData)(vlSelf->top__DOT___0699_) 
                                                                     << 0x1dU) 
                                                                    | (((IData)(vlSelf->top__DOT___0226_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & ((IData)(vlSelf->top__DOT___7188_) 
                                                                              << 0xdU)) 
                                                                          | ((0x6000000U 
                                                                              & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x300000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_)))))))))))))))))))))))))))))))))) 
                       >> 0xfU) | ((IData)(((((QData)((IData)(
                                                              ((0xe0000000U 
                                                                & (vlSelf->top__DOT___3872_[2U] 
                                                                   << 0xfU)) 
                                                               | ((0x10000000U 
                                                                   & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                      << 0x1cU)) 
                                                                  | ((0xfffff00U 
                                                                      & ((vlSelf->top__DOT___3872_[2U] 
                                                                          << 0xfU) 
                                                                         | (0x7f00U 
                                                                            & (vlSelf->top__DOT___3872_[1U] 
                                                                               >> 0x11U)))) 
                                                                     | (((IData)(vlSelf->top__DOT___0622_) 
                                                                         << 7U) 
                                                                        | (((IData)(vlSelf->top__DOT___2121_) 
                                                                            << 6U) 
                                                                           | ((0x20U 
                                                                               & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0x11U)) 
                                                                              | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_))))))))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___1168_) 
                                                                 << 0x1fU) 
                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                    << 0x1eU) 
                                                                   | (((IData)(vlSelf->top__DOT___0699_) 
                                                                       << 0x1dU) 
                                                                      | (((IData)(vlSelf->top__DOT___0226_) 
                                                                          << 0x1cU) 
                                                                         | ((0x8000000U 
                                                                             & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                            | ((0x6000000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                               | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x300000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_))))))))))))))))))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 0x11U));
    __Vtemp_27[2U] = ((IData)(((((QData)((IData)(((0xe0000000U 
                                                   & (vlSelf->top__DOT___3872_[2U] 
                                                      << 0xfU)) 
                                                  | ((0x10000000U 
                                                      & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                         << 0x1cU)) 
                                                     | ((0xfffff00U 
                                                         & ((vlSelf->top__DOT___3872_[2U] 
                                                             << 0xfU) 
                                                            | (0x7f00U 
                                                               & (vlSelf->top__DOT___3872_[1U] 
                                                                  >> 0x11U)))) 
                                                        | (((IData)(vlSelf->top__DOT___0622_) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->top__DOT___2121_) 
                                                               << 6U) 
                                                              | ((0x20U 
                                                                  & (vlSelf->top__DOT___3872_[1U] 
                                                                     >> 0x11U)) 
                                                                 | (((IData)(vlSelf->top__DOT___0268_) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->top__DOT___0843_) 
                                                                        << 3U) 
                                                                       | ((4U 
                                                                           & (vlSelf->top__DOT___3872_[1U] 
                                                                              >> 0x11U)) 
                                                                          | (((IData)(vlSelf->top__DOT___1743_) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->top__DOT___0699_))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___1168_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___0218_) 
                                                                  << 0x1eU) 
                                                                 | (((IData)(vlSelf->top__DOT___0699_) 
                                                                     << 0x1dU) 
                                                                    | (((IData)(vlSelf->top__DOT___0226_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & ((IData)(vlSelf->top__DOT___7188_) 
                                                                              << 0xdU)) 
                                                                          | ((0x6000000U 
                                                                              & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x300000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0699_))))))))))))))))))))))))))))))))) 
                               >> 0x20U)) >> 0xfU);
    __Vtemp_28[0U] = (((IData)((((QData)((IData)((0xb74000U 
                                                  | (((IData)(vlSelf->top__DOT___0023_) 
                                                      << 0x1fU) 
                                                     | ((0x40000000U 
                                                         & (vlSelf->top__DOT___3863_[2U] 
                                                            << 0xfU)) 
                                                        | ((0x20000000U 
                                                            & (vlSelf->top__DOT___7158_ 
                                                               << 6U)) 
                                                           | ((0x10000000U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  << 6U)) 
                                                              | (((IData)(vlSelf->top__DOT___0830_) 
                                                                  << 0x1bU) 
                                                                 | ((0x800U 
                                                                     & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                        << 0xbU)) 
                                                                    | (((IData)(vlSelf->top__DOT___0102_) 
                                                                        << 0xaU) 
                                                                       | ((0x380U 
                                                                           & (vlSelf->top__DOT___3863_[1U] 
                                                                              >> 0x11U)) 
                                                                          | ((0x40U 
                                                                              & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                >> 0xbU)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  << 0xcU)) 
                                                              | ((0x40000000U 
                                                                  & (vlSelf->top__DOT___7158_ 
                                                                     << 0xcU)) 
                                                                 | ((0x20000000U 
                                                                     & (vlSelf->top__DOT___3863_[1U] 
                                                                        << 0xfU)) 
                                                                    | (((IData)(vlSelf->top__DOT___3617_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & (vlSelf->top__DOT___3863_[1U] 
                                                                              << 0xfU)) 
                                                                          | ((0x4000000U 
                                                                              & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                             | ((0x3c00000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U))))))))))))))))))))))))))))))) 
                       << 0x11U) | ((0x18000U & vlSelf->top__DOT___3863_[0U]) 
                                    | ((0x4000U & ((IData)(vlSelf->top__DOT___7188_) 
                                                   << 8U)) 
                                       | ((0x2000U 
                                           & vlSelf->top__DOT___3863_[0U]) 
                                          | ((0x1000U 
                                              & ((IData)(vlSelf->top__DOT___7188_) 
                                                 << 8U)) 
                                             | ((0x800U 
                                                 & ((IData)(vlSelf->top__DOT___7188_) 
                                                    << 8U)) 
                                                | ((0x400U 
                                                    & vlSelf->top__DOT___3863_[0U]) 
                                                   | (((IData)(vlSelf->top__DOT___1931_) 
                                                       << 9U) 
                                                      | ((0x100U 
                                                          & vlSelf->top__DOT___3863_[0U]) 
                                                         | (((IData)(vlSelf->top__DOT___0023_) 
                                                             << 7U) 
                                                            | (((IData)(vlSelf->top__DOT___0830_) 
                                                                << 6U) 
                                                               | (((IData)(vlSelf->top__DOT___0226_) 
                                                                   << 4U) 
                                                                  | (((IData)(vlSelf->top__DOT___0069_) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSelf->top__DOT___0102_) 
                                                                         << 2U) 
                                                                        | (((IData)(vlSelf->top__DOT___0170_) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelf->top__DOT___0226_))))))))))))))));
    __Vtemp_28[1U] = (((IData)((((QData)((IData)((0xb74000U 
                                                  | (((IData)(vlSelf->top__DOT___0023_) 
                                                      << 0x1fU) 
                                                     | ((0x40000000U 
                                                         & (vlSelf->top__DOT___3863_[2U] 
                                                            << 0xfU)) 
                                                        | ((0x20000000U 
                                                            & (vlSelf->top__DOT___7158_ 
                                                               << 6U)) 
                                                           | ((0x10000000U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  << 6U)) 
                                                              | (((IData)(vlSelf->top__DOT___0830_) 
                                                                  << 0x1bU) 
                                                                 | ((0x800U 
                                                                     & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                        << 0xbU)) 
                                                                    | (((IData)(vlSelf->top__DOT___0102_) 
                                                                        << 0xaU) 
                                                                       | ((0x380U 
                                                                           & (vlSelf->top__DOT___3863_[1U] 
                                                                              >> 0x11U)) 
                                                                          | ((0x40U 
                                                                              & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                >> 0xbU)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  << 0xcU)) 
                                                              | ((0x40000000U 
                                                                  & (vlSelf->top__DOT___7158_ 
                                                                     << 0xcU)) 
                                                                 | ((0x20000000U 
                                                                     & (vlSelf->top__DOT___3863_[1U] 
                                                                        << 0xfU)) 
                                                                    | (((IData)(vlSelf->top__DOT___3617_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & (vlSelf->top__DOT___3863_[1U] 
                                                                              << 0xfU)) 
                                                                          | ((0x4000000U 
                                                                              & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                             | ((0x3c00000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U))))))))))))))))))))))))))))))) 
                       >> 0xfU) | ((IData)(((((QData)((IData)(
                                                              (0xb74000U 
                                                               | (((IData)(vlSelf->top__DOT___0023_) 
                                                                   << 0x1fU) 
                                                                  | ((0x40000000U 
                                                                      & (vlSelf->top__DOT___3863_[2U] 
                                                                         << 0xfU)) 
                                                                     | ((0x20000000U 
                                                                         & (vlSelf->top__DOT___7158_ 
                                                                            << 6U)) 
                                                                        | ((0x10000000U 
                                                                            & (vlSelf->top__DOT___7158_ 
                                                                               << 6U)) 
                                                                           | (((IData)(vlSelf->top__DOT___0830_) 
                                                                               << 0x1bU) 
                                                                              | ((0x800U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | ((0x380U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                >> 0xbU)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)))))))))))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((0x80000000U 
                                                                 & (vlSelf->top__DOT___7158_ 
                                                                    << 0xcU)) 
                                                                | ((0x40000000U 
                                                                    & (vlSelf->top__DOT___7158_ 
                                                                       << 0xcU)) 
                                                                   | ((0x20000000U 
                                                                       & (vlSelf->top__DOT___3863_[1U] 
                                                                          << 0xfU)) 
                                                                      | (((IData)(vlSelf->top__DOT___3617_) 
                                                                          << 0x1cU) 
                                                                         | ((0x8000000U 
                                                                             & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                            | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                               | ((0x3c00000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)))))))))))))))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 0x11U));
    __Vtemp_28[2U] = ((IData)(((((QData)((IData)((0xb74000U 
                                                  | (((IData)(vlSelf->top__DOT___0023_) 
                                                      << 0x1fU) 
                                                     | ((0x40000000U 
                                                         & (vlSelf->top__DOT___3863_[2U] 
                                                            << 0xfU)) 
                                                        | ((0x20000000U 
                                                            & (vlSelf->top__DOT___7158_ 
                                                               << 6U)) 
                                                           | ((0x10000000U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  << 6U)) 
                                                              | (((IData)(vlSelf->top__DOT___0830_) 
                                                                  << 0x1bU) 
                                                                 | ((0x800U 
                                                                     & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                        << 0xbU)) 
                                                                    | (((IData)(vlSelf->top__DOT___0102_) 
                                                                        << 0xaU) 
                                                                       | ((0x380U 
                                                                           & (vlSelf->top__DOT___3863_[1U] 
                                                                              >> 0x11U)) 
                                                                          | ((0x40U 
                                                                              & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                >> 0xbU)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 0x14U)))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  << 0xcU)) 
                                                              | ((0x40000000U 
                                                                  & (vlSelf->top__DOT___7158_ 
                                                                     << 0xcU)) 
                                                                 | ((0x20000000U 
                                                                     & (vlSelf->top__DOT___3863_[1U] 
                                                                        << 0xfU)) 
                                                                    | (((IData)(vlSelf->top__DOT___3617_) 
                                                                        << 0x1cU) 
                                                                       | ((0x8000000U 
                                                                           & (vlSelf->top__DOT___3863_[1U] 
                                                                              << 0xfU)) 
                                                                          | ((0x4000000U 
                                                                              & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                             | ((0x3c00000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 9U)))))))))))))))))))))))))))))) 
                               >> 0x20U)) >> 0xfU);
    VL_ADD_W(3, __Vtemp_29, __Vtemp_27, __Vtemp_28);
    __Vtemp_31[0U] = (IData)((((QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT___3835_ 
                                                           >> 0x34U))))) 
                               << 0x38U) | (((QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT____VdfgTmp_h5214cb79__0[1U] 
                                                                 >> 0x17U)))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT___3835_ 
                                                                            >> 0x2aU))))) 
                                                << 0x2eU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->top__DOT____VdfgTmp_h5214cb79__0[1U] 
                                                                       >> 0xdU)))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x3ffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT___3835_ 
                                                                                >> 0x17U))))) 
                                                      << 0x1bU) 
                                                     | (QData)((IData)(
                                                                       ((0x7fe0000U 
                                                                         & __Vtemp_29[0U]) 
                                                                        | (((IData)(vlSelf->top__DOT___0919_) 
                                                                            << 0x10U) 
                                                                           | ((0xfff0U 
                                                                               & (((0xc000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 2U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 2U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 6U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 2U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 6U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 2U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 2U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0069_)))))))))))))) 
                                                                                + 
                                                                                ((0x8000U 
                                                                                & vlSelf->top__DOT___3863_[0U]) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 8U)) 
                                                                                | ((0x2000U 
                                                                                & vlSelf->top__DOT___3863_[0U]) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 8U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 8U)) 
                                                                                | ((0x400U 
                                                                                & vlSelf->top__DOT___3863_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 9U) 
                                                                                | ((0x100U 
                                                                                & vlSelf->top__DOT___3863_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0226_))))))))))))))))) 
                                                                              | (((IData)(vlSelf->top__DOT___2520_) 
                                                                                << 3U) 
                                                                                | (7U 
                                                                                & (((4U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0069_))) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0226_)))))))))))))))))));
    __Vtemp_31[1U] = ((0xfe000000U & __Vtemp_24[1U]) 
                      | (IData)(((((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT___3835_ 
                                                               >> 0x34U))))) 
                                   << 0x38U) | (((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT____VdfgTmp_h5214cb79__0[1U] 
                                                                     >> 0x17U)))) 
                                                 << 0x37U) 
                                                | (((QData)((IData)(
                                                                    (0x1ffU 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT___3835_ 
                                                                                >> 0x2aU))))) 
                                                    << 0x2eU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->top__DOT____VdfgTmp_h5214cb79__0[1U] 
                                                                           >> 0xdU)))) 
                                                       << 0x2dU) 
                                                      | (((QData)((IData)(
                                                                          (0x3ffffU 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT___3835_ 
                                                                                >> 0x17U))))) 
                                                          << 0x1bU) 
                                                         | (QData)((IData)(
                                                                           ((0x7fe0000U 
                                                                             & __Vtemp_29[0U]) 
                                                                            | (((IData)(vlSelf->top__DOT___0919_) 
                                                                                << 0x10U) 
                                                                               | ((0xfff0U 
                                                                                & (((0xc000U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 2U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 2U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 6U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 2U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 6U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 2U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 2U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0069_)))))))))))))) 
                                                                                + 
                                                                                ((0x8000U 
                                                                                & vlSelf->top__DOT___3863_[0U]) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 8U)) 
                                                                                | ((0x2000U 
                                                                                & vlSelf->top__DOT___3863_[0U]) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 8U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 8U)) 
                                                                                | ((0x400U 
                                                                                & vlSelf->top__DOT___3863_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 9U) 
                                                                                | ((0x100U 
                                                                                & vlSelf->top__DOT___3863_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0226_))))))))))))))))) 
                                                                                | (((IData)(vlSelf->top__DOT___2520_) 
                                                                                << 3U) 
                                                                                | (7U 
                                                                                & (((4U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0069_))) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0226_)))))))))))))))))) 
                                 >> 0x20U)));
    vlSelf->top__DOT___3849_[0U] = __Vtemp_31[0U];
    vlSelf->top__DOT___3849_[1U] = __Vtemp_31[1U];
    vlSelf->top__DOT___3849_[2U] = ((0x1fc00U & __Vtemp_19[2U]) 
                                    | ((0x200U & vlSelf->top__DOT____VdfgTmp_h5214cb79__0[2U]) 
                                       | (0x1ffU & 
                                          __Vtemp_24[2U])));
}
