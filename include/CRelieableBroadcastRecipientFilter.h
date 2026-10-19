// CRelieableBroadcastRecipientFilter: modelled like CPASAttenuationFilter (IRecipientFilter at +0x0, the recipient
// vector of CRecipientFilter at +0x8); the real bases (CBroadcastRecipientFilter, CRecipientFilter) are not recovered.
#pragma once

#include "CPASAttenuationFilter.h"

class CRelieableBroadcastRecipientFilter : public IRecipientFilter
{
public:
	CRelieableBroadcastRecipientFilter();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual char vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7();

	int m_pad0004;
	CRecipientVec m_Recipients;	// 0x0008
};
