// CNPC_VHuman: human NPC base of the Troika NPCs (base chain not modelled). Only what decompiled code needs.
#pragma once

#include "CAI_BaseNPCTroika.h"

class CNPC_VHuman : public CAI_BaseNPCTroika
{
public:
	// Slot 440 (TranslateSchedule), called directly; declared as a plain member.
	int vfunc440(int schedule);
	// Slot 390 (damage handling taking the damage info), called directly by the Bach override; declared as a plain member.
	int vfunc390(void *info);
};
