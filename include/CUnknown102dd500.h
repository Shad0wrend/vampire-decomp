// CUnknown102dd500: weighted string table: entry count at +4, entries (string, weight) from +8; real name not yet known.
#pragma once

struct CUnknown102dd500Entry
{
	const char *m_pString;
	float m_flWeight;
};

class CUnknown102dd500
{
public:
	int m_unk0;
	int m_nCount;
	CUnknown102dd500Entry m_Entries[1];

	const char *sub_102dd500();	// the weighted pick among the entries (the empty string when there are none)
};
