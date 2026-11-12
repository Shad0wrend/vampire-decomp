// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100d14b0 size=0xa9
#include "CEventQueue.h"
// TARGET: ??0CEQEventFull@@QAE@ABU0@@Z
CEQEventFull::CEQEventFull(const CEQEventFull &other)
	: m_flFireTime(other.m_flFireTime), m_iTarget(other.m_iTarget), m_iTargetInput(other.m_iTargetInput),
	  m_hActivator(other.m_hActivator), m_hCaller(other.m_hCaller), m_iOutputID(other.m_iOutputID),
	  m_hTarget(other.m_hTarget), m_n1c(other.m_n1c), m_Variant(other.m_Variant), m_n34(other.m_n34),
	  m_n38(0), m_n3c(other.m_n3c), m_Block(other.m_Block)
{
}
// END FUNCTION
