// CUnknown10739d08: the global object at 0x10739d08 (a tuning / convar-like block); only the float getter at +0x3c8 is
// known, and slot 5 (a float lookup keyed by a stat level).
#pragma once

class CBaseCombatCharacter;

class CUnknown10739d08
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual float vfunc5(int level);	// the tuning value for a stat level

	float sub_101e7d90();	// returns the float at +0x3c8 (stub 0x10006f0f)
	float sub_101e8820(CBaseCombatCharacter *pChar);	// the character's stat 0x1a divided by the (truncated) tuning value of its stat 1 level minus one (stub 0x10004c91)
	float sub_101e8640(void *pChar);	// a float derived from the character's stats (stub 0x1000b3d9)
	float sub_101e9020();	// a tuning value as a float (stub 0x10004615)
};
