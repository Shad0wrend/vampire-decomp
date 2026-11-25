// ehandle.h: CBaseHandle::Get (the entity-list lookup the game inlines), as CBaseHandle.h promises.
#pragma once

#include "CBaseHandle.h"
#include "CBaseEntityList.h"

extern CBaseEntityList *g_102b8e98;

inline IHandleEntity *CBaseHandle::Get() const
{
	IHandleEntity *p = 0;
	if ( m_Index != 0xffffffff )
	{
		int idx = (int)(m_Index & 0x1fff);
		int serial = (int)(m_Index >> 13);
		CBaseEntityListEntry &e = g_102b8e98->m_EntPtrArray[idx];
		if ( e.m_SerialNumber == serial )
			p = (IHandleEntity *)e.m_pEntity;
	}
	return p;
}
