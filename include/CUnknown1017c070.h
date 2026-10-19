// CUnknown1017c070: a large object with a CUtlVector<EHANDLE> at +0x23bc; real name not yet known.
#pragma once

#include "CUnknown100999c0.h"

class CBaseEntity;

class CUnknown1017c070
{
public:
	char m_pad0000[0x23bc];
	CUnknown100999c0_List m_List;	// 0x23bc

	void sub_1017c070(CBaseEntity *pEnt);	// "AddToTailUnique": appends pEnt's handle (-1 for null) to the list unless an element already resolves to the same entity
};
