// CEnvShake: declared by pcdecomp transplant for 0x10102cc0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

#include "CBaseEntity.h"

class CEnvShake : public CBaseEntity
{
public:
	CEnvShake *vfunc5(unsigned int flags);
	void sub_100117f2();
	void vfunc103();	// "CBaseEntity::SetSolid"-style scope trace (entity name) around the collision property's SetSolid(0), then SetMoveType(0, 0) (slot 93); clears the dword at +0x45c when bit 0 of the byte at +0x204 is set
};
