// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100f8fb0 size=0x97
#include "CEntityListSystem.h"
#include "CUnknown100f6d80.h"

struct PendingList_t
{
	int m_pad0000;
	int *m_pMemory;	// 0x04
	int m_allocationCount;	// 0x08
	int m_growSize;	// 0x0c
	int m_size;	// 0x10
	int *m_pElements;	// 0x14
};
struct EntityListHook { void sub_100f8960(); };

extern CUnknown100f6d80 g_106eb5d8;
extern EntityListHook g_10703634;
extern PendingList_t g_107036b0;
extern PendingList_t g_10703650;
extern "C" __declspec(dllimport) void __cdecl Plat_Free(void *);

void CEntityListSystem::vfunc2()
{
	g_10703634.sub_100f8960();
	g_106eb5d8.sub_100f6d80((int)&g_107036b0);
	g_107036b0.m_size = 0;
	if (g_107036b0.m_growSize != -1) {
		if (g_107036b0.m_pMemory) {
			Plat_Free(g_107036b0.m_pMemory);
			g_107036b0.m_pMemory = 0;
		}
		g_107036b0.m_allocationCount = 0;
	}
	g_107036b0.m_pElements = g_107036b0.m_pMemory;
	g_106eb5d8.sub_100f6d80((int)&g_10703650);
	g_10703650.m_size = 0;
	if (g_10703650.m_growSize != -1) {
		if (g_10703650.m_pMemory) {
			Plat_Free(g_10703650.m_pMemory);
			g_10703650.m_pMemory = 0;
		}
		g_10703650.m_allocationCount = 0;
	}
	g_10703650.m_pElements = g_10703650.m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x100f91c0 size=0x1e
#include "CEntityListSystem.h"

// TARGET: CEntityListSystem::vfunc8
CEntityListSystem *CEntityListSystem::vfunc8(unsigned int flags)
{
	sub_1000cfbd();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
