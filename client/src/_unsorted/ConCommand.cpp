// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100df510 size=0x1c
#include "ConCommand.h"

int ConCommand::vfunc4(int a, int b)
{
	if (!m_pfnCompletion)
		return 0;
	return ((int (__cdecl *)(int, int))m_pfnCompletion)(a, b);
}
// END FUNCTION
