// CUnknown10316660: object with a handle at +0x70 and a time at +0x74 (name provisional); the stand-in for the class that owns sub_10316660.
#pragma once

#include "CBaseEntity.h"

class CUnknown10316660
{
public:
	char m_pad0000[0x70];
	unsigned int m_hEnt70;	// 0x70: the handle of the entity (-1 when null)
	float m_flTime74;	// 0x74: gpGlobals->curtime + a constant

	void sub_10316660(CBaseEntity *pEnt);	// stores pEnt's handle (-1 when null) at +0x70 and gpGlobals->curtime + 15.0f at +0x74
};
