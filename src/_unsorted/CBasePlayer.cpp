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
struct GlobalVars { char pad[0xc]; float curtime; };
extern GlobalVars *g_1070b228;

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
			*(float *)((char *)this + 0x19b0) = g_1070b228->curtime;
	}
	return *(float *)((char *)this + 0x19b0) > 0.0f && *(float *)((char *)this + 0x19b0) + 5.0f > g_1070b228->curtime;
}
// END FUNCTION

// FUNCTION: 0x10160bc0 size=0xfc
#include "CBasePlayer.h"
#include "melee_dice_roll_result.h"
#include "CUnknown10349590.h"
#include "CUnknown103498b0.h"
#include "CVStatList_t.h"

struct PlayerGlobals {
	char pad[0xc];
	float curtime;
};
extern PlayerGlobals *g_1070b228;
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
	m_f1564 = flTime + g_1070b228->curtime;
	return true;
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
struct CPlayerGlobals { char pad[0xc]; float curtime; };
struct CPlayerVec { float x, y, z; };
extern CPlayerGlobals *g_1070b228;
void sub_101668b0();

void CBasePlayer::vfunc403()
{
    vfunc448();
    CPlayerVec vec = *(CPlayerVec *)vfunc221();
    vec.x = 0;
    vec.z = 0;
    vfunc64(&vec.x);
    sub_100ac4e0((void *)sub_101668b0, 0, 0);
    *(float *)((char *)this + 0x17c) = g_1070b228->curtime + 0.1;
    sub_1032bdf0();
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

// FUNCTION: 0x1016aa50 size=0x7a
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "IVEngineServer.h"

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

struct SGlobals {
	char pad[0x14];
	int m_maxClients;
};

extern IVEngineServer *g_1070b22c;
extern SGlobals *g_1070b228;
extern SRules *g_1070ba0c;
SPlayerSlots *sub_1000ac8b(int index);

void CBasePlayer::vfunc149(int a, int b)
{
	int edict = m_n02E0;
	int me = g_1070b22c->vfunc35(edict);
	for (int i = 1; i <= g_1070b228->m_maxClients; i++) {
		SPlayerSlots *pOther = sub_1000ac8b(i);
		if (pOther && i != me && g_1070ba0c->v64(this, pOther) == 1)
			pOther->v148(a, b);
	}
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

// FUNCTION: 0x10173ed0 size=0x87
#include "CBasePlayer.h"
#include "CUnknown1070b22c.h"
extern CUnknown1070b22c *g_1070b22c;
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl atoi(const char *);

bool CBasePlayer::vfunc452(const char *pszKey)
{
	if (_strcmpi(pszKey, "vehicleRole") == 0 && g_1070b22c->vfunc85() == 2) {
		if (m_b20F4) {
			int role = atoi(g_1070b22c->vfunc84(1));
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

// FUNCTION: 0x10174ce0 size=0xb3
#include "CBasePlayer.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList *g_10566458;

struct CTimeGlobals {
	char pad0[0xc];
	float m_curtime;
};
extern CTimeGlobals *g_1070b228;

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
	if (!(g_1070b228->m_curtime < m_f1564) && !vfunc412()) {
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
