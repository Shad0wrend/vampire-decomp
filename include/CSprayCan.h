// CSprayCan: declared by pcdecomp transplant for 0x10184420 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

class CSprayCan
{
public:
	CSprayCan *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	void sub_101714a0(class CSprayEntityView *pPlayer);	// the spray can's start (called by CBasePlayer::vfunc450 with the player): moves to the player's centre raised by a constant, takes the player's view angles (+0x206c) and the player as owner, clears +0x450, thinks again 0.1 seconds later and plays "player/sprayer.wav" to the players that can hear it
};
