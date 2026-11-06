// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101b7450 size=0x3a5
#include "CSoundEmitterSystemBase.h"
// TARGET: ?LinkToParent@?$CUtlRBTree@UCSoundEmitterRecord@@H@@QAEXHH_N@Z
#include "utlrbtree.h"
static void (CUtlRBTree<CSoundEmitterRecord, int>::*s_LinkToParent)(int, int, bool) = &CUtlRBTree<CSoundEmitterRecord, int>::LinkToParent;
// END FUNCTION

// FUNCTION: 0x101b7f70 size=0x4da
#include "CSoundEmitterSystemBase.h"
// TARGET: ?InsertRebalance@?$CUtlRBTree@UCSoundEmitterRecord@@H@@QAEXH@Z
#include "utlrbtree.h"
static void (CUtlRBTree<CSoundEmitterRecord, int>::*s_InsertRebalance)(int) = &CUtlRBTree<CSoundEmitterRecord, int>::InsertRebalance;
// END FUNCTION

// FUNCTION: 0x101b8590 size=0x8c5
// TARGET: ?RemoveRebalance@?$CUtlRBTree@UCSoundEmitterRecord@@H@@QAEXH@Z
#include "utlrbtree.h"
#include "CSoundEmitterSystemBase.h"
static void (CUtlRBTree<CSoundEmitterRecord, int>::*s_RemoveRebalance)(int) = &CUtlRBTree<CSoundEmitterRecord, int>::RemoveRebalance;
// END FUNCTION
