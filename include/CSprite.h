// CSprite: declared by pcdecomp transplant for 0x1042f150 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

class CSprite
{
public:
	CSprite *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	void sub_1042ef70();	// sprite on/off state update (flags and think function), then CBaseEntity::ForceTransmit
	void sub_100ac4e0(void *pFunc, int a, int b);	// sets a think function (called through the stub at 0x10007fe5)
};
