// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10194780 size=0xfa
// TARGET: ?NewNode@?$CUtlRBTree@HG@@QAEGXZ
#include "utlrbtree.h"
struct CRBTree12Entry_10194f30 { char data[4]; };	// the tree of its sentinel (one T per game instance)
// the instance's sentinel is CUtlRBTree<CRBTree12Entry_10194f30, unsigned short>'s (one static in the game): its Links reads that one
template <> inline CUtlRBTree<int, unsigned short>::Links_t const &CUtlRBTree<int, unsigned short>::Links(unsigned short i) const
{
	return (CUtlRBTree<int, unsigned short>::Links_t const &)((const CUtlRBTree<CRBTree12Entry_10194f30, unsigned short> *)this)->Links(i);
}
// one member, not `template class`: that emits every member (and the sentinel) in this object
static unsigned short (CUtlRBTree<int, unsigned short>::*s_NewNode)() = &CUtlRBTree<int, unsigned short>::NewNode;
// END FUNCTION
