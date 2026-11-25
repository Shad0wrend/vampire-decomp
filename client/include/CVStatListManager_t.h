// CVStatListManager_t: owns the stat lists of a character (pointer array at +0x18, count at +0x14); only the members Update touches.
#pragma once

#include "CVStatList_t.h"

class CVStatListManager_t
{
public:
	CVStatListManager_t()
	{
		m_nGrowSize = 1;
		m_nNextId = 0;
		m_nAlloc = 0;
		m_nLists = 0;
		m_pLists = 0;
	}
	int m_nGrowSize;	// 0x00
	int m_nNextId;	// 0x04
	int m_unk08;	// 0x08
	int m_unk0c;	// 0x0c
	int m_nAlloc;	// 0x10
	int m_nLists;	// 0x14
	CVStatList_t **m_pLists;	// 0x18
	int m_nTime;	// 0x1c
	void *m_pOwner;	// 0x20

	CVStatList_t *Find(int type)
	{
		for (int i = 0; i < m_nLists; i++) {
			if (m_pLists[i]->m_field10 == type)
				return m_pLists[i];
		}
		static CVStatList_t s_default(-1);
		return &s_default;
	}
	char sub_1015e580(int time);	// "CVStatListManager_t::Update": scope trace, stores the argument at +0x1c, recomputes every list, true when any value changed
	void sub_1015e490(int which, int c);	// "CVStatListManager_t::BindStatList": scope trace, binds list [which] (0..3) to its fixed source table with c
};
