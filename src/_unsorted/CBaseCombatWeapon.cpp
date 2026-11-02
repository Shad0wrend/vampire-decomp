// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10149c00 size=0x1
// TARGET: sub_10149c00
void __fastcall sub_10149c00(void *pThis)
{
}
// END FUNCTION

// FUNCTION: 0x10149c20 size=0x1
// TARGET: sub_10149c20
void __fastcall sub_10149c20(void *pThis)
{
}
// END FUNCTION

// FUNCTION: 0x10149c40 size=0x3
// TARGET: sub_10149c40
bool __cdecl sub_10149c40() { return true; }
// END FUNCTION

// FUNCTION: 0x10149c60 size=0x3
// TARGET: sub_10149c60
bool __cdecl sub_10149c60() { return false; }
// END FUNCTION

// FUNCTION: 0x10149c80 size=0x3
// TARGET: sub_10149c80
bool __cdecl sub_10149c80() { return true; }
// END FUNCTION

// FUNCTION: 0x10149ca0 size=0x5
bool CBaseCombatWeapon::vfunc283(CBaseEntity * a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10149cc0 size=0x3
// TARGET: sub_10149cc0
bool __cdecl sub_10149cc0() { return false; }
// END FUNCTION

// FUNCTION: 0x10149ce0 size=0x3
// TARGET: sub_10149ce0
bool __cdecl sub_10149ce0() { return false; }
// END FUNCTION

// FUNCTION: 0x10149d40 size=0x3
// TARGET: sub_10149d40
void __stdcall sub_10149d40(void *p) {}
// END FUNCTION

// FUNCTION: 0x10149d60 size=0x3
// TARGET: sub_10149d60
bool __cdecl sub_10149d60() { return false; }
// END FUNCTION

// FUNCTION: 0x10149da0 size=0xd
struct WeaponField8cc { char pad[0x8cc]; int m; };
void CBaseCombatWeapon::vfunc297(int value)
{
	((WeaponField8cc *)this)->m = value;
}
// END FUNCTION

// FUNCTION: 0x10149dc0 size=0x3
char CBaseCombatWeapon::vfunc313()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10149de0 size=0x3
// TARGET: sub_10149de0
bool __cdecl sub_10149de0() { return true; }
// END FUNCTION

// FUNCTION: 0x10149e00 size=0x3
// TARGET: sub_10149e00
int __fastcall sub_10149e00(int x) { return x; }
// END FUNCTION

// FUNCTION: 0x10149e20 size=0x3
// TARGET: sub_10149e20
bool __cdecl sub_10149e20() { return false; }
// END FUNCTION

// FUNCTION: 0x10149e60 size=0x9
extern float g_104454c4;
float CBaseCombatWeapon::vfunc337(int a, int b) { return g_104454c4; }
// END FUNCTION

// FUNCTION: 0x10149ea0 size=0x3
CWeaponActivityRecord * CBaseCombatWeapon::vfunc362()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10149ec0 size=0x3
int CBaseCombatWeapon::vfunc363()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102347a0 size=0x7
namespace lifted {
extern float g_104492dc;
}
float CBaseCombatWeapon::vfunc278()
{
    return lifted::g_104492dc;
}
// END FUNCTION

// FUNCTION: 0x1024efa0 size=0x61
#include "CBaseCombatWeapon.h"
// TARGET: CBaseCombatWeapon::vfunc369
void CBaseCombatWeapon::vfunc369(int a)
{
	float f = vfunc250(0);
	if (m_b65c != 0 && m_b65d != 0) {
		unsigned int h = *(unsigned int *)((char *)this + 0x8a8);
		int seq = sub_1008dc40(h, -1);
		if (seq != -1) {
			m_nSequence = seq;
			sub_10090950();
		}
	}
	vfunc258(f, a);
}
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
		*(float *)((char *)pNew + 0x17c) = g_1070ba0c->vfunc49((CBaseEntity *)this);
	} else {
		g_109f362c("Respawn failed to create %s!\n", ((CHolderLike *)m_pHolder)->ClassnameStr());
	}
	return pNew;
}
// END FUNCTION

// FUNCTION: 0x1024f210 size=0xdb
#include "CBaseAnimating.h"
#include "CEntityVSlots.h"
#include "CWeaponOwner.h"
// TARGET: CBaseCombatWeapon::vfunc361
int CBaseCombatWeapon::vfunc361(int act)
{
    CWeaponActivityRecord *pRec = vfunc362();
    int nRecords = vfunc363();
    CWeaponOwner *pOwnerObj = sub_10252290();
    CBaseAnimating *pOwner = (CBaseAnimating *)sub_102521f0();
    CBaseAnimating *pPlayerAnim = 0;
    if (pOwnerObj) {
        pPlayerAnim = (CBaseAnimating *)pOwnerObj->sub_1015d680(1);
        if (!pPlayerAnim->sub_100952d0(-1))
            pPlayerAnim = 0;
    }
    for (int i = 0; i < nRecords; i++, pRec++) {
        if (act == pRec->m_baseAct) {
            int weaponAct = pRec->m_weaponAct;
            if (!pOwner)
                return weaponAct;
            int seq = ((CEntityVSlots *)pOwner)->slot376(weaponAct);
            if (pOwner->sub_1008dd30(seq, -1) >= 0)
                return weaponAct;
            if (pPlayerAnim && pPlayerAnim->sub_1008dd30(seq, -1) >= 0)
                return weaponAct;
        }
    }
    return act;
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

// FUNCTION: 0x1024f670 size=0x89
#include "CBaseCombatWeapon.h"
struct CWeaponRangeView {
	char m_pad0000[0x74c];
	int m_nClip;
	char m_pad0750[0x8b8 - 0x750];
	float m_flMinRange;
	char m_pad08bc[4];
	float m_flMaxRange;
};
int CBaseCombatWeapon::vfunc365(int a, float b, float c)
{
	CWeaponRangeView *pView = (CWeaponRangeView *)this;
	if (pView->m_nClip <= 0)
		return 0x40;
	if (c < 100.0f)
		return 8;
	if (c < pView->m_flMinRange)
		return 0x5f;
	if (c > pView->m_flMaxRange)
		return 0x60;
	if (b < 0.5)
		return 0x61;
	return sub_10252410(0) ? 0x4f : 0;
}
// END FUNCTION

// FUNCTION: 0x1024f750 size=0x5
int CBaseCombatWeapon::vfunc367(int a0, float a1, float a2)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1024f790 size=0x8
#include "CBaseCombatWeapon.h"

void CBaseCombatWeapon::vfunc359()
{
	vfunc119();
}
// END FUNCTION

// FUNCTION: 0x1024f7f0 size=0x31
#include "CBaseCombatWeapon.h"

extern float *g_1070b228;
void sub_101c0b10(CBaseEntity *pEnt);

// TARGET: CBaseCombatWeapon::vfunc119
void CBaseCombatWeapon::vfunc119()
{
    *(int *)((char *)this + 0x1ec) = 0;
    sub_100ac4e0((int)sub_101c0b10, 0, 0);
    *(float *)((char *)this + 0x17c) = g_1070b228[3] + 0.1;
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

// FUNCTION: 0x10251d80 size=0xd
namespace lifted {
int sub_10010ea6();
}
int CBaseCombatWeapon::vfunc342(int a0)
{
    return (lifted::sub_10010ea6()) + 0x2188;
}
// END FUNCTION

// FUNCTION: 0x10251da0 size=0xb
namespace lifted {
int sub_10010ea6();
}
int CBaseCombatWeapon::vfunc343()
{
    return (lifted::sub_10010ea6()) + 0x2208;
}
// END FUNCTION

// FUNCTION: 0x10251dc0 size=0xb
namespace lifted {
int sub_10010ea6();
}
char * CBaseCombatWeapon::vfunc272()
{
    return (char *)((lifted::sub_10010ea6()) + 0x2288);
}
// END FUNCTION

// FUNCTION: 0x10251de0 size=0xb
namespace lifted {
int sub_10010ea6();
}
char * CBaseCombatWeapon::vfunc273()
{
    return (char *)((lifted::sub_10010ea6()) + 0x2308);
}
// END FUNCTION

// FUNCTION: 0x10251e20 size=0xb
namespace lifted {
int sub_10010ea6();
}
int CBaseCombatWeapon::vfunc344()
{
    return (lifted::sub_10010ea6()) + 0x2408;
}
// END FUNCTION

// FUNCTION: 0x10251e40 size=0x27
struct CWeaponOwner;
CWeaponOwner *sub_102517b0();

int __stdcall sub_10251e40(int nIndex)
{
	return *(int *)((char *)sub_102517b0() + 0x2668 + nIndex * 0x1093c);
}
// END FUNCTION

// FUNCTION: 0x10251e80 size=0x27
#include "CBaseCombatWeapon.h"

void *sub_10010ea6();

// TARGET: CBaseCombatWeapon::vfunc276
int CBaseCombatWeapon::vfunc276(unsigned int index)
{
	return *(int *)((char *)sub_10010ea6() + 0x2670 + index * 0x1093c);
}
// END FUNCTION

// FUNCTION: 0x10251ec0 size=0x1a
#include "CBaseCombatWeapon.h"

// TARGET: vfunc277
bool CBaseCombatWeapon::vfunc277(int a)
{
	return vfunc275(a) != -1;
}
// END FUNCTION

// FUNCTION: 0x10251ef0 size=0xc
namespace lifted {
int sub_10010ea6();
}
int CBaseCombatWeapon::vfunc345()
{
    return *(int *)((char *)(lifted::sub_10010ea6()) + 0x2424);
}
// END FUNCTION

// FUNCTION: 0x10251f30 size=0x9
namespace lifted {
int sub_10010ea6();
}
const char * CBaseCombatWeapon::vfunc348()
{
    return (const char *)((lifted::sub_10010ea6()) + 8);
}
// END FUNCTION

// FUNCTION: 0x10252090 size=0x67
#include "CBaseCombatWeapon.h"

char * __fastcall sub_10251d30(CBaseCombatWeapon *pThis);

// TARGET: CBaseCombatWeapon::vfunc347
int CBaseCombatWeapon::vfunc347(int a)
{
	switch (a)
	{
	case 21:
	case 22:
	case 23:
	case 24:
		return *(int *)((char *)sub_102517b0() + a * 4 + 0x5eab8);
	case 10:
	case 11:
		return *(int *)(sub_10251d30(this) + a * 4 + 0x108d8);
	default:
		return *(int *)((char *)sub_102517e0() + a * 4 + 0xebd0);
	}
}
// END FUNCTION

// FUNCTION: 0x102526c0 size=0x1d
#include "CBaseCombatWeapon.h"


bool CBaseCombatWeapon::vfunc309()
{
	if (gpGlobals->curtime > m_f894)
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

// FUNCTION: 0x102527e0 size=0x7
float CBaseCombatWeapon::vfunc311()
{
    return *(float *)((char *)this + 0x894);
}
// END FUNCTION

// FUNCTION: 0x10252a90 size=0x121
#include "CBaseCombatWeapon.h"
#include "CWeaponOwner.h"

#define KV(n) virtual void vfunc##n();
#define KV10(p) KV(p##0) KV(p##1) KV(p##2) KV(p##3) KV(p##4) KV(p##5) KV(p##6) KV(p##7) KV(p##8) KV(p##9)
struct CWeaponSlots
{
	KV10(0) KV10(1) KV10(2) KV10(3) KV10(4) KV10(5) KV10(6) KV10(7) KV10(8)
	KV(90) KV(91) KV(92)
	virtual void vfunc93(int moveType, int moveCollide);
	KV(94) KV(95) KV(96) KV(97) KV(98) KV(99)
	KV10(10) KV10(11) KV10(12) KV10(13) KV10(14) KV10(15) KV10(16) KV10(17) KV10(18) KV10(19)
	KV(200) KV(201)
	virtual void vfunc202(int a);
	KV(203) KV(204) KV(205) KV(206) KV(207)
	virtual void vfunc208(int a);
};

struct CWeaponPhysObject
{
	KV10(0) KV10(1) KV10(2) KV10(3)
	KV(40)
	virtual void vfunc41(const float *pVelocity, const float *pAngularVelocity);
};


struct CTraitTable
{
	void sub_101f9a40(void *pCharacter, int n);	// stub 0x1000914c
};

extern CTraitTable g_1074df78;
void sub_100fbd50(CBaseCombatWeapon *pWeapon);
void sub_10258870();

// TARGET: CBaseCombatWeapon::vfunc299
void CBaseCombatWeapon::vfunc299(const float *pVelocity)
{
	int nOwner = sub_10252240();
	if (nOwner) {
		g_1074df78.sub_101f9a40((void *)nOwner, *(int *)((char *)sub_102517b0() + 0x2664));
		sub_100fbd50(this);
	}
	m_flPlaybackRate = 0.0f;
	sub_1009ee80(0);
	((CWeaponSlots *)this)->vfunc93(6, 0);
	unsigned int nEffects = *(unsigned int *)((char *)this + 0x19c) & 0xffffffbf;
	*(float *)((char *)this + 0x3ec) = 1.0f;
	*(int *)((char *)this + 0x8b0) = 0;
	*(unsigned int *)((char *)this + 0x19c) = nEffects;
	sub_1024f840();
	((CWeaponSlots *)this)->vfunc208(0);
	sub_100ac4e0((int)sub_10258870, 0, 0);
	*(int *)((char *)this + 0x1ec) = 0;
	CWeaponPhysObject *pPhys = *(CWeaponPhysObject **)((char *)this + 0x36c);
	if (pPhys) {
		float vecAngVel[3] = { 200.0f, 200.0f, 200.0f };
		pPhys->vfunc41(pVelocity, vecAngVel);
	} else {
		sub_100b2770(pVelocity);
	}
	sub_100ac610(gpGlobals->curtime + 1.5f, 0);
	((CWeaponSlots *)this)->vfunc202(0);
	m_hOwner = 0xffffffff;
}
// END FUNCTION

// FUNCTION: 0x10252e80 size=0xb
void sub_1000c6f8();

void CBaseCombatWeapon::vfunc305()
{
	*(void **)((char *)this + 0x1ec) = (void *)sub_1000c6f8;
}
// END FUNCTION

// FUNCTION: 0x10253140 size=0x9f
#include "CBaseCombatWeapon.h"

void CBaseCombatWeapon::vfunc338(int a, int b)
{
	int seq = sub_1008dc40(a, -1);
	if (seq == -1) {
		seq = sub_1008dc40(0xb6, seq);
		if (seq == -1)
			return;
	}
	m_nSequence = seq;
	*(int *)((char *)this + 0x8a8) = a;
	m_n06f8 = 0;
	sub_10090950();
	if (*(float *)&b > 0.0f) {
		float flRate = sub_10091080(seq) / *(float *)&b;
		m_flPlaybackRate = flRate;
		m_flPlaybackRate = flRate < 12.0 ? flRate : 12.0;
	} else {
		m_flPlaybackRate = 1.0f;
	}
}
// END FUNCTION

// FUNCTION: 0x10253210 size=0x50
#include "CBaseCombatWeapon.h"
struct SPlayerView20a8 { char pad[0x20a8]; bool m_b20a8; };
CBaseEntity *__fastcall sub_1032e7b0(CBaseEntity *);

int CBaseCombatWeapon::vfunc301(CBaseEntity *pPlayer)
{
    if ((CBaseCombatWeapon *)sub_1032e7b0(pPlayer) == this) {
        if (((SPlayerView20a8 *)pPlayer)->m_b20a8) {
            *(int *)((char *)this + 0x8b0) = 0x40;
            return 1;
        }
        *(int *)((char *)this + 0x8b0) = 2;
        return 1;
    }
    *(int *)((char *)this + 0x8b0) = 1;
    return 1;
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

// FUNCTION: 0x10253c50 size=0x32
#pragma warning(disable : 4716)
bool CBaseCombatWeapon::vfunc315()
{
    sub_10253b70(vfunc342(0), vfunc343(), 0xb4, vfunc344());
}
// END FUNCTION

// FUNCTION: 0x10253ca0 size=0x17c
#include "CBaseAnimating.h"

struct EntSlot { void *ent; int serial; int pad; };
struct WeaponHolderObj { char pad[0x1564]; float m_fTimer; };
extern char *g_10566458;

static inline void *ResolveHandle(unsigned int h)
{
	if (h != 0xffffffff) {
		EntSlot *slot = (EntSlot *)(g_10566458 + 4) + (h & 0x1fff);
		if (slot->serial == (int)(h >> 13))
			return slot->ent;
	}
	return 0;
}

char CBaseCombatWeapon::vfunc316(int a)
{
	*((char *)this + 0x898) = 0;
	sub_100ac4e0(0, 0, 0);
	if (a)
		vfunc307(0xde);
	CBaseCombatCharacter *owner = (CBaseCombatCharacter *)sub_102521f0();
	char *p = (char *)sub_102521f0();
	char *ai = (!p) ? 0 : *(char **)(p + 0xa8);
	if (owner) {
		float t;
		if (*(char **)((char *)owner + 0xa8) == 0) {
			t = gpGlobals->curtime + 0.2f;
		} else {
			unsigned int h = *(unsigned int *)(ai + 0x1c64);
			EntSlot *s;
			if (h != 0xffffffff && (s = (EntSlot *)(g_10566458 + 4) + (h & 0x1fff), s->serial == (int)(h >> 13)) && s->ent && sub_10256220()) {
				int seq = *(int *)((char *)ResolveHandle(*(volatile unsigned int *)(ai + 0x1c64)) + 0x6f0);
				CBaseAnimating *ba = (CBaseAnimating *)ResolveHandle(*(volatile unsigned int *)(ai + 0x1c64));
				t = ba->sub_10091080(seq) + gpGlobals->curtime;
			} else {
				t = gpGlobals->curtime + 0.1;
			}
		}
		((WeaponHolderObj *)owner)->m_fTimer = t;
		owner->sub_10335ea0((CBaseEntity *)this);
	}
	vfunc66();
	if (ai)
		vfunc333(0x12, 1, 0, 0, 0, 0);
	else
		vfunc333(0x13, 1, 0, 0, 0, 0);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10253e80 size=0x1
// TARGET: sub_10253e80
void sub_10253e80()
{
}
// END FUNCTION

// FUNCTION: 0x10254380 size=0x47
#include "CBaseCombatWeapon.h"
const Vector &CBaseCombatWeapon::vfunc331()
{
    static Vector s_vec(0.02618f, 0.02618f, 0.02618f);
    return s_vec;
}
// END FUNCTION

// FUNCTION: 0x10254410 size=0x29
void __fastcall sub_1033d940(int p, float f);
// TARGET: CBaseCombatWeapon::vfunc332
void CBaseCombatWeapon::vfunc332()
{
    float v = *(float *)((char *)sub_102517e0() + 0x260);
    int p = ((CAI_BaseNPCTroika *)this)->sub_10252240();
    sub_1033d940(p, v);
}
// END FUNCTION

// FUNCTION: 0x10254fd0 size=0x6
int CBaseCombatWeapon::vfunc328()
{
    return 0xbc;
}
// END FUNCTION

// FUNCTION: 0x10255010 size=0x1
// TARGET: CBaseCombatWeapon::vfunc339
void CBaseCombatWeapon::vfunc339() {
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

// FUNCTION: 0x10255bf0 size=0x29
#include "CBaseCombatWeapon.h"

struct CBaseCombatWeaponOwnerPlaceholder {
	char *sub_10010ea6();
};

char CBaseCombatWeapon::vfunc371()
{
	char r = 0;
	if (((CBaseCombatWeaponOwnerPlaceholder *)this)->sub_10010ea6()) {
		int n = *(int *)(((char *)((CBaseCombatWeaponOwnerPlaceholder *)this)->sub_10010ea6()) + 0x4fea0);
		r = n != 0;
	}
	return r;
}
// END FUNCTION

// FUNCTION: 0x10256560 size=0xda
#include "CCollisionProperty.h"

struct WeaponView10256560 {
	char pad[0x270];
	CCollisionProperty m_collision;
};

void CBaseCombatWeapon::vfunc105(const char *pszName)
{
	if (sub_102521f0() == 0) {
		WeaponView10256560 *p = (WeaponView10256560 *)this;
		Vector mins = *(Vector *)p->m_collision.vfunc1();
		Vector maxs = *(Vector *)p->m_collision.vfunc2();
		for (int i = 0; i < 3; i++) {
			mins[i] = (-8.0f < mins[i]) ? -8.0f : mins[i];
			maxs[i] = (8.0f > maxs[i]) ? 8.0f : maxs[i];
		}
		sub_10095030(pszName);
		sub_100adf10(&mins.x, &maxs.x);
	} else {
		sub_10095030(pszName);
	}
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

// FUNCTION: 0x10257850 size=0x50
#include "CEHandleGet.h"
#define V100(p) CBCW_V10(p##0) CBCW_V10(p##1) CBCW_V10(p##2) CBCW_V10(p##3) CBCW_V10(p##4) CBCW_V10(p##5) CBCW_V10(p##6) CBCW_V10(p##7) CBCW_V10(p##8) CBCW_V10(p##9)
struct CPlayerView382 {
	V100(0) V100(1) V100(2)
	CBCW_V10(30) CBCW_V10(31) CBCW_V10(32) CBCW_V10(33) CBCW_V10(34) CBCW_V10(35) CBCW_V10(36) CBCW_V10(37)
	CBCW_V(380) CBCW_V(381)
	virtual bool vfunc382(CBaseCombatWeapon *pWeapon);
};
int CBaseCombatWeapon::vfunc35(CBaseEntity *pOther)
{
	if (!EHandle_Get(m_hOwner)) {
		if (((CPlayerView382 *)pOther)->vfunc382(this))
			return 0x49;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102578c0 size=0x50
#include "CBaseCombatWeapon.h"
#include "CEHandleGet.h"

#define V(n) virtual void v##n();
#define V10(p) V(p##0) V(p##1) V(p##2) V(p##3) V(p##4) V(p##5) V(p##6) V(p##7) V(p##8) V(p##9)
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)
struct CSlot382View {
    V100(0) V100(1) V100(2)
    V10(30) V10(31) V10(32) V10(33) V10(34) V10(35) V10(36) V10(37)
    V(380) V(381)
    virtual char vfunc382(CBaseCombatWeapon *pWeapon);
};

int CBaseCombatWeapon::vfunc34(CBaseEntity *pOther)
{
    if (!EHandle_Get(m_hOwner) && ((CSlot382View *)pOther)->vfunc382(this))
        return 7;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10257930 size=0x3d
#include "CEHandleGet.h"
unsigned int __fastcall sub_10006703(CBaseCombatWeapon *p);

// TARGET: CBaseCombatWeapon::vfunc117
unsigned int CBaseCombatWeapon::vfunc117()
{
	if (!EHandle_Get(m_hOwner))
		return sub_10006703(this) | 8;
	return sub_10006703(this);
}
// END FUNCTION

// FUNCTION: 0x10257980 size=0x41
#include "CBaseCombatWeapon.h"
struct CWeaponUserView {
	char m_pad[0xa8];
	CBaseEntity *m_pAI;
};
struct CWeaponAIView {
	char sub_10173f90(CBaseCombatWeapon *pWeapon, int a, int b, int c);
};
void CBaseCombatWeapon::vfunc173(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, int value)
{
	if (!sub_10252240() && pActivator) {
		CWeaponAIView *pAI = (CWeaponAIView *)((CWeaponUserView *)pActivator)->m_pAI;
		if (pAI && pAI->sub_10173f90(this, 1, 1, 1))
			vfunc341((CBaseEntity *)pAI);
	}
}
// END FUNCTION

// FUNCTION: 0x10258320 size=0x82
struct CRollTable {
	virtual void vfunc0();
	virtual float vfunc1(int lo, int hi);
};
extern CRollTable *g_1070b244;

// TARGET: CBaseCombatWeapon::vfunc269
void CBaseCombatWeapon::vfunc269(CBaseCombatWeapon *pOther, Vector vecDir)
{
	if (pOther) {
		int *p = sub_102517e0();
		float f = g_1070b244->vfunc1(p[0x3b8 / 4], p[0x3bc / 4]);
		if (f != 0.0f) {
			vecDir = vecDir * f;
			pOther->vfunc170(&vecDir);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x102583e0 size=0x26
#include "CBaseEntity.h"


void sub_100065d2();

// TARGET: sub_102583e0
void __fastcall sub_102583e0(CBaseEntity *self)
{
    float *pf = (float *)((char *)self + 0x730);
    int n = 2;
    do {
        n--;
        *pf = *pf - gpGlobals->curtime;
        pf++;
    } while (n != 0);
    void (CBaseEntity::*pBase)();
    *(void **)&pBase = (void *)sub_100065d2;
    (self->*pBase)();
}
// END FUNCTION

// FUNCTION: 0x10258440 size=0x5a
#include "CBaseCombatWeapon.h"
#include "Ent.h"

struct COwnerView10258440 : Ent
{
	char m_pad0[0x98];
	int m_n98;
};

void CBaseCombatWeapon::vfunc130(void *pArg)
{
	sub_1008df10(pArg);
	COwnerView10258440 *pOwner = (COwnerView10258440 *)sub_102521f0();
	if (pOwner && pOwner->m_n98) {
		if (!pOwner->sub_10336920())
			vfunc105(vfunc272());
		else
			vfunc105(vfunc273());
	}
}
// END FUNCTION

// FUNCTION: 0x10258540 size=0x1
// TARGET: sub_10258540
void sub_10258540()
{
}
// END FUNCTION

// FUNCTION: 0x10258560 size=0xe
// TARGET: CBaseCombatWeapon::vfunc291
void CBaseCombatWeapon::vfunc291()
{
	vfunc307(0xc4);
}
// END FUNCTION
