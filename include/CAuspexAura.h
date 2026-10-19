// CAuspexAura: the Auspex discipline aura particle entity (CDisciplineParticle -> CEnvParticle -> CPointEntity -> CBaseEntity, flattened).
#pragma once

#include "CBaseEntity.h"

class CAuspexAura : public CBaseEntity
{
public:
	// slot 86 "CAuspexAura::ShouldTransmit" (five stack arguments, the second one is the viewing client's edict)
	virtual bool vfunc86(int a, int pEdict, int c, int d, int e);	// scope trace; resolves the entity of the handle at +0x4c8 (re-resolved from the handle at +0x4b8 when stale, which then refreshes +0x4c8, or -1 when that is gone too), true when its edict at +0x2e0 is the given one

	char m_pad03e0[0x4b8 - 0x3e0];
	unsigned int m_hTarget4b8;	// 0x4b8 entity handle
	char m_pad04bc[0x4c8 - 0x4bc];
	unsigned int m_hTransmitEnt;	// 0x4c8 entity handle
};
