// CPredictableList: a list of entity handles (the predictable entities) behind the IPredictableList interface at +0.
#pragma once

#include "CGlobalEntityList.h"

class CPredictableList
{
public:
	virtual CGlobalEntityList_Ent *vfunc0(int index);	// slot 0: the entity of the handle at element index (null when it does not resolve)
	virtual void vfunc1();	// slot 1

	unsigned int *m_pHandles;	// 0x0004: the handle array
};
