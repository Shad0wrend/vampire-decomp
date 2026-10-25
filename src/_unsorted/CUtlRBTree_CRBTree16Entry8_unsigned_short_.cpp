// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10046d10 size=0x366
// TARGET: ?RemoveNode@?$CUtlRBTree@UCRBTree16Entry8@@G@@QAEXG@Z
#include "utlrbtree.h"
#include "CRBTree16Entry8.h"
// one member, not `template class`: that emits every member (and the sentinel) in this object
static void (CUtlRBTree<CRBTree16Entry8, unsigned short>::*s_RemoveNode)(unsigned short) = &CUtlRBTree<CRBTree16Entry8, unsigned short>::RemoveNode;
// END FUNCTION

// FUNCTION: 0x100479b0 size=0x824
// TARGET: ?RemoveRebalance@?$CUtlRBTree@UCRBTree16Entry8@@G@@QAEXG@Z
#include "utlrbtree.h"
struct CRBTree16Entry8 { char m_Data[8]; };
// one member, not `template class`: that emits every member (and the sentinel) in this object
static void (CUtlRBTree<CRBTree16Entry8, unsigned short>::*s_RemoveRebalance)(unsigned short) = &CUtlRBTree<CRBTree16Entry8, unsigned short>::RemoveRebalance;
// END FUNCTION
