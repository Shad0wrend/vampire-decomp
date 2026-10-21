// CUnknown1020aea0: an item whose kind (1 or 2) at +0x784 picks the feat that scales a value for a player; real name not yet known.
// Called by CItemContainerLock::vfunc41 and two unnamed functions at 0x1020b040 / 0x10217d60.
#pragma once

class CUnknown1020aea0
{
public:
	char pad0[0x784];
	int m_nKind;	// 0x784: 1 or 2 (picks the feat id 0 / 2)

	float sub_1020aea0(void *pPlayer);	// (1 - feat value * constant) / the player's float at +0x1488, the feat is the one of id 0 for kind 1 and id 2 for kind 2 (value 1.0 for other kinds)
};
