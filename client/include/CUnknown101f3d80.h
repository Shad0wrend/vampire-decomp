// CUnknown101f3d80: list owner (count at +0x1c, pointer array at +0x20) of CUnknown101f35c0 records; real name not yet known.
#pragma once
#include "CUnknown101f35c0.h"

class CUnknown101f3d80
{
public:
	char m_pad0000[4];
	int m_n04;	// 0x04
	char m_pad0008[4];
	const char *m_pszDir;	// 0x0c: the sound sub directory this table scans
	char m_pad0010[0x1c - 0x10];
	int m_nCount;	// 0x1c
	CUnknown101f35c0 **m_pItems;	// 0x20

		// appends a new record, growing the pointer array by one
	void sub_10155070(int a, int b);	// same shape as sub_101f3d80 (the other record kind), called by the scan
	bool sub_10154c90();	// scans "sound\<dir>\*.*": every file goes to sub_101f3d00(path, name), then every sub directory except "." and ".." to sub_101f3d80(path, name); true
};
