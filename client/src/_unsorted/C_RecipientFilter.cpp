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

// FUNCTION: 0x100be080 size=0x4
#include "C_RecipientFilter.h"

// TARGET: C_RecipientFilter::vfunc5
int C_RecipientFilter::vfunc5()
{
	return m_unk20;
}
// END FUNCTION
