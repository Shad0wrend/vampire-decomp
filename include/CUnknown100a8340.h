// CUnknown100a8340: stand-in for the entity class that owns sub_100a8340 (stub 0x10014a01); derived from CBaseEntity so a
// CBaseEntity can be cast to it for the call.
#pragma once

#include "CBaseEntity.h"

class CUnknown100a8340 : public CBaseEntity
{
public:
	void sub_100a8340(CBaseEntity *pOther, float flTime);	// stores pOther's handle (-1 when null) at +0xc8 and gpGlobals->curtime + flTime at +0xcc
	CBaseEntity *sub_100a8240();	// the entity behind the handle at +0xc8 (stub 0x1000cf72): the handle is dropped first when gpGlobals->curtime has passed the time at +0xcc; null when it does not resolve
	CBaseEntity *sub_100a82c0();	// like sub_100a8240 for the second handle (stub 0x1000d1b1)
};
