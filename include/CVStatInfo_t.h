// CVStatInfo_t: per-stat record; a table of 8-byte {duration, add} entries (one per level, 1-based) hangs at +0x100.
// Only what decompiled code needs.
#pragma once

struct CVStatLevelEntry_t
{
	int m_duration;
	int m_durationAdd;
};

class CVStatInfo_t
{
public:
	char m_pad0000[0x100];
	CVStatLevelEntry_t *m_pLevels;	// 0x0100
	unsigned int m_flags;	// 0x0104

	int sub_101fed90(int level);	// "CVStatInfo_t::Get_Duration_Initial": scope trace, duration of the level (clamped to 5), 0 without a table
	int sub_101fee50(int level);	// "CVStatInfo_t::Get_Duration_Add": same shape, the second dword of the level entry
	bool sub_101fead0();	// "CVStatInfo_t::IsPassive": scope trace, bit 2 of the flags, false when the global at 0x1074e6b4 is set up for it
};
