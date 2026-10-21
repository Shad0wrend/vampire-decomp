// CUnknown101f3d80: list owner (count at +0x1c, pointer array at +0x20) of CUnknown101f35c0 records; real name not yet known.
#pragma once
#include "CUnknown101f35c0.h"

class CUnknown101f3d80
{
public:
	char m_pad0000[4];
	int m_n04;	// 0x04
	char m_pad0008[0x1c - 8];
	int m_nCount;	// 0x1c
	CUnknown101f35c0 **m_pItems;	// 0x20

	void sub_101f3d80(int a, int b);	// appends a new record, growing the pointer array by one
};
