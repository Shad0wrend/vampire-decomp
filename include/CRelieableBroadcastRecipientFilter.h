// CRelieableBroadcastRecipientFilter (RTTI .?AVCRelieableBroadcastRecipientFilter@@ - the game's spelling, vtable
// 0x10462828): every player, reliable (Source's CReliableBroadcastRecipientFilter). Built on the stack with its inline
// constructor: the CBroadcastRecipientFilter construction (CRecipientFilter constructor call, its vptr, AddAllPlayers),
// then this vptr and MakeReliable (0x1019cf50, stub 0x1001186f). Matched sources call it CReliableBroadcastFilter
// (CReliableBroadcastFilter.h, a typedef of this class).
#pragma once

#include "CBroadcastRecipientFilter.h"

class CRelieableBroadcastRecipientFilter : public CBroadcastRecipientFilter
{
public:
	CRelieableBroadcastRecipientFilter() { MakeReliable(); }
};
