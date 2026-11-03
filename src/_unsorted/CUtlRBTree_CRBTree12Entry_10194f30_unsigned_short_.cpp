// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10194d20 size=0x58
#include "utlrbtree.h"

struct CRBTree12Entry_10194f30
{
	int m_n;
};

typedef CUtlRBTree<CRBTree12Entry_10194f30, unsigned short> RBTree12_10194f30;
typedef const RBTree12_10194f30::Links_t &(RBTree12_10194f30::*LinksPtr_t)(unsigned short) const;

// TARGET: CUtlRBTree<CRBTree12Entry_10194f30,unsigned short>::Links
LinksPtr_t g_linksForce = &RBTree12_10194f30::Links;
// END FUNCTION

// FUNCTION: 0x10194f30 size=0x1bc
// TARGET: ?RotateLeft@?$CUtlRBTree@UCRBTree12Entry_10194f30@@G@@QAEXG@Z
#include "utlrbtree.h"
struct CRBTree12Entry_10194f30 { char data[4]; };
// one member, not `template class`: that emits every member (and the sentinel) in this object
static void (CUtlRBTree<CRBTree12Entry_10194f30, unsigned short>::*s_RotateLeft)(unsigned short) = &CUtlRBTree<CRBTree12Entry_10194f30, unsigned short>::RotateLeft;
// END FUNCTION
