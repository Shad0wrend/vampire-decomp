// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1020f850 size=0x6
#include "datamap.h"
#include "CLogicVisible.h"
namespace lifted {
extern char g_105ab490;
}
datamap_t * CLogicVisible::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105ab490);
}
// END FUNCTION

// FUNCTION: 0x1020fa30 size=0x78
#include "CLogicVisible.h"
#include "UtlMem.h"
void sub_100aa7b0(void *p);

struct CLogicVisibleVec : UtlMem {
    int m_Size;
    int *m_pElements;
};
struct CLogicVisibleItem {
    void sub_10015708();
};

CLogicVisible *CLogicVisible::vfunc5(unsigned int flags)
{
    CLogicVisibleVec *pVec = (CLogicVisibleVec *)((char *)this + 0x4a0);
    pVec->m_Size = 0;
    pVec->sub_10185100();
    pVec->m_pElements = pVec->m_pMemory;
    pVec->sub_10185100();
    pVec = (CLogicVisibleVec *)((char *)this + 0x48c);
    pVec->m_Size = 0;
    pVec->sub_10185100();
    pVec->m_pElements = pVec->m_pMemory;
    pVec->sub_10185100();
    ((CLogicVisibleItem *)((char *)this + 0x474))->sub_10015708();
    ((CLogicVisibleItem *)((char *)this + 0x45c))->sub_10015708();
    sub_1000cb8a();
    if (flags & 1)
        sub_100aa7b0(this);
    return this;
}
// END FUNCTION
