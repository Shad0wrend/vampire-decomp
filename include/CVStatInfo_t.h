// CVStatInfo_t: per-stat record (0x13c bytes); a table of 8-byte {duration, add} entries (one per level, 1-based) hangs at +0x100.
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
	int m_field0000;	// 0x0000
	int m_field0004;	// 0x0004
	int m_field0008;	// 0x0008, -1 = none
	char m_pad000c[0x18 - 0x0c];
	const char *m_pszName;	// 0x0018
	char m_pad001c[0x100 - 0x1c];
	CVStatLevelEntry_t *m_pLevels;	// 0x0100
	unsigned int m_flags;	// 0x0104
	char m_bField0108;	// 0x0108
	char m_pad0109[0x120 - 0x109];	// 0x4c..0xb0: five 0x14-byte records starting with -1, 0xb0: a CVStatCost_t, 0x10c: a 12 byte list
	int m_field0120;	// 0x0120
	int m_field0124;	// 0x0124
	char m_pad0128[0x130 - 0x128];
	int m_field0130;	// 0x0130
	int m_field0134;	// 0x0134
	int m_field0138;	// 0x0138

	CVStatInfo_t *sub_101fdaf0();	// "CVStatInfo_t::CVStatInfo_t": constructs the five records, the cost and the list, then scope trace and the plain fields
	int sub_101fed90(int level);	// "CVStatInfo_t::Get_Duration_Initial": scope trace, duration of the level (clamped to 5), 0 without a table
	int sub_101fee50(int level);	// "CVStatInfo_t::Get_Duration_Add": same shape, the second dword of the level entry
	bool sub_101fead0();	// "CVStatInfo_t::IsPassive": scope trace, bit 2 of the flags, false when the global at 0x1074e6b4 is set up for it
	bool sub_101fec30();	// "CVStatInfo_t::IsRenewable": same shape, bit 3 of the flags, global at 0x1074e77c
};
