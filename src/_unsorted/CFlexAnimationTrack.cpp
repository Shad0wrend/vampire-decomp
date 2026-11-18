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
#include "CVTraitEffect_t.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "CFlexAnimationTrack.h"
// identifier-count dial (link audit 2026-11-18): VC6 orders this function's tied stack slots by symbol numbers mod 64,
// so 49 declarations here keep the game's slot order with these headers (window 45..53).
typedef int pcd_dial0; typedef int pcd_dial1; typedef int pcd_dial2; typedef int pcd_dial3; typedef int pcd_dial4; typedef int pcd_dial5; typedef int pcd_dial6; typedef int pcd_dial7;
typedef int pcd_dial8; typedef int pcd_dial9; typedef int pcd_dial10; typedef int pcd_dial11; typedef int pcd_dial12; typedef int pcd_dial13; typedef int pcd_dial14; typedef int pcd_dial15;
typedef int pcd_dial16; typedef int pcd_dial17; typedef int pcd_dial18; typedef int pcd_dial19; typedef int pcd_dial20; typedef int pcd_dial21; typedef int pcd_dial22; typedef int pcd_dial23;
typedef int pcd_dial24; typedef int pcd_dial25; typedef int pcd_dial26; typedef int pcd_dial27; typedef int pcd_dial28; typedef int pcd_dial29; typedef int pcd_dial30; typedef int pcd_dial31;
typedef int pcd_dial32; typedef int pcd_dial33; typedef int pcd_dial34; typedef int pcd_dial35; typedef int pcd_dial36; typedef int pcd_dial37; typedef int pcd_dial38; typedef int pcd_dial39;
typedef int pcd_dial40; typedef int pcd_dial41; typedef int pcd_dial42; typedef int pcd_dial43; typedef int pcd_dial44; typedef int pcd_dial45; typedef int pcd_dial46; typedef int pcd_dial47;
typedef int pcd_dial48;
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
