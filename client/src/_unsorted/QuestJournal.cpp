// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10162560 size=0xe2
#include "QuestJournal.h"
#include "ScopeTrace.h"

extern "C" __declspec(dllimport) void __cdecl Plat_Free(void *);

struct CUtlVecX {
	char *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	char *m_pElements;
};

// TARGET: QuestJournal::~QuestJournal
QuestJournal::~QuestJournal()
{
	{
		ScopeTrace trace("QuestJournal::~QuestJournal", g_102de300);
		sub_10162710();
	}
	CUtlVecX *v1 = (CUtlVecX *)((char *)this + 0x14);
	v1->m_size = 0;
	if (v1->m_growSize != -1) {
		if (v1->m_pMemory) {
			Plat_Free(v1->m_pMemory);
			v1->m_pMemory = 0;
		}
		v1->m_allocationCount = 0;
	}
	v1->m_pElements = v1->m_pMemory;
	if (v1->m_growSize != -1) {
		if (v1->m_pMemory) {
			Plat_Free(v1->m_pMemory);
			v1->m_pMemory = 0;
		}
		v1->m_allocationCount = 0;
	}
	CUtlVecX *v0 = (CUtlVecX *)this;
	v0->m_size = 0;
	if (v0->m_growSize != -1) {
		if (v0->m_pMemory) {
			Plat_Free(v0->m_pMemory);
			v0->m_pMemory = 0;
		}
		v0->m_allocationCount = 0;
	}
	v0->m_pElements = v0->m_pMemory;
	if (v0->m_growSize != -1) {
		if (v0->m_pMemory) {
			Plat_Free(v0->m_pMemory);
			v0->m_pMemory = 0;
		}
		v0->m_allocationCount = 0;
	}
}
// END FUNCTION
