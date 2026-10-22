// CReliableBroadcastFilter: the stack-built CRelieableBroadcastRecipientFilter (vtable 0x10462828, the symbol map
// names it for both). `CReliableBroadcastFilter filter;` is the CBroadcastRecipientFilter construction (CRecipientFilter
// constructor call, its vptr, AddAllPlayers), then this vptr and MakeReliable (0x1019cf50, stub 0x1001186f).
#pragma once

#include "CBroadcastRecipientFilter.h"

class CReliableBroadcastFilter : public CBroadcastRecipientFilter
{
public:
	CReliableBroadcastFilter() { MakeReliable(); }
};
