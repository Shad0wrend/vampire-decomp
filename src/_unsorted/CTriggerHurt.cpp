// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c5d40 size=0xa0
#include "CTriggerHurt.h"
#include "UtlMem.h"

extern void (__cdecl *g_109f3624)(void *);	// Plat_Free
void sub_100aa7b0(void *pEntity);	// CBaseEntity::operator delete

struct CTriggerHurtVec	// the CUtlVector<int> of the damaged entities at +0x5f4, as its inlined destructor sees it
{
	UtlMem m_Memory;
	int m_Size;
	int *m_pElements;

	void Destruct()
	{
		m_Size = 0;
		m_Memory.sub_10185100();
		m_pElements = m_Memory.m_pMemory;
		if (m_Memory.m_growSize != -1) {
			if (m_Memory.m_pMemory) {
				g_109f3624(m_Memory.m_pMemory);
				m_Memory.m_pMemory = 0;
			}
			m_Memory.m_allocationCount = 0;
		}
	}
};

CTriggerHurt *CTriggerHurt::vfunc5(unsigned int flags)
{
	((CTriggerHurtVec *)&m_i5f4)->Destruct();
	m_out5dc.sub_100cd2d0();
	m_out5c4.sub_100cd2d0();
	m_out580.sub_100cd2d0();
	m_out568.sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x4bc))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x4a4))->sub_100cd2d0();
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
