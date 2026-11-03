// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102029c0 size=0x1a
#include "CUnknown102029c0.h"

CUnknown102029c0::CUnknown102029c0(int a)
{
	m_n04 = 0;
	m_id = a;
	m_nEntries = 0;
	m_pData10 = 0;
	m_b14 = 1;
}
// END FUNCTION

// FUNCTION: 0x102029f0 size=0xf
#include "CUnknown102029c0.h"

CUnknown102029c0::~CUnknown102029c0()
{
	if (m_pData10)
		operator delete(m_pData10);
}
// END FUNCTION
