// CUnknown100999c0: an object (4 bytes of header) followed by a CUtlVector<EHANDLE> at +4.
#pragma once

#include "UtlMem.h"
#include "utlvector.h"

class CBaseEntity;

struct CUnknown100999c0_List : public UtlMem
{
	int m_Size;	// 0x0c
	int *m_pElements;	// 0x10
};

class CUnknown100999c0
{
public:
	int m_0;
	CUtlVector<EHANDLE> m_List;	// 0x04

	void sub_100999c0(CBaseEntity *pEnt);	// "AddToTailUnique": appends pEnt's handle (-1 for null) unless an element already resolves to the same entity
};
