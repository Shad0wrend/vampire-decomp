// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101295a0 size=0x8
#include "CGameRules.h"

const char *CGameRules::vfunc67(int)
{
	return "";
}
// END FUNCTION

// FUNCTION: 0x10129600 size=0x8
extern char g_106b8540[];

// TARGET: CGameRules::vfunc70
const char *CGameRules::vfunc70(int index)
{
	return g_106b8540;
}
// END FUNCTION

// FUNCTION: 0x101296a0 size=0x1e
#include "CGameRules.h"

// TARGET: CGameRules::vfunc0
CGameRules *CGameRules::vfunc0(unsigned int flags)
{
	sub_1000d189();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
