// CUnknown101b4680: object with two plain-data vectors (CUtlVector memory + size + element pointer) at +0x20 and +0x34;
// real name not yet known.
#pragma once

#include "CPASAttenuationFilter.h"

struct CPodVec
{
	CRecipientVecMem m_Memory;
	int m_Size;
	void *m_pElements;

	void Purge()
	{
		m_Size = 0;
		m_Memory.Purge(g_109f3624);
		m_pElements = m_Memory.m_pMemory;
		m_Memory.Purge(g_109f3624);
	}
};

class CUnknown101b4680
{
public:
	char pad0[0x20];
	CPodVec m_vecA;	// 0x20
	CPodVec m_vecB;	// 0x34

	void sub_101b4680();	// purges m_vecB, then m_vecA
};
