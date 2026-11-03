// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1014eb70 size=0x1e
#include "CPhysicsAnimlinkEntityDeleteProxy.h"

// TARGET: CPhysicsAnimlinkEntityDeleteProxy::vfunc2
CPhysicsAnimlinkEntityDeleteProxy *CPhysicsAnimlinkEntityDeleteProxy::vfunc2(unsigned int flags)
{
	sub_10007c11();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1014ec50 size=0x3
#include "CPhysicsAnimlinkEntityDeleteProxy.h"
void CPhysicsAnimlinkEntityDeleteProxy::vfunc0(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1014ec70 size=0x93
#include "CBaseEntity.h"
#include "CPhysicsAnimlinkEntityDeleteProxy.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;
void __fastcall sub_1000460b(void *pAnimlink);	// stub 0x1000460b for 0x1014f380
void sub_10014614(void *pEntity);	// stub 0x10014614 for 0x101cd940

inline CGlobalEntityList_Ent *LookupEntity(unsigned int h)
{
	CGlobalEntityList_Slot *pSlot;
	return (h != 0xffffffff && (pSlot = &g_10566458->m_Slots[h & 0x1fff])->m_Serial == (int)(h >> 13)) ? pSlot->m_pEntity : 0;
}

// TARGET: CPhysicsAnimlinkEntityDeleteProxy::vfunc1
void CPhysicsAnimlinkEntityDeleteProxy::vfunc1(CBaseEntity *pEntity)
{
	if ((CGlobalEntityList_Ent *)pEntity == LookupEntity(m_hEntityA))
	{
		sub_1000460b(m_pAnimlink);
		sub_10014614(m_pAnimlink);
	}
	if ((CGlobalEntityList_Ent *)pEntity == LookupEntity(m_hEntityB))
	{
		sub_1000460b(m_pAnimlink);
		sub_10014614(m_pAnimlink);
	}
}
// END FUNCTION
