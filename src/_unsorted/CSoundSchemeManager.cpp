// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10228700 size=0x74
#include "CSoundSchemeManager.h"
extern "C" void *memset(void *, int, unsigned int);
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);
struct Globals { char pad[0xc]; int curtime; };
extern Globals *g_1070b228;

void CSoundSchemeManager::vfunc2()
{
    memset(m_buf14, 0, sizeof(m_buf14));
    if (m_nAllocationCount < 2 && m_nGrowSize != -1) {
        m_nAllocationCount = 2;
        if (m_pMemory)
            m_pMemory = g_109f3638(m_pMemory, 2 * 0x20);
        else
            m_pMemory = g_109f3634(2 * 0x20);
    }
    m_pElements = m_pMemory;
    *(int *)&m_f0c = g_1070b228->curtime;
    m_b08 = 0;
}
// END FUNCTION
