// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10049780 size=0xf7
// TARGET: ?NewNode@?$CUtlRBTree@UCRBTree36Entry_1004c5b0@@G@@QAEGXZ
#include "utlrbtree.h"
struct CRBTree36Entry_1004c5b0 { char data[28]; };
// one member, not `template class`: that emits every member (and the sentinel) in this object
static unsigned short (CUtlRBTree<CRBTree36Entry_1004c5b0, unsigned short>::*s_NewNode)() = &CUtlRBTree<CRBTree36Entry_1004c5b0, unsigned short>::NewNode;
// END FUNCTION
