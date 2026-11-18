// CBloodSplat: point entity that traces forward and leaves a blood decal.
#pragma once
#include "CPointEntity.h"
#include "CBaseEntity.h"

class CBloodSplat : public CPointEntity
{
public:
	void vfunc134();
	virtual CBaseEntity *vfunc5(unsigned int flags);	// as in CLogicalEntity (transplant)
	void sub_1000cb8a();	// as in CLogicalEntity (transplant)
	void sub_101719d0(CBaseEntity *pPlayer);	// "cheat command" setup (caller CBasePlayer::vfunc451): places the splat 32 units above the player's slot 192 point, copies the angles, sets slot 202, thinks 0.1s later
};
