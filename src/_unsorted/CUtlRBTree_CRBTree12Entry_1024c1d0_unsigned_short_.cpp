// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1024bf80 size=0x58
#include "utlrbtree.h"

struct CRBTree12Entry_1024c1d0
{
	int m_n;
};

typedef CUtlRBTree<CRBTree12Entry_1024c1d0, unsigned short> RBTree12_1024c1d0;
typedef const RBTree12_1024c1d0::Links_t &(RBTree12_1024c1d0::*LinksPtr_t)(unsigned short) const;

// TARGET: CUtlRBTree<CRBTree12Entry_1024c1d0,unsigned short>::Links
LinksPtr_t g_linksForce = &RBTree12_1024c1d0::Links;
// END FUNCTION

// FUNCTION: 0x1024c1d0 size=0x1bc
// TARGET: ?RotateLeft@?$CUtlRBTree@UCRBTree12Entry_1024c1d0@@G@@QAEXG@Z
#include "utlrbtree.h"
struct CRBTree12Entry_1024c1d0 { char data[4]; };
// one member, not `template class`: that emits every member (and the sentinel) in this object
static void (CUtlRBTree<CRBTree12Entry_1024c1d0, unsigned short>::*s_RotateLeft)(unsigned short) = &CUtlRBTree<CRBTree12Entry_1024c1d0, unsigned short>::RotateLeft;
// END FUNCTION
