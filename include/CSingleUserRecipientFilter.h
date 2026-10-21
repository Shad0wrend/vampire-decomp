// CSingleUserRecipientFilter (RTTI .?AVCSingleUserRecipientFilter@@, vtable 0x104540e8): a recipient filter holding one player.
// Base CRecipientFilter at +0 (flat, see CRecipientFilter.h); its constructor is the base constructor 0x1019ce00 followed
// by AddRecipient (0x1019d040, stub 0x1001531b), both inlined where a function builds one on the stack. Its destructor is
// the inlined purge of the recipient vector (see CBroadcastRecipientFilter.h), after the vtable store of the derived class.
#pragma once

#include "CBroadcastRecipientFilter.h"

class CSingleUserRecipientFilter : public CRecipientFilterPurger, public CRecipientFilter
{
public:
	CSingleUserRecipientFilter(void *pPlayer) { sub_1019d040(pPlayer); }
	virtual CRecipientFilter *vfunc0(unsigned char flags);	// scalar deleting destructor
};
