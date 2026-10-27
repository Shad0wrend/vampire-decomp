// CUnknown10750cb4: the global object at 0x10750cb4 (CPlayerEvents::vfunc106 hands it its entity); it keeps a list
// of entity handles at +8 and adds each entity only once.
#pragma once

#include "CBaseEntity.h"
#include "utlvector.h"

class CBasePlayer;

class CUnknown10750cb4
{
public:
	void sub_102277a0(CBaseEntity *pEnt);	// stub 0x10009ed5: AddUnique of the entity's handle to the list at +8

	int m_pad0000[2];
	CUtlVector<CHandle<CBasePlayer> > m_List;	// 0x0008
};
