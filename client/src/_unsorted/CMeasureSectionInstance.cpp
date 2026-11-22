// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010e0b0 size=0x6c
#include "CMeasureSectionInstance.h"
struct ConVarA { virtual void v0(); virtual bool v1(); int pad[10]; int m_n; };
extern ConVarA *g_105fad5c;
extern ConVarA *g_104df674;
CMeasureSectionInstance::CMeasureSectionInstance(int section)
{
    m_section = section;
    if (g_105fad5c->v1() || g_105fad5c->m_n < 3) {
        if (g_104df674->v1() || g_104df674->m_n == 0)
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

// FUNCTION: 0x1010e140 size=0x8e
#include "CMeasureSectionInstance.h"

struct MeasureProfiler
{
	virtual void v0();
	virtual bool vfunc1();
	char m_pad[0x2c - 4];
	int m_nLevel;
};
struct MeasureTarget { void sub_1010df80(CMeasureTsc *pTsc); };

extern MeasureProfiler *g_105fad5c;
extern MeasureProfiler *g_104df674;

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
	if (g_105fad5c->vfunc1() || g_105fad5c->m_nLevel < 3) {
		if (g_104df674->vfunc1() || g_104df674->m_nLevel == 0)
			return;
	}
	CMeasureTsc *p = &m_tsc;
	CycleCount now;
	now.Sample();
	*(unsigned __int64 *)p = now.m_Int64 - *(unsigned __int64 *)p;
	((MeasureTarget *)m_section)->sub_1010df80(p);
}
// END FUNCTION
