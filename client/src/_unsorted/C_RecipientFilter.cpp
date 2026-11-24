// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100bde60 size=0x4
#include "C_RecipientFilter.h"
// TARGET: C_RecipientFilter::vfunc1
bool C_RecipientFilter::vfunc1()
{
	return m_bReliable;
}
// END FUNCTION

// FUNCTION: 0x100bde70 size=0x4
#include "C_RecipientFilter.h"

// TARGET: C_RecipientFilter::vfunc2
int C_RecipientFilter::vfunc2()
{
	return m_Recipients.Count();
}
// END FUNCTION

// FUNCTION: 0x100be070 size=0x8
#include "C_RecipientFilter.h"

// TARGET: C_RecipientFilter::vfunc4
bool C_RecipientFilter::vfunc4()
{
	if (m_nBufSize == 1)
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x100be080 size=0x4
#include "C_RecipientFilter.h"

// TARGET: C_RecipientFilter::vfunc5
int C_RecipientFilter::vfunc5()
{
	return m_unk20;
}
// END FUNCTION

// FUNCTION: 0x100be090 size=0x11
#include "C_RecipientFilter.h"
struct CUnknown100bde40 { int pad[9]; int m_unk24; void sub_100bde40(); };
void CUnknown100bde40::sub_100bde40()
{
	if (m_unk24 == -1)
		m_unk24 = 1;
}
// TARGET: ?vfunc6@C_RecipientFilter@@UAE_NXZ
bool C_RecipientFilter::vfunc6()
{
	((CUnknown100bde40 *)this)->sub_100bde40();
	if (m_unk24 == m_Recipients.Count())
		return true;
	return false;
}
// END FUNCTION
