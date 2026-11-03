// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100b7e40 size=0xbd
extern CGlobalEntityList *g_10566458;

struct CMat3x4X
{
	float m[3][4];
};

void __cdecl sub_10139b90(const Vector *pAngles, CMat3x4X *pOut);	// AngleMatrix (stub 0x10012deb)
void __cdecl sub_10138df0(const CMat3x4X *pIn1, const CMat3x4X *pIn2, CMat3x4X *pOut);	// ConcatTransforms (stub 0x1000a01a)
void __cdecl sub_10137ed0(const CMat3x4X *pMatrix, Vector *pAngles);	// MatrixAngles (stub 0x10012756)

float *CBasePlayer::vfunc194()
{
	CBaseEntity *pParent = 0;
	unsigned int h = *(unsigned int *)((char *)this + 0x25c);
	if (h != 0xffffffff) {
		CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
		if (s->m_Serial == (int)(h >> 13))
			pParent = (CBaseEntity *)s->m_pEntity;
	}
	if (!pParent)
		return &m_vec206c.x;
	CMat3x4X local;
	CMat3x4X world;
	sub_10139b90(&m_vec206c, &local);
	if ((unsigned char)(pParent->m_flags268 >> 11) & 1)
		pParent->vfunc98();
	sub_10138df0((const CMat3x4X *)((char *)pParent + 0x130), &local, &world);
	static Vector s_vecAngles;
	sub_10137ed0(&world, &s_vecAngles);
	return &s_vecAngles.x;
}
// END FUNCTION

// FUNCTION: 0x100b7f50 size=0x7
float *CBasePlayer::vfunc195()
{
	return (float *)&m_vec206c;
}
// END FUNCTION

// FUNCTION: 0x100b7fe0 size=0x1bf
#include "CBasePlayer.h"
#include "CBaseCombatWeapon.h"
#include "CEHandleGet.h"
#include <string.h>

extern char g_106b8540[];
extern "C" int __cdecl _strcmpi(const char *, const char *);

struct CWeaponNameView
{
	char m_pad0000[0x11c];
	const char *m_pszName11c;
};

void CBasePlayer::vfunc457(const char *pszName, int a)
{
	if (!pszName)
		return;
	if (EHandle_Get(m_h1538) && m_n153C != -1)
		return;
	for (int i = 0; i < 0xe0; i++) {
		CBaseCombatWeapon *pWeapon = (CBaseCombatWeapon *)sub_1032e8b0(i);
		if (!pWeapon)
			continue;
		const char *pszClass = ((CWeaponNameView *)pWeapon)->m_pszName11c ? ((CWeaponNameView *)pWeapon)->m_pszName11c : g_106b8540;
		if (_strcmpi(pszClass, pszName) != 0)
			continue;
		if (pWeapon->vfunc296() != a)
			continue;
		if (!_strcmpi((char *)pWeapon->sub_102517b0() + 0x2450, "bloodpack")) {
			pWeapon->vfunc315();
			return;
		}
		if (!sub_10335a70(pWeapon))
			return;
		if (pWeapon == sub_1032e7b0())
			return;
		if ((CBaseEntity *)pWeapon == m_hEnt10DC.Get())
			return;
		if (pWeapon->sub_10256200()) {
			if (sub_1032e7b0()) {
				if (!((CBaseCombatWeapon *)sub_1032e7b0())->vfunc313())
					return;
				((CBaseCombatWeapon *)sub_1032e7b0())->vfunc316((int)pWeapon);
			}
			sub_10177120();
			if (sub_1032e7b0())
				vfunc443(((CBaseCombatWeapon *)sub_1032e7b0())->vfunc317());
		} else {
			m_hEnt10E0 = m_hEnt10DC;
		}
		vfunc388((CBaseEntity *)pWeapon, 0);
		sub_10182e00((CBaseCombatWeapon *)sub_1032e7b0());
		return;
	}
}
// END FUNCTION

// FUNCTION: 0x1015aeb0 size=0x6
extern int g_10580edc[];

// TARGET: CBasePlayer::vfunc82
void *CBasePlayer::vfunc82()
{
	return g_10580edc;
}
// END FUNCTION

// FUNCTION: 0x1015d660 size=0x6
extern char g_10583618[];

// TARGET: sub_1015d660
void *sub_1015d660()
{
	return g_10583618;
}
// END FUNCTION

// FUNCTION: 0x1015dc40 size=0x6
int CBasePlayer::vfunc409()
{
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1015dc60 size=0x2d
#include "CBasePlayer.h"

struct EntInfo {
	CBaseEntity *m_pEntity;
	unsigned int m_serial;
	int m_pad;
};

struct EntList {
	int m_hdr;
	EntInfo m_entries[1];
};

extern EntList *g_10566458;

CBaseEntity *CBasePlayer::sub_1015dc60()
{
	unsigned int h = *(unsigned int *)((char *)this + 0x1c60);
	if (h != 0xffffffff) {
		EntInfo *info = &g_10566458->m_entries[h & 0x1fff];
		if (info->m_serial == (h >> 13))
			return info->m_pEntity;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1015dca0 size=0x3
// TARGET: CBasePlayer::vfunc328
char CBasePlayer::vfunc328() { return 1; }
// END FUNCTION

// FUNCTION: 0x1015dcf0 size=0x1
// TARGET: sub_1015dcf0
void __fastcall sub_1015dcf0(void *pThis)
{
}
// END FUNCTION

// FUNCTION: 0x1015dd10 size=0x3
// TARGET: CBasePlayer::vfunc439
char CBasePlayer::vfunc439() { return 0; }
// END FUNCTION

// FUNCTION: 0x1015dd30 size=0x3
// TARGET: CBasePlayer::vfunc162
char CBasePlayer::vfunc162() { return 1; }
// END FUNCTION

// FUNCTION: 0x1015dd50 size=0x8
#include "CBasePlayer.h"

char CBasePlayer::sub_1015dd50()
{
	unsigned char result = ((CBaseEntity *)this)->CBaseEntity::vfunc117();
	result &= 0xfd;
	return result;
}
// END FUNCTION

// FUNCTION: 0x1015dd70 size=0x3
// TARGET: sub_1015dd70
int sub_1015dd70() {
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1015dd90 size=0x1
// TARGET: sub_1015dd90
void __fastcall sub_1015dd90(void *pThis)
{
}
// END FUNCTION

// FUNCTION: 0x1015ddb0 size=0x1
// TARGET: sub_1015ddb0
void __fastcall sub_1015ddb0(void *pThis)
{
}
// END FUNCTION

// FUNCTION: 0x1015ddd0 size=0x1
// TARGET: sub_1015ddd0
void __fastcall sub_1015ddd0(void *pThis)
{
}
// END FUNCTION

// FUNCTION: 0x1015ddf0 size=0x3
// TARGET: sub_1015ddf0
void __stdcall sub_1015ddf0(int a) {
}
// END FUNCTION

// FUNCTION: 0x1015de10 size=0x3
// TARGET: sub_1015de10
char sub_1015de10() {
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1015de30 size=0x7
float CBasePlayer::vfunc464()
{
	return 36.0f;
}
// END FUNCTION

// FUNCTION: 0x1015de50 size=0x7
float CBasePlayer::vfunc465()
{
	return 60.0f;
}
// END FUNCTION

// FUNCTION: 0x1015de70 size=0x7
float CBasePlayer::vfunc466()
{
	return 18.0f;
}
// END FUNCTION

// FUNCTION: 0x1015de90 size=0x3
// TARGET: sub_1015de90
char sub_1015de90() {
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1015deb0 size=0x7
#include "CBasePlayer.h"

void *CBasePlayer::vfunc198()
{
	return (char *)this + 0x211c;
}
// END FUNCTION

// FUNCTION: 0x1015ded0 size=0x1e
#include "CBasePlayer.h"

void sub_100aa7b0(void *p);

// TARGET: CBasePlayer::vfunc5
CBasePlayer *CBasePlayer::vfunc5(unsigned int flags)
{
	sub_100017d5();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1015ee60 size=0x7
char CBasePlayer::vfunc406()
{
	return *(char *)((char *)this + 0x19f6);
}
// END FUNCTION

// FUNCTION: 0x1015ee80 size=0x8
#include "CBasePlayer.h"

void CBasePlayer::vfunc407()
{
	m_b19F6 = true;
}
// END FUNCTION

// FUNCTION: 0x1015eea0 size=0x8
// TARGET: CBasePlayer::vfunc408
void CBasePlayer::vfunc408()
{
	m_b19F6 = false;
}
// END FUNCTION

// FUNCTION: 0x1015efa0 size=0xb8
#include "CBasePlayer.h"
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

struct CUnknown1015ef00
{
	void sub_1015ef00();
};

void __cdecl sub_101cf600(CBaseEntity *pEnt);

// TARGET: CBasePlayer::vfunc103
void CBasePlayer::vfunc103()
{
	CBaseEntity *pEnt = (CBaseEntity *)this;
	vfunc407();
	((CUnknown1015ef00 *)this)->sub_1015ef00();
	{
		ScopeTrace trace("CBaseEntity::SetSolid", pEnt->m_name26c ? pEnt->m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	pEnt->vfunc93(9, 0);
	sub_101cf600(pEnt);
	pEnt->sub_100b3640(1);
	vfunc457("item_w_fists", 0);
}
// END FUNCTION

// FUNCTION: 0x1015fcd0 size=0x5d
#include "CBasePlayer.h"
void CBasePlayer::vfunc112(int unused, int nArg)
{
	if (m_n14B0 == nArg && m_n14B4 != -1) {
		if (sub_10099400(m_n14B0)) {
			if (!sub_10099430(0))
				sub_101644f0(-1, m_n14B4, 1);
			else
				sub_101644f0(-1, m_n14B0, 1);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1015fe10 size=0xeb
#include "CBasePlayer.h"
#include "CGlobalEntityList.h"
#include "CEntityVSlots.h"

extern CGlobalEntityList *g_10566458;

inline CGlobalEntityList_Ent *LookupEntity(const unsigned int &h)
{
	if (h == 0xffffffff)
		return 0;
	CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
	if (s->m_Serial == (int)(h >> 13))
		return s->m_pEntity;
	return 0;
}

#define H1C58 (*(unsigned int *)((char *)this + 0x1c58))

void CBasePlayer::vfunc316(CGlobalEntityList_Ent *pEnt, int a, int b)
{
	if (pEnt) {
		if (LookupEntity(H1C58)) {
			if (((CEntityVSlots *)LookupEntity(H1C58))->slot158()) {
				if (LookupEntity(H1C58) != pEnt)
					return;
			}
		}
		int act = *(int *)((char *)this + 0xff0);
		if ((act == 1 || act == 5) && sub_1015fd50() == -1) {
			*(unsigned int *)((char *)this + 0x1c5c) = *pEnt->v1();
			*(unsigned int *)((char *)this + 0x1c60) = *pEnt->v1();
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1015ff40 size=0xc3
struct HandleEntry { void *ent; unsigned int serial; int pad; };
struct HandleList { int pad; HandleEntry e[1]; };
extern HandleList *g_10566458;

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct VehicleSlots
{
	SL10(a0) SL10(a1) SL10(a2) SL10(a3) SL10(a4) SL10(a5) SL10(a6) SL10(a7) SL10(a8) SL10(a9)
	SL10(b0) SL10(b1) SL10(b2) SL10(b3) SL10(b4)
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7();
	virtual bool s158();
};
struct VehicleHandle
{
	unsigned int m_Index;
	VehicleSlots *Get() const
	{
		if (m_Index != 0xffffffff) {
			HandleEntry *e = &g_10566458->e[m_Index & 0x1fff];
			if (e->serial == (m_Index >> 13))
				return (VehicleSlots *)e->ent;
		}
		return 0;
	}
};

bool CBasePlayer::sub_1015ff40()
{
	if (*((char *)this + 0x1edc))
		return true;
	if (((VehicleHandle *)((char *)this + 0x1c58))->Get() != 0) {
		if (((VehicleHandle *)((char *)this + 0x1c58))->Get()->s158())
			*(float *)((char *)this + 0x19b0) = gpGlobals->curtime;
	}
	return *(float *)((char *)this + 0x19b0) > 0.0f && *(float *)((char *)this + 0x19b0) + 5.0f > gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x10160a60 size=0x104
#include "CBasePlayer.h"
#include "ConVar.h"
#include "CUnknown1070b244.h"
#include "CUnknown10739d08.h"
extern ConVar *g_107255ec;
extern ConVar *g_10725634;
extern ConVar *g_107251ac;
extern CUnknown1070b244 *g_1070b244;
extern CUnknown10739d08 g_10739d08;
char CBasePlayer::vfunc321(int unused)
{
    float flScale = g_107255ec->vfunc1() ? 0.0f : g_107255ec->m_fValue;
    if (m_f1DA8 <= gpGlobals->curtime)
    {
        flScale = g_10725634->vfunc1() ? 0.0f : g_10725634->m_fValue;
        m_f1DA8 = g_10739d08.sub_101e7d70() + gpGlobals->curtime;
    }
    float flAmount = (g_107251ac->vfunc1() ? 0.0f : g_107251ac->m_fValue) * flScale;
    Vector punch;
    punch.x = g_1070b244->vfunc1(-flAmount, flAmount);
    punch.y = g_1070b244->vfunc1(-flAmount, flAmount);
    punch.z = g_1070b244->vfunc1(-flAmount, flAmount);
    vfunc169(&punch);
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10160bc0 size=0xfc
#include "CBasePlayer.h"
#include "melee_dice_roll_result.h"
#include "CUnknown10349590.h"
#include "CUnknown103498b0.h"
#include "CVStatList_t.h"

extern float g_1046fafc;
extern float g_1046fb00;

bool CBasePlayer::vfunc318(int a, melee_dice_roll_result *pRoll, int c)
{
	if (!pRoll)
		return false;
	int nActivity = 0x52;
	float flTime = g_1046fafc;
	if (((CUnknown10349590 *)pRoll)->sub_10349590()) {
		CVStatList_t *pList = CVStatListSet::Of(this)->Find(0);
		pRoll->sub_10349710((int)this, pList->sub_10010609(2), (int *)c);
		if (((CUnknown103498b0 *)pRoll)->sub_103498b0() == 3) {
			nActivity = 0x1156;
			flTime = g_1046fb00;
		}
	}
	sub_101644f0(nActivity, -1, 1);
	*(int *)((char *)this + 0x6f4) = *(int *)((char *)this + 0x1488);
	m_f1564 = flTime + gpGlobals->curtime;
	return true;
}
// END FUNCTION

// FUNCTION: 0x10160d00 size=0x8f
#include "CBasePlayer.h"

struct melee_dice_roll_result_view
{
	int sub_10349830();	// stub 0x100083f0
};

extern float g_104454c4;
extern float g_1046faf4;
extern float g_1046faf8;
extern float g_1046a5e4;

struct CBasePlayerUnit : CBasePlayer
{
	bool sub_10160d00(int a, melee_dice_roll_result *pRoll, int c);
	int sub_10345f10();	// CBaseCombatCharacter stub 0x1001444d
	void sub_10324500(int a);	// stub 0x1001464b
};

#define PL_F1488(p) (*(float *)((char *)(p) + 0x1488))

bool CBasePlayerUnit::sub_10160d00(int a, melee_dice_roll_result *pRoll, int c)
{
	int nActivity = sub_10345f10();
	sub_10324500(nActivity);
	sub_101644f0(nActivity, -1, 1);
	*(int *)((char *)this + 0x6f4) = *(int *)((char *)this + 0x1488);
	float flBase = g_1046faf4;
	if (pRoll && ((melee_dice_roll_result_view *)pRoll)->sub_10349830() == 2)
		flBase = g_1046faf8;
	float flTime = (PL_F1488(this) > g_1046a5e4) ? (double)flBase / PL_F1488(this) : g_104454c4;
	m_f1564 = flTime + gpGlobals->curtime;
	return true;
}
// END FUNCTION

// FUNCTION: 0x10161200 size=0x12b
struct CSequenceDescView {
	char m_pad0000[0x2f8];
	float m_f2f8;
};

struct CBasePlayerActView {
	char m_pad0000[0x6f0];
	int m_nSequence;	// 0x6f0
	int m_n06f4;
	float m_flCycle;	// 0x6f8
	char m_pad06fc[0xff0 - 0x6fc];
	int m_nActivity;	// 0xff0
};

// TARGET: CBasePlayer::vfunc412
bool CBasePlayer::vfunc412()
{
	CBasePlayerActView *p = (CBasePlayerActView *)this;
	int act = p->m_nActivity;
	if (act == 0x1152 || act == 0x1153 || act == 0x52 || act == 0x1156) {
		if (gpGlobals->curtime < m_f1564)
			return true;
	} else if (p->m_nSequence >= 0) {
		if (p->m_flCycle >= 1.0f)
			return false;
		if (act == 0x4b) {
			CSequenceDescView *pDesc = (CSequenceDescView *)sub_1008d990(p->m_nSequence);
			if (pDesc) {
				if (p->m_flCycle < pDesc->m_f2f8)
					return true;
			}
		} else {
			if (act == 0x4c)
				return true;
			if (act == 0x4d)
				return true;
			if (act == 0x4e)
				return true;
			if (act == 0xfa4)
				return true;
		}
		if (sub_10344da0(act))
			return true;
		if (p->m_flCycle < 0.8f) {
			if (sub_10161380())
				return true;
		}
		if (act == 0x1065)
			return true;
		if (act == 0x1066)
			return true;
		return (char)(act == 0x1067);
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10161fc0 size=0x10b
#include "CBasePlayer.h"
#include "CEHandleGet.h"

extern "C++" __declspec(dllimport) void DevWarning(const char *fmt, ...);
int sub_10376d00(CBasePlayer *pPlayer);
const char *sub_101d3730(const char *psz);
void sub_101cebc0(CBasePlayer *pPlayer, int a, int b);

#define FSV(n) virtual void f##n();
#define FSV10(p) FSV(p##0) FSV(p##1) FSV(p##2) FSV(p##3) FSV(p##4) FSV(p##5) FSV(p##6) FSV(p##7) FSV(p##8) FSV(p##9)
struct CFrenzyShadowView	// the controller entity: slot 138 answers its AI type
{
	FSV10(0) FSV10(1) FSV10(2) FSV10(3) FSV10(4) FSV10(5) FSV10(6) FSV10(7) FSV10(8) FSV10(9)
	FSV10(10) FSV10(11) FSV10(12) FSV(130) FSV(131) FSV(132) FSV(133) FSV(134) FSV(135) FSV(136) FSV(137)
	virtual int vfunc138();
};

struct CFrenzyList
{
	void sub_10227a30(CBasePlayer *pPlayer, int a);
};
extern CFrenzyList g_10750cb4;

// TARGET: CBasePlayer::vfunc360
bool CBasePlayer::vfunc360()
{
	if (EHandle_Get(m_h1538) && m_n153C != -1)
	{
		DevWarning("CheckForPlayerFrenzy - Failed because player is grappling!\n");
		return false;
	}
	if (m_nUseEdictIndex1EB8)
		return false;
	if (!sub_10376d00(this))
	{
		DevWarning("CheckForPlayerFrenzy - Failed to prepare NPC enemy list!  No close NPCs.\n");
		return false;
	}
	vfunc457("item_w_fists", 0);
	CFrenzyShadowView *pShadow = (CFrenzyShadowView *)sub_10161a70("npc_VFrenzyShadow");
	if (!pShadow)
	{
		DevWarning("Failed to create frenzy controller in CheckForPlayerFrenzy!\n");
		return false;
	}
	if (pShadow->vfunc138() != 3)
		DevWarning("Non Troika Ent in CheckForPlayerFrenzy!\n");
	sub_10147a30(3);
	sub_1017e150(1, -1.0f, sub_101d3730("CheckForPlayerFrenzy"));
	sub_101cebc0(this, 0, 0);
	g_10750cb4.sub_10227a30(this, 0);
	return true;
}
// END FUNCTION

// FUNCTION: 0x10162120 size=0x60
#include "CBasePlayer.h"
struct PhysEnvView {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void vfunc20(void *p);
	virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36(); virtual void v37();
	virtual void vfunc38(void *p);
};
extern PhysEnvView *g_10723940;
void __stdcall sub_100a6490(int);
void sub_1002ee60(void *);
// TARGET: CBasePlayer::vfunc180
void CBasePlayer::vfunc180()
{
	sub_100a6490(0);
	sub_1002ee60(this);
	if (m_pPartOwner)
		g_10723940->vfunc38(m_pPartOwner);
	if (m_pPart2104)
		g_10723940->vfunc20(m_pPart2104);
	if (m_pPart2108)
		g_10723940->vfunc20(m_pPart2108);
	sub_1000b0c8();
}
// END FUNCTION

// FUNCTION: 0x101621f0 size=0x1
void CBasePlayer::vfunc448()
{
}
// END FUNCTION

// FUNCTION: 0x10162260 size=0x4d
#include "CBasePlayer.h"
struct CPlayerViewOffsetView {
	char m_pad[0x184];
	Vector m_vecViewOffset;
};
// TARGET: CBasePlayer::vfunc389
Vector CBasePlayer::vfunc389(const Vector &vecPos)
{
	return ((CPlayerViewOffsetView *)this)->m_vecViewOffset + vecPos;
}
// END FUNCTION

// FUNCTION: 0x10162fa0 size=0x55
#include "CBasePlayer.h"
void sub_102699e0(Vector vecPos, int n, float f);
void CBasePlayer::vfunc438(float flArg, int flags)
{
    if (flags & 4) {
        Vector v;
        const Vector &pos = *(const Vector *)&vfunc193();
        sub_102699e0(pos, vfunc145(), flArg);
    }
}
// END FUNCTION

// FUNCTION: 0x10163630 size=0xd9
#include "CBasePlayer.h"
#define GV(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct S1070ba0c
{
    GV(a0) GV(a1) GV(a2) GV(a3) GV(a4) GV(a5)
    virtual int vfunc60(CBasePlayer *p);
    virtual int vfunc61(CBasePlayer *p);
    virtual int vfunc62(CBasePlayer *p);
};
extern S1070ba0c *g_1070ba0c;
void CBasePlayer::vfunc441()
{
    int list[33];
    int type;
    int sub;
    type = g_1070ba0c->vfunc61(this);
    sub = g_1070ba0c->vfunc62(this);
    if (type == 9 && sub == 12) {
        vfunc442(1);
        return;
    }
    int i = 0;
    int *p = list;
    for (; i < 0xe0; i++) {
        void *w = sub_1032e8b0(i);
        if (w) {
            switch (type) {
            case 7:
                *p++ = (int)w;
                break;
            case 8:
                if (sub_1032e7b0() && w == sub_1032e7b0())
                    *p++ = (int)w;
                break;
            }
        }
    }
    if (sub != 12) {
        int j = 0;
        p = list;
        for (; j < 0x20; j++) {
            if (sub_103346c0(j) > 0 && sub == 10)
                *p++ = j;
        }
    }
    vfunc442(1);
}
// END FUNCTION

// FUNCTION: 0x10163750 size=0x97
#include "CBasePlayer.h"
#include "CGlobalEntityList.h"

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)

struct CPlayerWeaponView
{
	S100(a) S100(b) S100(c)
	S10(d0)
	virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23(); virtual void d24(); virtual void d25();
	virtual void vfunc316(int a);
};

extern CGlobalEntityList *g_10566458;

void CBasePlayer::vfunc442(int a)
{
	if (sub_1032e7b0()) {
		sub_10177120();
		((CPlayerWeaponView *)sub_1032e7b0())->vfunc316(0);
	}
	unsigned int *pHandle = (unsigned int *)((char *)this + 0x10dc);
	if (*pHandle != -1) {
		CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[*pHandle & 0x1fff];
		if (pSlot->m_Serial == (int)(*pHandle >> 13) && pSlot->m_pEntity != 0)
			*pHandle = -1;
	}
	*(unsigned int *)((char *)this + 0x10e0) = -1;
	vfunc443(0);
	sub_1032ead0();
	sub_103345d0();
	*(int *)((char *)this + 0x1c50) = 0;
	vfunc444();
}
// END FUNCTION

// FUNCTION: 0x10163ed0 size=0x7c
#include "CBasePlayer.h"
struct CPlayerVec { float x, y, z; };
void sub_101668b0();

void CBasePlayer::vfunc403()
{
    vfunc448();
    CPlayerVec vec = *(CPlayerVec *)vfunc221();
    vec.x = 0;
    vec.z = 0;
    vfunc64(&vec.x);
    sub_100ac4e0((void *)sub_101668b0, 0, 0);
    *(float *)((char *)this + 0x17c) = gpGlobals->curtime + 0.1;
    sub_1032bdf0();
}
// END FUNCTION

// FUNCTION: 0x10164240 size=0x21c
#include "CBasePlayer.h"
#include "CBaseEntity.h"
#include "CEHandleGet.h"

struct CEntSlot360View
{
	CBP_V100(xa0) CBP_V100(xa1) CBP_V100(xa2) CBP_V10(xb0) CBP_V10(xb1) CBP_V10(xb2) CBP_V10(xb3) CBP_V10(xb4) CBP_V10(xb5)
	virtual int vfunc360();
};

static inline CGlobalEntityList_Ent *GrappleTarget(CBasePlayer *p)
{
	CGlobalEntityList_Ent *pEnt = EHandle_Get(p->m_h1538);
	if (pEnt && p->m_n153C != -1)
		return pEnt;
	return 0;
}

void CBasePlayer::vfunc449(int a, int b)
{
	if (vfunc412())
	{
		if (m_b1DF4 && sub_10161380() && m_f6f8 >= 0.65f)
		{
			CEntSlot360View *pEnt = (CEntSlot360View *)EHandle_Get(m_hEnt0EA4);
			if (pEnt && (pEnt->vfunc360() & 0x6000))
			{
				m_b1DF4 = 0;
				vfunc456();
			}
		}
		sub_101641d0(a);
	}
	else if (!GrappleTarget(this))
	{
		vfunc417(a, b);
	}
	else if (!(EHandle_Get(m_h1538) && m_n153C == 1))
	{
		char r;
		if (EHandle_Get(m_h1538))
		{
			switch (m_n1540)
			{
			case 0:
			case 1:
				r = vslot419(a);
				break;
			case 2:
				r = vslot420(a);
				break;
			case 3:
				r = vfunc421(a);
				break;
			case 5:
				r = vfunc418(a);
				break;
			case 6:
				r = vslot422(a);
				break;
			case 8:
				r = vslot423(a);
				break;
			default:
				r = m_b65c;
				break;
			}
		}
		else
			r = m_b65c;
		if (r)
		{
			sub_10329560();
			sub_100b3580(0x40000000);
			vfunc449(a, 0);
		}
	}
	sub_10146e20(m_nFF0, a);
	sub_1017e900(m_nFEC, a);
}
// END FUNCTION

// FUNCTION: 0x101647a0 size=0x9b
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
extern char g_105387dc[];

struct ScopeTrace {
    ScopeTrace(const char *a, const char *b) {
        g_109f3620[*g_109f3680].a = a;
        g_109f3620[*g_109f3680].b = b;
        g_109f3620[*g_109f3680].c = g_106b8540;
        ++*g_109f3680;
    }
    ~ScopeTrace() { --*g_109f3680; }
};

int CBasePlayer::sub_101647a0(int act)
{
    const char *name;
    if (this) {
        name = *(const char **)((char *)this + 0x26c);
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    ScopeTrace t("CBasePlayer::NPC_TranslateActivity", name);
    switch (act) {
    case 0x16:
        act = 9;
        break;
    case 0x17:
        act = 0x13;
        break;
    }
    return act;
}
// END FUNCTION

// FUNCTION: 0x101654e0 size=0x93
#include "CBasePlayer.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

struct CActivityArg	// a one dword activity wrapper with an inline constructor
{
	int m_nActivity;
	CActivityArg(int n) { m_nActivity = n; }
};

struct CPlayerActView	// the player's slot-style SetActivity member taking the wrapper
{
	void sub_1032a100(CActivityArg act);
};

inline CGlobalEntityList_Ent *LookupEntity(unsigned int h)
{
	if (h == 0xffffffff)
		return 0;
	CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
	if (pSlot->m_Serial != (int)(h >> 13))
		return 0;
	return pSlot->m_pEntity;
}

char CBasePlayer::vfunc418(int unused)
{
	char *p = (char *)this;
	sub_101644f0(-1, 0, 0);
	int nActivity = *(int *)(p + 0xff0);
	if (nActivity == 0xf49)
	{
		if (!LookupEntity(*(unsigned int *)(p + 0xfe8)))
		{
			((CPlayerActView *)this)->sub_1032a100(CActivityArg(0xf52));
			return 0;
		}
	}
	if (*(char *)(p + 0x65c))
	{
		if (nActivity == 0xf40)
		{
			((CPlayerActView *)this)->sub_1032a100(CActivityArg(0xf49));
			return 0;
		}
		if (nActivity == 0xf52)
			return 1;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10165a00 size=0x47
#include "CBasePlayer.h"
#include "CEHandleGet.h"
// TARGET: CBasePlayer::vfunc426
void CBasePlayer::vfunc426()
{
	CBaseEntity *p = 0;
	if (m_n153C != -1)
		p = (CBaseEntity *)EHandle_Get(m_h1538);
	else
		p = 0;
	sub_10165790(p);
}
// END FUNCTION

// FUNCTION: 0x10165a70 size=0x47
#include "CBasePlayer.h"
#include "CEHandleGet.h"
void CBasePlayer::vfunc427()
{
	sub_10165790(m_n153C != -1 ? (CBaseEntity *)EHandle_Get(m_h1538) : 0);
}
// END FUNCTION

// FUNCTION: 0x10165d90 size=0x13d
#include "CBasePlayer.h"
#include "CBaseCombatCharacter.h"
#include "CVDmg_t.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

#define CS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define CS100(p) CS10(p##0) CS10(p##1) CS10(p##2) CS10(p##3) CS10(p##4) CS10(p##5) CS10(p##6) CS10(p##7) CS10(p##8) CS10(p##9)

struct CDamageInfoLocal
{
	char m_data[0x4c];
	void sub_101c26d0(CBasePlayer *pInflictor, CBasePlayer *pAttacker, float flDamage, int bitsDamageType, int forceCustom, CVDmg_t *pDmg, int a);	// stub 0x10009656
};

// The stat holder's virtual table up to slot 403: slots 144 and 403 are used.
struct CStatHolderSlots
{
	CS100(a) CS10(b0) CS10(b1) CS10(b2) CS10(b3)
	virtual void b40(); virtual void b41(); virtual void b42(); virtual void b43();
	virtual void vfunc144(CDamageInfoLocal *pInfo);
	CS100(c) CS100(d) CS10(e0) CS10(e1) CS10(e2) CS10(e3) CS10(e4)
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7();
	virtual void vfunc403();
};

struct CStatHolderHandle
{
	unsigned int m_Index;
	CBaseCombatCharacter *Get() const
	{
		if (m_Index == 0xffffffff)
			return 0;
		CGlobalEntityList_Slot *e = &g_10566458->m_Slots[m_Index & 0x1fff];
		return e->m_Serial == (m_Index >> 13) ? (CBaseCombatCharacter *)e->m_pEntity : 0;
	}
};

// TARGET: CBasePlayer::vfunc421
char CBasePlayer::vfunc421(int unused)
{
    if (*(char *)((char *)this + 0x65c)) {
        if (m_n153C != -1) {
            CBaseCombatCharacter *pChar = ((CStatHolderHandle *)&m_h1538)->Get();
            if (pChar) {
                CVDmg_t dmg;
                dmg.sub_101fa960((CVDmgSource_t *)this);
                dmg.m_field04 = 1;
                dmg.m_field0c = 1;
                CDamageInfoLocal info;
                info.sub_101c26d0(this, this, 1.0f, 0, 0, &dmg, -1);
                pChar->GetActiveStatList()->sub_10200a70(0xf, 0x11);
                ((CStatHolderSlots *)pChar)->vfunc144(&info);
                ((CStatHolderSlots *)pChar)->vfunc403();
                dmg.sub_101fa680();
            }
        }
        return 1;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10168700 size=0x19e
#include "CBasePlayer.h"
#include "CBaseCombatCharacter.h"
#include "CEHandleGet.h"
#include "CEntityVSlots.h"
#include "CUnknown10739d08.h"

extern "C" int __cdecl sprintf(char *, const char *, ...);
extern "C" __declspec(dllimport) void Msg(const char *pszFormat, ...);
char *sub_101d3730(const char *pszFormat, ...);

struct CDevFlagObj
{
	virtual void v0();
	virtual char vfunc1();
	char m_pad0004[0x28];
	int m_n2c;
};
extern CDevFlagObj *g_10937034;

struct CUnknown101e8bb0 { float sub_101e8bb0(); };
struct CUnknown101e8b50 { float sub_101e8b50(); };
extern CUnknown101e8bb0 g_10739d08;

char CBasePlayer::vfunc425(CBaseEntity *pTarget)
{
	char szBuf[256];
	if (EHandle_Get(m_h1538) && m_n153C != -1)
		return 0;
	if (pTarget) {
		if (!g_10937034->vfunc1() && g_10937034->m_n2c) {
			sprintf(szBuf, "%s BeFedOnByZombie found victim %s", ((CBaseCombatCharacter *)this)->sub_100ab4f0(), pTarget->sub_100ab4f0());
			((CBaseCombatCharacter *)this)->sub_103221b0(szBuf);
			Msg("Attempting Feed...\n");
		}
		if (sub_10328df0(pTarget, 8)) {
			if (sub_1032e7b0())
				((CEntityVSlots *)sub_1032e7b0())->slot66();
			m_b14A8 = 1;
			m_b1475 = 1;
			m_f1478 = g_10739d08.sub_101e8bb0() + gpGlobals->curtime;
			m_f147C = ((CUnknown101e8b50 *)&g_10739d08)->sub_101e8b50() + gpGlobals->curtime;
			goto done;
		}
		if (!g_10937034->vfunc1() && g_10937034->m_n2c)
			((CBaseCombatCharacter *)this)->sub_103221b0(sub_101d3730("%s StartGrappleAttack failed", ((CBaseCombatCharacter *)this)->sub_100ab4f0()));
	}
	if (!g_10937034->vfunc1() && g_10937034->m_n2c)
		((CBaseCombatCharacter *)this)->sub_103221b0(sub_101d3730("%s BeFedOnByZombie failed", ((CBaseCombatCharacter *)this)->sub_100ab4f0()));
	return 0;
done:
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10168e10 size=0x32
#include "CBasePlayer.h"

struct EntInfo {
	CBaseEntity *m_pEntity;
	unsigned int m_serial;
	int m_pad;
};

struct EntList {
	int m_hdr;
	EntInfo m_entries[1];
};

extern EntList *g_10566458;

bool CBasePlayer::sub_10168e10()
{
	unsigned int h = *(unsigned int *)((char *)this + 0xfe8);
	if (h != 0xffffffff) {
		EntInfo *info = &g_10566458->m_entries[h & 0x1fff];
		if (info->m_serial == (h >> 13) && info->m_pEntity)
			return false;
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x101695f0 size=0x46
#include "CBasePlayer.h"
char CBasePlayer::vfunc379(int a, int b, int c, int d, int e, int f, int g)
{
	if (sub_10329760(a, b, c, d, e, f, g)) {
		sub_10181580(1);
		return 1;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1016a640 size=0x1
// TARGET: sub_1016a640
void __fastcall sub_1016a640(void *pThis)
{
}
// END FUNCTION

// FUNCTION: 0x1016a870 size=0xf1
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "TestBit.h"


void CBasePlayer::vfunc434()
{
    if (!(sub_100b3700() & 4) && m_n03E0 < 2 && (m_b208C & 2)) {
        if (sub_100b3700() & 1) {
            if (vfunc209()) {
                vfunc449(2, 0);
                m_f148C = gpGlobals->curtime;
                CBaseEntity *pEnt = vfunc209();
                if (pEnt) {
                    if (pEnt->sub_100b3700() & 0x1000) {
                        if (TestBit(m_fFlags268, 12))
                            sub_100b1d10();
                        Vector vecVelocity = m_vec03BC + m_vec03B0;
                        ((CBaseEntity *)this)->sub_100b2e30(&vecVelocity.x);
                    }
                }
            }
        }
    }
}
// END FUNCTION

// FUNCTION: 0x1016a9e0 size=0x6
// TARGET: CBasePlayer::vfunc138
int CBasePlayer::vfunc138()
{
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1016aa00 size=0x31
// TARGET: sub_1016aa00
struct CPlayerAccum_1016aa00 {
    char pad[0x22bc];
    int m_n22bc;
    void sub_1016aa00(int a, char b);
};

void CPlayerAccum_1016aa00::sub_1016aa00(int a, char b)
{
    if (a < 0 && !b) {
        int v = m_n22bc;
        if (v < 0) {
            return;
        }
        if (-a > v) {
            a = -v;
        }
    }
    m_n22bc += a;
}
// END FUNCTION

// FUNCTION: 0x1016aa50 size=0x7a
#include "CBaseEntity.h"
#include "CBasePlayer.h"

#define SV(n) virtual void v##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)

struct SPlayerSlots {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV10(10) SV10(11) SV10(12) SV10(13)
	SV(140) SV(141) SV(142) SV(143) SV(144) SV(145) SV(146) SV(147)
	virtual void v148(int a, int b);
};

struct SRules {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5)
	SV(60) SV(61) SV(62) SV(63)
	virtual int v64(CBasePlayer *pPlayer, SPlayerSlots *pOther);
};


extern SRules *g_1070ba0c;
SPlayerSlots *sub_1000ac8b(int index);

void CBasePlayer::vfunc149(int a, int b)
{
	int edict = m_n02E0;
	int me = engine->vfunc35(edict);
	for (int i = 1; i <= gpGlobals->maxClients; i++) {
		SPlayerSlots *pOther = sub_1000ac8b(i);
		if (pOther && i != me && g_1070ba0c->v64(this, pOther) == 1)
			pOther->v148(a, b);
	}
}
// END FUNCTION

// FUNCTION: 0x1016af80 size=0xcb
#include "CBasePlayer.h"

struct PlayerCmdView_t {
	char pad0[0x10];
	int n10;
	Vector vecAngles;
	int n20;
	int n24;
	int n28;
	unsigned char nByte2c;
	char pad2d[3];
	int n30;
	char pad34[4];
	char b38;
};

struct PlayerView_t {
	char pad0[0x2128];
	char b2128;
	char pad2129[0x233c - 0x2129];
	int n233c;
	char pad2340[0x2358 - 0x2340];
	float f2358;
};

void sub_10356430(CBasePlayer *pPlayer, void *pCmd, void *pHelper);

void CBasePlayer::sub_1016af80(void *pCmd, void *pHelper)
{
	PlayerView_t *pView = (PlayerView_t *)this;
	PlayerCmdView_t *cmd = (PlayerCmdView_t *)pCmd;
	pView->b2128 = 0;
	pView->n233c = cmd->nByte2c;
	if (sub_100b3700() & 0x20) {
		cmd->n10 = 0;
		cmd->n20 = 0;
		cmd->n24 = 0;
		cmd->n28 = 0;
		cmd->n30 = 0;
		cmd->b38 = 0;
		cmd->vecAngles = m_vec206c;
	}
	if (sub_10160ec0()) {
		cmd->n20 = 0;
		cmd->n24 = 0;
	}
	sub_10356430(this, pCmd, pHelper);
	float flValue = pView->f2358 * 1000.0f + 0.5f;
	int nRounded;
	int cwOld;
	int cwNew;
	__asm {
		fld flValue
		fnstcw word ptr cwOld
		movzx eax, byte ptr cwOld
		and eax, 0xfffff3ff
		or eax, 0x400
		mov cwNew, eax
		fldcw word ptr cwNew
		fistp nRounded
		fldcw word ptr cwOld
	}
	pView->f2358 = (float)nRounded * 0.001f;
}
// END FUNCTION

// FUNCTION: 0x1016b130 size=0xff
#include "CBaseEntity.h"
#include "TestBit.h"

struct S_Plr436
{
	char pad0[0x200];
	int m_n200;
	char pad1[0x268 - 0x204];
	unsigned int m_flags268;
	char pad2[0x3c4 - 0x26c];
	float m_f3c4;
	char pad3[0x3e0 - 0x3c8];
	int m_n3e0;
	char pad4[0x1ee8 - 0x3e4];
	float m_f1ee8;
	char pad5[0x2088 - 0x1eec];
	unsigned int m_fl2088;
	unsigned int m_fl208c;
	char pad6[0x2304 - 0x2090];
	int m_n2304;
};

extern char g_1070ba2c;

void CBasePlayer::vfunc436()
{
	S_Plr436 *p = (S_Plr436 *)this;
	if (g_1070ba2c == 0 && p->m_n2304 == 0) {
		sub_10174c10();
		sub_10166120();
		sub_10176520(0.087155745f);
		vfunc444();
		sub_1016b270();
		sub_1016b440();
		if (p->m_n3e0 == 2)
			sub_10166500();
		else if (p->m_n3e0 == 0)
			((CBaseEntity *)this)->sub_100b3640(4);
		if (p->m_n200 < 1) {
			if (p->m_fl2088 & 0x40000)
				si24();
			if (p->m_fl2088 & 2)
				si25();
			if (p->m_fl208c & 4) {
				if (sub_100b3700() & 2)
					((CBaseEntity *)this)->sub_100b3640(2);
				else
					((CBaseEntity *)this)->sub_100b3580(2);
			}
			if (!(sub_100b3700() & 1)) {
				if (TestBit(p->m_flags268, 12))
					((CBaseEntity *)this)->sub_100b1d10();
				p->m_f1ee8 = -p->m_f3c4;
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1016e820 size=0x175
#include "CBasePlayer.h"
#include "CEntityVSlots.h"
#include "CUnknown1070b248.h"

#define PV1(n) virtual void v##n();
#define PV10(p) PV1(p##0) PV1(p##1) PV1(p##2) PV1(p##3) PV1(p##4) PV1(p##5) PV1(p##6) PV1(p##7) PV1(p##8) PV1(p##9)

struct CPlayerObj	// the object sub_1015d680 finds: only slot 266 is used
{
	PV10(0) PV10(1) PV10(2) PV10(3) PV10(4) PV10(5) PV10(6) PV10(7) PV10(8) PV10(9)
	PV10(10) PV10(11) PV10(12) PV10(13) PV10(14) PV10(15) PV10(16) PV10(17) PV10(18) PV10(19)
	PV10(20) PV10(21) PV10(22) PV10(23) PV10(24) PV10(25)
	PV1(260) PV1(261) PV1(262) PV1(263) PV1(264) PV1(265)
	virtual void vfunc266(int a);
};

struct CPlayerUnit : CBasePlayer
{
	CPlayerObj *sub_1015d680(int a);	// stub 0x10013d09
	const char *sub_1000b5cd();	// CBaseEntity::GetDebugName (stub 0x1000b5cd)
};

extern CUnknown1070b248 *g_1070b248;
extern char g_10580ae8;
__declspec(dllimport) void DevMsg(const char *pszFormat, ...);
char sub_102f9970();	// stub 0x10003b7a
int sub_102f9950();	// stub 0x1000d8b9
void sub_102f9920(int nHullBits);	// stub 0x1000f36c
const char *sub_102d6230(int nHull);	// stub 0x10011b4e

void CBasePlayer::vfunc104()
{
	*(int *)((char *)this + 0xe98) = 0;
	*(int *)((char *)this + 0x2294) = -1;
	*(int *)((char *)this + 0x1c44) = engine->vfunc13("materials/sprites/glowa.vmt", 0);
	*(int *)((char *)this + 0x1c48) = engine->vfunc13("materials/sprites/Spread_Indicator_L.vmt", 0);
	*(int *)((char *)this + 0x1c4c) = engine->vfunc13("materials/sprites/Spread_Indicator_R.vmt", 0);
	g_1070b248->vfunc0("weapons/misc/ammo_pickup.wav", 0);
	g_1070b248->vfunc0("environmental/fire/fire_hit.wav", 0);
	g_1070b248->vfunc0("interface/final_death.wav", 0);
	g_1070b248->vfunc0("weapons/ranged/pickup.wav", 0);
	*(int *)((char *)this + 0x22a4) = 5;
	if (g_10580ae8)
		*((char *)this + 0x2298) = 1;
	sub_1015d6d0(0);
	sub_1015d6d0(1);
	CPlayerObj *pObj = ((CPlayerUnit *)this)->sub_1015d680(1);
	if (pObj)
		pObj->vfunc266(0);
	if (sub_102f9970())
	{
		int nBits = ((CEntityVSlots *)this)->slot337();
		nBits &= sub_102f9950();
		if (nBits != ((CEntityVSlots *)this)->slot337())
		{
			DevMsg("\n****ERROR***\n");
			DevMsg("%s is being spawned after links have been initialized, but its hull %s\n", ((CPlayerUnit *)this)->sub_1000b5cd(), sub_102d6230(*(int *)((char *)this + 0x1568)));
			DevMsg("Has not been initialized.  Be sure that this class's GetUsedHullBits function includes that hull type.\n");
			DevMsg("If it already is, this entity is probably spawned after the node graph is created.\n");
			DevMsg("Have the class responsible for spawning it include it.\n");
			DevMsg("****ERROR***\n\n");
			return;
		}
	}
	else
		sub_102f9920(((CEntityVSlots *)this)->slot337());
}
// END FUNCTION

// FUNCTION: 0x1016eb20 size=0x6f
#include "CBaseCombatCharacter.h"
#include "CBaseCombatWeapon.h"
#include "CStatDefault3List.h"
extern CStatDefault3List g_10738d10;
struct CBaseCombatCharacterView {
    bool sub_1000e494(int a, int b);
};

bool CBasePlayer::vfunc326(int a, CBaseEntity *pOther)
{
    CBaseCombatWeapon *pWeapon = (CBaseCombatWeapon *)sub_1032e7b0();
    if (pWeapon && (pWeapon->vfunc360() & 0x6000)) {
        if (pOther) {
            int nTemplate = ((CBaseCombatCharacter *)pOther)->sub_10337860();
            if (g_10738d10.sub_101d5e80(nTemplate)->m_98[8])
                return ((CBaseCombatCharacterView *)this)->sub_1000e494(a, (int)pOther);
        }
        return false;
    }
    return ((CBaseCombatCharacterView *)this)->sub_1000e494(a, (int)pOther);
}
// END FUNCTION

// FUNCTION: 0x101710b0 size=0x75
#include "CBasePlayer.h"

struct CUnk10725de4
{
	virtual void v0();
	virtual char vfunc1();
	char pad[0x2c - 4];
	int m_n2c;
};

extern CUnk10725de4 *g_10725de4;

// TARGET: CBasePlayer::sub_101710b0
void CBasePlayer::sub_101710b0(const Vector *pImpulse)
{
	if (g_10725de4->vfunc1() || g_10725de4->m_n2c == 0) {
		Vector *pVel = (Vector *)((char *)this + 0x1f08);
		*pVel += *pImpulse * 20.0f;
	}
}
// END FUNCTION

// FUNCTION: 0x10171150 size=0x62
#include "CBasePlayer.h"
#include "CBaseEntity.h"
void CBasePlayer::vfunc170(const Vector *pOffset)
{
	((CBaseEntity *)this)->sub_100b3640(1);
	Vector v = m_vec03D4 + *pOffset;
	((CBaseEntity *)this)->sub_100b2e30(&v.x);
}
// END FUNCTION

// FUNCTION: 0x10171f50 size=0x1a9
#include "CBasePlayer.h"
#include "CEntityVSlots.h"
#include "ehandle.h"

struct CGiveWeaponView
{
	CBP_V100(wa) CBP_V100(wb) CBP_V10(wc0) CBP_V10(wc1) CBP_V10(wc2) CBP_V10(wc3) CBP_V10(wc4) CBP_V10(wc5) CBP_V10(wc6) CBP_V10(wc7) CBP_V10(wc8)
	CBP_V1(wd0) CBP_V1(wd1) CBP_V1(wd2) CBP_V1(wd3) CBP_V1(wd4) CBP_V1(wd5) CBP_V1(wd6)
	virtual void vfunc297(int iSubType);
	CBP_V10(we0) CBP_V10(we1) CBP_V10(we2) CBP_V10(we3) CBP_V1(wf0) CBP_V1(wf1) CBP_V1(wf2)
	virtual void vfunc341(CBasePlayer *pPlayer);
};
struct CGiveEntView : CEntityVSlots
{
	char m_pad0004[0xa0 - 4];
	CGiveWeaponView *m_pWeapona0;
	char m_pad00a4[0x204 - 0xa4];
	unsigned int m_spawnflags204;
};
struct CBasePlayerUnit : CBasePlayer
{
	int sub_1032d890(const char *pszName, int iSubType);
	char sub_10173f90(CGiveWeaponView *pWeapon, int a, int b, int c);
};
extern "C" __declspec(dllimport) void Msg(const char *pszFormat, ...);
CBaseEntity *sub_10136580(const char *pszName);
void sub_101d1280(CBaseEntity *pEnt);
void sub_100fbd50(CGiveWeaponView *pWeapon);
void sub_101cebc0(CBasePlayer *pPlayer, int a, int b);

CBaseEntity *CBasePlayer::vfunc459(const char *pszName, int iSubType)
{
	if (((CBasePlayerUnit *)this)->sub_1032d890(pszName, iSubType))
		return 0;

	CHandle<CGiveEntView> pent = (CGiveEntView *)sub_10136580(pszName);
	if (pent == 0) {
		Msg("NULL Ent in GiveNamedItem!\n");
		return 0;
	}

	Vector vecOrigin;
	pent->slot62((const float *)((CEntityVSlots *)this)->slot193(&vecOrigin));
	pent->m_spawnflags204 |= 0x40000000;

	CGiveEntView *pSpawned = pent.Get();
	CGiveWeaponView *pWeapon = !pSpawned ? 0 : pSpawned->m_pWeapona0;
	if (iSubType && pWeapon)
		pWeapon->vfunc297(iSubType);

	sub_101d1280((CBaseEntity *)pent.Get());
	if (pent != 0 && !pent->slot116()) {
		if (((CBasePlayerUnit *)this)->sub_10173f90(pWeapon, 0, 1, 0)) {
			pWeapon->vfunc341(this);
		} else {
			sub_100fbd50(pWeapon);
			sub_101cebc0(this, 0x52, 0);
		}
	}
	return (CBaseEntity *)pent.Get();
}
// END FUNCTION

// FUNCTION: 0x10173ed0 size=0x87
#include "CBasePlayer.h"
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl atoi(const char *);

bool CBasePlayer::vfunc452(const char *pszKey)
{
	if (_strcmpi(pszKey, "vehicleRole") == 0 && engine->vfunc85() == 2) {
		if (m_b20F4) {
			int role = atoi(engine->vfunc84(1));
			CBasePlayerVehicle *pVehicle = m_pVehicle;
			if (pVehicle && pVehicle->vfunc2(role) == 0) {
				sub_101713c0();
				sub_101712d0(pVehicle, role);
			}
		}
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x101743f0 size=0x108
#include "CBasePlayer.h"
#include "CEHandleGet.h"
#include "CBaseCombatWeapon.h"

// TARGET: CBasePlayer::vfunc151
void CBasePlayer::vfunc151(CBaseCombatWeapon *pWeapon)
{
    if (sub_1032e7b0() == (void *)pWeapon) {
        sub_10177120();
        pWeapon->vfunc316(0);
        *(int *)((char *)pWeapon + 0x17c) = 0;
        pWeapon->sub_100ac4e0(0, 0, 0);
        *(int *)((char *)this + 0x1c50) = 0;
    }
    if (EHandle_Get(m_hEnt0EA4) == (void *)pWeapon)
        vfunc443(0);
    unsigned int &h10dc = *(unsigned int *)((char *)this + 0x10dc);
    if (EHandle_Get(h10dc) == (void *)pWeapon)
        h10dc = 0xffffffff;
    unsigned int &h10e0 = *(unsigned int *)((char *)this + 0x10e0);
    if (EHandle_Get(h10e0) == (void *)pWeapon)
        h10e0 = 0xffffffff;
    sub_1032cbe0(pWeapon);
}
// END FUNCTION

// FUNCTION: 0x10174ce0 size=0xb3
#include "CBasePlayer.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList *g_10566458;


#define W10(x) virtual void x##0(); virtual void x##1(); virtual void x##2(); virtual void x##3(); virtual void x##4(); virtual void x##5(); virtual void x##6(); virtual void x##7(); virtual void x##8(); virtual void x##9();
#define W100(x) W10(x##0) W10(x##1) W10(x##2) W10(x##3) W10(x##4) W10(x##5) W10(x##6) W10(x##7) W10(x##8) W10(x##9)
struct WeaponSlots {
	W100(a) W100(b) W100(c)
	W10(d0)
	virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4(); virtual void e5(); virtual void e6(); virtual void e7(); virtual void e8();
	virtual void vfunc319();
	virtual void vfunc320();
};

void CBasePlayer::vfunc458()
{
	unsigned int h = m_h1538;
	if (h != 0xffffffff) {
		CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
		if (s->m_Serial == (int)(h >> 13) && s->m_pEntity != 0 && m_n153C != -1)
			return;
	}
	if (m_pVehicle) {
		m_pVehicle->vfunc10(this);
		return;
	}
	if (!(gpGlobals->curtime < m_f1564) && !vfunc412()) {
		vfunc450();
		if (sub_1032e7b0())
			((WeaponSlots *)sub_1032e7b0())->vfunc319();
	} else {
		if (sub_1032e7b0())
			((WeaponSlots *)sub_1032e7b0())->vfunc320();
	}
}
// END FUNCTION

// FUNCTION: 0x10174e20 size=0x21
#include "CBasePlayer.h"

struct V3 {
	float x, y, z;
};

float *CBasePlayer::vfunc367(float *out)
{
	*(V3 *)out = *(V3 *)((char *)this + 0x206c);
	return out;
}
// END FUNCTION

// FUNCTION: 0x10174e60 size=0xdd
#include "CBasePlayer.h"
#include "CUnknown1070b244.h"

extern CUnknown1070b244 *g_1070b244;

struct CBasePlayerViewOffsetView
{
	char m_pad0000[0x184];
	Vector m_vecViewOffset;	// 0x184
};

Vector CBasePlayer::vfunc197(const Vector &posSrc, char bRandom, char bAddViewOffset)
{
	CBasePlayerViewOffsetView *pView = (CBasePlayerViewOffsetView *)this;
	if (bRandom) {
		return *(Vector *)vfunc220() + pView->m_vecViewOffset * g_1070b244->vfunc1(0.5f, 1.0f);
	} else if (bAddViewOffset) {
		return *(Vector *)vfunc220() + pView->m_vecViewOffset;
	} else {
		return vfunc192();
	}
}
// END FUNCTION

// FUNCTION: 0x10177210 size=0x73
#include "CBaseCombatCharacter.h"
#include "CBaseCombatWeapon.h"
extern char g_106b8540[];
void sub_101cecf0(void *pPlayerObject, int message, void *pData);

struct CWeaponNameObject {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual const char *GetName();
};
struct CWeaponNameSource {
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual CWeaponNameObject *GetObject();
};
struct CWeaponEdictView {
    char m_pad[0x40];
    CWeaponNameSource *m_pSource;
};

bool CBasePlayer::vfunc382(CBaseCombatWeapon *pWeapon)
{
    if (pWeapon->vfunc360() & 0x18000) {
        CWeaponEdictView *pEdict = *(CWeaponEdictView **)((char *)pWeapon + 0x2e0);
        const char *pszName;
        if (!pEdict->m_pSource)
            pszName = g_106b8540;
        else
            pszName = pEdict->m_pSource->GetObject()->GetName();
        if (((CBaseCombatCharacter *)this)->sub_1032d890(pszName, 0)) {
            void *pPlayerObject = *(void **)((char *)this + 0xa8);
            sub_101cecf0(pPlayerObject, 0x4e, (char *)pWeapon->sub_102517b0() + 0x88);
            return false;
        }
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x10177760 size=0x55
struct CEntView443 {
	CBP_V1(a0)
	virtual unsigned int *vfunc1();
	CBP_V100(b) CBP_V100(c) CBP_V10(d0) CBP_V10(d1) CBP_V10(d2) CBP_V10(d3) CBP_V10(d4) CBP_V10(d5)
	CBP_V1(e0) CBP_V1(e1) CBP_V1(e2) CBP_V1(e3) CBP_V1(e4) CBP_V1(e5)
	virtual char vfunc268();
};
int __fastcall sub_10010ea6(void *p);

inline void SetH443(unsigned int &h, CEntView443 *p)
{
	if (p)
		h = *p->vfunc1();
	else
		h = 0xffffffff;
}

// TARGET: CBasePlayer::vfunc443
void CBasePlayer::vfunc443(int a)
{
	CEntView443 *pEnt = (CEntView443 *)a;
	if (pEnt) {
		char *p = (char *)sub_10010ea6(pEnt);
		if ((*(unsigned int *)(p + 0x242c) & 1) == 1)
			return;
		if (pEnt->vfunc268())
			return;
	}
	SetH443(m_hEnt0EA4, pEnt);
}
// END FUNCTION

// FUNCTION: 0x101777e0 size=0xd1
#include <string.h>
#include "CBaseCombatCharacter.h"

extern char g_106b8540[];

struct CWeaponSlotView	// the weapon's virtual table up to slot 371
{
	CBP_V100(a) CBP_V100(b) CBP_V100(c)
	CBP_V1(d0) CBP_V1(d1) CBP_V1(d2) CBP_V1(d3) CBP_V1(d4) CBP_V1(d5) CBP_V1(d6)
	virtual void vfunc307(int a);
	CBP_V10(e0) CBP_V10(e1) CBP_V10(e2) CBP_V10(e3) CBP_V10(e4) CBP_V10(e5)
	CBP_V1(f0) CBP_V1(f1) CBP_V1(f2)
	virtual char vfunc371();
};

struct CPlayerSlot151View	// the player's virtual table up to slot 151
{
	CBP_V100(a) CBP_V10(b0) CBP_V10(b1) CBP_V10(b2) CBP_V10(b3) CBP_V10(b4)
	CBP_V1(c150)
	virtual void vfunc151(CBaseEntity *pWeapon);
};

static inline const char *GetClassname(const char *const *ppClassname)
{
	return *ppClassname ? *ppClassname : g_106b8540;
}

// TARGET: CBasePlayer::vfunc385
void CBasePlayer::vfunc385(CBaseEntity *pWeapon, int a, char bFlag)
{
	if (!_stricmp(GetClassname(&pWeapon->m_classname11c), "item_w_unarmed"))
		return;
	if (!bFlag && !*(int *)((char *)((CBasePlayer *)pWeapon)->sub_102517b0() + 0x4fe9c))
		return;
	char bActive = 0;
	if (pWeapon == (CBaseEntity *)sub_1032e7b0())
		bActive = 1;
	if (pWeapon) {
		if (bActive)
			((CWeaponSlotView *)pWeapon)->vfunc307(0xb6);
		if (((CWeaponSlotView *)pWeapon)->vfunc371() && *(int *)((char *)pWeapon + 0x8d0) > 1)
			goto skipRemove;
	}
	((CPlayerSlot151View *)this)->vfunc151(pWeapon);
skipRemove:
	sub_1032d0c0(pWeapon, a, 0);
	if (bActive && !((CBaseCombatCharacter *)this)->sub_10334860(0)) {
		CBaseEntity *pEnt = sub_1015d680(a);
		if (pEnt)
			pEnt->vfunc66();
	}
}
// END FUNCTION

// FUNCTION: 0x10177900 size=0x141
#include "CBasePlayer.h"
#include "CBaseEntity.h"
#include "CGameRules.h"
#include "CGlobalEntityList.h"
#include "ScopeTrace.h"

extern CGlobalEntityList *g_10566458;
extern CGameRules *g_1070ba0c;

#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)

struct HolderSlots
{
	V100(a) V100(b)
	V10(c0) V10(c1) V10(c2) V10(c3) V10(c4) V10(c5) V10(c6) V10(c7) V10(c8)
	virtual void c90(); virtual void c91(); virtual void c92(); virtual void c93(); virtual void c94(); virtual void c95(); virtual void c96(); virtual void c97();
	virtual void slot298(CBasePlayer *pOwner, int a);
	virtual void c99();
	V10(d0) V10(d1) V10(d2) V10(d3) V10(d4)
	virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4(); virtual void e5(); virtual void e6(); virtual void e7(); virtual void e8();
	virtual void slot359();
};

static inline CGlobalEntityList_Ent *LookupEntity(unsigned int h)
{
	if (h != 0xffffffff) {
		CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
		if (s->m_Serial == (int)(h >> 13))
			return s->m_pEntity;
	}
	return 0;
}

#define HOLDER_HANDLE (*(unsigned int *)((char *)this + 0x1c64))

void CBasePlayer::vfunc383(CBaseEntity *pWeapon, char bNoSwitch)
{
	if (!bNoSwitch) {
		if (LookupEntity(*(volatile unsigned int *)((char *)this + 0x1c64)))
			((HolderSlots *)LookupEntity(HOLDER_HANDLE))->slot359();
		void *pHolder = sub_1032e120(pWeapon->m_classname11c ? pWeapon->m_classname11c : g_106b8540);
		if (pHolder)
			HOLDER_HANDLE = *((CBaseEntity *)pHolder)->vfunc1();
		else
			HOLDER_HANDLE = 0xffffffff;
		if (LookupEntity(*(volatile unsigned int *)((char *)this + 0x1c64)))
			((HolderSlots *)LookupEntity(HOLDER_HANDLE))->slot298(this, 0);
	}
	sub_1032d380(pWeapon, bNoSwitch);
	if (!bNoSwitch) {
		if (g_1070ba0c->vfunc19((CBaseEntity *)this, pWeapon))
			vfunc388(pWeapon, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x10177bf0 size=0x7
struct CBasePlayerView233c
{
	char m_pad[0x233c];
	int m_n233c;
};

int CBasePlayer::vfunc200()
{
	return ((CBasePlayerView233c *)this)->m_n233c;
}
// END FUNCTION

// FUNCTION: 0x10178400 size=0x42
void sub_101cd940(CBaseEntity *);
void sub_100828d0();
namespace block_10178400 {
void __fastcall sub_1015ef60(char *p) { p[0x19f7] = 0; }
}
struct CUnitP2 : CBasePlayer {
    void sub_10107050(int);
    void sub_10178400();
};
void CUnitP2::sub_10178400()
{
    sub_101cd940(sub_1000306c());
    sub_1017cef0(0);
    block_10178400::sub_1015ef60((char *)this);
    if (*((char *)this + 0x1e01))
        vfunc456();
    sub_10107050(0);
    sub_100828d0();
}
// END FUNCTION

// FUNCTION: 0x10178660 size=0xf6
#include "CBasePlayer.h"
#include "CEntityVSlots.h"

struct EdictObj_t {
	void sub_10014eb6(Vector *pOut, int b);
};

struct EntEdictView_t {
	char pad[0x98];
	EdictObj_t *pEdict;
};

extern Vector g_1070d1b0;

void CBasePlayer::sub_10178660(CBaseEntity *pEnt, char bCenter)
{
	Vector vec;
	CEntityVSlots *pSlots = (CEntityVSlots *)pEnt;
	if (bCenter) {
		vec = pSlots->slot192();
	} else {
		EntEdictView_t *pView = (EntEdictView_t *)pEnt;
		if (pView->pEdict) {
			pView->pEdict->sub_10014eb6(&vec, 0);
		} else {
			Vector tmp;
			vec = *pSlots->slot193(&tmp);
		}
		if (vec == g_1070d1b0)
			vec = pSlots->slot192();
	}
	sub_10178590(vec);
}
// END FUNCTION

// FUNCTION: 0x10178d10 size=0x63
#include "CGameRules.h"
extern CGameRules *g_1070ba0c;
// TARGET: CBasePlayer::vfunc359
int CBasePlayer::vfunc359(CBaseEntity *pEnt)
{
    if (m_n146c > 0)
        return 3;
    if (!pEnt)
        return -1;
    int n = g_1070ba0c->vfunc64((int)this, (int)pEnt);
    if (n != 1 && n != 3) {
        if (n == 4)
            return 5;
        if (n == 2 || n == 0)
            return 1;
    }
    return 2;
}
// END FUNCTION

// FUNCTION: 0x10179740 size=0x6
extern char g_10725674[];

// TARGET: sub_10179740
void *sub_10179740()
{
	return g_10725674;
}
// END FUNCTION

// FUNCTION: 0x10179760 size=0x3
// TARGET: sub_10179760
int sub_10179760() {
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1017b880 size=0x3
// TARGET: sub_1017b880
void __stdcall sub_1017b880(int a) {
}
// END FUNCTION

// FUNCTION: 0x1017be30 size=0x3
// TARGET: sub_1017be30
char sub_1017be30() {
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1017be50 size=0x8f
int sub_1002dfe0(int a, int b);

// TARGET: CBasePlayer::vfunc468
void CBasePlayer::vfunc468()
{
    se03();
    int w = m_sub270.vfunc1();
    int h = m_sub270.vfunc2();
    int stand = sub_1002dfe0(w, h);
    float maxs[3] = { 16.0f, 16.0f, 36.0f };
    float mins[3] = { -16.0f, -16.0f, 0.0f };
    int crouch = sub_1002dfe0((int)mins, (int)maxs);
    sub_1017b6f0(stand, "player_stand", crouch, "player_crouch");
}
// END FUNCTION

// FUNCTION: 0x101824c0 size=0xd
void CBasePlayer::vfunc338(int a, char b, int c)
{
	sub_1033cc30(a, b, c);
}
// END FUNCTION

// FUNCTION: 0x101824e0 size=0xd
// TARGET: CBasePlayer::vfunc339
void CBasePlayer::vfunc339(int a, float b, int c)
{
	((CBaseCombatCharacter *)this)->CBaseCombatCharacter::vfunc339(a, b, c);
}
// END FUNCTION

// FUNCTION: 0x10182530 size=0xd
void sub_1033cef0(int a, float b);

void sub_10182530(int a, float b)
{
	sub_1033cef0(a, b);
}
// END FUNCTION

// FUNCTION: 0x10182f10 size=0x5
// TARGET: sub_10182f10
bool __stdcall sub_10182f10(int a)
{
	return true;
}
// END FUNCTION

// FUNCTION: 0x10182f30 size=0x11
// TARGET: CBasePlayer::vfunc21
void CBasePlayer::vfunc21(int a)
{
	m_f1DD0 = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x10182fc0 size=0x52
#include "CBasePlayer.h"
#include "CBaseEntity.h"
void CBasePlayer::vfunc24(CBaseEntity *pOther)
{
	if (pOther) {
		m_hEnt1C60 = (CBaseEntity *)pOther->m_p9c;
		m_f1DD8 = gpGlobals->curtime;
	}
}
// END FUNCTION

// FUNCTION: 0x10183090 size=0x34
#include "CBasePlayer.h"
#include "CBaseEntity.h"
void CBasePlayer::vfunc26(CBaseEntity *pOther)
{
	if (pOther) {
		m_hEnt1C60 = (CBaseEntity *)pOther->m_p9c;
	}
}
// END FUNCTION
