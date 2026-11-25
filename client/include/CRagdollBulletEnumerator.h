// CRagdollBulletEnumerator: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22) (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "IPartitionEnumerator.h"
#include "Ray_t.h"
class CBaseEntity;

class CRagdollBulletEnumerator : public IPartitionEnumerator
{
public:
	CRagdollBulletEnumerator(Ray_t &shot, float flForce, int iDamageType)
	{
		*(Vector *)m_rayShot.m_Start = *(Vector *)shot.m_Start;
		*(Vector *)m_rayShot.m_Delta = *(Vector *)shot.m_Delta;
		((Vector *)m_rayShot.m_Extents)->sub_10039080(*(Vector *)shot.m_Extents);
		((Vector *)m_rayShot.m_StartOffset)->sub_10039080(*(Vector *)shot.m_StartOffset);
		m_rayShot.m_IsRay = shot.m_IsRay;
		m_rayShot.m_IsSwept = shot.m_IsSwept;
		m_rayShot.m_b32 = shot.m_b32;
		m_rayShot.m_b33 = shot.m_b33;
		m_rayShot.m_n34 = shot.m_n34;
		m_flForce = flForce;
		m_iDamageType = iDamageType;
		m_bHit = false;
	}

	bool Hit() { return m_bHit; }

public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the slots CRagdollBulletEnumerator adds to its base's vtable: 0-0, vfuncK at slot K
    virtual int vfunc0(CBaseEntity *pEnt);

	Ray_t m_rayShot;
	float m_flForce;
	int m_iDamageType;
	bool m_bHit;
};
