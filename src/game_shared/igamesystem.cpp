// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 16 blocks
#include "vampire.h"

// FUNCTION: 0x10029c10 size=0x3
#include "CDirtySpatialPartitionEntityList.h"
bool CAutoGameSystem::vfunc0()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10029c30 size=0x1
#include "CDirtySpatialPartitionEntityList.h"
void CAutoGameSystem::vfunc1()
{
}
// END FUNCTION

// FUNCTION: 0x10029c50 size=0x1
#include "CDirtySpatialPartitionEntityList.h"
void CAutoGameSystem::vfunc2()
{
}
// END FUNCTION

// FUNCTION: 0x10029c70 size=0x1
#include "CDirtySpatialPartitionEntityList.h"
void CAutoGameSystem::vfunc3()
{
}
// END FUNCTION

// FUNCTION: 0x10029c90 size=0x1
#include "CDirtySpatialPartitionEntityList.h"
void CAutoGameSystem::vfunc4()
{
}
// END FUNCTION

// FUNCTION: 0x10029cb0 size=0x1
#include "CDirtySpatialPartitionEntityList.h"
void CAutoGameSystem::vfunc6()
{
}
// END FUNCTION

// FUNCTION: 0x10029cd0 size=0x1
#include "CDirtySpatialPartitionEntityList.h"
void CAutoGameSystem::vfunc7()
{
}
// END FUNCTION

// FUNCTION: 0x1003c640 size=0x1
#include "CDirtySpatialPartitionEntityList.h"
void CAutoGameSystem::vfunc5()
{
}
// END FUNCTION

// FUNCTION: 0x1042c290 size=0x1e
#include "CDirtySpatialPartitionEntityList.h"

// TARGET: CAutoGameSystem::vfunc8
CAutoGameSystem *CAutoGameSystem::vfunc8(unsigned int flags)
{
	sub_1000cfbd();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1042c2c0 size=0xe
#include "IGameSystem.h"
void sub_1042c420(void *pObject);

IGameSystem::~IGameSystem()
{
	sub_1042c420(this);
}
// END FUNCTION

// FUNCTION: 0x1042c2e0 size=0x1e
#include "IGameSystem.h"

// TARGET: IGameSystem::vfunc8
IGameSystem *IGameSystem::vfunc8(unsigned int flags)
{
	sub_1000cfbd();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1042c310 size=0xcb
extern "C" void *__cdecl memmove(void *, const void *, unsigned int);
extern void *(__cdecl *g_109f3634)(int);
extern void *(__cdecl *g_109f3638)(void *, int);

struct IntVec {
	int *pMemory;
	int allocationCount;
	int growSize;
	int size;
	int *pElements;
};
extern IntVec g_109eed50;

void sub_1042c310(int src)
{
	int num = g_109eed50.size + 1;
	int elem = g_109eed50.size;
	if (num > g_109eed50.allocationCount && g_109eed50.growSize != -1) {
		while (g_109eed50.allocationCount < num) {
			if (g_109eed50.allocationCount) {
				if (g_109eed50.growSize)
					g_109eed50.allocationCount += g_109eed50.growSize;
				else
					g_109eed50.allocationCount += g_109eed50.allocationCount;
			} else {
				g_109eed50.allocationCount = 8;
			}
		}
		if (g_109eed50.pMemory)
			g_109eed50.pMemory = (int *)g_109f3638(g_109eed50.pMemory, g_109eed50.allocationCount * 4);
		else
			g_109eed50.pMemory = (int *)g_109f3634(g_109eed50.allocationCount * 4);
	}
	g_109eed50.size++;
	g_109eed50.pElements = g_109eed50.pMemory;
	int toMove = g_109eed50.size - elem - 1;
	if (toMove > 0)
		memmove(g_109eed50.pMemory + num, g_109eed50.pMemory + elem, toMove * 4);
	int *p = g_109eed50.pMemory + elem;
	if (p)
		*p = src;
}
// END FUNCTION

// FUNCTION: 0x1042c420 size=0x55
#include "utlvector.h"

extern CUtlVector<void *> g_109eed50;

void sub_1042c420(void *pSystem)
{
	g_109eed50.FindAndRemove(pSystem);
}
// END FUNCTION

// FUNCTION: 0x1042c4a0 size=0xb
extern int g_109eed5c;
void sub_1042c4a0(void)
{
	g_109eed5c = 0;
}
// END FUNCTION

// FUNCTION: 0x1042c4c0 size=0x6
namespace lifted {
extern int g_109eed64;
}
int sub_1042c4c0()
{
    return lifted::g_109eed64;
}
// END FUNCTION

// FUNCTION: 0x1042c4e0 size=0x94
#include "Vector.h"
struct AutoSys {
	virtual bool Init();
	AutoSys *m_pNext;
};
extern AutoSys *g_109eed68;
extern AutoSys **g_109eed50;
extern int g_109eed5c;
extern "C" __declspec(dllimport) void __cdecl DevWarning(int level, const char *fmt, ...);
void sub_1042c310(AutoSys *sys);

static inline int FindSystem(AutoSys *sys)
{
	for (int i = 0; i < g_109eed5c; i++) {
		if (g_109eed50[i] == sys)
			return i;
	}
	return -1;
}

bool sub_1042c4e0()
{
	for (AutoSys *p = g_109eed68; p; p = p->m_pNext) {
		if (FindSystem(p) == -1)
			sub_1042c310(p);
		else
			DevWarning(1, "AutoGameSystem already added to game system list!!!\n");
	}
	g_109eed68 = 0;
	for (int i = 0; i < g_109eed5c; i++) {
		if (!g_109eed50[i]->Init())
			return false;
	}
	return true;
}
// END FUNCTION
