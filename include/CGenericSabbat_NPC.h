// CGenericSabbat_NPC: generic Sabbat NPC (derived from CAI_BaseNPC at +0x0).
#pragma once

#include "CAI_BaseNPC.h"

class CGenericSabbat_NPC : public CAI_BaseNPC
{
public:
	virtual void vfunc104();	// Precache
	virtual void vfunc144(int a);	// slot 144 override: sub_10090890(0), then the base implementation

	void sub_10090890(float time);	// "CBaseAnimating::...MarkEffectStart"-like worker (scope trace, stores curtime + time at +0x5a4), called directly
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	float vfunc516();	// as in CGeneric_NPC (transplant)
};
