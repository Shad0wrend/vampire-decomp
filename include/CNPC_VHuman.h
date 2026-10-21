// CNPC_VHuman: human NPC base of the Troika NPCs (base chain not modelled). Only what decompiled code needs.
#pragma once

#include "CAI_BaseNPCTroika.h"

class CNPC_VHuman : public CAI_BaseNPCTroika
{
public:
	// Slot 440 (TranslateSchedule), called directly; declared as a plain member.
	int vfunc440(int schedule);
	// Slot 390 implementation (damage handling taking the damage info), called directly by the Bach override.
	int sub_10001b45(void *info);
	// Slot 104 (Precache) override, called directly by the NPC subclasses' Precache.
	virtual void vfunc104();
	// Slot 376 (TranslateActivity step 2 / next activity of the fallback chain) override: maps the activities
	// 0x3d, 0x3e, 0x9f, 0xa0, 0xa3 and 0xa4 to 0x3b, 0x3c, 0x9d, 0x9e, 0xa1 and 0xa2 for the Troika version.
	virtual int vfunc376(int act);
	int sub_10295710(int act);	// CAI_BaseNPCTroika::vfunc376 (stub 0x1000fb14), called directly
	// Slot 600 override: same as CAI_BaseNPCTroika::sub_102b57c0.
	virtual char vfunc600(int unused);
};
