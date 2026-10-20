// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10149ee0 size=0x1a
#include "CWeaponGravityGun.h"
char CWeaponGravityGun::vfunc316(int a)
{
	sub_1014d110();
	CBaseCombatWeapon::vfunc316(a);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1014e470 size=0x69
#include "CWeaponGravityGun.h"

struct PlayerObj {
    char m_pad0000[0x2088];
    unsigned int m_nFlags2088;
    unsigned int m_nFlags208c;
};

struct OwnerEnt {
    char m_pad0000[0xa8];
    PlayerObj *m_pPlayer;
};

// TARGET: CWeaponGravityGun::vfunc319
void CWeaponGravityGun::vfunc319()
{
    OwnerEnt *pOwner = (OwnerEnt *)sub_102521f0();
    if (!pOwner)
        return;
    PlayerObj *p = pOwner->m_pPlayer;
    if (!p)
        return;
    if (p->m_nFlags208c & 0x800)
        vfunc327();
    else if (p->m_nFlags2088 & 1)
        vfunc326();
    else if (p->m_nFlags208c & 0x2000)
        vfunc325();
    else if (p->m_nFlags2088 & 0x20)
        vfunc326();
    else
        vfunc321();
}
// END FUNCTION
