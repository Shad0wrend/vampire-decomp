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
};
