// CEnvWind: env_wind entity (derived from CBaseEntity at +0x0). Only what the matched functions need.
#pragma once

#include "CBaseEntity.h"

class CEnvWind : public CBaseEntity
{
public:
	virtual void vfunc113();

	void sub_100a53d0(int a);
	CEnvWind *vfunc5(unsigned int flags);	// as in CLogicalEntity (transplant)
	void sub_1000cb8a();	// as in CLogicalEntity (transplant)
};
