// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10407730 size=0x6
#include "CItemGKeyring.h"
namespace lifted {
extern char g_1067f9fc;
}
datamap_t * CItemGKeyring::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1067f9fc);
}
// END FUNCTION

// FUNCTION: 0x104078a0 size=0x6
#include "CItemGKeyring.h"
namespace lifted {
extern char g_10944be0;
}
int CItemGKeyring::vfunc80()
{
    return (int)&lifted::g_10944be0;
}
// END FUNCTION

// FUNCTION: 0x104078c0 size=0x3
#include "CItemGKeyring.h"
int CItemGKeyring::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10407b80 size=0x86
#include "CItemGKeyring.h"
#include "utlvector.h"

void sub_100aa7b0(void *pEntity);

CItemGKeyring *CItemGKeyring::vfunc5(unsigned int flags)
{
	((CUtlVector<int> *)((char *)this + 0x914))->~CUtlVector<int>();
	((CBaseCombatWeapon *)this)->sub_10250c50();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x104081c0 size=0xd
void __fastcall sub_10013593(void *pThis, int dummy, float a);

// TARGET: sub_104081c0
void __fastcall sub_104081c0(void *pThis, int dummy, float a)
{
	sub_10013593(pThis, dummy, a);
}
// END FUNCTION
