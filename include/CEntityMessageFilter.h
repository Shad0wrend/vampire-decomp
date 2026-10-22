// CEntityMessageFilter (RTTI .?AVCEntityMessageFilter@@, vtable 0x1045ffec): a recipient filter holding every player.
// Base CRecipientFilter at +0 (flat, see CRecipientFilter.h); its constructor is the base constructor 0x1019ce00 followed
// by AddAllPlayers (0x1019cff0), both inlined where a function builds one on the stack. Its destructor is the inlined
// purge of the recipient vector (see CBroadcastRecipientFilter.h), after the vtable store of the derived class.
#pragma once

#include "CBroadcastRecipientFilter.h"

class CEntityMessageFilter : public CRecipientFilterPurger, public CRecipientFilter
{
public:
	CEntityMessageFilter() { sub_1019cff0(); }
};
