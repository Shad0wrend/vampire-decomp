// CInfoIntermission: declared by pcdecomp transplant for 0x1012f610 from CLogicalEntity (0x1002b100);
// only what matched code needs.
#pragma once

#include "CBaseEntity.h"

class CInfoIntermission : public CBaseEntity
{
public:
	CInfoIntermission() : CBaseEntity(0) {}
	CInfoIntermission *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	virtual void vfunc103();	// slot 103 "CBaseEntity::Spawn" override: SetSolid(0) (scope trace), +0x19c |= 0x40, slot 64(&vector), sub_100b3b00(), next think = curtime + 2.0f
	void vfunc134();	// slot 134 (the think, plain member): looks up the entity named by the string at +0x20c and turns this entity's angles (slot 64) toward its origin (slot 220 difference, normalised, VectorAngles)
	char m_pad03e0[0x450 - 0x3e0];
};
