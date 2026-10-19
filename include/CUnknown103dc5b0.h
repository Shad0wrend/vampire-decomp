// CUnknown103dc5b0: an object that owns two CUtlVector members at +0x20 and +0x34; 0x103dc5b0 is its
// destroy-and-maybe-delete function (bit 0 of the argument deletes). Used with 0x48 byte elements in a
// CNPC_VWerewolf vector.
#pragma once

extern void (__cdecl * const g_109f3624)(void *);	// Plat_Free

struct CUtlMem103dc5b0
{
	void *m_pMemory;
	int m_allocationCount;
	int m_growSize;

	void Purge()
	{
		if (m_growSize != -1) {
			if (m_pMemory) {
				g_109f3624(m_pMemory);
				m_pMemory = 0;
			}
			m_allocationCount = 0;
		}
	}
	~CUtlMem103dc5b0() { Purge(); }
};

struct CUtlVec103dc5b0
{
	CUtlMem103dc5b0 m_Memory;
	int m_size;
	void *m_pElements;

	void Purge()
	{
		m_size = 0;
		m_Memory.Purge();
		m_pElements = m_Memory.m_pMemory;
	}
	~CUtlVec103dc5b0() { Purge(); }
};

class CUnknown103dc5b0
{
public:
	char m_pad0000[0x20];
	CUtlVec103dc5b0 m_First;	// 0x20
	CUtlVec103dc5b0 m_Second;	// 0x34

	CUnknown103dc5b0 *sub_103dc5b0(unsigned char flags);	// destroys the vectors, deletes the object when bit 0 of flags is set
};
