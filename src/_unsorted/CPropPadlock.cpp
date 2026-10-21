// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10225d20 size=0x6d
#include "CPropPadlock.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1008b3c0();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CPropPadlock *CPropPadlock::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x7f4))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x7dc))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x7c4))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x7ac))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x794))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x748))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x730))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1008b3c0();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10225db0 size=0x10e
#include "ScopeTrace.h"
#include "CCollisionProperty.h"
#include "CPropPadlock.h"

void CPropPadlock::vfunc103()
{
	sub_1020ab90();
	*(int *)((char *)this + 0x19c) = 0xa0;
	sub_100b3640(0x40000);
	{
		ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(2);
	}
	{
		ScopeTrace trace("CBaseEntity::SetSolidFlags", m_name26c ? m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc580(8);
	}
	sub_100b3b00();
}
// END FUNCTION

// FUNCTION: 0x102260f0 size=0x7b
#include "CBaseEntity.h"
#include "CPropPadlock.h"
#include "CGlobalEntityList.h"
#include "CUnknown100ee750.h"

extern CGlobalEntityList *g_10566458;

struct CPadlockHandle {
    unsigned int m_h;
    CUnknown100ee750 *Get() const
    {
        if (m_h != 0xffffffff) {
            CGlobalEntityList_Slot *s = &g_10566458->m_Slots[m_h & 0x1fff];
            if (s->m_Serial == (int)(m_h >> 13))
                return (CUnknown100ee750 *)s->m_pEntity;
        }
        return 0;
    }
};

void CPropPadlock::vfunc266(int a)
{
    if (((CPadlockHandle *)((char *)this + 0x80c))->Get())
        ((CPadlockHandle *)((char *)this + 0x80c))->Get()->sub_100ee750(this);
    sub_100a0b20();
    sub_1018fb90(a);
}
// END FUNCTION
