// CUnknown100b62a0: unnamed helper reached through 0x100b62a0, called on a CBaseAnimating model with the
// character as its single argument (CExpressionTable::PrecacheCharacter). Real name not yet known.
#pragma once

class CBaseAnimating;
#include "CUnknown100b6f10.h"

class CUnknown100b62a0
{
public:
	CUnknown100b6f10 *sub_100b62a0(CBaseAnimating *pChar);	// 0x100b62a0 (ret 4, eax): returns the model's animation record used by PrecacheCharacter (0 when there is none)
};
