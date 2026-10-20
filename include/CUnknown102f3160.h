// CUnknown102f3160: class (not identified yet) whose destructor 0x102f3160 releases a CUtlVector-style vector at +0x1ec.
#pragma once

extern void (*g_109f3624)(void *);	// Plat_Free

struct CPurgeMemory
{
	int *m_pMemory;
	int m_allocationCount;
	int m_growSize;

	void Purge()
	{
		if (m_growSize != -1)
		{
			if (m_pMemory)
			{
				g_109f3624(m_pMemory);
				m_pMemory = 0;
			}
			m_allocationCount = 0;
		}
	}
};

struct CPurgeVec
{
	CPurgeMemory m_Memory;
	int m_size;
	int *m_pElements;

	void PurgeAll()
	{
		m_size = 0;
		m_Memory.Purge();
		m_pElements = m_Memory.m_pMemory;
	}
};

class CUnknown102f3160
{
public:
	void sub_102f3160();	// destructor-like: base work (stub 0x10003666), then the vector at +0x1ec is purged
	void sub_10003666();

	char m_pad0000[0x1ec];
	CPurgeVec m_vec;	// 0x01ec
};
