// CBroadcastRecipientFilter (RTTI .?AVCBroadcastRecipientFilter@@, vtable 0x1044ba34): a recipient filter holding every player.
// Base CRecipientFilter at +0 (flat, see CRecipientFilter.h); its constructor is the base constructor 0x1019ce00 followed
// by AddAllPlayers (0x1019cff0), both inlined where a function builds one on the stack. Its destructor is the inlined
// purge of the recipient vector (no vtable store).
#pragma once

#include "CRecipientFilter.h"

extern void (*g_109f3624)(void *);	// Plat_Free

class CBroadcastRecipientFilter : public CRecipientFilter
{
public:
	CBroadcastRecipientFilter() { sub_1019cff0(); }
	~CBroadcastRecipientFilter()
	{
		void (*pfnFree)(void *) = g_109f3624;
		m_size = 0;
		if (m_growSize != -1) {
			if (m_pMemory) {
				pfnFree(m_pMemory);
				m_pMemory = 0;
			}
			m_allocCount = 0;
		}
		m_pElements = m_pMemory;
		if (m_growSize != -1 && m_pMemory)
			pfnFree(m_pMemory);
	}
};
