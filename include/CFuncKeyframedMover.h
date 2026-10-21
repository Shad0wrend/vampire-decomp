// CFuncKeyframedMover: keyframed mover brush entity (CBaseEntity based); only what decompiled code needs.
#pragma once

#include "CBaseEntity.h"

class CFuncKeyframedMover : public CBaseEntity
{
public:
	bool vfunc223();	// "CBaseEntity::IsSolidFlagSet" (slot 223): scope trace, reports when bit 2 of the byte at +0x2b4 is clear, returns true
	void sub_100a6150(int a, int b, int c);	// reports a message
	CFuncKeyframedMover *sub_10223330();	// constructor (the base is CBaseKeyframedMover, not modelled)
};
