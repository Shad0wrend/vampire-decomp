// CPredictableList: a list of entity handles (the predictable entities) behind the IPredictableList interface at +0.
#pragma once
#ifdef PCD_INITIALIZERS
#include "utlvector.h"	// the initializer units: the vector member is Source's CUtlVector
#endif

#include "CGlobalEntityList.h"

class CPredictableList
{
public:
	virtual CGlobalEntityList_Ent *vfunc0(int index);	// slot 0: the entity of the handle at element index (null when it does not resolve)
	virtual int vfunc1();	// slot 1

#ifdef PCD_INITIALIZERS	// the handles (SDK: CUtlVector<EHANDLE> m_Predictables)
	CUtlVector<unsigned int> m_Predictables;	// 0x0004
#else
	unsigned int *m_pHandles;	// 0x0004: the handle array
#endif
};
