// CBloodSplat: point entity that traces forward and leaves a blood decal.
#pragma once
#include "CBaseEntity.h"

class CBloodSplat : public CBaseEntity
{
public:
	void vfunc134();
	CBloodSplat *vfunc5(unsigned int flags);	// as in CLogicalEntity (transplant)
	void sub_1000cb8a();	// as in CLogicalEntity (transplant)
	void sub_101719d0(CBaseEntity *pPlayer);	// "cheat command" setup (caller CBasePlayer::vfunc451): places the splat 32 units above the player's slot 192 point, copies the angles, sets slot 202, thinks 0.1s later
	char m_pad03e0[0x450 - 0x3e0];
};
