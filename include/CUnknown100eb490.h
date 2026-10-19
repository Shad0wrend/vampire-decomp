// CUnknown100eb490: object holding three CUtlVector<int> (at +0x08, +0x1c, +0x30); real name not yet known.
#pragma once

extern void (*g_109f3624)(void *);	// Plat_Free

// CUtlVector<int> layout: memory, allocation count, grow size, size, element pointer.
struct CUnknownIntVec
{
	int *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	int *m_pElements;

	void PurgeMemory(void (*pfnFree)(void *))
	{
		if (m_growSize != -1)
		{
			if (m_pMemory)
			{
				pfnFree(m_pMemory);
				m_pMemory = 0;
			}
			m_allocationCount = 0;
		}
	}
	void PurgeAndDestruct(void (*pfnFree)(void *))
	{
		m_size = 0;
		PurgeMemory(pfnFree);
		m_pElements = m_pMemory;
		PurgeMemory(pfnFree);
	}
};

class CUnknown100eb490
{
public:
	char m_pad0000[8];
	CUnknownIntVec m_vecA;	// 0x08
	CUnknownIntVec m_vecB;	// 0x1c
	CUnknownIntVec m_vecC;	// 0x30

	void sub_100eb490();	// purges the three vectors in reverse order (the body of the destructor)
};
