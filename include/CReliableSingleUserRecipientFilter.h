// CReliableSingleUserRecipientFilter (RTTI .?AVCReliableSingleUserRecipientFilter@@, vtable 0x10454688): one player,
// reliable. On the stack: the CSingleUserRecipientFilter construction (CRecipientFilter constructor call, its vptr,
// AddRecipient), then this vptr and MakeReliable (0x1019cf50, stub 0x1001186f).
#pragma once

#include "CSingleUserRecipientFilter.h"

class CReliableSingleUserRecipientFilter : public CSingleUserRecipientFilter
{
public:
	CReliableSingleUserRecipientFilter(void *player) : CSingleUserRecipientFilter(player) { MakeReliable(); }
	CReliableSingleUserRecipientFilter();	// out of line: the matched source of ??_GCReliableSingleUserRecipientFilter (0x100e1140) defines it to make VC6 emit that destructor
};
