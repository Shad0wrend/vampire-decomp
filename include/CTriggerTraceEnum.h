// CTriggerTraceEnum (RTTI .?AVCTriggerTraceEnum@@): an IEntityEnumerator (base not modelled) that clips a ray to every
// entity it is shown and damages the ones the ray hits.
#pragma once

#include "Ray_t.h"

class CBaseEntity;

class IEntityEnumerator
{
public:
	virtual bool vfunc0(CBaseEntity *pEnt) = 0;
};

struct CTriggerTraceInfo
{
	void *m_pAttacker;	// 0x04
	int m_nDamage;	// 0x08
	float m_vecDir[3];	// 0x0c
	int m_nDamageType;	// 0x18
	unsigned int m_fMask;	// 0x1c
	CTriggerTraceInfo(void *pAttacker, int nDamage, unsigned int nType)
	{
		m_pAttacker = pAttacker;
		m_nDamage = nDamage;
		m_nDamageType = nType;
		m_fMask = 0x46004003;
	}
};

class CTriggerTraceEnum : public IEntityEnumerator, public CTriggerTraceInfo
{
public:
	virtual bool vfunc0(CBaseEntity *pEnt);	// "EnumEntity": clips the ray (+0x20) to pEnt with the mask (+0x1c); on a hit builds a damage record (inflictor and attacker +4, damage +8, type +0x18) and dispatches the trace attack to pEnt with the direction (+0xc); always true

	Ray_t m_Ray;	// 0x20

	CTriggerTraceEnum(void *pAttacker, int nDamage, const Vector *pDir, unsigned int nType, const Ray_t &ray) : CTriggerTraceInfo(pAttacker, nDamage, nType)
	{
		*(Vector *)m_vecDir = *pDir;
		m_Ray.m_Start[0] = ray.m_Start[0];
		m_Ray.m_Start[1] = ray.m_Start[1];
		m_Ray.m_Start[2] = ray.m_Start[2];
		m_Ray.m_Delta[0] = ray.m_Delta[0];
		m_Ray.m_Delta[1] = ray.m_Delta[1];
		m_Ray.m_Delta[2] = ray.m_Delta[2];
		m_Ray.m_Extents[0] = ray.m_Extents[0];
		m_Ray.m_Extents[1] = ray.m_Extents[1];
		m_Ray.m_Extents[2] = ray.m_Extents[2];
		m_Ray.m_StartOffset[0] = ray.m_StartOffset[0];
		m_Ray.m_StartOffset[1] = ray.m_StartOffset[1];
		m_Ray.m_StartOffset[2] = ray.m_StartOffset[2];
		m_Ray.m_IsRay = ray.m_IsRay;
		m_Ray.m_IsSwept = ray.m_IsSwept;
		m_Ray.m_b32 = ray.m_b32;
		m_Ray.m_b33 = ray.m_b33;
		m_Ray.m_n34 = ray.m_n34;
	}
};
