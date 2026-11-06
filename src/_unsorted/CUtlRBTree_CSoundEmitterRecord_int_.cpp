// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101b8590 size=0x8c5
// TARGET: ?RemoveRebalance@?$CUtlRBTree@UCSoundEmitterRecord@@H@@QAEXH@Z
#include "utlrbtree.h"
#include "CSoundEmitterSystemBase.h"
static void (CUtlRBTree<CSoundEmitterRecord, int>::*s_RemoveRebalance)(int) = &CUtlRBTree<CSoundEmitterRecord, int>::RemoveRebalance;
// END FUNCTION
