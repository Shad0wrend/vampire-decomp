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
