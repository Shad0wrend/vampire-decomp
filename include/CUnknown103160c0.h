// CUnknown103160c0: a group object holding up to 16 entity handles at +0x1c (count at +0x5c); sub_103160c0 is
// the member getter, which refuses while the first member's counter at +0x5bb0 is positive.
#pragma once

class CBaseEntity;

class CUnknown103160c0
{
public:
	char m_pad0000[0x1c];
	unsigned int m_hMembers[16];	// 0x1c
	int m_nMembers;	// 0x5c

	CBaseEntity *sub_103160c0(int index);
	int sub_103160a0();	// member count (called through the stub at 0x10013426)
	void sub_103161a0(int pEnemy);	// "SquadNewEnemy": warns "ERROR: SquadNewEnemy() - pEnemy is NULL" without an enemy; else every member that is not the enemy itself, has no condition 0x46 and whose memory list is this group's (+8) takes the enemy (sub_10279a50), clears +0x5d9c and runs its schedule update
};
