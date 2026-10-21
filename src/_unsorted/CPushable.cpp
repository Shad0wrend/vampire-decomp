// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1010f1f0 size=0x36
#include "CPushable.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CPushable *CPushable::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x484))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x46c))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1010f290 size=0xdc
#include "CPushable.h"
#include "CBreakable.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

static inline bool SpawnFlagBit7(const unsigned int *pFlags)
{
    return ((*pFlags >> 7) & 1) != 0;
}

void CPushable::vfunc103()
{
    if (SpawnFlagBit7((unsigned int *)((char *)this + 0x204))) {
        ((CBreakable *)this)->sub_1010d6a0();
        return;
    }
    *(unsigned int *)((char *)this + 0x4c) |= 0x2000;
    ((CEntityVSlots *)this)->slot104();
    {
        const char *pszName = *(const char **)((char *)this + 0x26c);
        ScopeTrace trace("CBaseEntity::SetSolid", pszName ? pszName : g_106b8540);
        ((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(6);
    }
    ((CEntityVSlots *)this)->slot93(8, 0);
    int nDummy;
    const char *pszModel = *((CEntityVSlots *)this)->slot9(&nDummy);
    ((CEntityVSlots *)this)->slot105(pszModel ? pszModel : g_106b8540);
    ((CEntityVSlots *)this)->slot223();
}
// END FUNCTION

// FUNCTION: 0x1010f4c0 size=0x9
int CPushable::vfunc35(int a) { return m_field4a8; }
// END FUNCTION
