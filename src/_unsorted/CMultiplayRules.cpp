// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10141090 size=0x8
#include "CMultiplayRules.h"

const char *CMultiplayRules::vfunc63(int)
{
	return "";
}
// END FUNCTION

// FUNCTION: 0x101410d0 size=0x8
#include "CMultiplayRules.h"

void CMultiplayRules::vfunc75()
{
	vfunc80();
}
// END FUNCTION

// FUNCTION: 0x10141940 size=0x9
extern float g_104454c0;
float CMultiplayRules::vfunc30(int a) { return g_104454c0; }
// END FUNCTION

// FUNCTION: 0x10141a90 size=0xb
struct Unk1070b228 {
	char pad[0xc];
	float m_value;
};
extern Unk1070b228 *g_1070b228;

float CMultiplayRules::vfunc38(int a)
{
	return g_1070b228->m_value;
}
// END FUNCTION

// FUNCTION: 0x10141af0 size=0x8
#include "CMultiplayRules.h"

int CMultiplayRules::vfunc43(int, int)
{
	return 1;
}
// END FUNCTION

// FUNCTION: 0x101420f0 size=0x29
#include "CBaseEntity.h"
Vector CMultiplayRules::vfunc51(CBaseEntity *pEnt)
{
	typedef Vector *(__fastcall *Fn)(CBaseEntity *);
	return *((Fn)(*(void ***)pEnt)[220])(pEnt);
}
// END FUNCTION

// FUNCTION: 0x10142160 size=0x7a
#include "CMultiplayRules.h"
#include "ConVar.h"
#include "CEntityVSlots.h"
extern ConVar *g_1070adec;
char CMultiplayRules::vfunc47(CBaseEntity *pPlayer, CBaseEntity *pItem)
{
    if (!g_1070adec->vfunc1() && g_1070adec->m_nValue > 0) {
        if (((CEntityVSlots *)pItem)->slot346() & 8)
            return CGameRules::vfunc47(pPlayer, pItem);
        for (int i = 0; i < 0xe0; i++) {
            if (((CBaseCombatCharacter *)pPlayer)->sub_1032e8b0(i) == pItem)
                return 0;
        }
    }
    return CGameRules::vfunc47(pPlayer, pItem);
}
// END FUNCTION

// FUNCTION: 0x10142280 size=0x8
// TARGET: CMultiplayRules::vfunc61
int CMultiplayRules::vfunc61(int index)
{
	return 8;
}
// END FUNCTION

// FUNCTION: 0x101422a0 size=0x8
#include "CMultiplayRules.h"

int CMultiplayRules::vfunc62(int)
{
	return 11;
}
// END FUNCTION
