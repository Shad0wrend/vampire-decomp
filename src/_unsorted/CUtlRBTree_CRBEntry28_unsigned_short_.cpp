// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10049780 size=0xf7
// TARGET: ?NewNode@?$CUtlRBTree@UCRBEntry28@@G@@QAEGXZ
#include "utlrbtree.h"
struct CRBEntry28 { char data[28]; };
template class CUtlRBTree<CRBEntry28, unsigned short>;
// END FUNCTION
