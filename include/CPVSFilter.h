// CPVSFilter (RTTI .?AVCPVSFilter@@, vtable 0x10455e54): the players that can see an origin (Source's
// recipientfilter.h). On the stack: the CRecipientFilter constructor call, the vptr store, AddRecipientsByPVS(origin).
#pragma once

#include "CRecipientFilter.h"

class CPVSFilter : public CRecipientFilter
{
public:
	CPVSFilter(const Vector &origin) { AddRecipientsByPVS(origin); }	// a temporary origin is passed by its address
	CPVSFilter(const float *pOrigin) { sub_1019d210(pOrigin); }	// the same, origin as a float pointer (matched code)
};
