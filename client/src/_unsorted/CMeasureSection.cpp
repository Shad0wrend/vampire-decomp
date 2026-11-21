// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010de60 size=0x58
#include "CMeasureSection.h"
struct CUnknown102477a0 { void sub_1010df20(); };
struct CUnknown102477c0 { void sub_1010df30(); };
extern CMeasureSection *g_104df6fc;
extern int g_104df700;
CMeasureSection::CMeasureSection(int nName)
    : m_n08(0), m_n0c(0), m_n10(0), m_n14(0), m_n18(0), m_n1c(0)
{
    m_n20 = nName;
    ((CUnknown102477a0 *)this)->sub_1010df20();
    ((CUnknown102477c0 *)this)->sub_1010df30();
    m_n10 = 0;
    m_n14 = 0;
    m_pNext24 = g_104df6fc;
    g_104df6fc = this;
    g_104df700++;
}
// END FUNCTION
