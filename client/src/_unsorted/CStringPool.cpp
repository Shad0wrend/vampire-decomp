// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10137d40 size=0x4c
#include "CGameStringPool.h"
#include "utlrbtree.h"

bool sub_10137ce0(int const &a, int const &b);

typedef CUtlRBTree<int, unsigned short> CStringPoolTree;

// TARGET: CStringPool::CStringPool
CStringPool::CStringPool()
{
	((CStringPoolTree *)this)->CUtlRBTree<int, unsigned short>::CUtlRBTree(0x20, 0x100, sub_10137ce0);
}
// END FUNCTION
