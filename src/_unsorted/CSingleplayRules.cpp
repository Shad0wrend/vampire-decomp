// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101abbf0 size=0x19
#include "CSingleplayRules.h"

// TARGET: ??0CSingleplayRules@@QAE@XZ
CSingleplayRules::CSingleplayRules()
{
    CGameRules::vfunc15();
}
// END FUNCTION

// FUNCTION: 0x101abc20 size=0x3
#include "CSingleplayRules.h"
bool CSingleplayRules::vfunc18()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101abc40 size=0x8
#include "CSingleplayRules.h"
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
#include "CSingleplayRules.h"
void CSingleplayRules::vfunc16()
{
}
// END FUNCTION

// FUNCTION: 0x101abcc0 size=0x3
#include "CSingleplayRules.h"
bool CSingleplayRules::vfunc21()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101abce0 size=0x3
#include "CSingleplayRules.h"
bool CSingleplayRules::vfunc22()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101abd00 size=0x3
#include "CSingleplayRules.h"
bool CSingleplayRules::vfunc24()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101abd20 size=0x5
#include "CBaseEntity.h"
#include "CSingleplayRules.h"
char CSingleplayRules::vfunc19(CBaseEntity * a0, CBaseEntity * a1)
{
    return 0;
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

// FUNCTION: 0x101abe10 size=0x5
#include "CSingleplayRules.h"
bool CSingleplayRules::vfunc26(int a0, int a1, int a2, int a3)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101abe30 size=0x3
// TARGET: sub_101abe30
void __stdcall sub_101abe30(int a) {
}
// END FUNCTION

// FUNCTION: 0x101abe50 size=0x3
#include "CSingleplayRules.h"
void CSingleplayRules::vfunc28(void * a0)
{
}
// END FUNCTION

// FUNCTION: 0x101abe70 size=0x18
#include "CSingleplayRules.h"
#include "CUnknown10739d08.h"

extern CUnknown10739d08 g_10739d08;

float CSingleplayRules::vfunc30(int a)
{
	return g_10739d08.sub_101e7dd0(*(float *)((char *)a + 0x1ee8));
}
// END FUNCTION

// FUNCTION: 0x101abea0 size=0x3
#include "CBaseEntity.h"
#include "CSingleplayRules.h"
void CSingleplayRules::vfunc35(CBaseEntity * a0)
{
}
// END FUNCTION

// FUNCTION: 0x101abec0 size=0xf
extern int g_1070ba3c;

bool sub_101abec0()
{
    return g_1070ba3c == 1;
}
// END FUNCTION

// FUNCTION: 0x101abee0 size=0x5
#include "CSingleplayRules.h"
bool CSingleplayRules::vfunc37(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101abf00 size=0xb
#include "CSingleplayRules.h"
float CSingleplayRules::vfunc38(int a)
{
	return gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x101abf20 size=0x8
#include "CSingleplayRules.h"
// TARGET: CSingleplayRules::vfunc43
int CSingleplayRules::vfunc43(int a, int b)
{
	return 1;
}
// END FUNCTION

// FUNCTION: 0x101abf40 size=0x3
#include "CBaseEntity.h"
#include "CSingleplayRules.h"
void CSingleplayRules::vfunc44(CBaseEntity * a0, CMPDamageInfo * a1)
{
}
// END FUNCTION

// FUNCTION: 0x101abf60 size=0x3
#include "CBaseEntity.h"
#include "CSingleplayRules.h"
void CSingleplayRules::vfunc45(CBaseEntity * a0, CMPDamageInfo * a1)
{
}
// END FUNCTION

// FUNCTION: 0x101abf80 size=0x9
#include "CBaseEntity.h"
#include "CSingleplayRules.h"
extern float g_104492dc;
float CSingleplayRules::vfunc49(CBaseEntity *a) { return g_104492dc; }
// END FUNCTION

// FUNCTION: 0x101abfa0 size=0x9
#include "CBaseEntity.h"
#include "CSingleplayRules.h"
extern float g_104454c4;
float CSingleplayRules::vfunc50(CBaseEntity *a) { return g_104454c4; }
// END FUNCTION

// FUNCTION: 0x101abfc0 size=0x29
#include "CSingleplayRules.h"
#include "CBaseEntity.h"
Vector CSingleplayRules::vfunc51(CBaseEntity *pEnt)
{
	typedef Vector *(__fastcall *Fn)(CBaseEntity *);
	return *((Fn)(*(void ***)pEnt)[220])(pEnt);
}
// END FUNCTION

// FUNCTION: 0x101ac000 size=0x8
#include "CSingleplayRules.h"
// TARGET: CSingleplayRules::vfunc48
int CSingleplayRules::vfunc48(int index)
{
	return 2;
}
// END FUNCTION

// FUNCTION: 0x101ac020 size=0x5
#include "CSingleplayRules.h"
bool CSingleplayRules::vfunc17(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101ac040 size=0x3
#include "CSingleplayRules.h"
void CSingleplayRules::vfunc54(int a0, int a1, int a2)
{
}
// END FUNCTION

// FUNCTION: 0x101ac060 size=0x7
#include "CSingleplayRules.h"
namespace lifted {
extern float g_104454c4;
}
float CSingleplayRules::vfunc59()
{
    return lifted::g_104454c4;
}
// END FUNCTION

// FUNCTION: 0x101ac080 size=0x8
#include "CSingleplayRules.h"
// TARGET: CSingleplayRules::vfunc61
int CSingleplayRules::vfunc61(int index)
{
	return 9;
}
// END FUNCTION

// FUNCTION: 0x101ac0a0 size=0x8
#include "CSingleplayRules.h"
// TARGET: CSingleplayRules::vfunc62
int CSingleplayRules::vfunc62(int index)
{
	return 12;
}
// END FUNCTION

// FUNCTION: 0x101ac0c0 size=0x5
#include "CSingleplayRules.h"
int CSingleplayRules::vfunc64(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101ac0e0 size=0x1b
#include "CSingleplayRules.h"

bool CSingleplayRules::vfunc65(int a, int b)
{
	return vfunc64(a, b) == 1;
}
// END FUNCTION

// FUNCTION: 0x101ac110 size=0x3
#include "CSingleplayRules.h"
char CSingleplayRules::vfunc74()
{
    return 1;
}
// END FUNCTION
