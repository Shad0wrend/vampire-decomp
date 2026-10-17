// CBaseAnimating: entity with a studio model (CBaseToggle -> CBaseEntity).
#pragma once

#include "CBaseEntity.h"

class CBaseAnimating : public CBaseEntity
{
public:
	void *sub_100952d0(int a);	// GetModelPtr-like, returns the studio header
	int sub_100945e0(int index);	// "CBaseAnimating::GetFlexDescFacs"
};
