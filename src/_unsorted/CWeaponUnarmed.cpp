// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f5120 size=0x6
#include "CWeaponUnarmed.h"
namespace lifted {
extern char g_10948c64;
}
int CWeaponUnarmed::vfunc80()
{
    return (int)&lifted::g_10948c64;
}
// END FUNCTION

// FUNCTION: 0x103f5140 size=0x3
#include "CWeaponUnarmed.h"
int CWeaponUnarmed::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103f52f0 size=0x6
#include "CWeaponUnarmed.h"

extern char g_1067ef98;

void *CWeaponUnarmed::sub_103f52f0()
{
	return &g_1067ef98;
}
// END FUNCTION

// FUNCTION: 0x103f5310 size=0x6
#include "CWeaponUnarmed.h"

int CWeaponUnarmed::sub_103f5310()
{
	return 0x29;
}
// END FUNCTION

// FUNCTION: 0x103f5430 size=0x1e
#include "CWeaponUnarmed.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponUnarmed::vfunc5
CBaseEntity *CWeaponUnarmed::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103f5460 size=0x1
// TARGET: sub_103f5460
void sub_103f5460()
{
}
// END FUNCTION

// FUNCTION: 0x103f5480 size=0x1
// TARGET: sub_103f5480
void sub_103f5480()
{
}
// END FUNCTION

// FUNCTION: 0x103f54a0 size=0x1b3
#include "CWeaponUnarmed.h"
#include "CBaseCombatWeapon.h"
#include "CBasePlayer.h"
#include "CEHandleGet.h"
#include "globalvars.h"
#include <string.h>

void __cdecl sub_101cebc0(CBasePlayer *pPlayer, int a, int b);

// TARGET: CWeaponUnarmed::vfunc319
void CWeaponUnarmed::vfunc319()
{
	const char *apszItems[4] = { "item_w_fists", "item_w_claws", "item_w_claws_protean4", "item_w_claws_protean5" };
	CBaseCombatWeapon *pWeapon = (CBaseCombatWeapon *)this;
	void *pOwner = pWeapon->sub_102521f0();
	if (!pOwner)
		return;
	CBasePlayer *pPlayer = *(CBasePlayer **)((char *)pOwner + 0xa8);
	if (!pPlayer)
		return;
	if (pPlayer->m_nFlags2088 & 1) {
		if (pWeapon->m_flTimes730[0] <= gpGlobals->curtime) {
			if (pPlayer->vfunc94() == 10) {
				sub_101cebc0(pPlayer, 0x4c, 0);
				return;
			}
			CBaseEntity *pItem;
			if (EHandle_Get(*(unsigned int *)&pPlayer->m_hEa4) && (pItem = (CBaseEntity *)EHandle_LookupEntity(*(unsigned int *)&pPlayer->m_hEa4)) != 0 && pItem != (CBaseEntity *)this
				&& strcmpi(pItem->sub_1009f200(), ((CBaseEntity *)this)->sub_1009f200()) != 0
				|| EHandle_Get(*(unsigned int *)&pPlayer->m_hEa8) && (pItem = (CBaseEntity *)EHandle_LookupEntity(*(unsigned int *)&pPlayer->m_hEa8)) != 0)
			{
				if (pPlayer->vfunc388(pItem, 0))
					((CBaseCombatWeapon *)pItem)->vfunc319();
				return;
			}
			for (unsigned int i = 0; i < 4; i++) {
				pItem = (CBaseEntity *)pPlayer->sub_10335950(apszItems[i]);
				if (pItem) {
					if (pPlayer->vfunc388(pItem, 0))
						((CBaseCombatWeapon *)pItem)->vfunc319();
					return;
				}
			}
		}
	} else
		pWeapon->vfunc321();
}
// END FUNCTION

// FUNCTION: 0x103f56d0 size=0x3
#include "CWeaponUnarmed.h"

int CWeaponUnarmed::vfunc360()
{
	return 0;
}
// END FUNCTION
