// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1024c1d0 size=0x1bc
// TARGET: ?RotateLeft@?$CUtlRBTree@UCRBTree12Entry_1024c1d0@@G@@QAEXG@Z
#include "utlrbtree.h"
struct CRBTree12Entry_1024c1d0 { char data[4]; };
// one member, not `template class`: that emits every member (and the sentinel) in this object
static void (CUtlRBTree<CRBTree12Entry_1024c1d0, unsigned short>::*s_RotateLeft)(unsigned short) = &CUtlRBTree<CRBTree12Entry_1024c1d0, unsigned short>::RotateLeft;
// END FUNCTION
