// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101bfd60 size=0x37f
// TARGET: ?LinkToParent@?$CUtlRBTree@UCRBTree12Entry_101c03c0@@G@@QAEXGG_N@Z
#include "utlrbtree.h"
#include "CRBTree12Entry_101c03c0.h"
static void (CUtlRBTree<CRBTree12Entry_101c03c0, unsigned short>::*s_LinkToParent)(unsigned short, unsigned short, bool) = &CUtlRBTree<CRBTree12Entry_101c03c0, unsigned short>::LinkToParent;
// END FUNCTION

// FUNCTION: 0x101c01c0 size=0x58
#include "CUtlRBTree12.h"
#include "CUtlRBTree16.h"
#include "CUtlRBTree232.h"
#include "CUtlRBTree24.h"
#include "CUtlRBTree36.h"
#include "CUtlRBTreeBig.h"
#include "CUtlRBTreeFind232.h"
#include "CUtlRBTreeInsert24.h"
#include "CRBTree12Entry_101c03c0.h"
#include "utlrbtree.h"

typedef CUtlRBTree<CRBTree12Entry_101c03c0, unsigned short> RBTree12_101c03c0;
typedef const RBTree12_101c03c0::Links_t &(RBTree12_101c03c0::*LinksPtr_t)(unsigned short) const;

// TARGET: CUtlRBTree<CRBTree12Entry_101c03c0,unsigned short>::Links
// taken in a function nothing calls (a global taking it would be a dynamic initializer the game does not have): VC6 emits the inline member here
LinksPtr_t pcd_emit_101c01c0() { return &RBTree12_101c03c0::Links; }
// END FUNCTION

// FUNCTION: 0x101c03c0 size=0x1bc
// TARGET: ?RotateLeft@?$CUtlRBTree@UCRBTree12Entry_101c03c0@@G@@QAEXG@Z
#include "utlrbtree.h"
struct CRBTree12Entry_101c03c0 { char data[4]; };
// one member, not `template class`: that emits every member (and the sentinel) in this object
static void (CUtlRBTree<CRBTree12Entry_101c03c0, unsigned short>::*s_RotateLeft)(unsigned short) = &CUtlRBTree<CRBTree12Entry_101c03c0, unsigned short>::RotateLeft;
// END FUNCTION
