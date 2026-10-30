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
	char pad204[0x210 - 0x204];
	int m_iHealth;	// 0x210
	char pad214[0x19e0 - 0x214];
	COutputEvent m_Output19e0;	// 0x19e0: the break output
	char pad19f8[0x1a28 - 0x19f8];
	CItemContainerHandle m_hUser;	// EHANDLE at +0x1a28 (the entity using the container)
	CItemContainerHandle m_hLock;	// EHANDLE to the CItemContainerLock
	const char *m_pszBreakModel1a30;	// 0x1a30: the model of the broken container

	void *sub_10209a20();	// returns the lock entity (dynamic_cast<CItemContainerLock *>) or NULL
	char sub_100eef10();	// stub 0x100127ec: asked by the lock; true when the container is open (the byte at +0x1480)
	char sub_100eedd0();	// stub 0x1000cc57: asked by the lock's slot 35 when the lock is closed (the byte at +0x1480 clear)
	void vfunc71();
	void vfunc104();	// base vfunc104, precaches the model name (slot 9) and the break model
	CItemContainer *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_10005718();	// as in CPhysForce (transplant)
	unsigned int vfunc35(int unused);	// slot 35: 0 while the handle at +0x1a28 names a live entity (the entity list entry's serial matches), else the dword at +0x1a34
	void vfunc350(int unused);	// when the handle at +0x1a28 resolves, sub_1000e020(that entity, 1)
	void sub_1000e020(CBaseEntity *pEnt, int flag);
	CItemContainer *sub_102087e0();	// constructor body: base constructor (stub 0x100046c9), the three embedded lists at +0x19b0 / +0x19c8 / +0x19e0, the vftable, the open flag (+0x1480), the lock and user handles (-1)
	void sub_100046c9();	// base class constructor body (stub 0x100046c9)
	void sub_10209b20(CBaseEntity *pActivator);	// breaks the container (called by the damage slot 142): unless it is already broken switches to the break model (slot 105, slot 225, a vphysics object and its slot 24), removes flag 0x20000000, marks it broken (+0x200 = 2, +0x1fc = 0), removes the lock entity and fires the break output at +0x19e0; \"Broken container ... invalid break model\" warning for a container without one
};
