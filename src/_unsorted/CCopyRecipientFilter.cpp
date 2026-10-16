// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101bcf30 size=0x9
unsigned int CCopyRecipientFilter::vfunc1() { return m_flags >> 1 & 1; }
// END FUNCTION

// FUNCTION: 0x101bcf90 size=0xa
unsigned int CCopyRecipientFilter::vfunc7()
{
	return (m_flags >> 2) & 1;
}
// END FUNCTION
