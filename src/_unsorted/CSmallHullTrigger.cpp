// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101cbc60 size=0x6
#include "datamap.h"
#include "CSmallHullTrigger.h"
namespace lifted {
extern char g_1059e8e8;
}
datamap_t * CSmallHullTrigger::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059e8e8);
}
// END FUNCTION

// FUNCTION: 0x101cbd80 size=0x10
#include "CSmallHullTrigger.h"

// TARGET: CSmallHullTrigger::vfunc103
void CSmallHullTrigger::vfunc103()
{
	CBaseEntity::vfunc103();
	sub_101c5080();
}
// END FUNCTION

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

// FUNCTION: 0x101cc4b0 size=0x4c
#include "CSmallHullTrigger.h"
void __fastcall sub_100cd2d0(void *p);
void __fastcall sub_1009df20(void *p);
void sub_100aa7b0(void *p);
// TARGET: CSmallHullTrigger::vfunc5
void *CSmallHullTrigger::vfunc5(unsigned int flags)
{
	sub_100cd2d0((char *)this + 0x580);
	sub_100cd2d0((char *)this + 0x568);
	sub_100cd2d0((char *)this + 0x4bc);
	sub_100cd2d0((char *)this + 0x4a4);
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
