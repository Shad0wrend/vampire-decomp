// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1024b9e0 size=0xfa
#include "CUtlRBTree12.h"
#include "CUtlRBTree16.h"
#include "CUtlRBTree232.h"
#include "CUtlRBTree24.h"
#include "CUtlRBTree36.h"
#include "CUtlRBTreeBig.h"
#include "CUtlRBTreeFind232.h"
#include "CUtlRBTreeInsert24.h"
// TARGET: ?NewNode@?$CUtlRBTree@UCRBEntry4_1024b9e0@@G@@QAEGXZ
#include "utlrbtree.h"
struct CRBEntry4_1024b9e0 { int a; };
struct CRBTree12Entry_1024c1d0 { char data[4]; };	// the tree of its sentinel (one T per game instance)
// the instance's sentinel is CUtlRBTree<CRBTree12Entry_1024c1d0, unsigned short>'s (one static in the game): its Links reads that one
template <> inline CUtlRBTree<CRBEntry4_1024b9e0, unsigned short>::Links_t const &CUtlRBTree<CRBEntry4_1024b9e0, unsigned short>::Links(unsigned short i) const
{
	return (CUtlRBTree<CRBEntry4_1024b9e0, unsigned short>::Links_t const &)((const CUtlRBTree<CRBTree12Entry_1024c1d0, unsigned short> *)this)->Links(i);
}
// one member, not `template class`: that emits every member (and the sentinel) in this object
static unsigned short (CUtlRBTree<CRBEntry4_1024b9e0, unsigned short>::*s_NewNode)() = &CUtlRBTree<CRBEntry4_1024b9e0, unsigned short>::NewNode;
// END FUNCTION
