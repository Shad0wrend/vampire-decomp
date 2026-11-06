// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10049330 size=0x366
// TARGET: ?RemoveNode@?$CUtlRBTree@UCRBTree16Entry8B@@G@@QAEXG@Z
#include "utlrbtree.h"
#include "CRBTree16Entry8B.h"
// one member, not `template class`: that emits every member (and the sentinel) in this object
static void (CUtlRBTree<CRBTree16Entry8B, unsigned short>::*s_RemoveNode)(unsigned short) = &CUtlRBTree<CRBTree16Entry8B, unsigned short>::RemoveNode;
// END FUNCTION
