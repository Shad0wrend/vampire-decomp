// CGameSign: declared by pcdecomp transplant for 0x10212620 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CBasePlayer;

class CGameSign : public CBaseEntity
{
public:
	CGameSign *vfunc5(unsigned int flags);
	void sub_1000726b();
	CGameSign *sub_10212530();	// as in CKeepUpright (transplant)
	void vfunc41(void *pPlayer);	// slot 41, declared as a plain member: looks the player at the sign's stored position (+0x464) and, once the sign is active (+0x204 bit 0) and its delay has passed, lets a player with the required flags (+0x2090) use it
	void sub_10212a30(CBasePlayer *pPlayer);	// the player stops using the sign (when it is the sign the player is using, handle at player+0x1040): clears the player's flags 1 / 8 unless bit 1 of +0x204, tells the player's client (user message 0x10726088: 0, the float at +0x45c, the sign's engine index) and removes the sign unless bit 2 of +0x204
};
