// CRotDoor: rotating door entity (CBaseEntity based); only what decompiled code needs.
#pragma once

#include "CBaseEntity.h"

class CRotDoor : public CBaseEntity
{
public:
	bool vfunc223();	// "CBaseEntity::IsSolidFlagSet" (slot 223): scope trace, reports when bit 2 of the byte at +0x2b4 is clear, returns true
	void sub_100a6150(int a, int b, int c);	// reports a message
	void vfunc250();	// "CRotDoor::Spawn"-like: unless bit 5 of the flags at +0x204 is set, moves the door to its closed or open position (slot 64) by bit 0, installs the touch function and updates the area portals
	void sub_100efae0(CBaseEntity *pOther);	// the door's touch function (called through the stub at 0x10012837)
	void sub_100f3dd0(const float *pDir);	// takes the opening direction, zeroes the axis the spawn flags (0x40: x, 0x80: y, else z) say the door does not rotate about, converts it to angles (sub_10139970, stub 0x10003d4b) and hands them to sub_100f3e60 (stub 0x10003044)
	void sub_10003044(float *pAngles);	// sub_100f3e60 (stub 0x10003044)
};
