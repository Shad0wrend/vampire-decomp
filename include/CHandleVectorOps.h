// The save/restore ops of a DEFINE_UTLVECTOR(..., FIELD_EHANDLE) field: Source's inline
// GetUtlVectorDataOps-style helper holding the function-local static (guard 0x109f09d0, object 0x109f09dc).
// Every datamap of the game with such a field inlines this one function.
#pragma once

#include "CUtlVectorDataOps.h"
#include "ehandle.h"

typedef CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity> > >,12> CHandleVectorOps;

inline CHandleVectorOps *GetHandleVectorOps()
{
	static CHandleVectorOps s_Ops;
	return &s_Ops;
}
