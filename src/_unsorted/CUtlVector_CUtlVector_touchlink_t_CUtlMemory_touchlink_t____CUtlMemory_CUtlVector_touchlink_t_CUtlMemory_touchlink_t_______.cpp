// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10042580 size=0x8b
#include "utlrbtree.h"
#include "utlvector.h"
#include "CEntityDataInstantiator.h"

// TARGET: ?RemoveAll@?$CUtlVector@V?$CUtlVector@Utouchlink_t@@V?$CUtlMemory@Utouchlink_t@@@@@@V?$CUtlMemory@V?$CUtlVector@Utouchlink_t@@V?$CUtlMemory@Utouchlink_t@@@@@@@@@@QAEXXZ
static void (CUtlVector<CUtlVector<touchlink_t> >::*s_RemoveAll)() = &CUtlVector<CUtlVector<touchlink_t> >::RemoveAll;
// END FUNCTION
