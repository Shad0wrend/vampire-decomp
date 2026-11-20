// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1010f0a0 size=0x6
#include "CPushable.h"
#include "datamap.h"
namespace lifted {
extern char g_1056e868;
}
datamap_t *CPushable::vfunc82()
{
    return (datamap_t *)&lifted::g_1056e868;
}
// END FUNCTION

// FUNCTION: 0x1010f1b0 size=0x5
#include "CPushable.h"
bool CPushable::vfunc73(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1010f1d0 size=0x5
#include "CPushable.h"
bool CPushable::vfunc74(int a0)
{
    return 0;
}
// END FUNCTION

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
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
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
        ((CBreakable *)this)->CBreakable::vfunc103();
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

// FUNCTION: 0x1010f3b0 size=0x5
#include "CPushable.h"
#include "CBaseEntity.h"

// TARGET: CPushable::vfunc180
// the game's 0x1010f3b0: a tail call (jmp) of CBaseEntity::vfunc180
void CPushable::vfunc180()
{
	((CBaseEntity *)this)->CBaseEntity::vfunc180();
}
// END FUNCTION

// FUNCTION: 0x1010f3d0 size=0x43
#include "CPushable.h"
#include "CBaseEntity.h"
struct CPushablePhysObj
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(int a); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(void *a, void *b);
};
bool CPushable::vfunc223()
{
	((CBaseEntity *)this)->sub_100a5ea0(6, 0, 0, 0);
	CPushablePhysObj *pObj = (CPushablePhysObj *)m_pObj36c;
	if (pObj)
	{
		pObj->v11(m_field49c);
		pObj->v17(&m_field4a0, &m_field4a4);
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x1010f440 size=0x17
#include "CPushable.h"
#include "CBreakable.h"

// TARGET: CPushable::vfunc142
int CPushable::vfunc142(void *pInfo)
{
	if (*(char *)((char *)this + 0x204) & 0x80)
		return ((CBreakable *)this)->CBreakable::vfunc142((CTakeDamageInfo *)pInfo);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1010f470 size=0x35
#include "CPushable.h"
#include "CBreakable.h"
#include "CBaseEntity.h"
#include "gamevcollisionevent_t.h"
void CPushable::vfunc230(int index, gamevcollisionevent_t *pEvent)
{
	CBaseEntity *pOther = pEvent->pEntities[index == 0];
	if (pOther->m_pA8)
		((CBaseEntity *)this)->CBaseEntity::vfunc230(index, pEvent);
	else
		((CBreakable *)this)->CBreakable::vfunc230(index, (void *)pEvent);
}
// END FUNCTION

// FUNCTION: 0x1010f4c0 size=0x9
#include "CPushable.h"
int CPushable::vfunc35(int a) { return m_field4a8; }
// END FUNCTION
