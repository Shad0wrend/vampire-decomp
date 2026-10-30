// Matched functions only. Written by pcdecomp; change it through pcdecomp.
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
