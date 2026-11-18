// CPASFilter (RTTI .?AVCPASFilter@@, vtable 0x104470dc): the players that can hear an origin (Source's
// recipientfilter.h). On the stack: the CRecipientFilter constructor call, the vptr store, AddRecipientsByPAS(origin).
// The base of CPASAttenuationFilter (CPASAttenuationFilter.h).
#pragma once

#include "CRecipientFilter.h"

class CPASFilter : public CRecipientFilter
{
public:
	CPASFilter(const Vector &origin) { AddRecipientsByPAS(origin); }
	CPASFilter(const float *pOrigin) { sub_1019d280(pOrigin); }	// the same, origin as a float pointer (matched code)
	CPASFilter() {}	// Source's inline default constructor (recipientfilter.h); the matched source of ??_GCPASAttenuationFilter (0x1002ac40) calls it
	CPASFilter *sub_10116970(const float *pOrigin);	// the out-of-line copy of the float* constructor (0x10116970): base ctor, vptr, AddRecipientsByPAS(origin)
};
