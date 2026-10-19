// CVStatActionList_t: list of stat actions (no vtable known). Only the members decompiled code needs.
#pragma once

class CVStatActionList_t
{
public:
	void sub_101fd940(void *pEnt, int a, int b);	// "CVStatActionList_t::Update": scope trace, then (when the hook at 0x1074e7d0 is set and pEnt is not null) hook(this, slot 35 of the global at 0x1070b22c(edict of pEnt), a, b)
};
