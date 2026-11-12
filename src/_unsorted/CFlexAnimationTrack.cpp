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
