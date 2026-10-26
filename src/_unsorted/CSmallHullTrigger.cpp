// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
