// CTriggerVolume: declared by pcdecomp transplant for 0x101cbfc0 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once
#include "CPointEntity.h"

class CTriggerVolume : public CPointEntity
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	void vfunc103();	// slot 103 (Spawn): SetSolid(SOLID_NONE) scope trace, SetMoveType(0, 0), SetModel(GetModelName() or ""), slot 212(0), SetModelIndex(0), CBaseEntity::sub_100b3b00()
};
