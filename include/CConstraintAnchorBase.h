// CConstraintAnchorBase: the class between CBaseEntity and CRopeKeyframe (its constructor body is the function
// at 0x100090fc). It adds no members the recovered layout needs, so it only carries the constructor.
#pragma once
#include "CBaseEntity.h"

class CConstraintAnchorBase : public CBaseEntity
{
public:
	CConstraintAnchorBase(int nEntityBits);
};
