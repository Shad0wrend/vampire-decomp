// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10055050 size=0xdb
// TARGET: ?NewNode@?$CUtlRBTree@UCRBEntry8@@H@@QAEHXZ
#include "utlrbtree.h"

struct CRBEntry8 {
    int a;
    int b;
};

template class CUtlRBTree<CRBEntry8, int>;
// END FUNCTION
