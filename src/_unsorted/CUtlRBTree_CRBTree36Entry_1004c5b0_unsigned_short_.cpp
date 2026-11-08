// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100498c0 size=0x37f
// TARGET: ?LinkToParent@?$CUtlRBTree@UCRBTree36Entry_1004c5b0@@G@@QAEXGG_N@Z
#include "utlrbtree.h"
struct CRBTree36Entry_1004c5b0 { char data[28]; };
// one member, not `template class`: that emits every member (and the sentinel) in this object
static void (CUtlRBTree<CRBTree36Entry_1004c5b0, unsigned short>::*s_LinkToParent)(unsigned short, unsigned short, bool) = &CUtlRBTree<CRBTree36Entry_1004c5b0, unsigned short>::LinkToParent;
// END FUNCTION

// FUNCTION: 0x1004c5b0 size=0x1bc
// TARGET: ?RotateLeft@?$CUtlRBTree@UCRBTree36Entry_1004c5b0@@G@@QAEXG@Z
#include "utlrbtree.h"
struct CRBTree36Entry_1004c5b0 { char data[28]; };
// one member, not `template class`: that emits every member (and the sentinel) in this object
static void (CUtlRBTree<CRBTree36Entry_1004c5b0, unsigned short>::*s_RotateLeft)(unsigned short) = &CUtlRBTree<CRBTree36Entry_1004c5b0, unsigned short>::RotateLeft;
// END FUNCTION

// FUNCTION: 0x1004c7e0 size=0x1c0
// TARGET: ?RotateRight@?$CUtlRBTree@UCRBTree36Entry_1004c5b0@@G@@QAEXG@Z
#include "utlrbtree.h"
struct CRBTree36Entry_1004c5b0 { char data[28]; };
static void (CUtlRBTree<CRBTree36Entry_1004c5b0, unsigned short>::*s_RotateRight)(unsigned short) = &CUtlRBTree<CRBTree36Entry_1004c5b0, unsigned short>::RotateRight;
// END FUNCTION
