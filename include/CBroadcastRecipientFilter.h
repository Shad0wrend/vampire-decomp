// CBroadcastRecipientFilter (RTTI .?AVCBroadcastRecipientFilter@@, vtable 0x1044ba34): a recipient filter holding every player.
// Base CRecipientFilter at +0 (flat, see CRecipientFilter.h); its constructor is the base constructor 0x1019ce00 followed
// by AddAllPlayers (0x1019cff0), both inlined where a function builds one on the stack. Its destructor is the inlined
// purge of the recipient vector (no vtable store): CRecipientFilterPurger stands for the destructor of that vector member.
#pragma once

#include "CRecipientFilter.h"

extern void (*g_109f3624)(void *);	// Plat_Free

struct CRecipientFilterPurger	// empty first base at +0, so that its destructor runs on the whole filter
{
	~CRecipientFilterPurger()
	{
		CRecipientFilter *p = (CRecipientFilter *)this;
		void (*pfnFree)(void *) = g_109f3624;
		p->m_size = 0;
		if (p->m_growSize != -1) {
			if (p->m_pMemory) {
				pfnFree(p->m_pMemory);
				p->m_pMemory = 0;
			}
			p->m_allocCount = 0;
		}
		p->m_pElements = p->m_pMemory;
		if (p->m_growSize != -1 && p->m_pMemory)
			pfnFree(p->m_pMemory);
	}
};

class CBroadcastRecipientFilter : public CRecipientFilterPurger, public CRecipientFilter
{
public:
	CBroadcastRecipientFilter() { sub_1019cff0(); }
};
