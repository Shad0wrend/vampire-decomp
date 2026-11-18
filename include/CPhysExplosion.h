// CPhysExplosion: physics explosion entity (RTTI CPhysExplosion : CPointEntity : CBaseEntity), vtable 0x10449e24,
// size 0x45c; only what matched code needs.
// Construction: CBaseEntity(0) (stub 0x100090fc) and then its own vftable.
#pragma once

#include "CPointEntity.h"

struct datamap_t;

class CPhysExplosion : public CPointEntity
{
public:
	CPhysExplosion() : CPointEntity() {}
	void vfunc103();	// slot 103 (Spawn): the game's 0x1004eae0 (the sub_1004eae0 below)
	int vfunc117();	// slot 117 (ObjectCaps): the game's 0x1004ea30, CPointEntity's caps & ~2

	void sub_1000cb8a();	// destructor body
	void sub_1004eae0();	// slot 103 (Spawn): slot 93(0, 0), SetSolid(SOLID_NONE) on the collision property at +0x270 (scope trace "CBaseEntity::SetSolid"), then slot 212(0)
	datamap_t *vfunc82();	// slot 82 override: the game's 0x1004ea50
	CBaseEntity *sub_1004ebb0(CBaseEntity *pStart, float flRadius);	// the next entity in the sphere / by name
	void sub_1004ec60(float flRadius);	// damages the entities around this one
	virtual CBaseEntity *vfunc5(unsigned int flags);	// scalar deleting destructor (hides the base slot: VC6 has no covariant returns); the game's 0x10050550
	float m_damage;	// 0x0450
	float m_radius;	// 0x0454
	string_t m_targetEntityName;	// 0x0458
};
