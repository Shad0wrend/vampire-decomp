// CTriggerTraceEnum (RTTI .?AVCTriggerTraceEnum@@): an IEntityEnumerator (base not modelled) that clips a ray to every
// entity it is shown and damages the ones the ray hits.
#pragma once

#include "Ray_t.h"

class CBaseEntity;

class CTriggerTraceEnum
{
public:
	virtual bool vfunc0(CBaseEntity *pEnt);	// "EnumEntity": clips the ray (+0x20) to pEnt with the mask (+0x1c); on a hit builds a damage record (inflictor and attacker +4, damage +8, type +0x18) and dispatches the trace attack to pEnt with the direction (+0xc); always true

	void *m_pAttacker;	// 0x04
	int m_nDamage;	// 0x08
	float m_vecDir[3];	// 0x0c
	int m_nDamageType;	// 0x18
	unsigned int m_fMask;	// 0x1c
	Ray_t m_Ray;	// 0x20
};
