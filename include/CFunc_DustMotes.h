// CFunc_DustMotes: declared by pcdecomp transplant for 0x10113c60 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CFunc_DustMotes : public CBaseEntity
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_10004fca();
	CFunc_DustMotes *sub_10113c30();	// as in CKeepUpright (transplant)
	char m_pad03e0[0x478 - 0x3e0];
};
