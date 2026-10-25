// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10047280 size=0xf6
// TARGET: ?NewNode@?$CUtlRBTree@UCRBTree16Entry8@@G@@QAEGXZ
#include "utlrbtree.h"
#include "CRBTree16Entry8.h"
// one member, not `template class`: that emits every member (and the sentinel) in this object
static unsigned short (CUtlRBTree<CRBTree16Entry8, unsigned short>::*s_NewNode)() = &CUtlRBTree<CRBTree16Entry8, unsigned short>::NewNode;
// END FUNCTION
