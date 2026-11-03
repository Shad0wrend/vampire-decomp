// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10225d00 size=0x8
#include "CPropPadlock.h"
// TARGET: CPropPadlock::sub_10225d00
unsigned char CPropPadlock::sub_10225d00()
{
    unsigned char b;
    b = sub_100056aa();
    b &= 0xfd;
    return b;
}
// END FUNCTION

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
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
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

// FUNCTION: 0x10225f10 size=0x38
#include "CPropPadlock.h"
#include "CBaseVampireSkillEntity.h"

void sub_10003e63();

// TARGET: CPropPadlock::vfunc113
void CPropPadlock::vfunc113()
{
    sub_10003e63();
    ((CBaseVampireSkillEntity *)this)->sub_102256f0(*(const char **)((char *)this + 0x124));
    if (*(int *)((char *)this + 0x210) == 0)
        *(int *)((char *)this + 0x1fc) = 1;
    else
        *(int *)((char *)this + 0x1fc) = 2;
}
// END FUNCTION

// FUNCTION: 0x10225f60 size=0x139
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CPropPadlock.h"
#include "CUnknown100ee750.h"
#include "CCollisionProperty.h"
#include "CGlobalEntityList.h"
#include "ScopeTrace.h"

struct SPadlockWorker {
	void sub_10090950();
};

extern CGlobalEntityList *g_10566458;
extern float g_104492a4;
void sub_10011667();

static __forceinline CUnknown100ee750 *HandleGet(unsigned int h)
{
	CGlobalEntityList_Slot *pSlot;
	if (h == (unsigned int)-1 || (pSlot = &g_10566458->m_Slots[h & 0x1fff], pSlot->m_Serial != (int)(h >> 13)))
		return 0;
	return (CUnknown100ee750 *)pSlot->m_pEntity;
}

void CPropPadlock::vfunc274()
{
	volatile unsigned int *ph = (volatile unsigned int *)((char *)this + 0x80c);
	if (HandleGet(*ph))
		HandleGet(*ph)->sub_100ee750(this);
	sub_100a0b20();
	{
		ScopeTrace trace("CBaseEntity::SetSolid", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(6);
	}
	vfunc93(7, 0);
	*(int *)((char *)this + 0x6f0) = 1;
	((SPadlockWorker *)this)->sub_10090950();
	sub_100a5ea0(6, 0, 0, 0);
	sub_100ac4e0((int)sub_10011667, 0, 0);
	float t = gpGlobals->curtime;
	*(float *)((char *)this + 0x17c) = t + g_104492a4;
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
