// CItemGKeyring: declared by pcdecomp transplant for 0x10407a70 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CItemGKeyring : public CBaseEntity
{
public:
	CItemGKeyring *sub_10407b30();
	void sub_10407e90(CBaseEntity *pEnt);	// stub 0x10010adc, called by CBasePlayer::sub_101784c0 with the entity it was given
	CItemGKeyring *vfunc5(unsigned int flags);	// slot 5 (scalar deleting destructor, plain member): the vector at +0x914 goes, then the weapon base's destructor body (sub_10250c50), then the delete when bit 0 of flags is set
};
