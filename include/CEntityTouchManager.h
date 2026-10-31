// CEntityTouchManager: entity listener (IEntityListener) keeping a list of entities.
#pragma once

#include "utlvector.h"

struct CEntityListSystem_Ent;

class CEntityTouchManager
{
public:
	virtual void vfunc0();
	virtual void vfunc1(CEntityListSystem_Ent *pEnt);	// slot 1: drops a flagged (bit 0 at +0x26b) entity from the list

	CUtlVector<CEntityListSystem_Ent *> m_List;	// 0x04
};
