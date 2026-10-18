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
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
};
