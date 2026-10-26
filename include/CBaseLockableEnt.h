// CBaseLockableEnt (RTTI .?AVCBaseLockableEnt@@): a CBaseEntity with a lock.
#pragma once

#include "CBaseEntity.h"

class CBaseLockableEnt : public CBaseEntity
{
public:
	bool sub_10224100();	// 0x10224100: true while the lock state at +0x780 is below 3
};
