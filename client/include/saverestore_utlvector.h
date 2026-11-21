// saverestore_utlvector.h (Source SDK): CUtlVectorDataopsInstantiator, the one function-local static ops object
// per vector type and field type. SaveUtlVector / RestoreUtlVector and DEFINE_UTLVECTOR all reach it through
// GetDataOps, inlined by every user, so the game keeps one object (and one guard) per instance (link audit E).
// Kept out of utlvector.h / CUtlVectorDataOps.h: a new identifier in every unit flips VC6 spill orders.
// Its guard is the unit's own (?$S<n>): two units inlining GetDataOps keep one object and two guards (0x109f09dc); functions of one unit that share one guard use a plain inline accessor instead.
#pragma once

#include "CUtlVectorDataOps.h"

template <class UTLVECTOR, int FIELD_TYPE>
class CUtlVectorDataopsInstantiator
{
public:
	static CUtlVectorDataOps<UTLVECTOR, FIELD_TYPE> *GetDataOps(UTLVECTOR *)
	{
		static CUtlVectorDataOps<UTLVECTOR, FIELD_TYPE> ops;
		return &ops;
	}
};
