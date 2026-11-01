// StatDefault2: default stat object used by a second stat-list lookup (name provisional).
#pragma once

struct CVFeatKV;

struct StatDefault2
{
	int m_type;	// 0x0
	int m_iInternalName4;	// 0x4
	int m_iName8;	// 0x8
	int m_nFlags0c;	// 0xc: the number of "Equip" items
	int *m_pNames10;	// 0x10: the equip item names
	int *m_pCost14;	// 0x14: the equip item costs
	int *m_pFlags18;	// 0x18: the equip item flags (bit 0 = starts on)
	int m_nFlags1c;	// 0x1c: the number of "Armor" items
	int *m_pNames20;	// 0x20
	int *m_pCost24;	// 0x24
	int *m_pFlags28;	// 0x28
	StatDefault2(int);
	~StatDefault2();
	bool sub_101ed210(CVFeatKV *pKV);	// loads the record from its key: InternalName, Name and the "Equip" / "Armor" item lists (Cost, StartsOn); false for no key or an item list entry that is not an "Item"
};

extern int g_1073a34c;
extern StatDefault2 **g_1073a350;

// The lookups' shared default record: one function-local static in the game (0x109f0a40, guard 0x109f0a19), so
// every lookup (FindStatDefault2, the out-of-line 0x10183910) returns it through this one function.
inline StatDefault2 *StatDefault2_Default()
{
	static StatDefault2 s_default(-1);
	return &s_default;
}

inline StatDefault2 *FindStatDefault2(int type)
{
	for (int i = 0; i < g_1073a34c; i++) {
		if (g_1073a350[i]->m_type == type)
			return g_1073a350[i];
	}
	return StatDefault2_Default();
}
