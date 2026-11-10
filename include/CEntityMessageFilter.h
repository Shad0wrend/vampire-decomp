// CEntityMessageFilter (RTTI .?AVCEntityMessageFilter@@, vtable 0x1045ffec): every player (its constructor is the
// CRecipientFilter constructor call, the vptr store and AddAllPlayers, inlined on the stack); callers then remove
// the sender (sub_1019d2f0) and make it reliable.
#pragma once

#include "CRecipientFilter.h"

class CEntityMessageFilter : public CRecipientFilter
{
public:
	CEntityMessageFilter() { AddAllPlayers(); }
	CEntityMessageFilter(class CBaseEntity *pEntity);
};
