// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101bfd60 size=0x37f
// TARGET: ?LinkToParent@?$CUtlRBTree@UCRBTree12Entry_101c03c0@@G@@QAEXGG_N@Z
#include "utlrbtree.h"
#include "CRBTree12Entry_101c03c0.h"
static void (CUtlRBTree<CRBTree12Entry_101c03c0, unsigned short>::*s_LinkToParent)(unsigned short, unsigned short, bool) = &CUtlRBTree<CRBTree12Entry_101c03c0, unsigned short>::LinkToParent;
// END FUNCTION

// FUNCTION: 0x101c01c0 size=0x58
#include "CRBTree12Entry_101c03c0.h"
#include "utlrbtree.h"

typedef CUtlRBTree<CRBTree12Entry_101c03c0, unsigned short> RBTree12_101c03c0;
typedef const RBTree12_101c03c0::Links_t &(RBTree12_101c03c0::*LinksPtr_t)(unsigned short) const;

// TARGET: CUtlRBTree<CRBTree12Entry_101c03c0,unsigned short>::Links
LinksPtr_t g_linksForce = &RBTree12_101c03c0::Links;
// END FUNCTION

// FUNCTION: 0x101c03c0 size=0x1bc
// TARGET: ?RotateLeft@?$CUtlRBTree@UCRBTree12Entry_101c03c0@@G@@QAEXG@Z
#include "utlrbtree.h"
struct CRBTree12Entry_101c03c0 { char data[4]; };
// one member, not `template class`: that emits every member (and the sentinel) in this object
static void (CUtlRBTree<CRBTree12Entry_101c03c0, unsigned short>::*s_RotateLeft)(unsigned short) = &CUtlRBTree<CRBTree12Entry_101c03c0, unsigned short>::RotateLeft;
// END FUNCTION
