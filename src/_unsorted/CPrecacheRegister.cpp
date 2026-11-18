// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1042d5d0 size=0x5
#include "CPrecacheRegister.h"

void sub_101d0ec0(const char *pszClassname);	// UTIL_PrecacheOther

// TARGET: CPrecacheRegister::PrecacheFn_Other
// the game's 0x1042d5d0: a tail call (jmp) of UTIL_PrecacheOther with the registered class name
void CPrecacheRegister::PrecacheFn_Other(void *pUser)
{
	sub_101d0ec0((const char *)pUser);
}
// END FUNCTION
