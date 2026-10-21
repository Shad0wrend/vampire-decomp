// CFuncRotating: rotating brush entity (CBaseEntity based); only what decompiled code needs.
#pragma once

#include "CBaseEntity.h"

class CFuncRotating : public CBaseEntity
{
public:
	bool vfunc223();	// "CBaseEntity::IsSolidFlagSet" (slot 223): scope trace, reports when bit 2 of the byte at +0x2b4 is clear, returns true
	void sub_100a6150(int a, int b, int c);	// reports a message
	CFuncRotating *vfunc5(unsigned int flags);	// as in CLogicalEntity (transplant)
	void sub_1000cb8a();	// as in CLogicalEntity (transplant)
	float sub_100c0900(float flSpeed);	// scales flSpeed by the first non-zero of the floats at +0x190, +0x194, +0x198
	int vfunc124();	// "DrawDebugTextOverlays": the base's line offset, plus one line ("Speed cur (target)": floats at +0x164 and +0x45c through sub_100c0900) when the text overlay bit (byte at +0x224) is set
	virtual void vfunc104();	// slot 104 "CFuncRotating::Precache": precaches the running noise (name at +0x468) when it is set, and with non-zero angles (+0x3c8) schedules the move done function 1.5 seconds on

	char m_pad03e0[0x468 - sizeof(CBaseEntity)];
	const char *m_pszNoiseRunning;	// 0x468
};
