// CVStatInfoList_t: list of stat infos (no vtable known). Only the members decompiled code needs.
#pragma once

#include "CVStatInfo_t.h"
#include "CVStatCost_t.h"

class CVStatInfoList_t
{
public:
	int m_pad0000;	// set from the constructor's last argument
	int m_nStats;	// +4
	CVStatInfo_t *m_pStats;	// +8, m_nStats records of 0x13c bytes
	char m_szName[0x20];	// +0xc
	int m_field2c;	// +0x2c
	CVStatCost_t m_cost;	// +0x30

	CVStatInfoList_t *sub_101ff300(const char *name, int a, int b);	// "CVStatInfoList_t::CVStatInfoList_t": scope trace, nulls the cost, stores b at +0, zeroes the list, a at +0x2c and copies name to +0xc
	int sub_101ffaa0(const char *name);	// "CVStatInfoList_t::Lookup(char*)": scope trace, index of the stat whose name equals the argument (case-insensitive, null name counts as ""), -1 when none
	int sub_101ffb90(const char *name);	// "CVStatInfoList_t::Lookup( const char *name )": same lookup (name string at +0x18 of each record)
	int sub_101ffc80(const char *name);	// "CVStatInfoList_t::LookupPartial": scope trace, index of the first stat whose lowercased name starts with the lowercased argument, -1 when none
	int sub_101ffdf0(const char *name);	// "CVStatInfoList_t::LookupPartial" (second variant): scope trace, same prefix lookup with 128 byte lower-cased copies
	int sub_101fff60(const char *name, int startIdx);	// "CVStatInfoList_t::LookupNextPart": scope trace, like LookupPartial but starting after startIdx
	CVStatInfo_t *sub_10200370(int idx);	// element accessor: the record at idx, or a shared default record when idx is out of range
};
