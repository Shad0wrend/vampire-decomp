// CHudCounter: declared by pcdecomp transplant for 0x1012e4c0 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

#include "CBaseEntity.h"

class CHudCounter : public CBaseEntity
{
public:
	CHudCounter *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	virtual void vfunc103();	// "CBaseEntity::Spawn"-like override: slot 104, SetSolid(0) with a scope trace, slot 93(0, 0), stores -1 at +0x450, then sub_100b3b00()
	virtual int vfunc124();	// "DrawDebugTextOverlays": base lines, then (when bit 0 of the byte at +0x224 is set) "Value: %i" (+0x454), "Pos: %5.2f %5.2f" (+0x458, +0x45c) and "Color: %i %i %i" (+0x1a0..2) as overlay text on the edict at +0x2e0
};
