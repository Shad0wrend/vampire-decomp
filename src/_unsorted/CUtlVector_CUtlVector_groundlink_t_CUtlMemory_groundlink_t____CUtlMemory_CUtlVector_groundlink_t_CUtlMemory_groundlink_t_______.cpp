// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100426c0 size=0x8b
#include "utlrbtree.h"
#include "utlvector.h"
#include "CEntityDataInstantiator.h"

// TARGET: ?RemoveAll@?$CUtlVector@V?$CUtlVector@Ugroundlink_t@@V?$CUtlMemory@Ugroundlink_t@@@@@@V?$CUtlMemory@V?$CUtlVector@Ugroundlink_t@@V?$CUtlMemory@Ugroundlink_t@@@@@@@@@@QAEXXZ
static void (CUtlVector<CUtlVector<groundlink_t> >::*s_RemoveAll)() = &CUtlVector<CUtlVector<groundlink_t> >::RemoveAll;
// END FUNCTION
