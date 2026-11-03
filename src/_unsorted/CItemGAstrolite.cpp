// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f6530 size=0x6
#include "CItemGAstrolite.h"
namespace lifted {
extern char g_10945588;
}
int CItemGAstrolite::vfunc80()
{
    return (int)&lifted::g_10945588;
}
// END FUNCTION

// FUNCTION: 0x103f6550 size=0x3
#include "CItemGAstrolite.h"
int CItemGAstrolite::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103f67d0 size=0x11
#include "CItemGAstrolite.h"

// TARGET: CItemGAstrolite::vfunc103
void CItemGAstrolite::vfunc103()
{
	sub_10008c97();
	m_b914 = 0;
}
// END FUNCTION

// FUNCTION: 0x10409be0 size=0x1e
#include "CItemGAstrolite.h"

void sub_100aa7b0(void *p);

// TARGET: CItemGAstrolite::vfunc5
CItemGAstrolite *CItemGAstrolite::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
