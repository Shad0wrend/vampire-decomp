// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10247a00 size=0x6c
#include "CMeasureSectionInstance.h"
struct ConVarA { virtual void v0(); virtual bool v1(); int pad[10]; int m_n; };
extern ConVarA *g_1075329c;
extern ConVarA *g_107536ac;
CMeasureSectionInstance::CMeasureSectionInstance(int section)
{
    m_section = section;
    if (g_1075329c->v1() || g_1075329c->m_n < 3) {
        if (g_107536ac->v1() || g_107536ac->m_n == 0)
            return;
    }
    CMeasureTsc *p = &m_tsc;
    __asm {
        mov ecx, p
        rdtsc
        mov [ecx], eax
        mov [ecx + 4], edx
    }
}
// END FUNCTION

// FUNCTION: 0x10247a90 size=0x1e
#include "CMeasureSectionInstance.h"

// TARGET: CMeasureSectionInstance::vfunc0
CMeasureSectionInstance *CMeasureSectionInstance::vfunc0(unsigned int flags)
{
	sub_10001d16();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10247ac0 size=0x8e
#include "CMeasureSectionInstance.h"

struct MeasureProfiler
{
	virtual void v0();
	virtual bool vfunc1();
	char m_pad[0x2c - 4];
	int m_nLevel;
};
struct MeasureTarget { void sub_10247860(CMeasureTsc *pTsc); };

extern MeasureProfiler *g_1075329c;
extern MeasureProfiler *g_107536ac;

struct CycleCount
{
	unsigned __int64 m_Int64;
	CycleCount() { m_Int64 = 0; }
	void Sample()
	{
		unsigned long *pSample = (unsigned long *)&m_Int64;
		__asm {
			mov ecx, pSample
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
};

CMeasureSectionInstance::~CMeasureSectionInstance()
{
	if (g_1075329c->vfunc1() || g_1075329c->m_nLevel < 3) {
		if (g_107536ac->vfunc1() || g_107536ac->m_nLevel == 0)
			return;
	}
	CMeasureTsc *p = &m_tsc;
	CycleCount now;
	now.Sample();
	*(unsigned __int64 *)p = now.m_Int64 - *(unsigned __int64 *)p;
	((MeasureTarget *)m_section)->sub_10247860(p);
}
// END FUNCTION
