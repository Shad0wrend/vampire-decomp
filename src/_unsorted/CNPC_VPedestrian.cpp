// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103a1c20 size=0x6
#include "CNPC_VPedestrian.h"
namespace lifted {
extern char g_1064b0b0;
}
datamap_t * CNPC_VPedestrian::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1064b0b0);
}
// END FUNCTION

// FUNCTION: 0x103a1e40 size=0x1e
#include "CNPC_VPedestrian.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VPedestrian::vfunc5
CNPC_VPedestrian *CNPC_VPedestrian::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103a1fa0 size=0x1d
#include "CNPC_VPedestrian.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093bffc;
extern B g_10936c74;
int CNPC_VPedestrian::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093bffc.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103a2c30 size=0x18f
#include "CNPC_VPedestrian.h"
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatWeapon.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"

struct CAIEventSink
{
	virtual void v0();
	virtual void v1();
};
extern CAIEventSink *g_10924a6c;

struct CCharacterView : CEntityVSlots
{
	void *sub_10007e19();
};

struct CEntityObjView
{
	char m_pad0000[0x9c];
	CCharacterView *m_p009c;
};

struct CWeaponStatView
{
	char m_pad0000[0x3c4];
	int m_n03c4;
};

// TARGET: CNPC_VPedestrian::vfunc433
void CNPC_VPedestrian::vfunc433()
{
	CAI_BaseNPCTroika *pNPC = (CAI_BaseNPCTroika *)this;
	pNPC->sub_10015839(0x24);
	sub_102b27f0();
	if (pNPC->sub_10014df8(0x2d))
	{
		CGlobalEntityList_Ent *pFirst = EHandle_Get(m_h6160);
		if (EHandle_Get(m_h5b78) != pFirst)
		{
			CGlobalEntityList_Ent *pSecond = EHandle_Get(m_h618c);
			if (EHandle_Get(m_h5b78) != pSecond)
				return;
		}
		CCharacterView *pChar = ((CEntityObjView *)EHandle_Get(m_h5b78))->m_p009c;
		if (pChar && pChar->sub_10007e19())
		{
			CWeaponStatView *pStat = (CWeaponStatView *)((CBaseCombatWeapon *)pChar->sub_10007e19())->sub_102517e0();
			if (pStat->m_n03c4 >= m_n634c)
			{
				Vector vecPos = *pChar->slot220();
				pNPC->sub_1028ea60(pStat->m_n03c4, &vecPos.x, pChar);
				g_10924a6c->v1();
				pNPC->sub_100041b0(0x1f);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x103a3670 size=0x101
#include "Vector.h"
#include "CEntityVSlots.h"
#include "CNPC_VPedestrian.h"

extern int g_1072bc8c;
extern char g_1072bcc3;
void sub_10139610(const Vector *angles, Vector *forward, Vector *right, Vector *up);
void sub_101bac90(int a, const Vector *pPos, int b, float flDuration, char c, CNPC_VPedestrian *pEnt);

struct PedestrianView
{
	char pad0[0x14b8];
	unsigned int m_nFlags;
	char pad14bc[0x641c - 0x14bc];
	float m_flNextMarker;
};

void CNPC_VPedestrian::vfunc432(int arg)
{
	sub_1000698d(arg);
	PedestrianView *pView = (PedestrianView *)this;
	CEntityVSlots *pSelf = (CEntityVSlots *)this;
	if ((pView->m_nFlags & 0x80) == 0x80 && gpGlobals->curtime >= pView->m_flNextMarker)
	{
		pView->m_flNextMarker = gpGlobals->curtime + 10.0f;
		Vector fwd;
		sub_10139610(pSelf->slot221(), &fwd, 0, 0);
		Vector vecPos = *pSelf->slot220() - fwd * 256.0f;
		sub_101bac90(8, &vecPos, g_1072bc8c, 10.0f, g_1072bcc3, this);
	}
}
// END FUNCTION

// FUNCTION: 0x103a38c0 size=0xdc
#include "CBaseEntity.h"
#include "CNPC_VPedestrian.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

extern char g_1053dafc[];

void CNPC_VPedestrian::vfunc301(int a, int b)
{
	CCollisionProperty *pCollision = (CCollisionProperty *)((char *)this + 0x270);
	float *pMins = pCollision->vfunc1();
	m_vecMins6660[0] = pMins[0];
	m_vecMins6660[1] = pMins[1];
	m_vecMins6660[2] = pMins[2];
	float *pMaxs = pCollision->vfunc2();
	m_vecMaxs666c[0] = pMaxs[0];
	m_vecMaxs666c[1] = pMaxs[1];
	m_vecMaxs666c[2] = pMaxs[2];
	sub_10293a60(a, b);
	sub_100ac4e0(0, 0, 0);
	{
		ScopeTrace trace(g_1053dafc, m_name26c ? m_name26c : g_106b8540);
		pCollision->sub_100dc480(0);
	}
}
// END FUNCTION
