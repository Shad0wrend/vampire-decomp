// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10402bf0 size=0x6
#include "CItemGWarrens4Passkey.h"
namespace lifted {
extern char g_10949130;
}
int CItemGWarrens4Passkey::vfunc80()
{
    return (int)&lifted::g_10949130;
}
// END FUNCTION

// FUNCTION: 0x10402c10 size=0x3
#include "CItemGWarrens4Passkey.h"
int CItemGWarrens4Passkey::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040a810 size=0x1e
#include "CItemGWarrens4Passkey.h"

void sub_100aa7b0(void *p);

// TARGET: CItemGWarrens4Passkey::vfunc5
CItemGWarrens4Passkey *CItemGWarrens4Passkey::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
