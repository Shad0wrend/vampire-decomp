// CVStatInfo_t: per-stat record; a table of 8-byte {duration, ...} entries (one per level, 1-based) hangs at +0x100.
// Only what decompiled code needs.
#pragma once

struct CVStatLevelEntry_t
{
	int m_duration;
	int m_f4;
};

class CVStatInfo_t
{
public:
	char m_pad0000[0x100];
	CVStatLevelEntry_t *m_pLevels;	// 0x0100

	int sub_101fed90(int level);	// "CVStatInfo_t::Get_Duration_Initial": scope trace, duration of the level (clamped to 5), 0 without a table
};
