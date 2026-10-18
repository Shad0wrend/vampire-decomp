// CItemContainerLock: only the members that decompiled code needs are declared.
// Layout is declared flat (vptr and base members are padding) until the bases are recovered.
#pragma once

class CItemContainerLock
{
public:
	char pad0[0x780];
	int m_unk780;

	void vfunc275();
	void vfunc103();	// base vfunc103, then sets bit 0x40 in the flags at +0x19c
};
