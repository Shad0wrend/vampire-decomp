// CHudCounter: declared by pcdecomp transplant for 0x1012e4c0 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

#include "CBaseEntity.h"

class CHudCounter : public CBaseEntity
{
public:
	CHudCounter() : CBaseEntity(0) {}
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	virtual void vfunc103();	// "CBaseEntity::Spawn"-like override: slot 104, SetSolid(0) with a scope trace, slot 93(0, 0), stores -1 at +0x450, then sub_100b3b00()
	virtual int vfunc124();	// "DrawDebugTextOverlays": base lines, then (when bit 0 of the byte at +0x224 is set) "Value: %i" (+0x454), "Pos: %5.2f %5.2f" (+0x458, +0x45c) and "Color: %i %i %i" (+0x1a0..2) as overlay text on the edict at +0x2e0
	virtual char vfunc86(int unused, int edict, int c, int d, int e);	// slot 86 (ShouldTransmit-like): false when the index at +0x450 is negative, else true when the engine's IndexOfEdict(edict) (slot 35 of the global at 0x1070b22c) equals it
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc81();
    virtual int vfunc80();
	char m_pad03e0[0x454 - 0x3e0];
	int m_nValue;	// 0x0454
	float m_flXPos;	// 0x0458
	float m_flYPos;	// 0x045c
	int m_nSize;	// 0x0460
};
