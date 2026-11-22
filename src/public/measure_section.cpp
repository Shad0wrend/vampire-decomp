// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 18 blocks
#include "vampire.h"

// FUNCTION: 0x10247690 size=0x58
#include "CMeasureSection.h"
struct CUnknown102477a0 { void sub_102477a0(); };
struct CUnknown102477c0 { void sub_102477c0(); };
extern CMeasureSection *g_10753734;
extern int g_10753738;
CMeasureSection::CMeasureSection(int nName)
    : m_n08(0), m_n0c(0), m_n10(0), m_n14(0), m_n18(0), m_n1c(0)
{
    m_n20 = nName;
    ((CUnknown102477a0 *)this)->sub_102477a0();
    ((CUnknown102477c0 *)this)->sub_102477c0();
    m_n10 = 0;
    m_n14 = 0;
    m_pNext24 = g_10753734;
    g_10753734 = this;
    g_10753738++;
}
// END FUNCTION

// FUNCTION: 0x10247710 size=0x1e
#include "CMeasureSection.h"

// TARGET: CMeasureSection::vfunc0
CMeasureSection *CMeasureSection::vfunc0(unsigned int flags)
{
	sub_1000881e();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10247740 size=0x14
#include "CMeasureSection.h"

extern int g_10753738;

// TARGET: CMeasureSection::~CMeasureSection
CMeasureSection::~CMeasureSection()
{
	m_pNext24 = 0;
	g_10753738--;
}
// END FUNCTION

// FUNCTION: 0x10247770 size=0x1f
struct CUnk10247770
{
    char m_pad0000[8];
    __int64 m_n08;
    __int64 m_n10;
    void sub_10247770();
};
void CUnk10247770::sub_10247770()
{
    if (m_n10 < m_n08)
        m_n10 = m_n08;
}
// END FUNCTION

// FUNCTION: 0x102477a0 size=0x9
struct CUnknown102477a0 { int a; int b; int c; int d; void sub_102477a0(); };
// TARGET: CUnknown102477a0::sub_102477a0
void CUnknown102477a0::sub_102477a0() { c = 0; d = 0; }
// END FUNCTION

// FUNCTION: 0x102477c0 size=0x9
struct CUnknown102477c0 { int p[6]; int a; int b; void sub_102477c0(); };
// TARGET: CUnknown102477c0::sub_102477c0
void CUnknown102477c0::sub_102477c0() { a = 0; b = 0; }
// END FUNCTION

// FUNCTION: 0x102477e0 size=0x4
struct CUnknown102477e0 { int sub_102477e0(); };
int CUnknown102477e0::sub_102477e0()
{
    return *(int *)((char *)this + 0x20);
}
// END FUNCTION

// FUNCTION: 0x10247800 size=0x4
struct CUnknown10247800 { char * sub_10247800(); };
char * CUnknown10247800::sub_10247800()
{
    return (char *)this + 0x18;
}
// END FUNCTION

// FUNCTION: 0x10247820 size=0x4
struct CUnknown10247820 { char * sub_10247820(); };
char * CUnknown10247820::sub_10247820()
{
    return (char *)this + 8;
}
// END FUNCTION

// FUNCTION: 0x10247840 size=0x4
struct CUnknown10247840 { char * sub_10247840(); };
char * CUnknown10247840::sub_10247840()
{
    return (char *)this + 0x10;
}
// END FUNCTION

// FUNCTION: 0x10247860 size=0x33
struct CAccum64View {
    char pad0[8];
    __int64 m_qwA;
    char pad1[8];
    __int64 m_qwB;
    void sub_10247860(const __int64 *pValue);
};

// TARGET: CAccum64View::sub_10247860
void CAccum64View::sub_10247860(const __int64 *pValue)
{
    m_qwA += *pValue;
    m_qwB += *pValue;
}
// END FUNCTION

// FUNCTION: 0x102478b0 size=0x4
struct CUnknown102478b0 { int sub_102478b0(); };
int CUnknown102478b0::sub_102478b0()
{
    return *(int *)((char *)this + 0x24);
}
// END FUNCTION

// FUNCTION: 0x102478d0 size=0x6
namespace lifted {
extern int g_10753734;
}
int sub_102478d0()
{
    return lifted::g_10753734;
}
// END FUNCTION

// FUNCTION: 0x102478f0 size=0x84
#include <string.h>
#include <stdlib.h>

extern int g_10753738;

namespace block_102478f0 {
#pragma auto_inline(off)
struct CMeasureSection2 {
	char m_pad[0x24];
	CMeasureSection2 *m_pNext;
	CMeasureSection2 *sub_102478b0();
};
extern CMeasureSection2 *g_10753734;
CMeasureSection2 *CMeasureSection2::sub_102478b0()
{
	return m_pNext;
}
CMeasureSection2 *sub_102478d0()
{
	return g_10753734;
}
#pragma auto_inline(on)
}
using namespace block_102478f0;
int __cdecl sub_102479b0(const void *a, const void *b);

void sub_102478f0()
{
	if (g_10753738 <= 1)
		return;

	CMeasureSection2 *sortarray[128];
	CMeasureSection2 *ms;
	memset(sortarray, 512, (size_t)0.0);

	ms = sub_102478d0();
	int c = 0;
	while (ms) {
		sortarray[c++] = ms;
		ms = ms->sub_102478b0();
	}

	qsort(sortarray, c, sizeof(CMeasureSection2 *), sub_102479b0);

	int i;
	for (i = 0; i < c - 1; i++)
		sortarray[i]->m_pNext = sortarray[i + 1];
	sortarray[i]->m_pNext = 0;

	g_10753734 = sortarray[0];
}
// END FUNCTION

// FUNCTION: 0x102479b0 size=0x38
namespace block_102479b0 {
#pragma auto_inline(off)
struct CUnknown10247800
{
	char m_pad0000[0x18];
	__int64 m_key;
	__int64 *sub_10247800();
};
__int64 *CUnknown10247800::sub_10247800() { return &m_key; }
#pragma auto_inline(on)
}
using namespace block_102479b0;

// TARGET: sub_102479b0
int sub_102479b0(CUnknown10247800 **pA, CUnknown10247800 **pB)
{
	__int64 *a = (*pA)->sub_10247800();
	__int64 *b = (*pB)->sub_10247800();
	if (*a < *b)
		return 1;
	return -1;
}
// END FUNCTION

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
