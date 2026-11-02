// CEnvSpark (RTTI .?AVCEnvSpark@@): env_spark point entity (CPointEntity -> CBaseEntity). Only what decompiled code needs.
#pragma once

#include "CBaseEntity.h"

class CEnvSpark : public CBaseEntity
{
public:
	virtual void vfunc104();	// precache

	char m_padSpark[0x454 - 0x3e0];
	int m_nGlowModelIndex;	// 0x454
	CEnvSpark *sub_10103d70();	// as in CKeepUpright (transplant)
	void vfunc103();	// "CEnvSpark::Spawn"-like: clears the think/touch function, installs the spark think when bit 6 of the flags at +0x204 is set, randomises the next think, clamps the float at +0x450 to zero, then slot 104
	void sub_100ac4e0(void *pFunc, int a, int b);	// sets a think function (called through the stub at 0x10007fe5)
public:
    virtual datamap_t * vfunc82();
    CEnvSpark *vfunc5(unsigned int flags);	// as in CNPC_VGargoyle (transplant)
};
