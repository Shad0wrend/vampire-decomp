// CUnknown101dcc80: growable array of lazily created 0x2c byte records (name provisional). The array grows by exactly
// one slot at a time; GetNext() hands out the next record, creating it on first use.
#pragma once

struct CUnknown101dcc80Record	// 0x2c bytes
{
	int m_nSlot;	// 0x00: which view the particle belongs to (0 third person, 1 first person)
	char m_data[0x28];

	CUnknown101dcc80Record *sub_10147760();	// constructor body (stub 0x10014e70), returns this
};

class CUnknown101dcc80
{
public:
	int m_nAllocated;	// 0x00: number of slots of the array
	int m_nCount;	// 0x04: slots handed out so far
	CUnknown101dcc80Record **m_ppRecords;	// 0x08

	CUnknown101dcc80Record *sub_10147a90();	// GetNext
};
