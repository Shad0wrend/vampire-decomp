// CPASAttenuationFilter: IRecipientFilter (at +0x0) with the recipient vector of CRecipientFilter (memory at +0x8,
// size at +0x14, data pointer at +0x18). Primary vtable 0x104470b0. The helper structs model the inlined
// CUtlVector destructor chain.
#pragma once

#include "IRecipientFilter.h"

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

class CPASAttenuationFilter : public IRecipientFilter
{
public:
	CPASAttenuationFilter();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual char vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7();

	int m_pad0004;
	CRecipientVec m_Recipients;	// 0x0008
};
