// CItemContainer: lootable container. Layout declared flat (vptr and base members are padding) until the bases are recovered.
#pragma once

#include "COutputEvent.h"

class CBaseEntity;

struct CItemContainerHandle
{
	unsigned int m_Index;
};

class CItemContainer
{
public:
	char pad0[0x1fc];
	int m_nTakeDamage1fc;	// 0x1fc
	int m_nField200;	// 0x200: 2 once the container is broken
	char pad204[0x19e0 - 0x204];
	COutputEvent m_Output19e0;	// 0x19e0: the break output
	char pad19f8[0x1a28 - 0x19f8];
	CItemContainerHandle m_hUser;	// EHANDLE at +0x1a28 (the entity using the container)
	CItemContainerHandle m_hLock;	// EHANDLE to the CItemContainerLock
	const char *m_pszBreakModel1a30;	// 0x1a30: the model of the broken container

	void *sub_10209a20();	// returns the lock entity (dynamic_cast<CItemContainerLock *>) or NULL
	char sub_100eef10();	// stub 0x100127ec: asked by the lock; true when the container is open (the byte at +0x1480)
	void vfunc71();
	CItemContainer *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_10005718();	// as in CPhysForce (transplant)
	void vfunc350(int unused);	// when the handle at +0x1a28 resolves, sub_1000e020(that entity, 1)
	void sub_1000e020(CBaseEntity *pEnt, int flag);
	CItemContainer *sub_102087e0();	// constructor body: base constructor (stub 0x100046c9), the three embedded lists at +0x19b0 / +0x19c8 / +0x19e0, the vftable, the open flag (+0x1480), the lock and user handles (-1)
	void sub_100046c9();	// base class constructor body (stub 0x100046c9)
	void sub_10209b20(CBaseEntity *pActivator);	// breaks the container (called by the damage slot 142): unless it is already broken switches to the break model (slot 105, slot 225, a vphysics object and its slot 24), removes flag 0x20000000, marks it broken (+0x200 = 2, +0x1fc = 0), removes the lock entity and fires the break output at +0x19e0; \"Broken container ... invalid break model\" warning for a container without one
};
