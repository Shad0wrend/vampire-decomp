// CRotDoor: rotating door entity (CBaseEntity based); only what decompiled code needs.
#pragma once

#include "CBaseEntity.h"
#include "CDoorEventList.h"

class CRotDoor : public CBaseEntity
{
public:
	bool vfunc223();	// "CBaseEntity::IsSolidFlagSet" (slot 223): scope trace, reports when bit 2 of the byte at +0x2b4 is clear, returns true
	void sub_100a6150(int a, int b, int c);	// reports a message
	void vfunc248();	// slot 248 (plain member): when the angles (slot 221) equal the ones at +0x520 within 0.001f the door state at +0x4f8 becomes 1, else when they equal the ones at +0x52c it becomes 0; either way slot 249 follows
	void vfunc250();	// "CRotDoor::Spawn"-like: unless bit 5 of the flags at +0x204 is set, moves the door to its closed or open position (slot 64) by bit 0, installs the touch function and updates the area portals
	void sub_100efae0(CBaseEntity *pOther);	// the door's touch function (called through the stub at 0x10012837)
	void sub_100f3dd0(const float *pDir);	// takes the opening direction, zeroes the axis the spawn flags (0x40: x, 0x80: y, else z) say the door does not rotate about, converts it to angles (sub_10139970, stub 0x10003d4b) and hands them to sub_100f3e60 (stub 0x10003044)
	void sub_10003044(float *pAngles);	// sub_100f3e60 (stub 0x10003044)
	CRotDoor *vfunc5(unsigned char flags);	// scalar deleting destructor: releases the ten event lists, the base destructor body (sub_1000cb8a), and frees the object when bit 0 of flags is set
	void sub_1000cb8a();	// base class destructor body (stub 0x1000cb8a)

	char m_pad03e0[0x4a4 - 0x3e0];
	CDoorEventList m_items4a4[2];	// +0x4a4, +0x4bc
	char m_pad04d4[0x4f8 - 0x4d4];
	int m_nState4f8;	// +0x4f8: door state (0 closed at rest, 1 open at rest)
	char m_pad04fc[0x520 - 0x4fc];
	Vector m_angRotation520;	// +0x520: one end angle of the door
	Vector m_angRotation52c;	// +0x52c: the other end angle
	char m_pad0538[0x564 - 0x538];
	CDoorEventList m_items564[8];	// +0x564 .. +0x60c
};
