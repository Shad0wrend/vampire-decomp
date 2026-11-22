// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// named by the DLL's own strings
#include "vampire.h"

// FUNCTION: 0x103a29f0 size=0x1ae
#include "CNPC_VPedestrian.h"
#include "CUnknown1070b244.h"
#include "CEntitySoundOriginView.h"

extern CUnknown1070b244 *g_1070b244;

int CNPC_VPedestrian::vfunc438()
{
	m_n1b2c = 0x1d;
	if (m_b6678)
	{
		m_b6678 = 0;
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VPedestrian.cpp";
		m_nLine1b34 = 0x1b4;
		return 0xfe;
	}
	if (sub_10014df8(0x24) && !sub_1033e2b0())
	{
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VPedestrian.cpp";
		m_nLine1b34 = 0x1b9;
		return 0xfa;
	}
	if ((m_flags14b8 & 2) == 2)
	{
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VPedestrian.cpp";
		m_flags14b8 &= ~2;
		m_nLine1b34 = 0x1c0;
		return 0xf1;
	}
	switch (m_n5cc0)
	{
	case 1:
	case 3:
		if (sub_10014df8(0x25))
		{
			m_f623c = gpGlobals->curtime + 2.0f;
			sub_1000bff5();
			const Vector *pPos = (const Vector *)((CEntitySoundOriginView *)this)->GetOrigin();
			Vector d;
			d = *pPos - m_vec60d0;
			if (d.x * d.x + (d.y * d.y + d.z * d.z) >= 256.0f && (~m_flags14b8 & 0x100000) != 0)
			{
				if (g_1070b244->vfunc2(0, 99) < 25)
				{
					m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VPedestrian.cpp";
					m_flags14b8 |= 0x100000;
					m_nLine1b34 = 0x1d7;
					return 0x158;
				}
			}
			m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VPedestrian.cpp";
			m_flags14b8 = (m_flags14b8 & ~0x100000) | 0x100;
			m_nLine1b34 = 0x1de;
			return 0x157;
		}
	}
	return sub_10015ad2();
}
// END FUNCTION

// FUNCTION: 0x103a2c10 size=0x5
#include "CNPC_VPedestrian.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VPedestrian::vfunc440
// the game's 0x103a2c10: a tail call (jmp) of CNPC_VHuman::vfunc440
int CNPC_VPedestrian::vfunc440(int a0)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc440(a0);
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

// FUNCTION: 0x103a2e30 size=0x68f
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CNPC_VPedestrian.h"
#include "CBasePlayer.h"
#include "CBaseCombatWeapon.h"
#include "CEHandleGet.h"

CBaseEntity * __fastcall sub_1032e7b0(CBaseEntity *p);
int __cdecl sub_102c6350(unsigned int x);

#define PICK_STATE(line) { m_nLine1b40 = line; m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VPedestrian.cpp"; return m_n5cc4 = 8; }

int CNPC_VPedestrian::vfunc461()
{
	m_n1b38 = 0x1d;
	switch (m_n5cc0) {
	case 1:
	case 3:
		if (sub_1001482b(0x4c) || sub_1001482b(0x4d) || sub_1001482b(0x4e)) {
			m_b5b80 = 0;
			vfunc596(g_10566458->sub_100290c0((const unsigned int *)&m_h5b7c));
			PICK_STATE(0x308);
		}
		if (sub_10014df8(0x6d)) {
			CBaseEntity *pEnemy;
			if (g_10566458->sub_100290c0((const unsigned int *)&m_h628c) && (pEnemy = g_10566458->sub_100290c0((const unsigned int *)&m_h628c), g_10566458->sub_100290c0((const unsigned int *)&m_h6160) == pEnemy)) {
				if (sub_1001482b(0x6d) && enginerandom->vfunc2(0, 99) < 0x32) {
					CBaseEntity *pChar = sub_1032e7b0(m_h628c.Get());
					if (pChar) {
						int *pRec = ((CBaseCombatWeapon *)pChar)->sub_102517e0();
						Vector vecPos;
						vecPos = *(Vector *)((CNPC_VPedestrian *)m_h628c.Get())->vfunc220();
						sub_1028ea60(*(int *)((char *)pRec + 0x3c4), &vecPos, m_h628c.Get());
						unsigned int seed = m_n6364;
						CBasePlayer *pPlayer = (CBasePlayer *)m_h628c.Get();
						pPlayer->sub_1017f2a0(sub_102c6350((((seed & 0x68d8635) ^ 0xce9f66a) + 0xffa91d8 & 0x197279ca) ^ seed ^ 0xa641cacd), this, &m_vecRec6380);
					}
					vfunc596(m_h628c.Get());
					PICK_STATE(0x321);
				}
				if (m_f6264 <= 512.0f && enginerandom->vfunc2(0, 99) < 0x4b) {
					CBaseEntity *pChar = sub_1032e7b0(m_h628c.Get());
					if (pChar) {
						int *pRec = ((CBaseCombatWeapon *)pChar)->sub_102517e0();
						Vector vecPos = *(Vector *)((CNPC_VPedestrian *)m_h628c.Get())->vfunc220();
						sub_1028ea60(*(int *)((char *)pRec + 0x3c4), &vecPos, m_h628c.Get());
						unsigned int seed = m_n6364;
						CBasePlayer *pPlayer = (CBasePlayer *)m_h628c.Get();
						pPlayer->sub_1017f2a0(sub_102c6350((((seed & 0x68d8635) ^ 0xce9f66a) + 0xffa91d8 & 0x197279ca) ^ seed ^ 0xa641cacd), this, &m_vecRec6380);
					}
					vfunc596(m_h628c.Get());
					PICK_STATE(0x338);
				}
			} else if (m_h5b78.Get() && (pEnemy = m_h5b78.Get(), m_h6160.Get() == pEnemy)) {
				if (sub_1001482b(0x6d) && enginerandom->vfunc2(0, 99) < 0x32) {
					PICK_STATE(0x344);
				}
				CBaseEntity *pOther = m_h5b78.Get();
				const Vector &vecMine = *(const Vector *)vfunc220();
				if ((vecMine - *(const Vector *)((CNPC_VPedestrian *)pOther)->vfunc220()).LengthSqr() <= 262144.0f && enginerandom->vfunc2(0, 99) < 0x4b) {
					PICK_STATE(0x352);
				}
			}
		}
		if (sub_10014df8(0x70)) {
			CBaseEntity *pEnemy = m_h628c.Get();
			if (m_h618c.Get() == pEnemy && m_f6264 <= 512.0f && enginerandom->vfunc2(0, 99) < 0x4b) {
				vfunc596(m_h628c.Get());
				PICK_STATE(0x366);
			}
		}
		break;
	case 8:
		PICK_STATE(0x375);
	default:
		break;
	}
	return sub_103851e0();
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

// FUNCTION: 0x103a37d0 size=0x5
#include "CNPC_VPedestrian.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VPedestrian::vfunc434
// the game's 0x103a37d0: a tail call (jmp) of CNPC_VHuman::vfunc434
void CNPC_VPedestrian::vfunc434()
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc434();
}
// END FUNCTION

// FUNCTION: 0x103a37f0 size=0x5
#include "CTakeDamageInfo.h"
#include "CNPC_VPedestrian.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VPedestrian::vfunc390
// the game's 0x103a37f0: a tail call (jmp) of CNPC_VHuman::vfunc390
int CNPC_VPedestrian::vfunc390(CTakeDamageInfo *a0)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc390(a0);
}
// END FUNCTION

// FUNCTION: 0x103a3810 size=0x5
#include "CNPC_VPedestrian.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VPedestrian::vfunc366
// the game's 0x103a3810: a tail call (jmp) of CNPC_VHuman::vfunc366
bool CNPC_VPedestrian::vfunc366(int a0, int a1, int a2)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc366(a0, a1, a2);
}
// END FUNCTION

// FUNCTION: 0x103a3830 size=0x5
#include "CNPC_VPedestrian.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VPedestrian::vfunc144
// the game's 0x103a3830: a tail call (jmp) of CNPC_VHuman::vfunc144
void CNPC_VPedestrian::vfunc144(void *a0)
{
#define a0 ((int)a0)
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc144(a0);
#undef a0
}
// END FUNCTION

// FUNCTION: 0x103a3850 size=0x48
#include "CNPC_VPedestrian.h"
#include "CAI_BaseNPCTroika.h"
// TARGET: CNPC_VPedestrian::vfunc27
void CNPC_VPedestrian::vfunc27(int arg)
{
    sub_10005e43(arg);
    ((CAI_BaseNPCTroika *)this)->vfunc596(arg);
    m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VPedestrian.cpp";
    m_nLine1b40 = 0x405;
    m_n5cc4 = 8;
    sub_102ae7f0(0x15a);
}
// END FUNCTION
