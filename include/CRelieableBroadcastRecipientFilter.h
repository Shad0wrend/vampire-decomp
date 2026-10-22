// CRelieableBroadcastRecipientFilter (RTTI .?AVCRelieableBroadcastRecipientFilter@@ - the game's spelling, vtable
// 0x10462828): every player, reliable (Source's CReliableBroadcastRecipientFilter). On the stack it is written
// `CReliableBroadcastFilter filter;` (CReliableBroadcastFilter.h, the same code): this class keeps an out-of-line
// default constructor because the matched source of its scalar deleting destructor (0x1011c3c0) defines it.
#pragma once

#include "CBroadcastRecipientFilter.h"

class CRelieableBroadcastRecipientFilter : public CBroadcastRecipientFilter
{
public:
	CRelieableBroadcastRecipientFilter();
};
