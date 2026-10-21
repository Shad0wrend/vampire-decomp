// CEnvMicrophone (RTTI .?AVCEnvMicrophone@@): CPointEntity -> CBaseEntity. CPointEntity is not modelled.
// primary vtable 0x1045963c (241 slots). Only what recovered code needs.
#pragma once

#include "CBaseEntity.h"

class CEnvMicrophone : public CBaseEntity
{
public:
	virtual void vfunc113();	// slot 113 "CEnvMicrophone::Activate": CBaseEntity::vfunc113, then resolves the measure target named at +0x20c into the handle at +0x454 (Warning "EnvMicrophone - Measure target not found..." when it is gone or has no edict), a missing name falls back to the entity itself (slot 1)

	char m_padEM[0x454 - sizeof(CBaseEntity)];
	unsigned int m_hMeasureTarget;	// 0x454
};
