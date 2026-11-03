// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100f8660 size=0x56
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
void CGlobalEntityList::vfunc0(CGlobalEntityList_Ent *pEnt, unsigned int handle)
{
	int index = handle & 0x1fff;
	m_iNumEnts++;
	if (index > m_n1803c)
		m_n1803c = index;
	CBaseEntity *pBase = pEnt->vfunc4();
	for (int i = m_nListeners - 1; i >= 0; i--)
		m_ppListeners[i]->OnEntityCreated(pBase);
}
// END FUNCTION

// FUNCTION: 0x100f86e0 size=0x9
#include "CGlobalEntityList.h"
void CGlobalEntityList::vfunc1(int a, int b) { m_iNumEnts--; }
// END FUNCTION
