// CVStatActionList_t: list of stat actions (no vtable known). Only the members decompiled code needs.
#pragma once

class CVStatAction_t;

class CVStatActionList_t
{
public:
	int m_pad0000;
	int m_nActions;	// +4
	CVStatAction_t **m_pActions;	// +8
	int m_nArg0c;	// +0xc: first constructor argument of a new action
	int m_nArg10;	// +0x10: second constructor argument of a new action

	void sub_101fd940(void *pEnt, int a, int b);	// "CVStatActionList_t::Update": scope trace, then (when the hook at 0x1074e7d0 is set and pEnt is not null) hook(this, slot 35 of the global at 0x1070b22c(edict of pEnt), a, b)
	void sub_101fda10();	// "CVStatActionList_t::Debug_Display": scope trace, one DevMsg line per action
	void sub_101fd540();	// "CVStatActionList_t::Clean": scope trace, deletes every action and the array, then clears the count at +4 and the dword at +0
	void sub_101fd4c0();	// "CVStatActionList_t::~CVStatActionList_t": scope trace around sub_101fd540
	CVStatAction_t *sub_101fd630();	// "CVStatActionList_t::Alloc": scope trace; grows the pointer array by one entry when the count at +4 equals the capacity at +0 (copy into a new array, the rest zeroed), then returns the action at the last used slot, creating it (operator new(0x58) + constructor with +0xc / +0x10) when it is still empty
	bool sub_101fd7e0(void *pKeyValues);	// "CVStatActionList_t::Load": scope trace; false for null, else for each "Action" sub key (slot 2 of the key values, then slot 3 for the next one) allocates an action and loads it from the key (CVStatAction_t::sub_101fc9e0); true
};
