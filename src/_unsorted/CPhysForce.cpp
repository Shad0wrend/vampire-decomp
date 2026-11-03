// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10026040 size=0x6
#include "datamap.h"
#include "CPhysForce.h"
namespace lifted {
extern char g_10536e28;
}
datamap_t * CPhysForce::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10536e28);
}
// END FUNCTION

// FUNCTION: 0x10027670 size=0x1
#include "CPhysForce.h"
void CPhysForce::vfunc242()
{
}
// END FUNCTION

// FUNCTION: 0x10027690 size=0x1e
#include "CPhysForce.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysForce::vfunc5
CPhysForce *CPhysForce::vfunc5(unsigned int flags)
{
	sub_10014470();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10027700 size=0x2a
#include "CPhysForce.h"

// TARGET: CPhysForce::vfunc103
void CPhysForce::vfunc103()
{
    unsigned int flags = *(unsigned int *)((char *)this + 0x204);
    if ((flags & 8) != 0) {
        *(int *)((char *)this + 0x468) = 1;
    } else {
        *(int *)((char *)this + 0x468) = 3;
    }
    if ((flags & 1) != 0) {
        sub_1000b5d2();
    }
}
// END FUNCTION

// FUNCTION: 0x10027740 size=0x27
// TARGET: CPhysForce::vfunc130
#include "CPhysForce.h"

void CPhysForce::vfunc130(int a)
{
	CBaseEntity::vfunc130(a);
	if (m_pController)
		((CPhysForceController *)m_pController)->vfunc1(&m_Motion);
}
// END FUNCTION

// FUNCTION: 0x10027780 size=0x92
#include "CPhysForce.h"
#include "CGlobalEntityList.h"

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct SEnt {
	S10(a0) S10(a1) S10(a2) S10(a3) S10(a4) S10(a5) S10(a6) S10(a7) S10(a8) S10(a9)
	S10(b0) S10(b1) S10(b2) S10(b3) S10(b4) S10(b5) S10(b6) S10(b7) S10(b8) S10(b9)
	S10(c0) S10(c1) S10(c2) S10(c3)
	virtual void d0(); virtual void d1();
	virtual void vfunc242();
};

extern CGlobalEntityList *g_10566458;
extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];

void CPhysForce::vfunc113()
{
	CBaseEntity::vfunc113();
	unsigned int h = m_hAttached;
	CGlobalEntityList_Slot *pSlot;
	if (h == (unsigned int)-1
		|| (pSlot = &g_10566458->m_Slots[h & 0x1fff], pSlot->m_Serial != (int)(h >> 13))
		|| pSlot->m_pEntity == 0) {
		const char *name = m_pszAttachName;
		if (!name)
			name = g_106b8540;
		CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, name, 0, 0);
		if (pEnt)
			m_hAttached = *pEnt->vfunc1();
		else
			m_hAttached = (unsigned int)-1;
	}
	((SEnt *)this)->vfunc242();
	if (m_pController)
		sub_10027960();
}
// END FUNCTION
