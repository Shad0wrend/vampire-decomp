// CItemContainer: lootable container. Layout declared flat (vptr and base members are padding) until the bases are recovered.
#pragma once

class CBaseEntity;

struct CItemContainerHandle
{
	unsigned int m_Index;
};

class CItemContainer
{
public:
	char pad0[0x1a28];
	CItemContainerHandle m_hUser;	// EHANDLE at +0x1a28 (the entity using the container)
	CItemContainerHandle m_hLock;	// EHANDLE to the CItemContainerLock

	void *sub_10209a20();	// returns the lock entity (dynamic_cast<CItemContainerLock *>) or NULL
	void vfunc71();
	CItemContainer *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_10005718();	// as in CPhysForce (transplant)
	void vfunc350(int unused);	// when the handle at +0x1a28 resolves, sub_1000e020(that entity, 1)
	void sub_1000e020(CBaseEntity *pEnt, int flag);
};
