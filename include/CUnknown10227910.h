// CUnknown10227910: global object (at 0x10750cb4) holding a CUtlVector of entity handles at +8 (size at +0x14); real name not yet known.
#pragma once

#include "utlvector.h"
#include "ehandle.h"

class CBaseEntity;

class CUnknown10227910
{
public:
	int m_unk0;
	int m_unk4;
	CUtlVector<EHANDLE> m_List;	// 0x08: the entity handles (size at +0x14)

	void sub_10227910(CBaseEntity *pEnt);	// "FindAndRemove": removes the first handle that resolves to the same entity as pEnt (the last handle takes its slot)
};
