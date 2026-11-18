// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10407730 size=0x6
#include "datamap.h"
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

// FUNCTION: 0x10407b30 size=0x32
#include "CItemGKeyring.h"

extern int vt_105139dc[];
void __fastcall sub_103f42b0(void *);
struct CKeyVecView { int a, b, c, size, elem; };

// TARGET: CItemGKeyring::sub_10407b30
CItemGKeyring *CItemGKeyring::sub_10407b30()
{
	sub_103f42b0(this);
	CKeyVecView *v = (CKeyVecView *)((char *)this + 0x914);
	v->a = 0; v->b = 0; v->c = 0; v->size = 0; v->elem = v->a;
	*(int **)this = vt_105139dc;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10407b80 size=0x86
#include "CBaseCombatWeapon.h"
#include "CItemGKeyring.h"
#include "utlvector.h"

void sub_100aa7b0(void *pEntity);

CBaseEntity *CItemGKeyring::vfunc5(unsigned int flags)
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

// FUNCTION: 0x10408380 size=0x5
#include "CItemGKeyring.h"
#include "CBaseEntity.h"

// TARGET: CItemGKeyring::vfunc180
// the game's 0x10408380: a tail call (jmp) of CBaseEntity::vfunc180
void CItemGKeyring::vfunc180()
{
	CBaseEntity::vfunc180();
}
// END FUNCTION
