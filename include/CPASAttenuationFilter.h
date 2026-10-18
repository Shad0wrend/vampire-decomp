// CPASAttenuationFilter: IRecipientFilter (at +0x0) with the recipient vector of CRecipientFilter (memory at +0x8,
// size at +0x14, data pointer at +0x18). Primary vtable 0x104470b0. The helper structs model the inlined
// CUtlVector destructor chain.
#pragma once

extern void (__cdecl *g_109f3624)(void *);

struct IRecipientFilter
{
	virtual ~IRecipientFilter() {}
	virtual void vfunc1() = 0;
	virtual void vfunc2() = 0;
	virtual void vfunc3() = 0;
	virtual char vfunc4() = 0;
	virtual void vfunc5() = 0;
	virtual void vfunc6() = 0;
	virtual void vfunc7() = 0;
};

struct CRecipientVecMem
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
	~CRecipientVecMem() { Purge(); }
};

struct CRecipientVec
{
	CRecipientVecMem m_Memory;
	int m_Size;
	void *m_pElements;

	void sub_10013e12();	// element destruct
	void RemoveAll()
	{
		for (int i = m_Size; --i >= 0; )
			sub_10013e12();
		m_Size = 0;
	}
	void Purge()
	{
		RemoveAll();
		m_Memory.Purge();
		m_pElements = m_Memory.m_pMemory;
	}
	~CRecipientVec() { Purge(); }
};

class CPASAttenuationFilter : public IRecipientFilter
{
public:
	CPASAttenuationFilter();
	virtual ~CPASAttenuationFilter();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual char vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7();

	CRecipientVec m_Recipients;	// 0x0008
};
