// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10194780 size=0xfa
// TARGET: ?NewNode@?$CUtlRBTree@HG@@QAEGXZ
#include "utlrbtree.h"
// one member, not `template class`: that emits every member (and the sentinel) in this object
static unsigned short (CUtlRBTree<int, unsigned short>::*s_NewNode)() = &CUtlRBTree<int, unsigned short>::NewNode;
// END FUNCTION
