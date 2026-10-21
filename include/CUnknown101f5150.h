// CUnknown101f5150: list owner (count at +0x1c, pointer array at +0x20) of CUnknown101f40f0 records; real name not yet known.
#pragma once
#include "CUnknown101f40f0.h"

class CUnknown101f5150
{
public:
	char m_pad0000[0x1c];
	int m_nCount;	// 0x1c
	CUnknown101f40f0 **m_pItems;	// 0x20

	bool sub_101f5150(const char *pszName);	// appends a new record, growing the pointer array by one
};
