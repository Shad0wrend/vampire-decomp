// CBroadcastRecipientFilter (RTTI .?AVCBroadcastRecipientFilter@@, vtable 0x1044ba34): a recipient filter holding every player.
// Base CRecipientFilter at +0 (flat, see CRecipientFilter.h); its constructor is the base constructor 0x1019ce00 followed
// by AddAllPlayers (0x1019cff0), both inlined where a function builds one on the stack.
#pragma once

#include "CRecipientFilter.h"
#include "CPASAttenuationFilter.h"

class CBroadcastRecipientFilter : public CRecipientFilter
{
public:
	CBroadcastRecipientFilter() { sub_1019cff0(); }
	~CBroadcastRecipientFilter() { ((CRecipientVec *)&m_pMemory)->Purge(); }
};
