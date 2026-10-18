// CItemContainerOneItemFiltered: lootable container that accepts one filtered item.
// Layout declared flat (vptr and base members are padding) until the bases are recovered.
#pragma once

class CItemContainerOneItemFiltered
{
public:
	char pad0[0x158c];
	int m_n158c;

	virtual void vfunc103();	// base container vfunc103, then CBaseEntity::sub_100b3b00, then stores 5 at +0x158c
	void sub_10209350();	// CItemContainer::vfunc103
	void sub_100b3b00();	// CBaseEntity::sub_100b3b00
};
