// SNamedList: a named list of 0x19c byte records (count at +0, record array at +0xc, the record's name pointer at +4);
// one instance is the global at 0x10739194 (the feat weighting lists). Only what recovered code needs.
#pragma once

class SNamedList
{
public:
	int m_nRecords;	// 0x00
	char m_pad0004[0xc - 4];
	char *m_pRecords;	// 0x0c: m_nRecords records of 0x19c bytes, the name (const char *, null = "") at +4 of each

	int sub_101d9780(const char *pszName);	// stub 0x1000c7f7: the index of the record whose name equals pszName (case-insensitive), 0 when none
};
