// CVStatInfoList_t: list of stat infos (no vtable known). Only the members decompiled code needs.
#pragma once

#include "CVStatInfo_t.h"

class CVStatInfoList_t
{
public:
	int m_pad0000;
	int m_nStats;	// +4
	CVStatInfo_t *m_pStats;	// +8, m_nStats records of 0x13c bytes

	int sub_101ffaa0(const char *name);	// "CVStatInfoList_t::Lookup(char*)": scope trace, index of the stat whose name equals the argument (case-insensitive, null name counts as ""), -1 when none
	int sub_101ffb90(const char *name);	// "CVStatInfoList_t::Lookup( const char *name )": same lookup (name string at +0x18 of each record)
	CVStatInfo_t *sub_10200370(int idx);	// element accessor: the record at idx, or a shared default record when idx is out of range
};
