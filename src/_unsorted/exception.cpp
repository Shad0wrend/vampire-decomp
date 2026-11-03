// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x104340be size=0xd
#include "exception.h"
const char *exception::vfunc1() const
{
	if (m_what)
		return m_what;
	return "Unknown exception";
}
// END FUNCTION
