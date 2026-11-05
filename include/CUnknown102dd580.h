// CUnknown102dd580: same weighted string table as CUnknown102dd500, entry count at +0xd0, entries from +0xd4.
#pragma once
#include "CUnknown102dd500.h"

class CUnknown102dd580
{
public:
	char m_pad00[0xd0];
	int m_nCount;
	CUnknown102dd500Entry m_Entries[1];

	const char *sub_102dd580();
};
