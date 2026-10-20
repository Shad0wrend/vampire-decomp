// CUnknown1018e2a0: an entity class around 0x1018e2a0 (keeps a target entity handle at +0x730); real name not yet known.
#pragma once

#include "CBaseEntity.h"

class CUnknown1018e2a0 : public CBaseEntity
{
public:
	void sub_1018e2a0(CBaseEntity *pTarget);	// stores pTarget's handle at +0x730 (-1 for null) and arms the think function sub_10006177 (stamping curtime at +0x17c and the target's dword at +0xfec into +0x73c), or clears the think function for null
	void sub_10006177();	// think function
	void sub_100ac4e0(void (CUnknown1018e2a0::*pfnThink)(), float flThinkTime, const char *szContext);	// "CBaseEntity::SetThink" (called through the stub at 0x10007fe5)
};
