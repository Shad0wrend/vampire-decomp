// CRecipientVec: a hand-written view of CRecipientFilter's CUtlVector<int> (memory, allocation count, grow size, size,
// elements) kept for matched code. New code: use CRecipientFilter::m_Recipients (utlvector.h) and the filter classes.
#pragma once

extern void (__cdecl *g_109f3624)(void *);	// Plat_Free

struct CRecipientVecMem
{
	void *m_pMemory;
	int m_allocationCount;
	int m_growSize;

	void Purge(void (__cdecl *pfnFree)(void *))
	{
		if (m_growSize != -1) {
			if (m_pMemory) {
				pfnFree(m_pMemory);
				m_pMemory = 0;
			}
			m_allocationCount = 0;
		}
	}
};

struct CRecipientVec
{
	CRecipientVecMem m_Memory;
	int m_Size;
	void *m_pElements;

	void sub_10013e12();	// element destruct
	void Purge()
	{
		for (int i = m_Size; --i >= 0; )
			sub_10013e12();
		void (__cdecl *pfnFree)(void *) = g_109f3624;
		m_Size = 0;
		m_Memory.Purge(pfnFree);
		m_pElements = m_Memory.m_pMemory;
		m_Memory.Purge(pfnFree);
	}
	~CRecipientVec() { Purge(); }
};
