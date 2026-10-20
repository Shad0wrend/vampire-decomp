// CPropRadio: usable radio prop. Only what decompiled code needs (base chain not modelled: CBaseEntity at +0).
#pragma once

#include "CBaseEntity.h"

class CPropRadio : public CBaseEntity
{
public:
	// Slot 35, called directly so far; declared as a plain member.
	int vfunc35(int a);	// "CPropRadio::GetUseIcon": returns the field at +0x730
	CPropRadio *sub_1022bc30();	// as in CKeepUpright (transplant)
};
