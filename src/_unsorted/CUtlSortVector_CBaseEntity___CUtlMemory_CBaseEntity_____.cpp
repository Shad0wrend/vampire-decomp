// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100f98b0 size=0x6c
#include "CBaseEntity.h"
// TARGET: ?FindLessOrEqual@?$CUtlSortVector@PAVCBaseEntity@@V?$CUtlMemory@PAVCBaseEntity@@@@@@QBEHABQAVCBaseEntity@@@Z
#include "utlsortvector.h"
class CBaseEntity;
static int (CUtlSortVector<CBaseEntity *>::*s_FindLessOrEqual)(CBaseEntity *const &) const = &CUtlSortVector<CBaseEntity *>::FindLessOrEqual;
// END FUNCTION
