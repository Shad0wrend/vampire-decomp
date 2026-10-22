// CReliableBroadcastFilter: the stack-constructed view of CRelieableBroadcastRecipientFilter (vtable 0x10462828, see
// CRelieableBroadcastRecipientFilter.h for the heap-side destructor). Its constructor is the broadcast constructor
// (CRecipientFilter constructor, own vtable store, AddAllPlayers) followed by its own vtable store and MakeReliable
// (0x1001186f), all inlined where a function builds one on the stack.
#pragma once

#include "CBroadcastRecipientFilter.h"

class CReliableBroadcastFilter : public CBroadcastRecipientFilter
{
public:
	CReliableBroadcastFilter() { sub_1019cf50(); }
	virtual CRecipientFilter *vfunc0(unsigned char flags);	// scalar deleting destructor
};
