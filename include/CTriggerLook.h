// CTriggerLook (RTTI .?AVCTriggerLook@@): trigger that fires when the player looks at a target for a while.
// Derived from CBaseTrigger (which ends at +0x598). Only what decompiled code needs.
#pragma once

#include "CBaseTrigger.h"

class CTriggerLook : public CBaseTrigger
{
public:
	virtual int vfunc124();	// slot 124 (debug text overlays): CBaseTrigger::vfunc124, then with the debug text bit set the line "Time:   %3.2f" (the total look time at +0x5b8 minus the last look time at +0x5bc, which counts as 0 when negative); returns the next free line

	int sub_101c4f40();	// CBaseTrigger::vfunc124 (stub 0x100104e2), called directly

	char m_pad0598[0x5b8 - 0x598];
	float m_flLookTimeTotal;	// 0x5b8
	float m_flLookTimeLast;	// 0x5bc
	void vfunc176(CBaseEntity *pOther);	// slot 176: the trigger's EndTouch, then the lookup time reset to -1
public:
    virtual datamap_t * vfunc82();
    virtual void vfunc103();
};
