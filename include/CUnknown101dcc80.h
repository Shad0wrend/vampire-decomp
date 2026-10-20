// CUnknown101dcc80: growable array of lazily created 0x2c byte records (name provisional). The array grows by exactly
// one slot at a time; GetNext() hands out the next record, creating it on first use.
#pragma once

struct CUnknown101dcc80Record	// 0x2c bytes
{
	char m_data[0x2c];

	CUnknown101dcc80Record *sub_101dc850();	// constructor body (stub 0x10014e70), returns this
};

class CUnknown101dcc80
{
public:
	int m_nAllocated;	// 0x00: number of slots of the array
	int m_nCount;	// 0x04: slots handed out so far
	CUnknown101dcc80Record **m_ppRecords;	// 0x08

	CUnknown101dcc80Record *sub_101dcc80();	// GetNext
};
