// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100fd920 size=0x1e
#include "CEnvPlayerSurfaceTrigger.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvPlayerSurfaceTrigger::vfunc5
CEnvPlayerSurfaceTrigger *CEnvPlayerSurfaceTrigger::vfunc5(unsigned int flags)
{
	sub_100108ed();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100fdac0 size=0x89
#include "CEnvPlayerSurfaceTrigger.h"
extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

struct UtlMem7 {
	int *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	int *m_pElements;
	void sub_100fdd50(int num);

	void GrowVector(int num)
	{
		if (m_size + num > m_allocationCount)
			sub_100fdd50(m_size + num - m_allocationCount);
		m_size += num;
		m_pElements = m_pMemory;
	}
	void ShiftElementsRight(int elem, int num)
	{
		int numToMove = m_size - elem - num;
		if (numToMove > 0 && num > 0)
			memmove(&m_pMemory[elem + num], &m_pMemory[elem], numToMove * 4);
	}
	void InsertBefore(int elem, int value)
	{
		GrowVector(1);
		ShiftElementsRight(elem, 1);
		int *p = &m_pMemory[elem];
		if (p)
			*p = value;
	}
};
extern UtlMem7 g_1070906c;

void CEnvPlayerSurfaceTrigger::vfunc130(int a)
{
	CBaseEntity *pThis = (CBaseEntity *)this;
	pThis->CBaseEntity::vfunc130(a);
	int handle = pThis ? *pThis->vfunc1() : -1;
	g_1070906c.InsertBefore(g_1070906c.m_size, handle);
}
// END FUNCTION
