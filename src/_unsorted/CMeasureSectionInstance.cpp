// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10247a00 size=0x6c
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
