// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102275f0 size=0x68
#include "CPlayerEventsManager.h"
#include "CDirtySpatialPartitionEntityList.h"
#include "utlvector.h"

void __cdecl sub_10430964(void *p);

CAutoGameSystem *CPlayerEventsManager::vfunc8(unsigned int flags)
{
	((CUtlVector<int> *)((char *)this + 8))->~CUtlVector<int>();
	((CAutoGameSystem *)this)->sub_1000cfbd();
	if (flags & 1)
		sub_10430964(this);
	return (CAutoGameSystem *)(this);
}
// END FUNCTION

// FUNCTION: 0x10227680 size=0x41
#include "CPlayerEventsManager.h"

void CPlayerEventsManager::vfunc2()
{
	m_Size = 0;
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_109f3624(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
	m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x102276f0 size=0x1
void sub_102276f0() {
}
// END FUNCTION

// FUNCTION: 0x10227710 size=0x5
#include "CPlayerEventsManager.h"
void __cdecl sub_100828d0();
// TARGET: CPlayerEventsManager::vfunc4
// the game's 0x10227710: a tail call (jmp) of sub_100828d0
void CPlayerEventsManager::vfunc4()
{
	sub_100828d0();
}
// END FUNCTION

// FUNCTION: 0x10227730 size=0x41
#include "CPlayerEventsManager.h"

void CPlayerEventsManager::vfunc5()
{
	m_Size = 0;
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_109f3624(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
	m_pElements = m_pMemory;
}
// END FUNCTION
