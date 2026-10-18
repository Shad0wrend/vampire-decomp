// CHudTimer (RTTI .?AVCHudTimer@@): hud timer entity. Only what decompiled code needs.
#pragma once
#include "CBaseEntity.h"

class CHudTimer : public CBaseEntity
{
public:
	void sub_1012d5c0();	// own helper (called before the base class work)
	void sub_1012d720();	// slot 180 override: sub_1012d5c0(), then CBaseEntity::vfunc180()
};
