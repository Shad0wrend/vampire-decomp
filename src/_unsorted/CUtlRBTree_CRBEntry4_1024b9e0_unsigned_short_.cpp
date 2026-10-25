// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1024b9e0 size=0xfa
// TARGET: ?NewNode@?$CUtlRBTree@UCRBEntry4_1024b9e0@@G@@QAEGXZ
#include "utlrbtree.h"
struct CRBEntry4_1024b9e0 { int a; };
// one member, not `template class`: that emits every member (and the sentinel) in this object
static unsigned short (CUtlRBTree<CRBEntry4_1024b9e0, unsigned short>::*s_NewNode)() = &CUtlRBTree<CRBEntry4_1024b9e0, unsigned short>::NewNode;
// END FUNCTION
