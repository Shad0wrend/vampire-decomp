// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1007f7a0 size=0xdb
#include "utlrbtree.h"
struct CRBEntry24 { int a; int b; };
// TARGET: ?NewNode@?$CUtlRBTree@UCRBEntry24@@H@@QAEHXZ
// one member, not `template class`: that emits every member (and the sentinel) in this object
static int (CUtlRBTree<CRBEntry24, int>::*s_NewNode)() = &CUtlRBTree<CRBEntry24, int>::NewNode;
// END FUNCTION
