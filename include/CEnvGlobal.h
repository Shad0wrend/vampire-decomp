// CEnvGlobal: declared by pcdecomp transplant for 0x10135ef0 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

#include "CBaseEntity.h"

class CEnvGlobal : public CBaseEntity
{
public:
	CEnvGlobal *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	virtual int vfunc124();	// "DrawDebugTextOverlays": base lines, then (when bit 0 of the byte at +0x224 is set) "State: %s" (+0x450) and "Value: OFF/ON/DEAD" as overlay text on the edict at +0x2e0
};
