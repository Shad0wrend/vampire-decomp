// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10056f50 size=0x1e
#include "CBaseFire.h"

void sub_100aa7b0(void *p);

// TARGET: CBaseFire::vfunc5
CBaseFire *CBaseFire::vfunc5(unsigned int flags)
{
	sub_10007c9d();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10056fa0 size=0x17
#include "CBaseFire.h"
void CBaseFire::sub_10056fa0(int a, int b)
{
	m_field454 = a;
	m_field458 = b;
}
// END FUNCTION

// FUNCTION: 0x10056fd0 size=0x21
#include "CBaseFire.h"

void CBaseFire::sub_10056fd0(int a, int b, int c)
{
	m_field450 = a;
	m_field454 = b;
	m_field458 = c;
}
// END FUNCTION

// FUNCTION: 0x10057010 size=0x24
#include "CBaseFire.h"

void CBaseFire::vfunc243(int on)
{
	if (on)
		m_flags45c |= 1;
	else
		m_flags45c &= ~1;
}
// END FUNCTION
