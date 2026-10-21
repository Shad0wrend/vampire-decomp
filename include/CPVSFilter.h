// CPVSFilter (RTTI .?AVCPVSFilter@@, vtable 0x10455e54): a recipient filter holding the players that can see an origin.
// Base CRecipientFilter at +0 (flat, see CRecipientFilter.h); its constructor is the base constructor 0x1019ce00 followed
// by AddRecipientsByPVS (0x1019d210), both inlined where a function builds one on the stack. Its destructor is the
// inlined purge of the recipient vector, as for CBroadcastRecipientFilter.
#pragma once

#include "CBroadcastRecipientFilter.h"

class CPVSFilter : public CRecipientFilterPurger, public CRecipientFilter
{
public:
	CPVSFilter(const float *pOrigin) { sub_1019d210(pOrigin); }
};
