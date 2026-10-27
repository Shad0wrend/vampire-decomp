// CAI_DebugRecord: a 0x28 byte debug record of the NPC system (array at +4 of its owner, count at +0xa04): a type (2 is
// "Supernatural", else "Criminal"), a position, an expiry time and two entity handles. Only what matched code needs.
#pragma once

#include "Vector.h"
#include "ehandle.h"

class CBaseEntity;

class CAI_DebugRecord
{
public:
	int m_nType;	// 0x00
	int m_n04;
	Vector m_vecPos;	// 0x08
	char m_pad14[4];
	float m_flExpireTime;	// 0x18
	EHANDLE m_hFirst;	// 0x1c
	EHANDLE m_hSecond;	// 0x20
	int m_n24;

	void sub_102c9e10(unsigned char flags);	// bit 0 draws a box (NDebugOverlay::Box, +-5 units around the position), bit 1 prints "<type> <time left> <entity> <entity>" as debug text at the position
};
