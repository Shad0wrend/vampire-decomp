// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101bf5d0 size=0x4c
#include "CGameStringPool.h"
#include "utlrbtree.h"

bool sub_1000730b(int const &a, int const &b);

typedef CUtlRBTree<int, unsigned short> CStringPoolTree;

// TARGET: CStringPool::CStringPool
CStringPool::CStringPool()
{
	((CStringPoolTree *)this)->CUtlRBTree<int, unsigned short>::CUtlRBTree(0x20, 0x100, sub_1000730b);
}
// END FUNCTION
