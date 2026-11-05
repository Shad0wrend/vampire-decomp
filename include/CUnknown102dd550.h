// CUnknown102dd550: same weighted string table as CUnknown102dd500, entry count at +0x8c, entries from +0x90.
#pragma once
#include "CUnknown102dd500.h"

class CUnknown102dd550
{
public:
	char m_pad00[0x8c];
	int m_nCount;
	CUnknown102dd500Entry m_Entries[1];

	const char *sub_102dd550();
};
