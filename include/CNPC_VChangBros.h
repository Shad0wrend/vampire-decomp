// CNPC_VChangBros: the Chang brothers NPC. Only what decompiled code needs.
#pragma once

#include "CNPC_VHuman.h"

class CNPC_VChangBros : public CNPC_VHuman
{
public:
	// Slot 440 (TranslateSchedule override); declared as a plain member.
	int vfunc440(int schedule);
	void vfunc619(int arg);
	void sub_1000c27a(int arg);
	void vfunc431();	// "CNPC_VChangBros::NPCThink": scope trace around the base think, then schedules the next think
	int sub_10011225();	// CNPC_VHuman::vfunc461, called directly
	void sub_100052d6();	// CNPC_VVampireBoss::vfunc431, called directly
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
};
