// CGameSign: declared by pcdecomp transplant for 0x10212620 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CGameSign : public CBaseEntity
{
public:
	CGameSign *vfunc5(unsigned int flags);
	void sub_1000726b();
	CGameSign *sub_10212530();	// as in CKeepUpright (transplant)
	void vfunc41(void *pPlayer);	// slot 41, declared as a plain member: looks the player at the sign's stored position (+0x464) and, once the sign is active (+0x204 bit 0) and its delay has passed, lets a player with the required flags (+0x2090) use it
};
