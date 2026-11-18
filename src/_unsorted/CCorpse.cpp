// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10355b70 size=0x6
#include "CCorpse.h"
namespace lifted {
extern char g_10938a9c;
}
int CCorpse::vfunc80()
{
    return (int)&lifted::g_10938a9c;
}
// END FUNCTION

// FUNCTION: 0x10355b90 size=0x3
#include "CCorpse.h"
int CCorpse::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10355de0 size=0x6
#include "CCorpse.h"
int CCorpse::vfunc117()
{
    return -2147483648;
}
// END FUNCTION

// FUNCTION: 0x10356270 size=0x1e
#include "CCorpse.h"

void sub_100aa7b0(void *p);

// TARGET: CCorpse::vfunc5
CBaseEntity *CCorpse::vfunc5(unsigned int flags)
{
	sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
