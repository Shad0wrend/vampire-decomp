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

// FUNCTION: 0x10245940 size=0x3
#include "ConCommand.h"
bool ConCommand::vfunc1()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10245960 size=0xa
#include "ConCommand.h"
void ConCommand::vfunc6()
{
	if (m_pfnCallback)
		m_pfnCallback();
}
// END FUNCTION

// FUNCTION: 0x102459a0 size=0x38
#include "ConCommand.h"
#include "ConCommandBase.h"

void sub_1000ad49();

// TARGET: ConCommand::vfunc7
void ConCommand::vfunc7(const char *pszName, void (*pCallback)(), const char *pszHelp, int nFlags, void (*pCompletion)())
{
    m_pfnCallback = pCallback;
    void (*pComp)() = pCompletion;
    if (pCompletion == 0)
        pComp = sub_1000ad49;
    m_pfnCompletion = pComp;
    m_bHasCompletion = pCompletion != 0;
    ((ConCommandBase *)this)->vfunc2(pszName, pszHelp, nFlags);
}
// END FUNCTION

// FUNCTION: 0x10245a20 size=0x4
// TARGET: sub_10245a20
char __fastcall sub_10245a20(void *p) { return ((unsigned char *)p)[0x24]; }
// END FUNCTION
