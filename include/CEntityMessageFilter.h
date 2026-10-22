// CEntityMessageFilter (RTTI .?AVCEntityMessageFilter@@, vtable 0x1045ffec): a recipient filter holding every player.
// Base CRecipientFilter at +0 (flat, see CRecipientFilter.h); its constructor is the base constructor 0x1019ce00, the
// store of the derived vtable and AddAllPlayers (0x1019cff0), all inlined where a function builds one on the stack. Its
// destructor is the inlined purge of the recipient vector (see CBroadcastRecipientFilter.h).
#pragma once

#include "CBroadcastRecipientFilter.h"

class CEntityMessageFilter : public CRecipientFilterPurger, public CRecipientFilter
{
public:
	CEntityMessageFilter() { sub_1019cff0(); }
	virtual CRecipientFilter *vfunc0(unsigned char flags);	// scalar deleting destructor
};
