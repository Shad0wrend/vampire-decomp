// CPASFilter (RTTI .?AVCPASFilter@@, vtable 0x104470dc): a recipient filter holding the players that can hear an origin.
// Base CRecipientFilter at +0 (flat, see CRecipientFilter.h); its constructor is the base constructor 0x1019ce00 followed
// by AddRecipientsByPAS (0x1019d280), both inlined where a function builds one on the stack. Its destructor is the
// inlined purge of the recipient vector, as for CBroadcastRecipientFilter.
#pragma once

#include "CBroadcastRecipientFilter.h"

class CPASFilter : public CRecipientFilterPurger, public CRecipientFilter
{
public:
	CPASFilter(const float *pOrigin) { sub_1019d280(pOrigin); }
};
