// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102cfaf0 size=0x1bc
// TARGET: ?RotateLeft@?$CUtlRBTree@UCRBTree12Entry_102cfaf0@@G@@QAEXG@Z
#include "utlrbtree.h"
struct CRBTree12Entry_102cfaf0 { char data[4]; };
// one member, not `template class`: that emits every member (and the sentinel) in this object
static void (CUtlRBTree<CRBTree12Entry_102cfaf0, unsigned short>::*s_RotateLeft)(unsigned short) = &CUtlRBTree<CRBTree12Entry_102cfaf0, unsigned short>::RotateLeft;
// END FUNCTION
