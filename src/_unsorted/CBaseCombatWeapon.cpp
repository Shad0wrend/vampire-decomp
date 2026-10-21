// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10149da0 size=0xd
struct WeaponField8cc { char pad[0x8cc]; int m; };
void CBaseCombatWeapon::vfunc297(int value)
{
	((WeaponField8cc *)this)->m = value;
}
// END FUNCTION

// FUNCTION: 0x10149e60 size=0x9
extern float g_104454c4;
float CBaseCombatWeapon::vfunc337(int a, int b) { return g_104454c4; }
// END FUNCTION

// FUNCTION: 0x1024f030 size=0x64
struct CNameObj_t { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual const char *GetName(); };
struct CNameSrc_t { virtual void v0(); virtual void v1(); virtual void v2(); virtual CNameObj_t *Get(); };
extern const char g_106b8540[];
extern const char g_105c55d0[];
struct CWeaponHolder_t {
	char pad[0x40]; CNameSrc_t *m_pSrc;
	const char *GetName() {
		if (!m_pSrc)
			return g_106b8540;
		return m_pSrc->Get()->GetName();
	}
};

extern "C" __declspec(dllimport) void DevWarning(int level, const char *fmt, ...);

// TARGET: CBaseCombatWeapon::vfunc370
void CBaseCombatWeapon::vfunc370(int *event, CBaseCombatWeapon *other)
{
	const char *a = m_pHolder->GetName();
	const char *b = other->m_pHolder->GetName();
	DevWarning(2, g_105c55d0, *event, b, a);
}
// END FUNCTION

// FUNCTION: 0x1024f0e0 size=0xf0
#include "CBaseCombatWeapon.h"
#include "CBaseEntity.h"
#include "CGameRules.h"

extern char g_106b8540[];

struct CClsBObj
{
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4();
	virtual const char *v5();
};
struct CClsAObj
{
	virtual void a0(); virtual void a1(); virtual void a2();
	virtual CClsBObj *v3();
};
struct CHolderLike
{
	char pad[0x40];
	CClsAObj *m_pObj;

	const char *ClassnameStr()
	{
		if (!m_pObj)
			return g_106b8540;
		return m_pObj->v3()->v5();
	}
};

extern CGameRules *g_1070ba0c;
extern void (*g_109f362c)(const char *, ...);
extern CBaseEntity *sub_100a99d0(const char *, const float *, const float *, CBaseEntity *);
extern void sub_101cd250(CBaseCombatWeapon *, int, int);
void sub_100155eb();

CBaseEntity *CBaseCombatWeapon::vfunc187()
{
	const char *name = ((CHolderLike *)m_pHolder)->ClassnameStr();
	CBaseEntity *pNew = sub_100a99d0(name, (const float *)&g_1070ba0c->vfunc51((CBaseEntity *)this), vfunc221(), vfunc97());
	if (pNew) {
		*(unsigned int *)((char *)pNew + 0x19c) |= 0x40;
		*(unsigned int *)((char *)pNew + 0x1ec) = 0;
		pNew->sub_100ac4e0((int)sub_100155eb, 0, 0);
		sub_101cd250(this, 0x200400b, 0);
		*(float *)((char *)pNew + 0x17c) = g_1070ba0c->vfunc49((int)this);
	} else {
		g_109f362c("Respawn failed to create %s!\n", ((CHolderLike *)m_pHolder)->ClassnameStr());
	}
	return pNew;
}
// END FUNCTION

// FUNCTION: 0x1024f330 size=0x71
#include "CBaseCombatWeapon.h"
#define TEN(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define HUN(p) TEN(p##0) TEN(p##1) TEN(p##2) TEN(p##3) TEN(p##4) TEN(p##5) TEN(p##6) TEN(p##7) TEN(p##8) TEN(p##9)
struct O0 { HUN(a) };
struct O1 : O0 { HUN(b) };
struct O2 : O1 { HUN(c) };
struct O3 : O2 { TEN(d0) TEN(d1) TEN(d2) TEN(d3) TEN(d4) TEN(d5) TEN(d6) TEN(d7) virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4(); virtual void e5(); virtual void e6(); virtual void e7(); virtual void e8(); virtual void e9(void *out, int a); };
struct Ent {
    char pad[0x94];
    O3 *m_p94;
};
struct EntInfo { void *ent; unsigned int serial; int pad; };
struct EntList {
    int vptr;
    EntInfo arr[1];
};
extern EntList *g_10566458;
struct EHandle {
    unsigned int m_Index;
    void *Get() const
    {
        if (m_Index == 0xffffffff)
            return 0;
        const EntInfo *p = &g_10566458->arr[m_Index & 0x1fff];
        if (p->serial == (m_Index >> 13))
            return p->ent;
        return 0;
    }
};

void CBaseCombatWeapon::vfunc364(int a, int b, int c)
{
    Ent *owner = (Ent *)((EHandle *)&m_hOwner)->Get();
    O3 *p = owner->m_p94;
    char local[12];
    p->e9(local, a);
    vfunc284(p, p, local, b, c);
}
// END FUNCTION

// FUNCTION: 0x1024f790 size=0x8
#include "CBaseCombatWeapon.h"

void CBaseCombatWeapon::vfunc359()
{
	vfunc119();
}
// END FUNCTION

// FUNCTION: 0x10250c20 size=0x1e
#include "CBaseCombatWeapon.h"

void sub_100aa7b0(void *p);

// TARGET: CBaseCombatWeapon::vfunc5
CBaseCombatWeapon *CBaseCombatWeapon::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10250ce0 size=0x15c
#include "CBaseCombatWeapon.h"
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

struct SWeaponWorker {
	void sub_1024f840();
};

extern int g_105c57d0;

void CBaseCombatWeapon::vfunc103()
{
	*(int *)((char *)this + 0x738) = g_105c57d0;
	g_105c57d0++;
	*(int *)((char *)this + 0x73c) = 0xff;
	vfunc104();
	{
		const char *entName = *(const char **)((char *)this + 0x26c);
		ScopeTrace trace("CBaseEntity::SetSolid", entName ? entName : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(2);
	}
	*(int *)((char *)this + 0x8a4) = 0;
	*(int *)((char *)this + 0x8b0) = 0;
	*(int *)((char *)this + 0x890) = 0;
	int *pClip = (int *)((char *)this + 0x74c);
	for (int i = 0; i < 2; i++, pClip++) {
		if (vfunc277(i)) {
			if (sub_102517b0()) {
				if (*pClip < *(int *)((char *)sub_102517b0() + 0x2668))
					*pClip = *(int *)((char *)sub_102517b0() + 0x2668);
			} else {
				*pClip = 0;
			}
		} else {
			*pClip = -1;
		}
	}
	vfunc105((const char *)vfunc343());
	((SWeaponWorker *)this)->sub_1024f840();
	((CBaseEntity *)this)->sub_100aaa40(1);
	*(int *)((char *)this + 0x1fc) = 1;
	*(int *)((char *)this + 0x854) = -1;
	*(unsigned int *)((char *)this + 0x268) &= 0xfffbffff;
}
// END FUNCTION

// FUNCTION: 0x102526c0 size=0x1d
#include "CBaseCombatWeapon.h"

struct CGlobalVarsStub {
	char pad[0xc];
	float curtime;
};
extern CGlobalVarsStub *g_1070b228;

bool CBaseCombatWeapon::vfunc309()
{
	if (g_1070b228->curtime > m_f894)
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x102526f0 size=0xb2
#include "CBaseCombatWeapon.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

struct WeaponView
{
	char pad[0x894];
	float m_f894;
};
struct OwnerView
{
	char pad[0x1c64];
	unsigned int m_hWeapon1c64;
	WeaponView *sub_10007e19();
};

static inline bool HandleIsValid(unsigned int h)
{
	if (h == 0xffffffff)
		return false;
	CGlobalEntityList_Slot *slot = &g_10566458->m_Slots[h & 0x1fff];
	return slot->m_Serial == (int)(h >> 13) && slot->m_pEntity;
}

void CBaseCombatWeapon::vfunc310(float time)
{
	OwnerView *pOwner = (OwnerView *)sub_10252290();
	if (pOwner) {
		if (pOwner->sub_10007e19())
			pOwner->sub_10007e19()->m_f894 = time;
		if (HandleIsValid(pOwner->m_hWeapon1c64)) {
			unsigned int h = *(volatile unsigned int *)&pOwner->m_hWeapon1c64;
			CGlobalEntityList_Slot *slot;
			WeaponView *pWeapon = (h != 0xffffffff && (slot = &g_10566458->m_Slots[h & 0x1fff])->m_Serial == (int)(h >> 13)) ? (WeaponView *)slot->m_pEntity : 0;
			pWeapon->m_f894 = time;
		}
	} else {
		m_f894 = time;
	}
}
// END FUNCTION

// FUNCTION: 0x10252e80 size=0xb
void sub_1000c6f8();

void CBaseCombatWeapon::vfunc305()
{
	*(void **)((char *)this + 0x1ec) = (void *)sub_1000c6f8;
}
// END FUNCTION

// FUNCTION: 0x10253280 size=0xd
struct WeaponField890 { char pad[0x890]; int m; };
void CBaseCombatWeapon::vfunc306(int value)
{
	((WeaponField890 *)this)->m = value;
}
// END FUNCTION

// FUNCTION: 0x102532a0 size=0xb9
#include "CBaseCombatWeapon.h"

#define VV1(n) virtual void vv##n();
#define VV10(p) VV1(p##0) VV1(p##1) VV1(p##2) VV1(p##3) VV1(p##4) VV1(p##5) VV1(p##6) VV1(p##7) VV1(p##8) VV1(p##9)
#define VV100(p) VV10(p##0) VV10(p##1) VV10(p##2) VV10(p##3) VV10(p##4) VV10(p##5) VV10(p##6) VV10(p##7) VV10(p##8) VV10(p##9)

struct CViewModelView	// a view model entity: slots 265 / 266 and the field the weapon fills
{
	VV100(a) VV100(b) VV10(c0) VV10(c1) VV10(c2) VV10(c3) VV10(c4) VV10(c5) VV1(d0) VV1(d1) VV1(d2) VV1(d3) VV1(d4)
	virtual void slot265(int value);
	virtual void slot266(int value);

	char m_pad0004[0x6f4 - 4];
	int m_n6f4;

	void *sub_100952d0(int model);
};

void CBaseCombatWeapon::vfunc308(int a, int b)
{
	if (sub_102521f0()) {
		char *pOwner = (char *)sub_102521f0();
		if (pOwner) {
			CBasePlayer *pPlayer = *(CBasePlayer **)(pOwner + 0xa8);
			if (pPlayer) {
				CViewModelView *pFirst = (CViewModelView *)pPlayer->sub_1015d680(*(unsigned int *)((char *)this + 0x890));
				if (pFirst) {
					pFirst->slot266(vfunc342(*(int *)((char *)this + 0x890)));
					pFirst->slot265(a);
					pFirst->m_n6f4 = *(int *)((char *)pPlayer + 0x1488);
				}
				CViewModelView *pSecond = (CViewModelView *)pPlayer->sub_1015d680(1);
				if (pSecond && pSecond->sub_100952d0(-1)) {
					pSecond->slot265(b);
					pSecond->m_n6f4 = *(int *)((char *)pPlayer + 0x1488);
				}
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10253ab0 size=0x6d
#include "CBaseCombatCharacter.h"

bool CBaseCombatWeapon::vfunc280(int a)
{
	if (!sub_10253b40(a))
		return true;
	if (vfunc277(a) && *(int *)((char *)this + a * 4 + 0x74c) > 0)
		return true;
	if (sub_102521f0() && ((CBaseCombatCharacter *)sub_102521f0())->sub_103346c0(*(int *)((char *)this + a * 4 + 0x744)) > 0)
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x10255030 size=0x8
#include "CBaseCombatWeapon.h"

void CBaseCombatWeapon::vfunc340()
{
	vfunc348();
}
// END FUNCTION

// FUNCTION: 0x102552c0 size=0x119
#include "CBaseCombatWeapon.h"
#include "CBaseCombatCharacter.h"
#include "ConVar.h"
extern ConVar *g_1088aef4;
#define MIN_(a, b) (((a) < (b)) ? (a) : (b))
void CBaseCombatWeapon::vfunc323()
{
	CBaseCombatCharacter *pOwner = (CBaseCombatCharacter *)sub_102521f0();
	if (pOwner) {
		if (*((char *)this + 0x8c8)) {
			sub_10254cd0(0xc3);
		} else {
			int i = 0;
			int *pClip = (int *)((char *)this + 0x74c);
			do {
				if (vfunc277(i)) {
					int amount = MIN_(vfunc275(i) - *pClip, pOwner->sub_103346c0(pClip[-2]));
					*pClip += amount;
					if (*(int *)((char *)pOwner + 0xa8)) {
						if (g_1088aef4->vfunc1() || g_1088aef4->m_nValue < 1)
							pOwner->sub_10334500(amount, pClip[-2]);
					}
				}
				pClip++;
				i++;
			} while (i < 2);
		}
		*((char *)this + 0x898) = 0;
		*((char *)this + 0x89a) = 0;
		*((char *)this + 0x899) = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x102556d0 size=0x14
#include "CBaseCombatWeapon.h"
#define V(n) virtual void n();
#define V10(p) V(p##0) V(p##1) V(p##2) V(p##3) V(p##4) V(p##5) V(p##6) V(p##7) V(p##8) V(p##9)
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)
struct CWeaponOwner {
    V100(b) V100(c) V100(d) V100(e)
    V10(f0) V10(f1) V(g0) V(g1) V(g2) V(g3) V(g4) V(g5) V(g6) V(g7) V(g8)
    virtual void vfunc429();
};

void CBaseCombatWeapon::vfunc327()
{
    CWeaponOwner *o = sub_10252290();
    if (o)
        o->vfunc429();
}
// END FUNCTION

// FUNCTION: 0x10257230 size=0xe
bool CBaseCombatWeapon::vfunc303()
{
	return vfunc304() ? true : false;
}
// END FUNCTION

// FUNCTION: 0x10257250 size=0x11
#include "CBaseCombatWeapon.h"

struct CWeaponOwner {
	char pad[0x2444];
	int field2444;
};

char CBaseCombatWeapon::vfunc304()
{
	return sub_102517b0()->field2444 != 0;
}
// END FUNCTION

// FUNCTION: 0x102577c0 size=0x8
// TARGET: CBaseCombatWeapon::vfunc288
void CBaseCombatWeapon::vfunc288()
{
	vfunc349();
}
// END FUNCTION

// FUNCTION: 0x10258560 size=0xe
// TARGET: CBaseCombatWeapon::vfunc291
void CBaseCombatWeapon::vfunc291()
{
	vfunc307(0xc4);
}
// END FUNCTION
