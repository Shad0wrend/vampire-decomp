// CUnknown100dbc60: class holding a handle list (CUtlVector4) at +0xc; real name not yet known.
#pragma once

#include "CUtlVector4.h"
#include "CBaseEntity.h"

class CUnknown100dbc60
{
public:
	char pad0[0xc];
	CUtlVector4 m_list;

	void sub_100dbc60(CBaseEntity *pEnt);	// appends the entity's handle (*pEnt->GetRefEHandle()) to the list (AddToTail inlined)
};
