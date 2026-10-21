// CUnknown100f5600: object (returned by 0x100f54c0 for a gib) with a float at +0x454; real name not yet known.
#pragma once

#include "CBaseEntity.h"

class CUnknown100f5600 : public CBaseEntity
{
public:
	char pad0[0x454 - sizeof(CBaseEntity)];
	float m_fUnk454;

	void sub_100f5600(float value);
	void sub_100f5620();	// the burning gib's think: once the time at +0x454 has passed it removes itself (think function 0x101c0b10), else it does 4 points of burn damage (type 8) in a radius of 32 around itself, heats the fire system around it and thinks again 0.1 seconds later
};
