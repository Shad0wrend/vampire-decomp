// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10054c00 size=0x32d
// TARGET: ?RemoveNode@?$CUtlRBTree@UCRBEntry8@@H@@QAEXH@Z
#include "utlrbtree.h"
#include "CRBEntry8.h"

static void (CUtlRBTree<CRBEntry8, int>::*s_RemoveNode)(int) = &CUtlRBTree<CRBEntry8, int>::RemoveNode;
// END FUNCTION

// FUNCTION: 0x10055050 size=0xdb
// TARGET: ?NewNode@?$CUtlRBTree@UCRBEntry8@@H@@QAEHXZ
#include "utlrbtree.h"

struct CRBEntry8 {
    int a;
    int b;
};

// one member, not `template class`: that emits every member (and the sentinel) in this object
static int (CUtlRBTree<CRBEntry8, int>::*s_NewNode)() = &CUtlRBTree<CRBEntry8, int>::NewNode;
// END FUNCTION

// FUNCTION: 0x10055590 size=0x74b
// TARGET: ?RemoveRebalance@?$CUtlRBTree@UCRBEntry8@@H@@QAEXH@Z
#include "utlrbtree.h"
#include "CRBEntry8.h"
static void (CUtlRBTree<CRBEntry8, int>::*s_RemoveRebalance)(int) = &CUtlRBTree<CRBEntry8, int>::RemoveRebalance;
// END FUNCTION
