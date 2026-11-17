// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e4410 size=0x3
#include "CWeaponMelee.h"

bool CWeaponMelee::vfunc282()
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x103e4430 size=0x6
#include "CWeaponMelee.h"

// TARGET: CWeaponMelee::vfunc373
int CWeaponMelee::vfunc373()
{
	return 6;
}
// END FUNCTION

// FUNCTION: 0x103e9ac0 size=0x55
#include "CWeaponMelee.h"

struct CWeaponMeleeCtorView
{
	char m_pad0000[0x778];
	int m_n778;
	char m_pad077c[0x870 - 0x77c];
	bool m_b870;
	bool m_b871;
	bool m_b872;
	char m_pad0873[0x8b4 - 0x873];
	bool m_b8b4;
	char m_pad08b5[3];
	float m_fMinRange1;
	float m_fMinRange2;
	float m_fMaxRange1;
	float m_fMaxRange2;
};

CWeaponMelee::CWeaponMelee()
{
	CWeaponMeleeCtorView *v = (CWeaponMeleeCtorView *)this;
	float flMax = 50.0f;
	float flMin = 0.0f;
	v->m_fMaxRange1 = flMax;
	v->m_fMaxRange2 = flMax;
	v->m_b871 = true;
	v->m_b870 = true;
	v->m_b8b4 = true;
	v->m_fMinRange1 = flMin;
	v->m_b872 = true;
	v->m_fMinRange2 = flMin;
	v->m_n778 = 3;
}
// END FUNCTION

// FUNCTION: 0x103e9b40 size=0x1e
#include "CWeaponMelee_TzimisceMelee.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee::vfunc5
CBaseCombatWeapon *CWeaponMelee::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103e9bf0 size=0x133
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CWeaponMelee.h"
#include "CVStatList_t.h"
#include "CUnknown1070b244.h"

#define PV(n) virtual void s##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)
#define PV100(p) PV10(p##0) PV10(p##1) PV10(p##2) PV10(p##3) PV10(p##4) PV10(p##5) PV10(p##6) PV10(p##7) PV10(p##8) PV10(p##9)

struct MeleePlayer_t {
	PV100(a)
	PV10(b0) PV10(b1) PV10(b2) PV10(b3) PV10(b4) PV10(b5)
	PV(b60) PV(b61) PV(b62) PV(b63) PV(b64) PV(b65) PV(b66) PV(b67) PV(b68)
	virtual void vfunc169(Vector *pImpulse);
};

struct MeleeOwner_t {
	char pad[0xa8];
	MeleePlayer_t *pPlayer;
};

struct MeleeRollView_t {
	char pad0[0x384];
	float f384;
	float f388;
	char pad38c[0x394 - 0x38c];
	float f394;
	float f398;
};

extern CUnknown1070b244 *g_1070b244;

void CWeaponMelee::vfunc339()
{
	MeleeOwner_t *pOwner = (MeleeOwner_t *)sub_102521f0();
	if (pOwner && pOwner->pPlayer) {
		MeleePlayer_t *pPlayer = pOwner->pPlayer;
		MeleeRollView_t *pInfo = (MeleeRollView_t *)sub_102517e0();
		Vector vec;
		vec.z = 0.0f;
		vec.x = g_1070b244->vfunc1(pInfo->f384, pInfo->f388);
		vec.y = g_1070b244->vfunc1(pInfo->f394, pInfo->f398);
		CVStatList_t *pList = CVStatListSet::Of(pPlayer)->Find(0);
		float flStat = (float)pList->sub_10010609(1);
		if (flStat > 9.0f)
			flStat = 9.0f;
		double dScale = (10.0f - flStat) * 0.1f;
		vec.x = (float)(vec.x * dScale);
		vec.y = (float)(vec.y * dScale);
		vec.z = (float)(vec.z * dScale);
		pPlayer->vfunc169(&vec);
	}
}
// END FUNCTION

// FUNCTION: 0x103e9e00 size=0x566
#include "CAI_BaseNPCTroika.h"
#include "CWeaponOwner.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CWeaponMelee.h"
#include "CBaseAnimating.h"
#include "CBaseCombatCharacter.h"
#include "CBasePlayer.h"
#include "CEntityVSlots.h"
#include "CUnknown10204e90.h"
#include "CVStatList_t.h"
#include "CUnknown102522e0.h"
#include "CUnknown100b5190.h"
#include "CEdictView.h"
#include "ConVar.h"
#include "Tier1.h"
#include "globalvars.h"
#include <math.h>

#define max(a, b) (((a) > (b)) ? (a) : (b))

struct CMeleeEdictNet;
struct CMeleeEdictUnk
{
	virtual void u0();
	virtual void u1();
	virtual void u2();
	virtual CMeleeEdictNet *u3();
	virtual void *u4();
};
struct CMeleeEdictNet
{
	virtual void n0();
	virtual void n1();
	virtual void n2();
	virtual void n3();
	virtual void n4();
	virtual const char *n5();
};

struct CMeleeSeqDesc
{
	char m_pad0000[0x2bc];
	int m_nEvents;
	int m_nEventOffset;
	int m_n2c4;
	float m_fl2c8;
	float m_flMinReach;
	float m_flMaxReach;
};

struct CMeleeRollRecord
{
	CUnknown10204e90 m_Attack;
	CUnknown10204e90 m_Damage;
};

struct CMeleeSwingView
{
	void sub_103e9d80(void *pPlayer, void *pTarget, void *pIdx);
};

struct CMeleeFOVView
{
	CBaseEntity *sub_10341c30(void *pfn, float flRange, float flCos, int b, float flZ, int mask);
};

extern float g_104d347c[];
extern ConVar g_10937a88;
extern ConVar g_10940d68;
extern ConVar g_1074f048;
extern const char g_106b8540[];

char sub_103ea4d0(CBaseEntity *pSelf, CBaseEntity *pOther);

static inline const char *MeleeEdictClassName(CBaseEntity *pEntity)
{
	CEdictView *pEdict = (CEdictView *)pEntity->m_pEdict2e0;
	if (!pEdict->m_pUnk)
		return g_106b8540;
	return ((CMeleeEdictUnk *)pEdict->m_pUnk)->u3()->n5();
}

char CWeaponMelee::vfunc372(int a, int b, int c)
{
	char weights[0x2000];
	int seqs[0x800];

	CBaseCombatCharacter *pOwner = (CBaseCombatCharacter *)sub_10252240();
	if (!pOwner)
		return 0;
	if (CWeaponOwner *pTemp = sub_10252290())
		((CBasePlayer *)pTemp)->vfunc429();

	if (a == 0x4b)
	{
		int nStat = vfunc373();
		if (nStat != -1)
		{
			CVStatList_t *pList = CVStatListSet::Of(pOwner)->Find(1);
			int nValue = pList->sub_10200ca0(nStat);
			int nRoll = g_109f3868(0, 99);
			if ((float)nRoll < g_104d347c[nValue])
			{
				if (vfunc372(0x4d, 0, c))
					return 1;
			}
		}
	}

	int nTranslated = ((CEntityVSlots *)this)->slot361(a);
	int act = ((CEntityVSlots *)pOwner)->slot376(nTranslated);
	if (!((CBaseAnimating *)pOwner)->sub_100952d0(-1))
		return 0;

	int nMax = ((CUnknown10204e90 *)((char *)this + *sub_102517e0() * 0x44 + 0x7a0))->sub_10204900(pOwner);
	int nCount = ((CBaseAnimating *)pOwner)->sub_1008dac0(act, (char *)seqs, weights, nMax);

	float flReach = 0.0f;
	for (int i = 0; i < nCount; i++)
	{
		CMeleeSeqDesc *pDesc = (CMeleeSeqDesc *)((CBaseAnimating *)pOwner)->sub_1008d990(seqs[i]);
		flReach = max(flReach, pDesc->m_flMaxReach);
	}

	CBasePlayer *pPlayer = (CBasePlayer *)((CUnknown102522e0 *)this)->sub_102522e0();
	CBaseEntity *pFound;
	if (pOwner->m_pNPC98)
		pFound = (CBaseEntity *)((CEntityVSlots *)pOwner->m_pNPC98)->slot167();
	else
	{
		pFound = ((CMeleeFOVView *)pOwner)->sub_10341c30((void *)sub_103ea4d0, flReach, cos(0.5235987755982988), 1, (g_10937a88.GetFloat()), 0x46004003);
	}
	CBaseEntity *pTarget = 0;
	if (pFound && (pTarget = (CBaseEntity *)((CBaseEntity *)pFound)->m_p9c) != 0)
	{
		if (!((CBaseCombatCharacter *)pTarget)->m_b1480)
			g_109f3630("Swing found target that is non targetable BCC %s(%s).\n", pTarget->sub_100ab4f0(), MeleeEdictClassName(pTarget));
		if (((CUnknown100b5190 *)pTarget)->sub_100b5190())
			g_109f3630("Swing found target that is ScriptHidden BCC %s(%s).\n", pTarget->sub_100ab4f0(), MeleeEdictClassName(pTarget));
	}
	else
	{
		if (pPlayer)
			pPlayer->m_hMeleeOpponent.m_Index = 0xffffffff;
		if (act == 0x4d && !(char)b)
			return 0;
	}
	if (pPlayer)
		((CEntityVSlots *)pPlayer)->slot410();

	int *pIdx = sub_102517e0();
	CMeleeRollRecord rec = *(CMeleeRollRecord *)((char *)this + *pIdx * 0x44 + 0x7a0);
	int nRank = rec.m_Attack.sub_10204900(pOwner);
	float flScale = (float)nRank * 0.1f;
	flScale = flScale * 0.3f + 0.7f;
	if (g_1074f048.GetBool())
		g_109f3630("Attack speed adjust %+d%% (rank %d)\n", (int)((flScale - 1.0f) * 100.0f), nRank);

	int nOut = -1;
	if (!((CEntityVSlots *)pOwner)->slot331((CEntityVSlots *)this, (CEntityVSlots *)pTarget, act, &nOut) || nOut < 0)
	{
		if (!(char)b)
			return 0;
	}

	((CEntityVSlots *)pOwner)->slot311(a, act, nOut);

	pOwner->m_flPlaybackRate6f4 = ((pOwner->m_pNPC98 && (pOwner->m_pNPC98->m_flags5b84 & 0x4000) == 0x4000) ? max(g_10940d68.GetFloat(), pOwner->m_flFrenzyRate) : pOwner->m_flFrenzyRate) * flScale;

	float f = ((CBaseAnimating *)pOwner)->sub_10091080(nOut);
	if (!pPlayer && !(((CEntityVSlots *)this)->slot332() < f))
		f = ((CEntityVSlots *)this)->slot332();

	float flTime = f / pOwner->m_flPlaybackRate6f4 + gpGlobals->curtime;
	pOwner->m_flNextAttack1564 = max(pOwner->m_flNextAttack1564, flTime);
	for (int j = 0; j < 2; j++)
		m_flTimes730[j] = max(m_flTimes730[j], flTime);

	if (!pPlayer)
		return 1;
	((CEntityVSlots *)pPlayer)->slot269(0);
	if (!pTarget)
		return 1;
	((CMeleeSwingView *)this)->sub_103e9d80(pPlayer, pTarget, pIdx);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x103ea510 size=0x75
#include "CWeaponMelee.h"
struct Ent { bool sub_10336920(); };

bool CWeaponMelee::vfunc315()
{
    Ent *pEnt = (Ent *)sub_100011f4();
    if (!pEnt)
        return false;
    char *pszName;
    if (!pEnt->sub_10336920())
        pszName = vfunc272();
    else
        pszName = vfunc273();
    if (*pszName)
        vfunc105(pszName);
    char r = sub_1000c37e(vfunc342(0), vfunc343(), 0xb4, vfunc344());
    return r ? true : false;
}
// END FUNCTION

// FUNCTION: 0x103ea5b0 size=0xd5
#include "CWeaponMelee.h"

extern "C" int atoi(const char *);

// TARGET: CWeaponMelee::vfunc370
void CWeaponMelee::vfunc370(int *event, CBaseCombatWeapon *other)
{
	switch (event[0])
	{
	case 0xbb9:
	case 0xbd6: case 0xbd7: case 0xbd8: case 0xbd9: case 0xbda: case 0xbdb: case 0xbdc: case 0xbdd:
	case 0xbdf: case 0xbe0: case 0xbe1: case 0xbe2: case 0xbe3: case 0xbe4:
	case 0xbe7:
		if (*(int *)((char *)other + 0xa8) == 0)
			vfunc326();
		return;
	case 0xbbb:
		return;
	case 0xfa1:
		sub_10093b10(atoi((const char *)event[1]), 1);
		return;
	case 0xfa2:
		sub_10093b10(atoi((const char *)event[1]), 0);
		return;
	}
	CBaseCombatWeapon::vfunc370(event, other);
}
// END FUNCTION

// FUNCTION: 0x103ea6d0 size=0xc1
#include "CBaseEntity.h"
#include "CWeaponMelee.h"
#include "CEntityVSlots.h"

bool CWeaponMelee::vfunc283(CBaseEntity *pTarget)
{
	if (!pTarget)
		return false;
	if (!((CEntityVSlots *)pTarget)->slot158())
		return false;
	CEntityVSlots *pOwner = (CEntityVSlots *)sub_102521f0();
	if (!pOwner)
		return false;
	if (pOwner == (CEntityVSlots *)pTarget)
		return false;
	Vector vecOwner = pOwner->slot192();
	Vector vecTarget = ((CEntityVSlots *)pTarget)->slot192();
	if (vecOwner.DistToSqr(vecTarget) > 22500.0f)
		return false;
	return true;
}
// END FUNCTION

// FUNCTION: 0x103eac30 size=0x19
#include "CWeaponMelee_TzimisceMelee.h"

void CWeaponMelee::vfunc367(int a, int b, int c)
{
	sub_103ea7e0(0x4b, a, b, c);
}
// END FUNCTION

// FUNCTION: 0x103eac60 size=0x25
#include "CWeaponMelee.h"

struct CWeaponMeleeUnit : CWeaponMelee
{
	int sub_103ea7e0(int a, int b, int c, int d);
};

int CWeaponMelee::vfunc368(int a, int b, int c)
{
	int x = ((CWeaponMeleeUnit *)this)->sub_103ea7e0(0x4e, a, b, c) - 0x51;
	return (x != 0 ? 0xffffffae : 0) + 0x52;
}
// END FUNCTION

// FUNCTION: 0x103eaca0 size=0x105
#include "CWeaponMelee.h"
#include "CBasePlayerUnit326.h"
#include "CEHandleGet.h"

void CWeaponMelee::vfunc326()
{
	CBasePlayer *pOwner = (CBasePlayer *)sub_102521f0();
	CBasePlayerUnit326 *pPlayer = (CBasePlayerUnit326 *)sub_10252290();
	int nAct = 0x4b;
	bool bFlag = false;
	if (!pOwner)
		return;
	if (EHandle_Get(pOwner->m_h1538) && pOwner->m_n153C != -1)
		return;
	if (pPlayer)
	{
		if (pPlayer->sub_10167370())
			bFlag = true;
		if (pPlayer->sub_101613b0())
			nAct = 0x4c;
	}
	if (!bFlag)
	{
		char bOk = 0;
		if (pPlayer)
		{
			bOk = vfunc372(nAct, 0, 1);
			if (!bOk && (char)((vfunc360() >> 30) & 1))
				bOk = vfunc372(0x53, 0, 0);
		}
		if (!bOk && !vfunc372(nAct, 1, 1))
			return;
	}
	if (pPlayer)
		pPlayer->vfunc429();
}
// END FUNCTION

// FUNCTION: 0x103eae00 size=0x78
#include "CWeaponMelee.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList *g_10566458;
#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)
struct CMeleeOwnerSlot429View {
    S100(a0) S100(a1) S100(a2) S100(a3)
    S10(b0) S10(b1)
    virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4();
    virtual void c5(); virtual void c6(); virtual void c7(); virtual void c8();
    virtual void vfunc429();
};
struct CMeleeSlot372View {
    S100(a0) S100(a1) S100(a2)
    S10(b0) S10(b1) S10(b2) S10(b3) S10(b4) S10(b5) S10(b6)
    virtual void c0(); virtual void c1();
    virtual bool vfunc372(int a, int b, int c);
};
struct CMeleePlayerView {
    char m_pad[0x1538];
    unsigned int m_h1538;
    int m_n153C;
};

void CWeaponMelee::vfunc327()
{
    CMeleePlayerView *pPlayer = (CMeleePlayerView *)sub_102521f0();
    CMeleeOwnerSlot429View *pOwner = (CMeleeOwnerSlot429View *)sub_10252290();
    if (pPlayer) {
        unsigned int h = pPlayer->m_h1538;
        CGlobalEntityList_Ent *pEnt = 0;
        if (h != 0xffffffff) {
            CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
            if (pSlot->m_Serial == (int)(h >> 13))
                pEnt = pSlot->m_pEntity;
        }
        if (!pEnt || pPlayer->m_n153C == -1) {
            if (((CMeleeSlot372View *)this)->vfunc372(0x4e, 1, 0) && pOwner)
                pOwner->vfunc429();
        }
    }
}
// END FUNCTION

// FUNCTION: 0x103eaea0 size=0x6
#include "CWeaponMelee.h"

unsigned int CWeaponMelee::vfunc360()
{
	return 0x40018000;
}
// END FUNCTION

// FUNCTION: 0x103eaec0 size=0x5f
#include "CLogicAuto.h"
#include "CWeaponMelee.h"
#include "CUnknown1015ef20.h"
#include "globalvars.h"

struct sub_PlayerObj319 : CUnknown1015ef20
{
	char padObj[0x208c - sizeof(CUnknown1015ef20)];
	unsigned int m_nFlags;
};
struct sub_Owner319
{
	char pad[0xa8];
	sub_PlayerObj319 *m_pObj;
};
struct sub_Weapon319
{
	char pad[0x730];
	float m_flTime;
};

// TARGET: CWeaponMelee::vfunc319
void CWeaponMelee::vfunc319()
{
	sub_Owner319 *pOwner = (sub_Owner319 *)sub_102521f0();
	if (!pOwner || !pOwner->m_pObj)
		return;
	unsigned int flags = pOwner->m_pObj->m_nFlags;
	if (!pOwner->m_pObj->sub_1015ef20())
		flags &= 0xfffff7fe;
	if ((flags & 1) && ((sub_Weapon319 *)this)->m_flTime <= gpGlobals->curtime)
		vfunc326();
	else
		vfunc321();
}
// END FUNCTION
