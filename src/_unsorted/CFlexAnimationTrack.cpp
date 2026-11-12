// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10073b80 size=0x50
#include "CUnknown10075aa0.h"
#include "CFlexAnimationTrack.h"
CFlexAnimationTrack::CFlexAnimationTrack(CUnknown10075aa0 *pEvent)
{
	m_pEvent = pEvent;
	m_n04 = 0;
	m_b08 = 0;
	m_b09 = 0;
	m_n40 = -1;
	m_n3c = -1;
	m_n48 = -1;
	m_n44 = -1;
	m_n0c = 0;
	m_n10 = 0;
}
// END FUNCTION

// FUNCTION: 0x10073bf0 size=0x1e
#include "CFlexAnimationTrack.h"

// TARGET: CFlexAnimationTrack::vfunc0
CFlexAnimationTrack *CFlexAnimationTrack::vfunc0(unsigned int flags)
{
	sub_1000fbaa();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10073c20 size=0x1c6
#include "vampire_all.h"
#include "utlvector.h"
#include "CFlexAnimationTrack.h"
// TARGET: CFlexAnimationTrack::CFlexAnimationTrack
typedef CUtlVector<CExpressionSampleStub> SampleVec;
CFlexAnimationTrack::CFlexAnimationTrack(const CFlexAnimationTrack *src)
{
	m_n04 = 0;
	sub_10074000(src->m_n04 ? (const char *)src->m_n04 : "");
	m_b08 = src->m_b08;
	m_b09 = src->m_b09;
	for (int t = 0; t < 2; t++) {
		((SampleVec &)m_Samples[t]).Purge();
		for (int i = 0; i < ((const SampleVec &)src->m_Samples[t]).Count(); i++) {
			CExpressionSampleStub s = ((const SampleVec &)src->m_Samples[t])[i];
			((SampleVec &)m_Samples[t]).AddToTail(s);
		}
	}
	for (t = 0; t < 2; t++) {
		(&m_n3c)[t] = (&src->m_n3c)[t];
		(&m_n44)[t] = (&src->m_n44)[t];
	}
	m_n0c = src->m_n0c;
	m_n10 = src->m_n10;
	m_pEvent = 0;
}
// END FUNCTION
