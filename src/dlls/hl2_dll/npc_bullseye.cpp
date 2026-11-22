// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 16 blocks
#include "vampire.h"

// FUNCTION: 0x103564f0 size=0x6
#include "CNPC_Bullseye.h"
namespace lifted {
extern char g_10628520;
}
datamap_t * CNPC_Bullseye::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10628520);
}
// END FUNCTION

// FUNCTION: 0x10356510 size=0x5
int * sub_10356550(void);
int * g_1093a010 = ((int * (*)(int))sub_10356550)(0);
// END FUNCTION

// FUNCTION: 0x10356550 size=0xb0
class ISaveRestoreOps;
struct datamap_t;
struct typedescription_t {
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    ISaveRestoreOps *pSaveRestoreOps;
    void *inputFunc;
    datamap_t *td;
    int fieldSizeInBytes;
    int unk;
};
extern ISaveRestoreOps *g_1055dc70;
extern int g_10628520[2];
void sub_100097fa();
void sub_10007ef0();
void sub_100116c1();

int *sub_10356550()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0xc, "m_hPainPartner", {0x5f44, 0}, 1, 2 },
        { 0, "CNPC_BullseyeBullseyeThink", {0, 0}, 1, 0x20, 0, 0, (void *)sub_100097fa },
        { 0, "InputTargeted", {0, 0}, 1, 8, "InputTargeted", 0, (void *)sub_10007ef0 },
        { 0, "InputReleased", {0, 0}, 1, 8, "InputReleased", 0, (void *)sub_100116c1 },
        { 10, "m_OnTargeted", {0x5f48, 0}, 1, 0x16, "OnTargeted", g_1055dc70 },
        { 10, "m_OnReleased", {0x5f60, 0}, 1, 0x16, "OnReleased", g_1055dc70 },
    };
    g_10628520[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_10628520[0] = (int)&dataDesc[1];
    return g_10628520;
}
// END FUNCTION

// FUNCTION: 0x10356630 size=0x43
#include "platform.h"
#include "CNPC_Bullseye.h"
void *sub_100aa720(int size);
extern char g_106287ac[];

// TARGET: npc_bullseye
DLL_EXPORT CBaseEntity *npc_bullseye()
{
	void *mem = sub_100aa720(0x5f78);
	CNPC_Bullseye *p;
	if (mem)
		p = ((CNPC_Bullseye *)mem)->sub_103566a0();
	else
		p = 0;
	p->vfunc106(g_106287ac);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103566a0 size=0x7b
#include "CBaseEntity.h"
#include "CNPC_Bullseye.h"

struct CBullseyeGlobals {
	virtual void v0();
	virtual bool v1();
	char m_pad[0x28 - 4];
	float m_f28;
};

extern CBullseyeGlobals *g_1093a01c;
extern float g_104454c4;
extern void *vt_104a374c[];
extern void *vt_104a371c[];
void __fastcall sub_10006659(CNPC_Bullseye *p);
void __fastcall sub_10002ddd(void *p);

// TARGET: CNPC_Bullseye::sub_103566a0
CNPC_Bullseye *CNPC_Bullseye::sub_103566a0()
{
	char *p = (char *)this;
	sub_10006659(this);
	*(int *)(p + 0x5f44) = -1;
	sub_10002ddd(p + 0x5f48);
	sub_10002ddd(p + 0x5f60);
	*(void ***)p = vt_104a374c;
	*(void ***)(p + 0x19b0) = vt_104a371c;
	m_nTakeDamage = 2;
	float f;
	if (g_1093a01c->v1())
		f = g_104454c4;
	else
		f = g_1093a01c->m_f28;
	m_iHealth = (int)f;
	*(int *)(p + 0x5f44) = -1;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10356740 size=0x1e
#include "CNPC_Bullseye.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_Bullseye::vfunc5
CBaseEntity *CNPC_Bullseye::vfunc5(unsigned int flags)
{
	sub_10006c26();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10356770 size=0x31
#include "CNPC_Bullseye.h"

extern char g_104a374c[];
extern char g_104a371c[];

// TARGET: CNPC_Bullseye::sub_10006c26
void CNPC_Bullseye::sub_10006c26()
{
	*(void **)this = g_104a374c;
	*(void **)((char *)this + 0x19b0) = g_104a371c;
	Output5f60().sub_100cd2d0();
	Output5f48().sub_100cd2d0();
	sub_1000c9cd();
}
// END FUNCTION

// FUNCTION: 0x103567c0 size=0x5
#include "CNPC_Bullseye.h"
#include "CAI_BaseNPC.h"

// TARGET: CNPC_Bullseye::vfunc104
// the game's 0x103567c0: a tail call (jmp) of CAI_BaseNPC::vfunc104
void CNPC_Bullseye::vfunc104()
{
	((CAI_BaseNPC *)this)->CAI_BaseNPC::vfunc104();
}
// END FUNCTION

// FUNCTION: 0x103567e0 size=0x296
#include "CBaseCombatCharacter.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_Bullseye.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
#include "globalvars.h"

void sub_101cf390(CBaseEntity *, const float *, const float *);
void sub_100097fa();
class CBaseCombatCharacter;

struct CBullseyeView
{
	char m_pad0000[0x1574];
	float m_f1574;
};

// TARGET: CNPC_Bullseye::vfunc103
void CNPC_Bullseye::vfunc103()
{
	vfunc104();
	float maxs[3] = { 16.0f, 16.0f, 16.0f };
	float mins[3] = { -16.0f, -16.0f, -16.0f };
	sub_101cf390(this, mins, maxs);
	vfunc93(0, 0);
	((CBaseCombatCharacter *)this)->sub_10327960(0xf7);
	m_nEffectFlags = 0;
	((CBullseyeView *)this)->m_f1574 = 0.5f;
	*(float *)((char *)this + 0x3ec) = 0;
	if (m_flags204 & 0x80000)
		((CBaseCombatCharacter *)this)->sub_10327960(0xf7);
	else
		((CBaseCombatCharacter *)this)->sub_10327960(-1);
	sub_100b3580(0x2000);
	sub_100ac4e0((int)sub_100097fa, 0, 0);
	m_flNextThink = gpGlobals->curtime + 0.1;
	{
		const char *pszName = m_name26c ? m_name26c : g_106b8540;
		ScopeTrace t("CBaseEntity::SetSolid", pszName);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(2);
	}
	{
		const char *pszName = m_name26c ? m_name26c : g_106b8540;
		ScopeTrace t("CBaseEntity::AddSolidFlags", pszName);
		((CCollisionProperty *)((char *)this + 0x270))->AddSolidFlags(0x10);
	}
	if (m_flags204 & 0x10000) {
		const char *pszName = m_name26c ? m_name26c : g_106b8540;
		ScopeTrace t("CBaseEntity::AddSolidFlags", pszName);
		((CCollisionProperty *)((char *)this + 0x270))->AddSolidFlags(4);
	}
	if (m_flags204 & 0x20000)
		m_nTakeDamage = 0;
	else
		m_nTakeDamage = 2;
	sub_100b3b00();
	m_nEffectFlags |= 0x40;
	sub_1003e880();
	sub_100b3840(0x10);
}
// END FUNCTION

// FUNCTION: 0x10356b30 size=0x5
#include "CNPC_Bullseye.h"
#include "CBaseEntity.h"

// TARGET: CNPC_Bullseye::vfunc113
// the game's 0x10356b30: a tail call (jmp) of CBaseEntity::vfunc113
void CNPC_Bullseye::vfunc113()
{
	CBaseEntity::vfunc113();
}
// END FUNCTION

// FUNCTION: 0x10356b50 size=0xa9
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CNPC_Bullseye.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

extern char g_1070d1b0[];
extern void sub_101cf390(CNPC_Bullseye *, void *, void *);

void CNPC_Bullseye::vfunc144(void *a)
{
#define a ((int)a)
	sub_10006f32(a);
	vfunc93(0, 0);
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540);
		CCollisionProperty *pColl = (CCollisionProperty *)((char *)this + 0x270);
		pColl->sub_100dc580(pColl->m_usSolidFlags | 4);
	}
	sub_101cf390(this, g_1070d1b0, g_1070d1b0);
#undef a
}
// END FUNCTION

// FUNCTION: 0x10356c30 size=0x224
#include "UTIL_Trace.h"
#include "CBroadcastRecipientFilter.h"
#include "engineserver.h"
#include "UTIL_BloodStream.h"
#include "CBaseEntity.h"

extern int g_105c230c[];

struct CBoxTrace
{
	void sub_10356c30(float *pMinsMaxs, int index);
};

void CBoxTrace::sub_10356c30(float *pMinsMaxs, int index)
{
	if (index < 0)
		return;
	int tbl = g_105c230c[index * 2];
	if (tbl < 0)
		return;

	Vector &mins = *(Vector *)pMinsMaxs;
	Vector &maxs = *(Vector *)(pMinsMaxs + 3);

	Vector vecDir = maxs - mins;
	VectorNormalize(vecDir);
	Vector vecStart = maxs - vecDir;
	Vector vecScaled;
	vecScaled = vecDir * 56755.84f;
	Vector vecEnd = maxs + vecScaled;

	CGameTrace tr;
	UTIL_TraceLine_RayCall(vecStart, vecEnd, 0x46004003, this, 0, &tr);

	CBroadcastRecipientFilter rf;
	CBaseEntity *pEnt = tr.m_pEnt;
	int ed = pEnt->m_pEdict2e0;
	int entindex = engine->vfunc35(ed);
	g_10540528->vfunc19(rf, 0, (const Vector *)&tr.m_endpos[0], &tr, entindex, tr.m_hitbox, tbl, 1);
}
// END FUNCTION

// FUNCTION: 0x10356ef0 size=0x29
#include "CAI_BaseNPC.h"

struct CNPCUnit10356ef0 : CAI_BaseNPC
{
	void sub_10356ef0();
};

// TARGET: CNPCUnit10356ef0::sub_10356ef0
void CNPCUnit10356ef0::sub_10356ef0()
{
	*(float *)((char *)this + 0x17c) = gpGlobals->curtime + 0.1f;
	CAI_BaseNPC::sub_10269b50(0x4c);
	CAI_BaseNPC::sub_10269b50(0x4d);
}
// END FUNCTION

// FUNCTION: 0x10356f30 size=0x20
bool __stdcall sub_10356f30(float a, float b)
{
	return a > 0.0f;
}
// END FUNCTION

// FUNCTION: 0x10356f60 size=0x6e
#include "CNPC_Bullseye.h"

#define SV(n) virtual void v##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)

struct SlotObj {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV10(10) SV10(11) SV10(12) SV10(13)
	SV(140) SV(141) SV(142) SV(143) SV(144) SV(145)
	virtual void v146(unsigned int, int, int);
	SV(147) SV(148) SV(149)
	SV10(15) SV(160) SV(161) SV(162) SV(163) SV(164) SV(165) SV(166)
	virtual void *v167();
};

struct BullseyeInfo {
	unsigned int first;
	char pad[0x28];
	char *pAttacker;
};

void CNPC_Bullseye::vfunc141(class CVDmg_t *pInfo, const Vector *a, struct CGameTrace *b)
{
#define a ((int)a)
#define b ((int)b)
	BullseyeInfo *info = (BullseyeInfo *)pInfo;
	if (*(unsigned int *)((char *)this + 0x204) & 0x40000) {
		SlotObj *p = *(SlotObj **)(info->pAttacker + 0x94);
		if (!p)
			return;
		if (p->v167() != this)
			return;
	}
	if ((*(unsigned int *)((char *)this + 0x204) & 0x80000) && *(int *)((char *)this + 0x1fc) == 0)
		((SlotObj *)this)->v146(info->first, a, b);
	sub_10015b13(pInfo, a, b);
#undef b
#undef a
}
// END FUNCTION

// FUNCTION: 0x10356ff0 size=0xdf
#include "CNPC_Bullseye.h"

struct EntInfo { CBaseEntity *m_pEntity; int m_serial; int m_unused; };
struct EntInfoList { int m_unused; EntInfo m_entries[1]; };
extern EntInfoList *g_10566458;

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)

struct CBullseyeAttackerNpc
{
	S100(a) S10(b0) S10(b1) S10(b2) S10(b3) S10(b4) S10(b5)
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6();
	virtual CBaseEntity *vfunc167();	// the entity the NPC targets
};

struct CBullseyeAttacker { char m_pad[0x94]; CBullseyeAttackerNpc *m_pNpc; };

struct CBullseyeDamageInfo	// 0x4c bytes
{
	char m_pad00[0x2c];
	CBullseyeAttacker *m_pAttacker;	// 0x2c
	int m_nDamage;	// 0x30
	char m_pad34[0x4c - 0x34];
};

struct CBullseyeHandle
{
	unsigned int m_Index;
	CBaseEntity *Get() const
	{
		EntInfo *e;
		return (m_Index != 0xffffffff && (e = &g_10566458->m_entries[m_Index & 0x1fff], e->m_serial == (int)(m_Index >> 13))) ? e->m_pEntity : 0;
	}
};

int CNPC_Bullseye::vfunc142(struct CTakeDamageInfo *pInfo)
{
	CBullseyeDamageInfo *pDamage = (CBullseyeDamageInfo *)pInfo;
	if (*(unsigned int *)((char *)this + 0x204) & 0x40000) {
		CBullseyeAttackerNpc *pNpc = pDamage->m_pAttacker->m_pNpc;
		if (!pNpc)
			return 0;
		if (pNpc->vfunc167() != this)
			return 0;
	}
	if (((CBullseyeHandle *)((char *)this + 0x5f44))->Get()) {
		((CBullseyeHandle *)((char *)this + 0x5f44))->Get()->sub_100a1250(pInfo);
		CBullseyeDamageInfo info = *pDamage;
		info.m_nDamage = 0;
		return sub_10265e90(&info);
	}
	return sub_10265e90(pInfo);
}
// END FUNCTION
