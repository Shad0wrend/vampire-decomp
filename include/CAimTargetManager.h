// CAimTargetManager (RTTI .?AVCAimTargetManager@@): keeps the list of aim targets (the global 0x10703650, the SDK's
// g_AimManager); base IEntityListener, both slots its own (vtable 0x10455e80).
#pragma once

#include "utlvector.h"
#include "IEntityListener.h"

class CBaseEntity;

class CAimTargetManager : public IEntityListener
{
public:
	virtual void OnEntityCreated(CBaseEntity *pEntity);	// 0x100f6990: nothing
	virtual void OnEntityDeleted(CBaseEntity *pEntity);	// 0x100f69b0: remove it from the target list

	CUtlVector<CBaseEntity *> m_targetList;	// +4 (SDK: m_targetList)
};
