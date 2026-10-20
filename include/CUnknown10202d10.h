// CUnknown10202d10: a growable list of pointers to CUnknown102029c0 records (id counter at +0, allocation count at +4,
// used count at +8, array at +0xc; it grows four slots at a time); real name not yet known.
#pragma once

#include "CUnknown102029c0.h"

class CUnknown10202d10
{
public:
	int m_nNextId;	// 0x0000: id handed to the next created record
	int m_nAllocated;	// 0x0004
	int m_nCount;	// 0x0008
	CUnknown102029c0 **m_ppRecords;	// 0x000c

	CUnknown102029c0 *sub_10202d10();	// appends a slot (growing the array by four when it is full) and returns its record, created on first use
};
