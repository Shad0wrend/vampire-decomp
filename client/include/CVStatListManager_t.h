// CVStatListManager_t: owns the stat lists of a character (pointer array at +0x18, count at +0x14); only the members Update touches.
#pragma once

#include "CVStatList_t.h"

class CVStatListManager_t
{
public:
	char m_pad0000[0x14];
	int m_nLists;	// 0x14
	CVStatList_t **m_pLists;	// 0x18
	int m_nTime;	// 0x1c

	char sub_1015e580(int time);	// "CVStatListManager_t::Update": scope trace, stores the argument at +0x1c, recomputes every list, true when any value changed
	void sub_1015e490(int which, int c);	// "CVStatListManager_t::BindStatList": scope trace, binds list [which] (0..3) to its fixed source table with c
};
