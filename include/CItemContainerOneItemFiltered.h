// CItemContainerOneItemFiltered: lootable container that accepts one filtered item.
// Layout declared flat (vptr and base members are padding) until the bases are recovered.
#pragma once

class CItemContainerOneItemFiltered
{
public:
	virtual void vfunc103();	// base container vfunc103, then CBaseEntity::sub_100b3b00, then stores 5 at +0x158c
	char pad0004[0x158c - 4];
	int m_n158c;

	CItemContainerOneItemFiltered *sub_10209f60();	// constructor stub (0x10209f60)
	void sub_10209350();	// CItemContainer::vfunc103
	void sub_100b3b00();	// CBaseEntity::sub_100b3b00
	CItemContainerOneItemFiltered *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_10005718();	// as in CPhysForce (transplant)
	char m_pad1590[0x1a38 - 0x1590];
};
