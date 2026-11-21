// CUnknown10202c80: vector of pointers to CUnknown102029c0 records (count at +8, data at +0xc); real name not yet known.
#pragma once

#include "CUnknown102029c0.h"

class CUnknown10202c80
{
public:
	int m_unk0;
	int m_unk4;
	int m_count;	// 0x0008
	CUnknown102029c0 **m_pData;	// 0x000c

	void sub_1015eea0();	// deletes every record and the pointer array, then clears the count and the first two fields
	int sub_1015f160(const char *pszName);	// the id (first dword) of the record whose name (+4) matches case-insensitively, -1 when there is none
};
