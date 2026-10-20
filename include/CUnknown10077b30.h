// CUnknown10077b30: object with five CUtlVector<CUnknown10073ae0>s (20 bytes each) from +0x2e4; real name not yet known.
#pragma once

#include "CUnknown10073ae0.h"

struct CUnknown10077b30Vec
{
	CUnknown10073ae0 *m_pMemory;	// 0x00
	int m_allocationCount;	// 0x04
	int m_growSize;	// 0x08
	int m_size;	// 0x0c
	CUnknown10073ae0 *m_pElements;	// 0x10
};

class CUnknown10077b30
{
public:
	char m_pad0000[0x2e4];
	CUnknown10077b30Vec m_vecs[5];	// 0x2e4

	CUnknown10073ae0 *sub_10077b30(int index, const char *name);	// the record of vector index whose name matches (case-insensitive), else null
};
