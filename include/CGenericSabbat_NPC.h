// CGenericSabbat_NPC: generic Sabbat NPC (derived from CAI_BaseNPC at +0x0).
#pragma once

#include "CAI_BaseNPC.h"

class CGenericSabbat_NPC : public CAI_BaseNPC
{
public:
	virtual void vfunc103();	// Spawn: slot 104 (Precache), SetModel from slot 9, clears +0x1568 / +0x156c, sub_10273070(0), SetSolid(2) (inlined scope trace), move type (4, 0), +0x1570 = 0xf7, flags +0x19c = 0, health from the global at 0x1093a36c, +0x1574 = 0.2f, +0x5cc0 = 0, sub_1026dc00(1) and (0x800000), then slot 420
	virtual void vfunc104();	// Precache
	virtual void vfunc144(int a);	// slot 144 override: sub_10090890(0), then the base implementation

	void sub_10090890(float time);	// "CBaseAnimating::...MarkEffectStart"-like worker (scope trace, stores curtime + time at +0x5a4), called directly
	void sub_10273070(int a);	// CAI_BaseNPC member (stub 0x1000dc29), called by Spawn with 0
	void sub_1026dc00(int flags);	// CAI_BaseNPC member (stub 0x10012855), called by Spawn with 1 and 0x800000
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	float vfunc516();	// as in CGeneric_NPC (transplant)
};
