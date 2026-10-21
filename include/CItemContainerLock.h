// CItemContainerLock: only the members that decompiled code needs are declared.
// Layout is declared flat (vptr and base members are padding) until the bases are recovered.
#pragma once

class CItemContainerLock
{
public:
	char pad0[0x780];
	int m_unk780;
	char pad784[0x80c - 0x784];
	unsigned int m_hContainer;	// 0x80c: EHANDLE to the container this lock is attached to

	void vfunc275();
	void vfunc103();	// base vfunc103, then sets bit 0x40 in the flags at +0x19c
	CItemContainerLock *vfunc5(unsigned int flags);	// as in CMomentaryRotButton (transplant)
	void vfunc113();	// slot 113 (plain member): base update, then finds the container named by the string at +0x124 and attaches this lock to it (sub_10209ac0), or warns "attached to non existent container" and removes itself
	int vfunc34(int a);	// slot 34 (plain member): 2 while the attached container answers sub_100eef10, else 3 when sub_10224100 fails, else 2 + (sub_10224910(a) != 0)
	bool sub_10224100();	// stub 0x10001d2f
	bool sub_10224910(int a);	// stub 0x1000ffa1
};
