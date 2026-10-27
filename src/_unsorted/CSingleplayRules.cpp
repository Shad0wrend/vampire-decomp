// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101abc40 size=0x8
extern char g_106b8540[];

// TARGET: CSingleplayRules::vfunc63
const char *CSingleplayRules::vfunc63(int index)
{
	return g_106b8540;
}
// END FUNCTION

// FUNCTION: 0x101abc60 size=0x24
#include "CSingleplayRules.h"

extern int vt_1047a40c[];

// TARGET: vfunc0
CGameRules *CSingleplayRules::vfunc0(unsigned int flags)
{
    *(int **)this = vt_1047a40c;
    sub_1000d189();
    if (flags & 1) {
        delete this;
    }
    return this;
}
// END FUNCTION

// FUNCTION: 0x101abca0 size=0x1
void CSingleplayRules::vfunc16()
{
}
// END FUNCTION

// FUNCTION: 0x101abd40 size=0x99
#include "CSingleplayRules.h"
#include "CBaseCombatCharacter.h"
#include "CBaseCombatWeapon.h"

struct CWeaponX : CBaseCombatWeapon {
    char sub_10256280();
};
typedef char (__fastcall *PFN_Char)(void *);

CBaseEntity *CSingleplayRules::vfunc20(CBaseEntity *pPlayer, CBaseEntity *pCurrentWeapon)
{
    int nBest = -1;
    CWeaponX *pBest = 0;
    CBaseCombatCharacter *pChar = (CBaseCombatCharacter *)pPlayer;
    for (int i = 0; i < 0xe0; i++) {
        CWeaponX *pWeapon = (CWeaponX *)pChar->sub_1032e8b0(i);
        if (!pWeapon)
            continue;
        if (!pChar->sub_1032db60((CBaseEntity *)pWeapon))
            continue;
        if (pWeapon->vfunc345() > nBest && *(int *)((char *)pWeapon + 0x778) && !pWeapon->sub_10256280()
            && ((PFN_Char)(*(void ***)pWeapon)[312])(pWeapon) && pChar->sub_10335a70((CBaseEntity *)pWeapon)) {
            nBest = pWeapon->vfunc345();
            pBest = pWeapon;
        }
    }
    return (CBaseEntity *)pBest;
}
// END FUNCTION

// FUNCTION: 0x101abe50 size=0x3
void CSingleplayRules::vfunc28(void * a0)
{
}
// END FUNCTION

// FUNCTION: 0x101abea0 size=0x3
void CSingleplayRules::vfunc35(CBaseEntity * a0)
{
}
// END FUNCTION

// FUNCTION: 0x101abf00 size=0xb
float CSingleplayRules::vfunc38(int a)
{
	return gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x101abf20 size=0x8
// TARGET: CSingleplayRules::vfunc43
int CSingleplayRules::vfunc43(int a, int b)
{
	return 1;
}
// END FUNCTION

// FUNCTION: 0x101abf40 size=0x3
void CSingleplayRules::vfunc44(CBaseEntity * a0, CMPDamageInfo * a1)
{
}
// END FUNCTION

// FUNCTION: 0x101abf60 size=0x3
void CSingleplayRules::vfunc45(CBaseEntity * a0, CMPDamageInfo * a1)
{
}
// END FUNCTION

// FUNCTION: 0x101abf80 size=0x9
extern float g_104492dc;
float CSingleplayRules::vfunc49(int a) { return g_104492dc; }
// END FUNCTION

// FUNCTION: 0x101abfa0 size=0x9
extern float g_104454c4;
float CSingleplayRules::vfunc50(int a) { return g_104454c4; }
// END FUNCTION

// FUNCTION: 0x101abfc0 size=0x29
#include "CBaseEntity.h"
Vector CSingleplayRules::vfunc51(CBaseEntity *pEnt)
{
	typedef Vector *(__fastcall *Fn)(CBaseEntity *);
	return *((Fn)(*(void ***)pEnt)[220])(pEnt);
}
// END FUNCTION

// FUNCTION: 0x101ac000 size=0x8
// TARGET: CSingleplayRules::vfunc48
int CSingleplayRules::vfunc48(int index)
{
	return 2;
}
// END FUNCTION

// FUNCTION: 0x101ac080 size=0x8
// TARGET: CSingleplayRules::vfunc61
int CSingleplayRules::vfunc61(int index)
{
	return 9;
}
// END FUNCTION

// FUNCTION: 0x101ac0a0 size=0x8
// TARGET: CSingleplayRules::vfunc62
int CSingleplayRules::vfunc62(int index)
{
	return 12;
}
// END FUNCTION
