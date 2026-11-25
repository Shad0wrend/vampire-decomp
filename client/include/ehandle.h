// ehandle.h: CBaseHandle::Get (the entity-list lookup the game inlines), as CBaseHandle.h promises.
#pragma once

#include "CBaseHandle.h"
#include "CBaseEntityList.h"

extern CBaseEntityList *g_102b8e98;

inline IHandleEntity *CBaseHandle::Get() const
{
	if ( m_Index == 0xffffffff )
		return 0;
	int idx = (int)(m_Index & 0x1fff);
	int serial = (int)(m_Index >> 13);
	CBaseEntityListEntry &e = g_102b8e98->m_EntPtrArray[idx];
	if ( e.m_SerialNumber != serial )
		return 0;
	return (IHandleEntity *)e.m_pEntity;
}
