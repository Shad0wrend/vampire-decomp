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

// FUNCTION: 0x103f6af0 size=0x14
#include "CItemGAstrolite.h"
#include "CBaseCombatWeapon.h"

int CItemGAstrolite::vfunc35(CBaseEntity *pOther)
{
	if (m_b914)
		return 0;
	return ((CBaseCombatWeapon *)this)->CBaseCombatWeapon::vfunc35(pOther);
}
// END FUNCTION

// FUNCTION: 0x103f6b20 size=0x14
#include "CItemGAstrolite.h"
#include "CBaseCombatWeapon.h"

int CItemGAstrolite::vfunc34(CBaseEntity *pOther)
{
	if (m_b914)
		return 0;
	return ((CBaseCombatWeapon *)this)->CBaseCombatWeapon::vfunc34(pOther);
}
// END FUNCTION

// FUNCTION: 0x103f6b90 size=0x1a
#include "CItemGAstrolite.h"

// TARGET: CItemGAstrolite::vfunc173
void CItemGAstrolite::vfunc173(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, float value)
{
	if (m_b914)
		return;
	sub_10257980(pActivator, pCaller, useType, value);
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
