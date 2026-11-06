// CRBTree16Entry8: the 8-byte element of the CUtlRBTree<CRBTree16Entry8, unsigned short> instance whose sentinel is at
// 0x106bdb38 (guard 0x109f0b78); real name not yet known. The second dword owns a heap vector (freed by the
// element's destructor, which RemoveAll runs for every node).
// Its out-of-line Links (0x10047930) is utlrbtree.h's own, instantiated through a member pointer: a Links of a
// block's own would be a second sentinel static (guard ?$S1@ instead of the inline copies' ??_B@51).
#pragma once

#include "UtlMem.h"

__declspec(dllimport) void Plat_Free(void *);

// The heap vector: memory (pointer, allocation count, grow size), size, element pointer.
struct CRBTree16Entry8Vec
{
	UtlMem m_Memory;
	int m_Size;
	int *m_pElements;

	void Purge()
	{
		m_Size = 0;
		m_Memory.sub_10046cd0();
		m_pElements = m_Memory.m_pMemory;
		if (m_Memory.m_growSize != -1) {
			if (m_Memory.m_pMemory) {
				Plat_Free(m_Memory.m_pMemory);
				m_Memory.m_pMemory = 0;
			}
			m_Memory.m_allocationCount = 0;
		}
	}
};

struct CRBTree16Entry8
{
	int m_unk0;
	CRBTree16Entry8Vec *m_pVec;

	~CRBTree16Entry8()
	{
		if (m_pVec) {
			m_pVec->Purge();
			operator delete(m_pVec);
		}
	}
};
