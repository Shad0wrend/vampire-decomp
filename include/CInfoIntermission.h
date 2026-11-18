// CInfoIntermission: declared by pcdecomp transplant for 0x1012f610 from CLogicalEntity (0x1002b100);
// only what matched code needs.
#pragma once

#include "CPointEntity.h"

class CInfoIntermission : public CPointEntity	// RTTI: CInfoIntermission : CPointEntity (slot 117 is CPointEntity's 0x100b4340)
{
public:
	CInfoIntermission() : CPointEntity() {}
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	virtual void vfunc103();	// slot 103 "CBaseEntity::Spawn" override: SetSolid(0) (scope trace), +0x19c |= 0x40, slot 64(&vector), sub_100b3b00(), next think = curtime + 2.0f
	void vfunc134();	// slot 134 (the think; overrides CPointEntity's slot 134, as in the game's table): looks up the entity named by the string at +0x20c and turns this entity's angles (slot 64) toward its origin (slot 220 difference, normalised, VectorAngles)
};
