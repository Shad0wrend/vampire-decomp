// CPVSFilter: client recipient filter for everyone who can see an origin (RTTI .?AVCPVSFilter@@, vtable 0x1022bf3c).
// Hand-made: only what the game's inline constructor/destructor at its call sites shows.
#pragma once
#include "C_RecipientFilter.h"

class Vector;

class CPVSFilter : public C_RecipientFilter
{
public:
	CPVSFilter(const Vector &origin)
	{
		sub_100be030(origin);
	}
	virtual ~CPVSFilter() {}

	void sub_100be030(const Vector &origin);	// the stub at 0x100be030 (thiscall, pops 4), jumps on to C_RecipientFilter::sub_100bdeb0
};
