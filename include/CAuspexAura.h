// CAuspexAura: the Auspex discipline aura particle entity (CDisciplineParticle -> CEnvParticle -> CPointEntity -> CBaseEntity, flattened).
#pragma once

#include "CBaseEntity.h"

class CAuspexAura : public CBaseEntity
{
public:
	// slot 86 "CAuspexAura::ShouldTransmit" (five stack arguments, the second one is the viewing client's edict)
	virtual bool vfunc86(int a, int pEdict, int c, int d, int e);	// scope trace; resolves the entity of the handle at +0x4c8 (re-resolved from the handle at +0x4b8 when stale, which then refreshes +0x4c8, or -1 when that is gone too), true when its edict at +0x2e0 is the given one

	// slot 243 "CAuspexAura::AttachToEntity", declared as a plain member
	void vfunc243(CBaseEntity *pEnt, int a, int b);	// scope trace, CEnvParticle::vfunc243(pEnt, a, b), then when pEnt is set and the entity of the handle at +0x4b8 has a player object (+0xa8) bumps the counter byte [engine index - 1] (below 0x20) of the table at pEnt+0x9c + 0x14e4
	void sub_10012508(CBaseEntity *pEnt, int a, int b);	// CEnvParticle::vfunc243 (stub 0x10012508), called directly
	virtual CBaseEntity *vfunc5(unsigned int flags);	// scalar deleting destructor: sets the vtable, scope trace "CAuspexAura::~CAuspexAura" around the same bump of the counter byte for the entity at +0x4b8 (when the handle at +0x254 resolves), then the base destructor (sub_10051a40) and, with bit 0 of flags, delete this
	void sub_10051a40();	// base destructor body (stub 0x1000f10f), called directly
	void sub_1000a9d4();	// the base (CDisciplineParticle) constructor body (stub 0x1000a9d4 for 0x100fad50), called directly by the auspex_aura factory, which inlines the CAuspexAura constructor

	char m_pad03e0[0x4b8 - 0x3e0];
	unsigned int m_hTarget4b8;	// 0x4b8 entity handle
	char m_pad04bc[0x4c8 - 0x4bc];
	unsigned int m_hTransmitEnt;	// 0x4c8 entity handle
};
