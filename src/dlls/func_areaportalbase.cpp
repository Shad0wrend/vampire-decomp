// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 3 blocks
#include "vampire.h"

// FUNCTION: 0x1010c900 size=0x1e
#include "CFuncAreaPortalBase.h"

void sub_100aa7b0(void *p);

// TARGET: CFuncAreaPortalBase::vfunc5
CBaseEntity *CFuncAreaPortalBase::vfunc5(unsigned int flags)
{
	sub_100156b8();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1010c930 size=0xb9
#include "CFuncAreaPortalBase.h"
#include "CUtlLinkedList8.h"

extern int vt_1045e41c[];
extern CUtlLinkedList8 g_10709680;

// TARGET: CFuncAreaPortalBase::sub_1010c930
void CFuncAreaPortalBase::sub_1010c930()
{
	unsigned short i = m_nPortalSlot;
	*(int **)this = vt_1045e41c;
	if (g_10709680.IsInList(i))
	{
		CUtlLinkedList8Node *pMem = g_10709680.m_pMemory;
		CUtlLinkedList8Node *n = &pMem[i];
		if (n->m_Previous != 0xffff)
			pMem[n->m_Previous].m_Next = n->m_Next;
		else
			g_10709680.m_Head = n->m_Next;
		if (n->m_Next != 0xffff)
			pMem[n->m_Next].m_Previous = n->m_Previous;
		else
			g_10709680.m_Tail = n->m_Previous;
		n->m_Next = i;
		n->m_Previous = i;
		--g_10709680.m_ElementCount;
	}
	g_10709680.m_pMemory[i].m_Next = g_10709680.m_FirstFree;
	g_10709680.m_FirstFree = i;
	sub_1000cb8a();
}
// END FUNCTION

// FUNCTION: 0x1010ca20 size=0xac
#include "CFuncAreaPortalBase.h"


bool CFuncAreaPortalBase::vfunc241(const float *pViewOrigin)
{
	if (m_nPortalKey == -1)
		return false;
	float plane[4];
	if (!engine->vfunc113(pViewOrigin, m_nPortalKey, plane))
		return true;
	bool bOpen = false;
	if (plane[2] * pViewOrigin[2] + plane[1] * pViewOrigin[1] + plane[0] * pViewOrigin[0] - plane[3] + 80.0f > 0.0f)
		bOpen = true;
	engine->vfunc102(m_nPortalKey, bOpen);
	return bOpen;
}
// END FUNCTION
