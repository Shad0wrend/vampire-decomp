// CItemContainerOneItemFiltered: lootable container that accepts one filtered item.
// Layout declared flat (vptr and base members are padding) until the bases are recovered.
#pragma once

class CItemContainerOneItemFiltered
{
public:
	virtual void vfunc103();	// base container vfunc103, then CBaseEntity::sub_100b3b00, then stores 5 at +0x158c
	char pad0004[0x158c - 4];
	int m_n158c;

	void sub_10209350();	// CItemContainer::vfunc103
	void sub_100b3b00();	// CBaseEntity::sub_100b3b00
};
