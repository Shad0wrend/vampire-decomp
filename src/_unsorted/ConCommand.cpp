// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102458f0 size=0x1e
#include "ConCommand.h"

// TARGET: ConCommand::vfunc0
ConCommand *ConCommand::vfunc0(unsigned int flags)
{
	sub_100104f6();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10245960 size=0xa
void ConCommand::vfunc6()
{
	if (m_pfnCallback)
		m_pfnCallback();
}
// END FUNCTION
