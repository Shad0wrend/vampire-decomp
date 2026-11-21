// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100df4d0 size=0x38
#include "ConCommand.h"
#include "ConCommandBase.h"

void sub_100df4c0();

// TARGET: ConCommand::vfunc7
void ConCommand::vfunc7(const char *pszName, void (*pCallback)(), const char *pszHelp, int nFlags, void (*pCompletion)())
{
    m_pfnCallback = pCallback;
    void (*pComp)() = pCompletion;
    if (pCompletion == 0)
        pComp = sub_100df4c0;
    m_pfnCompletion = pComp;
    m_bHasCompletion = pCompletion != 0;
    ((ConCommandBase *)this)->vfunc2(pszName, pszHelp, nFlags);
}
// END FUNCTION

// FUNCTION: 0x100df510 size=0x1c
#include "ConCommand.h"

int ConCommand::vfunc4(int a, int b)
{
	if (!m_pfnCompletion)
		return 0;
	return ((int (__cdecl *)(int, int))m_pfnCompletion)(a, b);
}
// END FUNCTION
