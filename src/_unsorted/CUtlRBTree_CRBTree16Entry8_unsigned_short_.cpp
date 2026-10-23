// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100479b0 size=0x824
// TARGET: ?RemoveRebalance@?$CUtlRBTree@UCRBTree16Entry8@@G@@QAEXG@Z
#include "utlrbtree.h"
struct CRBTree16Entry8 { char m_Data[8]; };
template class CUtlRBTree<CRBTree16Entry8, unsigned short>;
// END FUNCTION
