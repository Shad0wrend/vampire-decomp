#pragma once
#include "IRecipientFilter.h"
#include "utlvector.h"

class C_RecipientFilter : public IRecipientFilter
{
public:
	virtual int vfunc5();
	virtual bool vfunc4();
	C_RecipientFilter();
	virtual bool vfunc1();
	virtual int vfunc2();
	void sub_100bdeb0();
	bool m_bReliable;
	bool m_bInitMessage;
	CUtlVector<int> m_Recipients;
	int m_nBufSize;
	int m_unk20;
	int m_unk24;
	bool m_bUsingPredictionRules;
	bool m_bIgnorePredictionCull;
};

class CBroadcastRecipientFilter : public C_RecipientFilter
{
public:
	CBroadcastRecipientFilter()
	{
		sub_100bdeb0();
	}
};
