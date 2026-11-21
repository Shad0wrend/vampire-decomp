// CUnknown101d62d0: a growable list of pointers to 0x14 byte level records (allocation count at +4, used count
// at +8, array at +0xc); real name not yet known.
#pragma once

struct CUnknown101d62d0Record	// 0x14 bytes
{
	char m_pad0000[0x14];

	CUnknown101d62d0Record *sub_10140140();	// constructor body, returns this (stub 0x1000a1cd)
};

class CUnknown101d62d0
{
public:
	int m_unk0;
	int m_nAllocated;	// 0x0004
	int m_nCount;	// 0x0008
	CUnknown101d62d0Record **m_ppRecords;	// 0x000c

	CUnknown101d62d0Record *sub_10140290();	// appends a slot (growing the array by one) and returns its record, created on first use
};
