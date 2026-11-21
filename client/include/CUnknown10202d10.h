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

	CUnknown102029c0 *sub_1015ef10();	// appends a slot (growing the array by four when it is full) and returns its record, created on first use
	int sub_1015f010(int a, const char *pszName, int c, char d);	// creates a record (sub_10202d10), gives it the pooled name pszName, reads its VStringTable data (a, c) and stores d at +0x14; returns the record's id, -1 when none could be created
	bool sub_1015f080(int id);	// removes the record with that id (the last record takes its place; the array is freed with the last one); false when there is none
	int sub_1015f210(int id);	// the index of the record with that id, -1 when there is none (stub 0x1000777a)
};
