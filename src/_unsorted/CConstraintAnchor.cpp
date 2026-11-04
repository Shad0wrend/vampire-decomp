// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10029f10 size=0x125
#include "CConstraintAnchor.h"
#include "CUtlVector20.h"
#include "CUtlMemory20.h"
#include "CCineNPCSlots.h"
#include "CBaseEntitySlots.h"
#include "CGlobalEntityList.h"
#include "Vector.h"

extern CGlobalEntityList *g_10566458;
extern CUtlVector20 g_106b858c;
void sub_101cd940(CConstraintAnchor *pEntity);

struct CAnchorSlots
{
	CCS_V100(a) CCS_V100(b) CCS_V10(c0) CCS_V10(c1)
	virtual Vector *slot220();
};

struct CAnchorRecord
{
	Vector m_vecOrigin;
	unsigned int m_hParent;
	const char *m_pszName;
	CAnchorRecord *sub_1002cc60();
};

struct CAnchorSlot
{
	CBaseEntitySlots *m_pEntity;
	int m_Serial;
	int m_pad;
};

struct CAnchorHandle
{
	unsigned int m_Index;

	CBaseEntitySlots *Get()
	{
		if (m_Index != 0xffffffff)
		{
			CAnchorSlot *pSlot = (CAnchorSlot *)((char *)g_10566458 + 4) + (m_Index & 0x1fff);
			if (pSlot->m_Serial == (int)(m_Index >> 13))
				return pSlot->m_pEntity;
		}
		return 0;
	}
};

struct CAnchorView : CConstraintAnchor
{
	char pad[0x254 - sizeof(CConstraintAnchor)];
	CAnchorHandle m_hParent;
	char pad2[0x26c - 0x258];
	const char *m_pszName;

	CBaseEntitySlots *Lookup()
	{
		if (m_hParent.m_Index != 0xffffffff)
		{
			CAnchorSlot *pSlot = (CAnchorSlot *)((char *)g_10566458 + 4) + (m_hParent.m_Index & 0x1fff);
			if (pSlot->m_Serial == (int)(m_hParent.m_Index >> 13))
			{
				CBaseEntitySlots *p = pSlot->m_pEntity;
				return p;
			}
		}
		return 0;
	}
};

// TARGET: CConstraintAnchor::vfunc103
void CConstraintAnchor::vfunc103()
{
	CAnchorView *self = (CAnchorView *)this;
	if (self->Lookup())
	{
		CBaseEntitySlots *pParentEnt = self->m_hParent.Get();
		const char *pszName = self->m_pszName;
		Vector *pOrigin = ((CAnchorSlots *)this)->slot220();
		int index = g_106b858c.m_size;
		if ((g_106b858c.m_size + 1) > g_106b858c.m_allocationCount)
			((CUtlMemory20 *)&g_106b858c)->sub_1002ccc0(g_106b858c.m_size - g_106b858c.m_allocationCount + 1);
		g_106b858c.m_size++;
		g_106b858c.m_pElements = g_106b858c.m_pMemory;
		g_106b858c.sub_1002cc10(index, 1);
		CAnchorRecord *pRecord = (CAnchorRecord *)(g_106b858c.m_pMemory + index * 20);
		if (pRecord)
			pRecord->sub_1002cc60();
		pRecord = (CAnchorRecord *)(g_106b858c.m_pMemory + index * 20);
		if (pParentEnt)
			pRecord->m_hParent = *pParentEnt->slot1();
		else
			pRecord->m_hParent = 0xffffffff;
		pRecord->m_pszName = pszName;
		pRecord->m_vecOrigin.x = pOrigin->x;
		pRecord->m_vecOrigin.y = pOrigin->y;
		pRecord->m_vecOrigin.z = pOrigin->z;
		sub_101cd940(this);
	}
}
// END FUNCTION

// FUNCTION: 0x1002ca80 size=0x1e
#include "CConstraintAnchor.h"

void sub_100aa7b0(void *p);

// TARGET: CConstraintAnchor::vfunc5
CConstraintAnchorBase *CConstraintAnchor::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
