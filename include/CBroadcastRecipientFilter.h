// CBroadcastRecipientFilter (RTTI .?AVCBroadcastRecipientFilter@@, vtable 0x1044ba34): a recipient filter holding every player.
// Base CRecipientFilter at +0 (flat, see CRecipientFilter.h); its constructor is the base constructor 0x1019ce00 followed
// by AddAllPlayers (0x1019cff0), both inlined where a function builds one on the stack. Its destructor is the inlined
// purge of the recipient vector (no vtable store): CRecipientFilterPurger stands for the destructor of that vector member
// (VC6 places the empty base after the polymorphic one, in the tail padding).
#pragma once

#include "CRecipientFilter.h"

extern "C" __declspec(dllimport) void Plat_Free(void *);	// tier0 (0x109f3624)

struct CRecipientFilterPurger	// empty base whose destructor runs on the whole filter
{
	~CRecipientFilterPurger()
	{
		CRecipientFilter *p = (CRecipientFilter *)((char *)this - sizeof(CRecipientFilter));
		p->m_size = 0;
		if (p->m_growSize != -1) {
			if (p->m_pMemory) {
				Plat_Free(p->m_pMemory);
				p->m_pMemory = 0;
			}
			p->m_allocCount = 0;
		}
		p->m_pElements = p->m_pMemory;
		if (p->m_growSize != -1 && p->m_pMemory)
			Plat_Free(p->m_pMemory);
	}
};

class CBroadcastRecipientFilter : public CRecipientFilterPurger, public CRecipientFilter
{
public:
	CBroadcastRecipientFilter() { sub_1019cff0(); }
};
