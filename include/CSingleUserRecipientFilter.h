// CSingleUserRecipientFilter (RTTI .?AVCSingleUserRecipientFilter@@, vtable 0x104540e8): one player (Source's
// recipientfilter.h). On the stack: the CRecipientFilter constructor call, the vptr store, AddRecipient(player)
// (0x1019d040, stub 0x1001531b). The player is taken as void * so any player view can be passed.
#pragma once

#include "CRecipientFilter.h"

class CSingleUserRecipientFilter : public CRecipientFilter
{
public:
	CSingleUserRecipientFilter(void *player) { AddRecipient((CBasePlayer *)player); }
	CSingleUserRecipientFilter() {}	// not Source's: only the matched source of ??_GCReliableSingleUserRecipientFilter (0x100e1140) calls it; inline, so no out-of-line copy is needed
};
