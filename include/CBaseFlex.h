// CBaseFlex: entity with flex animation (CBaseAnimatingOverlay -> CBaseAnimating -> ... -> CBaseEntity). Bases flattened.
#pragma once
#include "CBaseEntity.h"

class CBaseFlex : public CBaseEntity
{
public:
	void sub_100b5b00(const float *v);	// slot 277 override: stores three floats at +0x848
};
