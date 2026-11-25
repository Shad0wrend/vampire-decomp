// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1007c730 size=0xa2
#include "C_RecipientFilter.h"

extern void *g_10226214;

struct BaseView { int sub_1007db70(); };

// TARGET: CPASAttenuationFilter::vfunc0
void *CPASAttenuationFilter::vfunc0(int flags)
{
    CUtlVector<int> *v = &m_Recipients;
    for (int i = v->m_Size; --i >= 0; )
        ((BaseView *)v)->sub_1007db70();
    v->m_Size = 0;
    if (v->m_Memory.m_nGrowSize != -1)
    {
        if (v->m_Memory.m_pMemory)
        {
            Plat_Free(v->m_Memory.m_pMemory);
            v->m_Memory.m_pMemory = 0;
        }
        v->m_Memory.m_nAllocationCount = 0;
    }
    v->m_pElements = v->m_Memory.m_pMemory;
    if (v->m_Memory.m_nGrowSize != -1)
    {
        if (v->m_Memory.m_pMemory)
        {
            Plat_Free(v->m_Memory.m_pMemory);
            v->m_Memory.m_pMemory = 0;
        }
        v->m_Memory.m_nAllocationCount = 0;
    }
    *(void **)this = (void *)&g_10226214;
    if (flags & 1)
        operator delete(this);
    return this;
}
// END FUNCTION
