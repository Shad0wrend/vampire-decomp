// CBatSwarm: swarm of bats (CBaseAnimating -> CBaseToggle -> CBaseEntity). Only what decompiled code needs.
#pragma once

#include "CBaseAnimating.h"

class CBatSwarm : public CBaseAnimating
{
public:
	char m_pad03e0[0x350];
	unsigned int m_mask730;
	unsigned int m_mask734;

	// Slot 141, called directly so far; declared as a plain member.
	void vfunc141(int *pRef, int unused, void *pInfo);
};
