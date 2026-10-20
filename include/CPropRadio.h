// CPropRadio: usable radio prop. Only what decompiled code needs (base chain not modelled: CBaseEntity at +0).
#pragma once

#include "CBaseEntity.h"

struct inputdata_t;

class CPropRadio : public CBaseEntity
{
public:
	// Slot 35, called directly so far; declared as a plain member.
	int vfunc35(int a);	// "CPropRadio::GetUseIcon": returns the field at +0x730
	CPropRadio *sub_1022bc30();	// as in CKeepUpright (transplant)
	void sub_1022c750(int a);	// switches the radio on (or toggles it), called with 1 by InputActivate
	void sub_1022c860(inputdata_t *data);	// "CPropRadio::InputActivate": scope trace (entity name), calls sub_1022c750(1) unless the byte at +0x734 is set
};
