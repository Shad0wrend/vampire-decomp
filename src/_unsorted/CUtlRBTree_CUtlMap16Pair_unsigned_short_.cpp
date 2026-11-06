// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100489e0 size=0x366
// TARGET: ?RemoveNode@?$CUtlRBTree@UCUtlMap16Pair@@G@@QAEXG@Z
#include "utlrbtree.h"
struct CUtlMap16Pair { unsigned int m_key; unsigned int m_elem; };
static void (CUtlRBTree<CUtlMap16Pair, unsigned short>::*s_RemoveNode)(unsigned short) = &CUtlRBTree<CUtlMap16Pair, unsigned short>::RemoveNode;
// END FUNCTION
