// CBroadcastRecipientFilter (RTTI .?AVCBroadcastRecipientFilter@@, vtable 0x1044ba34): every player (Source's
// recipientfilter.h). On the stack: `CBroadcastRecipientFilter filter;` is the CRecipientFilter constructor call,
// the vptr store, AddAllPlayers; the end of its scope is the inlined CUtlVector<int> teardown (CRecipientFilter.h).
#pragma once

#include "CRecipientFilter.h"

class CBroadcastRecipientFilter : public CRecipientFilter
{
public:
	CBroadcastRecipientFilter() { AddAllPlayers(); }
};
