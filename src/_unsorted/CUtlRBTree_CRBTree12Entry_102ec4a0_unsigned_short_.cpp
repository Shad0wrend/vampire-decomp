// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102eb310 size=0x37f
// TARGET: ?LinkToParent@?$CUtlRBTree@UCRBTree12Entry_102ec4a0@@G@@QAEXGG_N@Z
#include "utlrbtree.h"
#include "CRBTree12Entry_102ec4a0.h"
static void (CUtlRBTree<CRBTree12Entry_102ec4a0, unsigned short>::*s_LinkToParent)(unsigned short, unsigned short, bool) = &CUtlRBTree<CRBTree12Entry_102ec4a0, unsigned short>::LinkToParent;
// END FUNCTION

// FUNCTION: 0x102eb770 size=0x58
#include "CUtlRBTree12.h"
#include "CUtlRBTree16.h"
#include "CUtlRBTree232.h"
#include "CUtlRBTree24.h"
#include "CUtlRBTree36.h"
#include "CUtlRBTreeBig.h"
#include "CUtlRBTreeFind232.h"
#include "CUtlRBTreeInsert24.h"
#include "CRBTree12Entry_102ec4a0.h"
#include "utlrbtree.h"

typedef CUtlRBTree<CRBTree12Entry_102ec4a0, unsigned short> RBTree12_102ec4a0;
typedef const RBTree12_102ec4a0::Links_t &(RBTree12_102ec4a0::*LinksPtr_t)(unsigned short) const;

// TARGET: CUtlRBTree<CRBTree12Entry_102ec4a0,unsigned short>::Links
LinksPtr_t g_linksForce = &RBTree12_102ec4a0::Links;
// END FUNCTION
