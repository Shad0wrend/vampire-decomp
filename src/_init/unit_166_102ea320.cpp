// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102ea320 size=0xa
#include "utlrbtree.h"
// the SDK nav database's CUtlRBTree (lessfunc set on first use), 12-byte nodes
CUtlRBTree<int, unsigned short> g_10934014(0, 0, 0);
// END FUNCTION

// FUNCTION: 0x102ea400 size=0xa
#define PCD_INITIALIZERS
#include "CNavPropertyDatabase.h"
CNavPropertyDatabase g_1093402c;
// END FUNCTION
