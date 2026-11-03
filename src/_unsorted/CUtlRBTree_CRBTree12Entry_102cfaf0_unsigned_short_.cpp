// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102cea60 size=0x58
#include "CUtlRBTree12.h"
#include "CUtlRBTree16.h"
#include "CUtlRBTree232.h"
#include "CUtlRBTree24.h"
#include "CUtlRBTree36.h"
#include "CUtlRBTreeBig.h"
#include "CUtlRBTreeFind232.h"
#include "CUtlRBTreeInsert24.h"
#include "utlrbtree.h"

struct CRBTree12Entry_102cfaf0
{
	int m_n;
};

typedef CUtlRBTree<CRBTree12Entry_102cfaf0, unsigned short> RBTree12_102cfaf0;
typedef const RBTree12_102cfaf0::Links_t &(RBTree12_102cfaf0::*LinksPtr_t)(unsigned short) const;

// TARGET: CUtlRBTree<CRBTree12Entry_102cfaf0,unsigned short>::Links
LinksPtr_t g_linksForce = &RBTree12_102cfaf0::Links;
// END FUNCTION

// FUNCTION: 0x102cfaf0 size=0x1bc
// TARGET: ?RotateLeft@?$CUtlRBTree@UCRBTree12Entry_102cfaf0@@G@@QAEXG@Z
#include "utlrbtree.h"
struct CRBTree12Entry_102cfaf0 { char data[4]; };
// one member, not `template class`: that emits every member (and the sentinel) in this object
static void (CUtlRBTree<CRBTree12Entry_102cfaf0, unsigned short>::*s_RotateLeft)(unsigned short) = &CUtlRBTree<CRBTree12Entry_102cfaf0, unsigned short>::RotateLeft;
// END FUNCTION
