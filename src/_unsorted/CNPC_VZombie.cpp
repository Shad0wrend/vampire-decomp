// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103de4d0 size=0x1d
#include "CNPC_VZombie.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_109403e0;
extern B g_10936c74;
int CNPC_VZombie::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_109403e0.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103e0430 size=0xc3
#include "CNPC_VZombie.h"
#include "CUnknown101c2a50.h"
#include "CEntityVSlots.h"
#include "ConVar.h"

extern ConVar *g_10940404;
extern ConVar *g_1094044c;

void CNPC_VZombie::vfunc141(CUnknown101c2a50 *pInfo, int b, char *pTrace)
{
	float body, head;
	*((char *)this + 0x66e1) = 0;
	head = g_10940404->vfunc1() ? 0.0f : g_10940404->m_fValue;
	body = g_1094044c->vfunc1() ? 0.0f : g_1094044c->m_fValue;
	switch (*(int *)(pTrace + 0x44)) {
	case 1:
		*((char *)this + 0x66e1) = 1;
		pInfo->sub_101c2a50(*(int *)&body);
		break;
	default:
		*((char *)this + 0x66e1) = 0;
		char *pAttacker = *(char **)((char *)pInfo + 0x28);
		if (pAttacker) {
			CEntityVSlots *pWeapon = *(CEntityVSlots **)(pAttacker + 0xa0);
			if (pWeapon && (pWeapon->slot360() & 0x18000))
				pInfo->sub_101c2a50(*(int *)&head);
		}
		break;
	}
	sub_10015b13(pInfo, b, pTrace);
}
// END FUNCTION
