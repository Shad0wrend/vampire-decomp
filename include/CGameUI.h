// CGameUI (RTTI .?AVCGameUI@@): game_ui entity (derived from CBaseEntity, which is not modelled here). Declared flat,
// only what matched code needs, as plain members.
#pragma once

class CGameUI
{
public:
	CGameUI *vfunc5(unsigned int flags);	// scalar deleting destructor: destroys the 14 COutputEvent members at +0x458 .. +0x590 (0x18 bytes each, last first), the base destructor body (sub_1000cb8a), and frees the object when bit 0 of flags is set
};
