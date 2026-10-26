// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101cbda0 size=0x21
struct CSmallHullTriggerX
{
    void sub_10008ef4(void *pOther);
    void sub_101cbda0(void *pOther);
};

// TARGET: sub_101cbda0
void CSmallHullTriggerX::sub_101cbda0(void *pOther)
{
    sub_10008ef4(pOther);
    void *pObj = *(void **)((char *)pOther + 0x9c);
    if (pObj != 0) {
        void (__fastcall *pfn)(void *) = (void (__fastcall *)(void *))(*(void ***)pObj)[0x53c / 4];
        pfn(pObj);
    }
}
// END FUNCTION

// FUNCTION: 0x101cbde0 size=0x2f
// TARGET: CSmallHullTrigger::vfunc176
#include "CSmallHullTrigger.h"
#include "CEntityVSlots.h"

void CSmallHullTrigger::vfunc176(CBaseEntity *pOther) {
    CBaseTrigger::vfunc176(pOther);
    if (!((CEntityVSlots *)pOther)->slot116()) {
        CEntityVSlots *pObj = *(CEntityVSlots **)((char *)pOther + 0x9c);
        if (pObj) {
            pObj->slot336();
        }
    }
}
// END FUNCTION
