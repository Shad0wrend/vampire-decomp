// CVStatInfoList_t: list of stat info records (no vtable known); 0x13c-byte records, name string at +0x18 of each.
#pragma once

struct CVStatInfoRecord_t
{
	char m_pad0000[0x18];
	const char *m_pName;	// 0x18
	char m_pad001c[0x13c - 0x1c];
};

class CVStatInfoList_t
{
public:
	int m_pad0000;
	int m_nInfos;	// +4
	CVStatInfoRecord_t *m_pInfos;	// +8

	int sub_101ffb90(const char *name);	// "CVStatInfoList_t::Lookup": scope trace, index of the record whose name equals name (case-insensitive), or -1
};
