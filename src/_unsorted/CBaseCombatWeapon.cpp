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
#include "CBaseCombatWeapon.h"
#include "CBaseEntity.h"
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

// FUNCTION: 0x10149d00 size=0x4
#include "CBaseCombatWeapon.h"
int CBaseCombatWeapon::vfunc289()
{
	return -1;
}
// END FUNCTION

// FUNCTION: 0x10149d20 size=0x6
#include "CBaseCombatWeapon.h"
// TARGET: CBaseCombatWeapon::vfunc290
int CBaseCombatWeapon::vfunc290()
{
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10149d40 size=0x3
// TARGET: sub_10149d40
void __stdcall sub_10149d40(void *p) {}
// END FUNCTION

// FUNCTION: 0x10149d60 size=0x3
// TARGET: sub_10149d60
bool __cdecl sub_10149d60() { return false; }
// END FUNCTION

// FUNCTION: 0x10149d80 size=0x7
#include "CBaseCombatWeapon.h"

int CBaseCombatWeapon::vfunc296()
{
	struct WeaponField8cc { char pad[0x8cc]; int m; };
	return ((WeaponField8cc *)this)->m;
}
// END FUNCTION

// FUNCTION: 0x10149da0 size=0xd
#include "CBaseCombatWeapon.h"
struct WeaponField8cc { char pad[0x8cc]; int m; };
void CBaseCombatWeapon::vfunc297(int value)
{
	((WeaponField8cc *)this)->m = value;
}
// END FUNCTION

// FUNCTION: 0x10149dc0 size=0x3
#include "CBaseCombatWeapon.h"
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

// FUNCTION: 0x10149e40 size=0x3
// TARGET: sub_10149e40
bool __cdecl sub_10149e40() { return false; }
// END FUNCTION

// FUNCTION: 0x10149e60 size=0x9
#include "CBaseCombatWeapon.h"
extern float g_104454c4;
float CBaseCombatWeapon::vfunc337(int a, int b) { return g_104454c4; }
// END FUNCTION

// FUNCTION: 0x10149e80 size=0x3
// TARGET: sub_10149e80
int __cdecl sub_10149e80() { return 0; }
// END FUNCTION

// FUNCTION: 0x10149ea0 size=0x3
#include "CBaseCombatWeapon.h"
CWeaponActivityRecord * CBaseCombatWeapon::vfunc362()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10149ec0 size=0x3
#include "CBaseCombatWeapon.h"
int CBaseCombatWeapon::vfunc363()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10234760 size=0x3
#include "CBaseCombatWeapon.h"
// TARGET: CBaseCombatWeapon::vfunc267
char CBaseCombatWeapon::vfunc267() {
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10234780 size=0x3
#include "CBaseCombatWeapon.h"
// TARGET: CBaseCombatWeapon::vfunc268
char CBaseCombatWeapon::vfunc268() { return 0; }
// END FUNCTION

// FUNCTION: 0x102347a0 size=0x7
#include "CBaseCombatWeapon.h"
namespace lifted {
extern float g_104492dc;
}
float CBaseCombatWeapon::vfunc278()
{
    return lifted::g_104492dc;
}
// END FUNCTION

// FUNCTION: 0x1024ee90 size=0xc7
template <class T> __forceinline T pcd_stage(T x) { return x; }
#include "CBaseCombatWeapon.h"

struct CWpnPlayer { char pad[0x1eb8]; int m_nUseEdictIndex; };
struct CWpnEnt { char pad[0xa8]; CWpnEnt *m_pControl; char pad2[0x2e0 - 0xac]; void *m_pEdict; };
struct CWpnEdict { char pad[0x40]; CWpnEnt *m_pUnk; char m_bValid; };

bool CBaseCombatWeapon::vfunc86(int a, void *pEdict, int c, int d, int e)
{
	if (*(float *)((char *)this + 0x90) > gpGlobals->curtime)
		return true;
	CWpnEnt *pOwner = (CWpnEnt *)sub_102521f0();
	if (pOwner) {
		CWpnEnt *pControl = pOwner->m_pControl;
		CWpnEdict *pOther = (CWpnEdict *)pEdict;
		CWpnEnt *pUnk = pOther->m_bValid ? pOther->m_pUnk : 0;
		CWpnPlayer *pPlayer;
		if (!pUnk)
			pPlayer = 0;
		else
			pPlayer = (CWpnPlayer *)pUnk->m_pControl;
		if (pPlayer->m_nUseEdictIndex == engine->vfunc35(pcd_stage((int)pOwner->m_pEdict)))
			return true;
		if (pControl) {
			if (pControl->m_pEdict == pEdict)
				return true;
			int nState = *(int *)((char *)this + 0x8b0);
			if (nState == 1 || nState == 0)
				return false;
		}
	}
	return sub_100ab020(a, pEdict, c, d, e);
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
#include "CBaseCombatWeapon.h"
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
	const char *a = ((CWeaponHolder_t *)m_pEdict2e0)->GetName();
	const char *b = ((CWeaponHolder_t *)other->m_pEdict2e0)->GetName();
	DevWarning(2, g_105c55d0, *event, b, a);
}
// END FUNCTION

// FUNCTION: 0x1024f0c0 size=0x3
// TARGET: sub_1024f0c0
void __stdcall sub_1024f0c0(int a) {
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
	const char *name = ((CHolderLike *)m_pEdict2e0)->ClassnameStr();
	CBaseEntity *pNew = sub_100a99d0(name, (const float *)&g_1070ba0c->vfunc51((CBaseEntity *)this), vfunc221(), vfunc97());
	if (pNew) {
		*(unsigned int *)((char *)pNew + 0x19c) |= 0x40;
		*(unsigned int *)((char *)pNew + 0x1ec) = 0;
		pNew->sub_100ac4e0((int)sub_100155eb, 0, 0);
		sub_101cd250(this, 0x200400b, 0);
		*(float *)((char *)pNew + 0x17c) = g_1070ba0c->vfunc49((CBaseEntity *)this);
	} else {
		g_109f362c("Respawn failed to create %s!\n", ((CHolderLike *)m_pEdict2e0)->ClassnameStr());
	}
	return pNew;
}
// END FUNCTION

// FUNCTION: 0x1024f210 size=0xdb
#include "CBaseCombatWeapon.h"
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

// FUNCTION: 0x1024f3d0 size=0x20f
#include "CBaseCombatWeapon.h"
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"
#include "Ray_t.h"
#include "CTraceFilterSimple.h"
#include "CTraceFilterNoCharacterCollide.h"
#include "CGameTrace.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738960.h"
#include "CDevFlagObj.h"

extern CDevFlagObj *g_10924a6c;
extern float g_104454c4;
void sub_10146570(const Vector *pStart, const Vector *pEnd, int r, int g, int b, int noDepth, int duration);

bool CBaseCombatWeapon::vfunc284(void *pNPCv, void *pIgnore, void *pStartv, int pEndv, int bFlagv)
{
	CAI_BaseNPC *pNPC = (CAI_BaseNPC *)pNPCv;
	const Vector *pStart = (const Vector *)pStartv;
	const Vector *pEnd = (const Vector *)pEndv;
	char bFlag = (char)bFlagv;

	Ray_t ray;
	ray.sub_1004f7a0((const float *)pStart, (const float *)pEnd);
	CGameTrace tr;
	{
		CTraceFilterSimple filter(pIgnore, 0);
		g_1070b254->vfunc4(&ray, 0x46004003, (CTraceFilterNoCharacterCollide *)&filter, &tr);
	}
	if (g_10738960.sub_1005f190())
		sub_10146570((const Vector *)tr.m_startpos, (const Vector *)tr.m_endpos, 0xff, 0, 0, 1, 0xbf800000);
	if (tr.m_fraction == 1.0)
		return true;
	CBaseEntity *pEnt = tr.m_pEnt;
	CBaseEntity *pOwner;
	if (!pEnt)
		pOwner = 0;
	else
		pOwner = (CBaseEntity *)pEnt->m_p9c;
	if (pEnt == (CBaseEntity *)pNPC->vfunc167())
		return true;
	if (pOwner)
	{
		if (pNPC->vfunc404(pOwner) == 1)
			return true;
		if (!bFlag)
			return false;
		g_10924a6c->vfunc1();
		pNPC->sub_10269a20(0x63);
		return false;
	}
	if (pEnt->m_field368 == 4 && tr.m_fraction > g_104454c4)
	{
		Vector point = (*pEnd - *pStart) * tr.m_fraction + *pStart;
		return vfunc284(pNPCv, pEnt, &point, pEndv, bFlagv);
	}
	if (!bFlag)
		return false;
	g_10924a6c->vfunc1();
	pNPC->sub_10269a20(0x66);
	return false;
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

// FUNCTION: 0x1024f730 size=0x5
#include "CBaseCombatWeapon.h"
// TARGET: CBaseCombatWeapon::vfunc366
int CBaseCombatWeapon::vfunc366(int a, int b, int c)
{
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1024f750 size=0x5
#include "CBaseCombatWeapon.h"
int CBaseCombatWeapon::vfunc367(int a0, float a1, float a2)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1024f770 size=0x5
#include "CBaseCombatWeapon.h"

// TARGET: CBaseCombatWeapon::vfunc368
int CBaseCombatWeapon::vfunc368(int a, int b, int c)
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
#include "CBaseEntity.h"
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

// FUNCTION: 0x102507d0 size=0x13
#include "CBaseCombatWeapon.h"

void __fastcall sub_100011cc(CBaseCombatWeapon *self);

void CBaseCombatWeapon::vfunc77()
{
	sub_100011cc(this);
	vfunc225();
}
// END FUNCTION

// FUNCTION: 0x10250800 size=0x20
#include "CBaseCombatWeapon.h"
#include "CBaseEntity.h"

void CBaseCombatWeapon::vfunc78()
{
	CBaseEntity *pEnt = (CBaseEntity *)this;
	pEnt->CBaseEntity::vfunc78();
	if (!sub_102521f0())
		vfunc300();
}
// END FUNCTION

// FUNCTION: 0x10250ac0 size=0x106
#include "CBaseCombatWeapon.h"
#include "CVDmg_t.h"
#include "COutputEvent.h"
void sub_10250400(CBaseCombatWeapon *);
short sub_10259e20();

inline CBaseCombatWeaponMembers::CBaseCombatWeaponMembers()
{
    char *pWeapon = (char *)this - 0x740;
    CVDmg_t *p = (CVDmg_t *)(pWeapon + 0x77c);
    int n = 3;
    do
    {
        p->CVDmg_t::CVDmg_t();
        p++;
    } while (--n);
    *(int *)(pWeapon + 0x874) = -1;
    *(int *)(pWeapon + 0x878) = -1;
    *(int *)(pWeapon + 0x88c) = -1;
    ((COutputEvent *)(pWeapon + 0x8e0))->COutputEvent::COutputEvent();
    ((COutputEvent *)(pWeapon + 0x8f8))->COutputEvent::COutputEvent();
}

struct CBCWCtorView
{
    char pad0[0xa0]; CBaseCombatWeapon *m_pThisA0; char pad1[0x848 - 0xa4];
    int m_n848; int m_n84c; int m_n850; int m_n854; int m_n858; char m_pad85c[0x870 - 0x85c]; char m_b870; char m_b871; char m_b872; char m_pad873;
    char m_pad874[0x88c - 0x874]; unsigned int m_hOwner; int m_nViewModelIndex; float m_f894;
    char m_b898; char m_b899; char m_b89a; char m_pad89b[0x8b8 - 0x89b];
    float m_f8b8; float m_f8bc; float m_f8c0; float m_f8c4; char m_b8c8; char m_pad8c9[0x8cc - 0x8c9];
    int m_n8cc; int m_n8d0; int m_n8d4; char m_b8d8; char m_pad8d9; short m_s8da; int m_n8dc;
};

CBaseCombatWeapon::CBaseCombatWeapon()
{
    CBCWCtorView *v = (CBCWCtorView *)this;
    v->m_f8b8 = 65.0f;
    v->m_f8bc = 65.0f;
    v->m_f8c0 = 1024.0f;
    v->m_f8c4 = 1024.0f;
    v->m_b870 = 0;
    v->m_n848 = 0;
    v->m_n84c = 0;
    v->m_n850 = 2;
    v->m_b8c8 = 0;
    v->m_b89a = 0;
    v->m_b899 = 0;
    v->m_b898 = 0;
    v->m_nViewModelIndex = 0;
    v->m_n8dc = 0;
    v->m_pThisA0 = this;
    sub_10250400(this);
    v->m_hOwner = 0xffffffff;
    v->m_n8cc = 0;
    v->m_n858 = 0;
    v->m_b872 = 0;
    v->m_s8da = sub_10259e20();
    v->m_n8d4 = -1;
    v->m_n8d0 = 1;
    v->m_b8d8 = 0;
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
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
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

// FUNCTION: 0x10250ed0 size=0x6f3
#include "CBaseEntity.h"
#include "CBaseCombatWeapon.h"
#include "FileSystemViews.h"
#include "engineserver.h"
#include "engineiface.h"
#include "UTIL_BloodStream.h"
char sub_10259f80(void *fs, const char *name, void *p);
void sub_101cd940(void *p);
void sub_1023ee30(char *p);
struct WeaponStrHandle { int m_h; WeaponStrHandle(); };
WeaponStrHandle sub_1042bff0(const char *v);
extern void (*g_109f3628)(const char *fmt, ...);
int __cdecl _strcmpi(const char *, const char *);
extern char g_106b8540[];

struct WeaponSoundSet
{
	char m_Sounds[25][16][0x94];
	int m_nCounts[25];
};
struct WeaponAmmoRec
{
	char m_pad0[0x14];
	char m_szAmmo[0x100];
	int m_iAmmoType;
	char m_pad118[0x2198 - 0x118];
	WeaponSoundSet m_Sounds;
};
struct WeaponModelRec
{
	int m_nType;
	char m_szName[0x80];
	int m_nIndex;
};
struct WeaponAttackRec
{
	int m_n0;
	char m_szName[0x80];
	char m_szTag[0x80];
	int m_nTag104;
	int m_nKey108;
	int m_n10c[3];
	char m_Dmg118[0x1dc - 0x118];
	char m_szBotch[0x80];
	int m_nBotch25c;
	char m_pad260[0x274 - 0x260];
	WeaponModelRec m_Models[2];
	char m_pad384[0x490 - 0x384];
	WeaponSoundSet m_Sounds;
	char m_padec34[0xec84 - 0xec34];
};
struct WeaponInfoView
{
	char m_pad0[0x242c];
	int m_nFlags242c;
	char m_pad2430[0x2450 - 0x2430];
	char m_Keys2450[0x2560 - 0x2450];
	char m_sz2560[0x80];
	int m_n25e0;
	char m_pad25e4[0x2668 - 0x25e4];
	WeaponAmmoRec m_Ammo[2];
	WeaponAttackRec m_Attacks[3];
	char m_pad4fe6c[0x4fef0 - 0x4fe6c];
	char m_szModel[0x80];
	char m_szRes[8][0x80];
	int m_n50370[2];
	WeaponSoundSet m_Sounds;
};
struct WeaponNamedRec { int m_nId; const char *m_pszName; };
extern int g_1073a384; extern WeaponNamedRec **g_1073a388;
extern int g_1073a2f8; extern WeaponNamedRec **g_1073a2fc;

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }
inline int LookupKeyA(const char *name)
{
	for (int i = 0; i < g_1073a384; i++)
		if (!_strcmpi(STRINGR(g_1073a388[i]->m_pszName), name))
			return g_1073a388[i]->m_nId;
	return -1;
}
inline int LookupKeyB(const char *name)
{
	for (int i = 0; i < g_1073a2f8; i++)
		if (!_strcmpi(STRINGR(g_1073a2fc[i]->m_pszName), name))
			return g_1073a2fc[i]->m_nId;
	return -1;
}

struct EngView { virtual void v0(); virtual int v1(const char *); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual int v13(const char *, int); virtual void v14(); virtual void v15(); virtual void v16(); virtual int v17(const char *, int); };
struct AmmoV { int sub_104274b0(const char *); };
struct AmmoGet { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual AmmoV *v55(); };
#define g_pAmmoGet ((AmmoGet *)g_1070ba0c)
struct TList1 { int sub_10202a50(const char *); };
struct TList2 { TList1 *sub_10203190(int); int sub_10203020(const char *); };
extern TList2 g_1074e968;
struct NLV { int sub_101f8330(void *); };
extern NLV g_1074df78;
struct DmgV { void sub_101fb000(void *); };
struct WV { int sub_10250ea0(int); };
struct NameObj { virtual void v0(); virtual void v1(); virtual void v2(); virtual NameObj *v3(); virtual void v4(); virtual const char *v5(); };
struct NameHold { char pad[0x40]; NameObj *p40; };
inline const char *HolderName(NameHold *h)
{
	if (!h->p40)
		return g_106b8540;
	return h->p40->v3()->v5();
}
struct WeapFields
{
	char m_pad0[0x740];
	int m_n740;
	int m_iAmmoType[2];
	char m_pad74c[0x754 - 0x74c];
	int m_n754[4];
	char m_pad764[0x76c - 0x764];
	int m_n76c;
	int m_n770;
};

#define INFO() ((WeaponInfoView *)sub_102517b0())
#define F ((WeapFields *)this)

void CBaseCombatWeapon::vfunc104()
{
	if (sub_10259f80(g_1070b238, ((CBaseEntity *)this)->sub_1009f200(), (char *)this + 0x8da)) {
		int i, j, k;
		F->m_n740 = ((EngView *)engine)->v1(vfunc348());
		{
			WeaponSoundSet &set = INFO()->m_Sounds;
			for (k = 0; k < 25; k++)
				for (j = 0; j < set.m_nCounts[k]; j++)
					enginesound->vfunc0(set.m_Sounds[k][j], 0);
		}
		for (i = 0; i < 2; i++) {
			WeaponAmmoRec *r = &INFO()->m_Ammo[i];
			if (r->m_szAmmo[0]) {
				r->m_iAmmoType = F->m_iAmmoType[i] = g_pAmmoGet->v55()->sub_104274b0(r->m_szAmmo);
				F->m_iAmmoType[i] = g_pAmmoGet->v55()->sub_104274b0(r->m_szAmmo);
				if (F->m_iAmmoType[i] == -1)
					g_109f3628("ERROR: Weapon (%s) using undefined ammo type (%s)\n", HolderName(*(NameHold **)((char *)this + 0x2e0)), INFO()->m_Ammo[i].m_szAmmo);
			} else
				F->m_iAmmoType[i] = -1;
			*(int *)((char *)&F->m_iAmmoType[i] + 0x118) = r->m_iAmmoType;
			{
				WeaponSoundSet &set = r->m_Sounds;
				for (k = 0; k < 25; k++)
					for (j = 0; j < set.m_nCounts[k]; j++)
						enginesound->vfunc0(set.m_Sounds[k][j], 0);
			}
		}
		sub_10255c30(INFO()->m_Keys2450);
		INFO()->m_n25e0 = g_1074df78.sub_101f8330(INFO()->m_sz2560);
		F->m_n754[0] = sub_1042bff0((const char *)vfunc342(0)).m_h;
		F->m_n754[1] = sub_1042bff0((const char *)vfunc343()).m_h;
		F->m_n754[2] = sub_1042bff0(vfunc272()).m_h;
		F->m_n754[3] = sub_1042bff0(vfunc273()).m_h;
		*(int *)((char *)this + 0x89c) = ((WV *)this)->sub_10250ea0(vfunc342(0));
		*(int *)((char *)this + 0x8a0) = ((WV *)this)->sub_10250ea0(vfunc343());
		F->m_n76c = ((WV *)this)->sub_10250ea0((int)vfunc272());
		F->m_n770 = ((WV *)this)->sub_10250ea0((int)vfunc273());
		if (INFO()->m_szModel[0])
			((EngView *)engine)->v13(INFO()->m_szModel, 0);
		if (INFO()->m_szRes[0][0])
			((EngView *)engine)->v17(INFO()->m_szRes[0], 0);
		if (INFO()->m_szRes[2][0])
			sub_1023ee30(INFO()->m_szRes[2]);
		if (INFO()->m_szRes[3][0])
			sub_1023ee30(INFO()->m_szRes[3]);
		if (INFO()->m_szRes[4][0])
			((EngView *)engine)->v17(INFO()->m_szRes[4], 0);
		if (INFO()->m_szRes[5][0])
			((EngView *)engine)->v17(INFO()->m_szRes[5], 0);
		if (INFO()->m_szRes[6][0])
			((EngView *)engine)->v17(INFO()->m_szRes[6], 0);
		if (INFO()->m_szRes[7][0])
			((EngView *)engine)->v17(INFO()->m_szRes[7], 0);
		int tmp = g_1074e968.sub_10203020("TagStrings");
		if (tmp == -1)
			g_109f3628("Unable to find String List!\n");
		for (i = 0; i < 3; i++) {
			WeaponAttackRec *r = &INFO()->m_Attacks[i];
			if (r->m_szName[0]) {
				r->m_nTag104 = 0;
				if (tmp != -1)
					r->m_nTag104 = g_1074e968.sub_10203190(tmp)->sub_10202a50(r->m_szName);
				r->m_nKey108 = LookupKeyA(r->m_szTag);
				((DmgV *)((char *)this + 0x77c + i * 0x44))->sub_101fb000(r->m_Dmg118);
				r->m_nBotch25c = LookupKeyB(r->m_szBotch);
				for (j = 0; j < 2; j++) {
					WeaponModelRec &m = r->m_Models[j];
					switch (m.m_nType) {
					case 1:
						m.m_nIndex = ((EngView *)engine)->v13(m.m_szName, 0);
						break;
					}
				}
				{
					WeaponSoundSet &set = r->m_Sounds;
					for (k = 0; k < 25; k++)
						for (j = 0; j < set.m_nCounts[k]; j++)
							((CBaseEntity *)this)->sub_100ae090(set.m_Sounds[k][j]);
				}
			}
		}
		{
			const char *s = (const char *)vfunc342(0);
			if (s && *s)
				vfunc105(s);
		}
	} else {
		g_109f3628("Error reading weapon data file for: %s\n", HolderName(*(NameHold **)((char *)this + 0x2e0)));
		sub_101cd940(this);
	}
	*((char *)this + 0x8c8) = (INFO()->m_nFlags242c & 8) == 8;
	vfunc71();
}
// END FUNCTION

// FUNCTION: 0x10251d80 size=0xd
#include "CBaseCombatWeapon.h"
namespace lifted {
int sub_10010ea6();
}
int CBaseCombatWeapon::vfunc342(int a0)
{
    return (lifted::sub_10010ea6()) + 0x2188;
}
// END FUNCTION

// FUNCTION: 0x10251da0 size=0xb
#include "CBaseCombatWeapon.h"
namespace lifted {
int sub_10010ea6();
}
int CBaseCombatWeapon::vfunc343()
{
    return (lifted::sub_10010ea6()) + 0x2208;
}
// END FUNCTION

// FUNCTION: 0x10251dc0 size=0xb
#include "CBaseCombatWeapon.h"
namespace lifted {
int sub_10010ea6();
}
char * CBaseCombatWeapon::vfunc272()
{
    return (char *)((lifted::sub_10010ea6()) + 0x2288);
}
// END FUNCTION

// FUNCTION: 0x10251de0 size=0xb
#include "CBaseCombatWeapon.h"
namespace lifted {
int sub_10010ea6();
}
char * CBaseCombatWeapon::vfunc273()
{
    return (char *)((lifted::sub_10010ea6()) + 0x2308);
}
// END FUNCTION

// FUNCTION: 0x10251e00 size=0xb
#include "CBaseCombatWeapon.h"
// TARGET: CBaseCombatWeapon::sub_10251e00
int CBaseCombatWeapon::sub_10251e00()
{
	return (int)sub_102517b0() + 0x2388;
}
// END FUNCTION

// FUNCTION: 0x10251e20 size=0xb
#include "CBaseCombatWeapon.h"
namespace lifted {
int sub_10010ea6();
}
int CBaseCombatWeapon::vfunc344()
{
    return (lifted::sub_10010ea6()) + 0x2408;
}
// END FUNCTION

// FUNCTION: 0x10251e40 size=0x27
#include "CWeaponOwner.h"
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
#include "CBaseCombatWeapon.h"
namespace lifted {
int sub_10010ea6();
}
int CBaseCombatWeapon::vfunc345()
{
    return *(int *)((char *)(lifted::sub_10010ea6()) + 0x2424);
}
// END FUNCTION

// FUNCTION: 0x10251f10 size=0xc
#include "CBaseCombatWeapon.h"

int CBaseCombatWeapon::sub_10251f10()
{
	return *(int *)((char *)sub_102517b0() + 0x2428);
}
// END FUNCTION

// FUNCTION: 0x10251f30 size=0x9
#include "CBaseCombatWeapon.h"
namespace lifted {
int sub_10010ea6();
}
const char * CBaseCombatWeapon::vfunc348()
{
    return (const char *)((lifted::sub_10010ea6()) + 8);
}
// END FUNCTION

// FUNCTION: 0x10251f50 size=0xc
#include "CBaseCombatWeapon.h"

struct CWeaponOwnerView5ebc8
{
	char m_pad[0x5ebc8];
	int m_n5ebc8;
};

int CBaseCombatWeapon::vfunc349()
{
	return ((CWeaponOwnerView5ebc8 *)sub_102517b0())->m_n5ebc8;
}
// END FUNCTION

// FUNCTION: 0x10251f70 size=0xc
int __fastcall sub_102517b0(void *pThis);

int __fastcall sub_10251f70(void *pThis)
{
	return *(int *)((char *)sub_102517b0(pThis) + 0x5ebcc);
}
// END FUNCTION

// FUNCTION: 0x10251f90 size=0xc
#include "CBaseCombatWeapon.h"
// TARGET: CBaseCombatWeapon::sub_10251f90
int CBaseCombatWeapon::sub_10251f90()
{
	return *(int *)((char *)sub_102517b0() + 0x5ebd0);
}
// END FUNCTION

// FUNCTION: 0x10251fb0 size=0xc
#include "CBaseCombatWeapon.h"

struct CWeaponOwnerView5ebd4
{
	char m_pad[0x5ebd4];
	int m_n5ebd4;
};

int CBaseCombatWeapon::vfunc352()
{
	return ((CWeaponOwnerView5ebd4 *)sub_102517b0())->m_n5ebd4;
}
// END FUNCTION

// FUNCTION: 0x10251fd0 size=0xc
#include "CBaseCombatWeapon.h"
int __fastcall sub_10251fd0(CBaseCombatWeapon *p)
{
	return *(int *)((char *)p->sub_102517b0() + 0x5ebd8);
}
// END FUNCTION

// FUNCTION: 0x10251ff0 size=0xc
#include "CBaseCombatWeapon.h"
// TARGET: CBaseCombatWeapon::sub_10251ff0
int CBaseCombatWeapon::sub_10251ff0()
{
	return *(int *)((char *)sub_102517b0() + 0x5ebdc);
}
// END FUNCTION

// FUNCTION: 0x10252010 size=0xc
#include "CBaseCombatWeapon.h"

struct CWeaponOwnerView5ebe0
{
	char m_pad[0x5ebe0];
	int m_n5ebe0;
};

int CBaseCombatWeapon::vfunc355()
{
	return ((CWeaponOwnerView5ebe0 *)sub_102517b0())->m_n5ebe0;
}
// END FUNCTION

// FUNCTION: 0x10252030 size=0xc
#include "CBaseCombatWeapon.h"
int __fastcall sub_10252030(CBaseCombatWeapon *p)
{
	return *(int *)((char *)p->sub_102517b0() + 0x5ebe4);
}
// END FUNCTION

// FUNCTION: 0x10252050 size=0xc
#include "CBaseCombatWeapon.h"
int __fastcall sub_10252050(CBaseCombatWeapon *p)
{
	return *(int *)((char *)p->sub_102517b0() + 0x5ebe8);
}
// END FUNCTION

// FUNCTION: 0x10252070 size=0xc
#include "CBaseCombatWeapon.h"
int __fastcall sub_10252070(CBaseCombatWeapon *p)
{
	return *(int *)((char *)p->sub_102517b0() + 0x5ebec);
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

// FUNCTION: 0x102524b0 size=0x3
#include "CBaseCombatWeapon.h"
// TARGET: CBaseCombatWeapon::vfunc302
char CBaseCombatWeapon::vfunc302() {
	return 1;
}
// END FUNCTION

// FUNCTION: 0x102524d0 size=0x3
#include "CBaseCombatWeapon.h"
// TARGET: CBaseCombatWeapon::vfunc279
char CBaseCombatWeapon::vfunc279() { return 0; }
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
#include "CBaseCombatWeapon.h"
float CBaseCombatWeapon::vfunc311()
{
    return *(float *)((char *)this + 0x894);
}
// END FUNCTION

// FUNCTION: 0x10252910 size=0x12f
#include "CBaseCombatWeapon.h"
#include "CEntityVSlots.h"
#include "CBaseEntity.h"
#include "CUnknown1070b244.h"

struct DropOwnerView : CEntityVSlots
{
    char pad[0xa8 - 4];
    void *m_pObj;
};
struct DropEntView
{
    char pad[0x9c];
    DropOwnerView *m_pOwner9c;
};
extern Vector g_1070d1b0;
extern CUnknown1070b244 *g_1070b244;

inline DropOwnerView *ToBaseCombatCharacter(DropEntView *pEntity)
{
    if (!pEntity)
        return 0;
    return pEntity->m_pOwner9c;
}

void CBaseCombatWeapon::vfunc300()
{
    Vector vecVelocity = g_1070d1b0;
    DropOwnerView *pOwner = sub_102521f0() ? (DropOwnerView *)sub_102521f0() : ToBaseCombatCharacter((DropEntView *)((EHANDLE *)((char *)this + 0x37c))->Get());
    if (pOwner)
    {
        float flScale = 0.0f;
        if (pOwner->m_pObj)
            flScale = g_1070b244->vfunc1(64.0f, 128.0f);
        else
        {
            Vector vecOrigin = *pOwner->slot217();
            vecOrigin.z = vecOrigin.z + 35.0f;
            ((CEntityVSlots *)this)->slot216(&vecOrigin);
        }
        {
            Vector vecDir;
            vecVelocity = flScale * *pOwner->slot369(&vecDir);
        }
    }
    vfunc299(&vecVelocity.x);
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

// FUNCTION: 0x10252c10 size=0x1a8
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatWeapon.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
static inline const char *STRINGR_10252c10(const char *const &s) { return s ? s : g_106b8540; }

struct COutputView10252c10
{
	char pad[0x18];
	void sub_100cd660(CBaseEntity *pActivator, CBaseCombatWeapon *pCaller, int a);
};

struct CPlayerView10252c10
{
	char m_pad0000[0xa8];
	void *m_pAI;
};

struct CWeaponEvents10252c10
{
	char m_pad[0x8e0];
	COutputView10252c10 m_OnPlayerPickup;
	COutputView10252c10 m_OnNPCPickup;
};

void sub_1012c900(char *pEnt);

void CBaseCombatWeapon::vfunc341(CBaseEntity *pOwner)
{
	sub_1012c900((char *)this);
	CWeaponEvents10252c10 *w = (CWeaponEvents10252c10 *)this;
	if (((CPlayerView10252c10 *)pOwner)->m_pAI)
		w->m_OnPlayerPickup.sub_100cd660(pOwner, this, 0);
	else
		w->m_OnNPCPickup.sub_100cd660(pOwner, this, 0);
	((CEntityVSlots *)this)->slot225();
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", STRINGR_10252c10(*(const char **)((char *)this + 0x26c)));
		CCollisionProperty *pCollision = (CCollisionProperty *)((char *)this + 0x270);
		pCollision->AddSolidFlags(4);
	}
	{
		ScopeTrace trace("CBaseEntity::ClearSolidFlags", STRINGR_10252c10(*(const char **)((char *)this + 0x26c)));
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc580(0);
	}
	{
		ScopeTrace trace("CBaseEntity::SetSolid", STRINGR_10252c10(*(const char **)((char *)this + 0x26c)));
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	((CBaseEntity *)this)->sub_100b3b00();
}
// END FUNCTION

// FUNCTION: 0x10252e80 size=0xb
#include "CBaseCombatWeapon.h"
void sub_1000c6f8();

void CBaseCombatWeapon::vfunc305()
{
	*(void **)((char *)this + 0x1ec) = (void *)sub_1000c6f8;
}
// END FUNCTION

// FUNCTION: 0x10252ea0 size=0x1eb
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatWeapon.h"
#include "CBaseCombatCharacter.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

struct CWeaponInventoryView
{
	void sub_101f9a00(CBaseEntity *pOwner, int nValue);	// stub 0x100066cc
};

extern CWeaponInventoryView g_1074df78;
extern float g_1070d1b0[3];

// TARGET: CBaseCombatWeapon::vfunc298
void CBaseCombatWeapon::vfunc298(CBaseEntity *pOwner, int unused)
{
	((CEntityVSlots *)this)->slot93(0xb, 0);
	{
		ScopeTrace trace("CBaseEntity::RemoveSolidFlags", m_name26c ? m_name26c : g_106b8540);
		CCollisionProperty *pCollision = (CCollisionProperty *)((char *)this + 0x270);
		pCollision->sub_100dc580(pCollision->m_usSolidFlags & ~8);
	}
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540);
		CCollisionProperty *pCollision = (CCollisionProperty *)((char *)this + 0x270);
		pCollision->AddSolidFlags(4);
	}
	((CEntityVSlots *)this)->slot62(g_1070d1b0);
	((CBaseEntity *)this)->sub_1009ee80(pOwner);
	if (pOwner)
		m_hOwner = *((CEntityVSlots *)pOwner)->slot1();
	else
		m_hOwner = -1;
	((CEntityVSlots *)this)->slot202((CEntityVSlots *)pOwner);
	for (int i = 0; i < 2; i++)
		m_flTimes730[i] = gpGlobals->curtime;
	*(int *)((char *)this + 0x1ec) = 0;
	sub_100ac4e0(0, 0, 0);
	((CBaseEntity *)this)->sub_100b3b00();
	((CEntityVSlots *)this)->slot225();
	if (sub_10256220())
	{
		if (!((CBaseCombatCharacter *)pOwner)->sub_10336920())
			vfunc105(vfunc272());
		else
			vfunc105(vfunc273());
	}
	else
		vfunc105((const char *)vfunc343());
	if (pOwner)
		g_1074df78.sub_101f9a00(pOwner, *(int *)((char *)sub_102517b0() + 0x2664));
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
#include "CBaseEntity.h"
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
#include "CBaseCombatWeapon.h"
struct WeaponField890 { char pad[0x890]; int m; };
void CBaseCombatWeapon::vfunc306(int value)
{
	((WeaponField890 *)this)->m = value;
}
// END FUNCTION

// FUNCTION: 0x102532a0 size=0xb9
#include "CBasePlayer.h"
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

// FUNCTION: 0x10253390 size=0x57e
template <class T> __forceinline T pcd_stage(T x) { return x; }
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CBaseCombatWeapon.h"
#include "CEHandleGet.h"
#include "ehandle.h"
#include "CUnknown100290c0.h"
#include "CUnknown10738964.h"

__declspec(dllimport) void __cdecl DevMsg(int, const char *, ...);
const char *__cdecl sub_10412550(int);

struct CWeaponViewModelView
{
	int sub_1008de20(int a, int b);
};

struct CWeapon307View	// CBaseCombatWeapon members this function needs that the header does not declare
{
	char m_pad0000[0x8a8];
	int m_n8a8;
	int sub_100952d0(int a);
	int sub_100936e0(int a, int b, int c);
	int sub_102507b0(int a);
};

struct CWeaponPlayerView
{
	char m_pad0000[0x1b6d];
	char m_b1b6d;
	char m_pad1b6e[0x1c64 - 0x1b6e];
	CHandle<CBaseCombatWeapon> m_h1c64;
	CWeaponViewModelView *sub_1015d680(int a);
};

struct CWeaponOwnerView
{
	char m_pad0000[0xa8];
	CWeaponPlayerView *m_pA8;
};

struct CVDebugConVarView
{
	void *m_vtbl;
	CUnknown10738964 *m_pParent;
};

struct CVDebugConVarSys
{
	virtual void v0();
	virtual void v1();
	virtual CVDebugConVarView *vfunc2(const char *pszName);
};

extern CVDebugConVarSys *g_1070b234;

inline CWeaponPlayerView *ToPlayerObj(CWeaponOwnerView *p)
{
	if (!p)
		return 0;
	return p->m_pA8;
}

#define V307(p) ((CWeapon307View *)(p))

// TARGET: CBaseCombatWeapon::vfunc307
void CBaseCombatWeapon::vfunc307(int value)
{
	CWeaponPlayerView *pPlayer = sub_102521f0() ? ToPlayerObj((CWeaponOwnerView *)sub_102521f0()) : 0;

	if (pPlayer) {
		if (value == 0xde || value == 0xdd)
			pPlayer->m_b1b6d = 0;
		else
			pPlayer->m_b1b6d = 1;
	}

	if (!sub_10256220()) {
		if (!pPlayer)
			return;
		if (!((CUnknown100290c0 *)EHandleDetail::g_10566458)->sub_100290c0((unsigned int *)&pPlayer->m_h1c64))
			return;
		if (!V307(this)->sub_100952d0(-1))
			return;
		vfunc308(0, 0);
		V307(((CUnknown100290c0 *)EHandleDetail::g_10566458)->sub_100290c0((unsigned int *)&pPlayer->m_h1c64))->m_n8a8 = 0xb6;
		int nSequence = sub_1008dc40(0xb6, -1);
		m_nSequence = V307(this)->sub_100936e0(m_nSequence, nSequence, 0);
		vfunc310(gpGlobals->curtime + 0.3);
		return;
	}

	int nSequence = sub_1008dc40(value, -1);
	if (nSequence < 0) {
		vfunc310(gpGlobals->curtime);
		if (!pPlayer)
			return;
		if (sub_10256220()) {
			if (pPlayer->m_h1c64.Get() == this) {
				vfunc308(m_nSequence, 0);
				return;
			}
			if (!pPlayer->m_h1c64.Get())
				return;
			pPlayer->m_h1c64->vfunc307(value);
			V307(pPlayer->m_h1c64.Get())->m_n8a8 = value;
			return;
		}
		if (!pPlayer->m_h1c64.Get())
			return;
		pPlayer->m_h1c64->vfunc307(0xb6);
		V307(pPlayer->m_h1c64.Get())->m_n8a8 = 0xb6;
		return;
	}

	int nAnim = V307(this)->sub_102507b0(value);
	int nHands = nAnim;
	if (pPlayer) {
		CWeaponViewModelView *pVM = pPlayer->sub_1015d680(1);
		int nResult = pVM ? pVM->sub_1008de20(nHands, -1) : 0;
		nHands = nResult;
	} else
		nHands = 0;
	m_nSequence = V307(this)->sub_100936e0(m_nSequence, nSequence, 0);

	if (pPlayer && sub_10256220()) {
		if (pPlayer->m_h1c64.Get() == this) {
			vfunc308(m_nSequence, nHands);
		} else if (pPlayer->m_h1c64.Get()) {
			pPlayer->m_h1c64->vfunc307(value);
			V307(pPlayer->m_h1c64.Get())->m_n8a8 = value;
		}
	}
	float flDuration;
	if (pPlayer && sub_10256220() && pPlayer->m_h1c64.Get()) {
		int nHandleSequence = pPlayer->m_h1c64->m_nSequence;
		flDuration = pPlayer->m_h1c64->sub_10091080(nHandleSequence);
	} else
		flDuration = sub_10091080(pcd_stage(m_nSequence));
	vfunc310(gpGlobals->curtime + flDuration);

	static CVDebugConVarView *s_pVDebugWeaponAnims = g_1070b234->vfunc2("vdebug_weapon_anims");
	if (s_pVDebugWeaponAnims) {
		CUnknown10738964 *const &rParent = s_pVDebugWeaponAnims->m_pParent;
		if (!rParent->vfunc1() && rParent->m_n2c)
			DevMsg(2, "WeaponAnim: %s, Hands: %s\n", sub_10412550(value), sub_10412550(nAnim));
	}
}
// END FUNCTION

// FUNCTION: 0x10253a70 size=0x23
#include "CBaseCombatWeapon.h"
char CBaseCombatWeapon::vfunc312()
{
	for (int i = 0; i < 2; i++)
		if (vfunc280(i))
			return 1;
	return 0;
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
#include "CBaseCombatWeapon.h"
#pragma warning(disable : 4716)
bool CBaseCombatWeapon::vfunc315()
{
    sub_10253b70(vfunc342(0), vfunc343(), 0xb4, vfunc344());
}
// END FUNCTION

// FUNCTION: 0x10253ca0 size=0x17c
#include "CBaseCombatCharacter.h"
#include "CBaseCombatWeapon.h"
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
				int seq = *(int *)((char *)ResolveHandle(*(unsigned int *)(ai + 0x1c64)) + 0x6f0);
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

// FUNCTION: 0x10253ea0 size=0x2e1
#include "CBaseEntity.h"
#include "CBaseCombatWeapon.h"
#include "UTIL_BloodStream.h"
#include "CGameRules.h"
#include "CEntityVSlots.h"
#include "globalvars.h"
#include "CUnknown1015ef20.h"

struct CWeaponOwnerView { char m_pad0[0xa8]; void *m_pA8; };
struct CFiringChar {
	char m_pad0[0x3e0];
	int m_n3e0;
	char m_pad3e4[0x2088 - 0x3e4];
	unsigned int m_f2088;
	unsigned int m_f208c;
	unsigned int m_f2090;
};
struct CWeaponFireView {
	char m_pad0[0x730];
	float m_flT730;
	float m_flT734;
	char m_pad738[0x74c - 0x738];
	int m_nClip74c;
	char m_pad750[0x898 - 0x750];
	char m_b898;
	char m_b899;
	char m_b89a;
	char m_b89b;
	char m_pad89c[0x8ac - 0x89c];
	float m_fl8ac;
	char m_pad8b0[0x8b4 - 0x8b0];
	char m_b8b4;
};
typedef char (__fastcall *FastCharFn)(void *);
bool __fastcall sub_10257820(void *p);

inline char WeaponSlot271(void *pThis)
{
	return ((FastCharFn)((*(void ***)pThis)[271]))(pThis);
}
inline char WeaponSlot346(void *pThis)
{
	return ((FastCharFn)((*(void ***)pThis)[346]))(pThis);
}
inline CFiringChar *ToFiringChar(CWeaponOwnerView *pOwner)
{
	if (!pOwner)
		return 0;
	return (CFiringChar *)pOwner->m_pA8;
}
#define pW ((CWeaponFireView *)this)

// TARGET: CBaseCombatWeapon::vfunc319
void CBaseCombatWeapon::vfunc319()
{
	CFiringChar *pChar = sub_102521f0() ? ToFiringChar((CWeaponOwnerView *)sub_102521f0()) : 0;
	unsigned int nBit;
	if (pChar) {
		volatile unsigned int a = pChar->m_f2088;
		unsigned int b = pChar->m_f208c;
		if (!sub_10257820(this) && !(pChar->m_f208c & 1))
			*(unsigned int *)&a &= ~1;
		if (!sub_10257820(this) && !(pChar->m_f208c & 0x800))
			*(unsigned int *)&a &= ~0x800;
		if (!((CUnknown1015ef20 *)pChar)->sub_1015ef20()) {
			*(unsigned int *)&a &= 0xfffff7fe;
			b &= 0xfffff7fe;
		}
		vfunc294();
		int fire = a & 1;
		pW->m_fl8ac = fire ? pW->m_fl8ac + gpGlobals->frametime : 0.0f;
		if (vfunc277(0))
			vfunc322();
		if ((b & 0x800) && pW->m_flT734 <= gpGlobals->curtime) {
			vfunc327();
		} else if (fire && pW->m_flT730 <= gpGlobals->curtime) {
			if (vfunc277(0) && pW->m_nClip74c <= 0) {
				vfunc291();
				pW->m_b89b = 1;
			} else if (pChar->m_n3e0 == 3 && !pW->m_b8b4) {
				vfunc291();
				return;
			} else {
				if (pChar->m_f208c & 1)
					pW->m_flT730 = gpGlobals->curtime;
				vfunc326();
			}
		} else {
			unsigned int c = pChar->m_f2090;
			if (c & 1)
				vfunc265();
			else if (c & 0x800)
				vfunc266();
		}
		nBit = a & 0x2000;
		if (nBit && vfunc277(0) && !pW->m_b898)
			vfunc325();
		if (!fire && !(a & 0x800) && !nBit && WeaponSlot271(this)) {
			pW->m_b89b = nBit;
			if (!vfunc312() && pW->m_flT730 < gpGlobals->curtime) {
				if (!(WeaponSlot346(this) & 4) && ((CGameRules *)g_1070ba0c)->vfunc20((CBaseEntity *)pChar, (CBaseEntity *)this)) {
					pW->m_flT730 = gpGlobals->curtime + 0.3;
					return;
				}
			} else {
				if (vfunc277(0) && pW->m_nClip74c == 0 && !(WeaponSlot346(this) & 2) && pW->m_flT730 < gpGlobals->curtime && vfunc325())
					return;
			}
			vfunc321();
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10254250 size=0xc6
#include "CBaseCombatWeapon.h"
#include "CBaseCombatCharacter.h"
#include "CBasePlayer.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"

static inline CBasePlayer *PlayerOf(CBaseEntity *p)
{
	return p ? (CBasePlayer *)p->m_pA8 : 0;
}

void CBaseCombatWeapon::vfunc320()
{
	CBasePlayer *pPlayer = sub_102521f0() ? PlayerOf((CBaseEntity *)sub_102521f0()) : 0;
	switch (pPlayer != 0) { case 0: return; }
	int nSlot = pPlayer->sub_10345480();
	if (nSlot < 0)
		return;
	if (!pPlayer->sub_10160dc0())
		return;
	if (!(pPlayer->m_b208C & 1))
		return;
	CBaseEntity *pEnt = (CBaseEntity *)EHandle_Get(pPlayer->m_h1C5C);
	if (pEnt && pPlayer->sub_101611e0(pEnt))
		return;
	((CEntityVSlots *)pPlayer)->slot410();
	int nAct = ((CEntityVSlots *)this)->slot361(0x4b);
	int nTrans = ((CEntityVSlots *)pPlayer)->slot376(nAct);
	((CEntityVSlots *)pPlayer)->slot311(0x4b, nTrans, nSlot);
	((CBaseCombatCharacter *)pPlayer)->sub_10346760();
}
// END FUNCTION

// FUNCTION: 0x10254360 size=0x3
#include "CBaseCombatWeapon.h"
// TARGET: CBaseCombatWeapon::vfunc330
int CBaseCombatWeapon::vfunc330() {
	return 0;
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
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatWeapon.h"
void __fastcall sub_1033d940(int p, float f);
// TARGET: CBaseCombatWeapon::vfunc332
void CBaseCombatWeapon::vfunc332()
{
    float v = *(float *)((char *)sub_102517e0() + 0x260);
    int p = ((CAI_BaseNPCTroika *)this)->sub_10252240();
    sub_1033d940(p, v);
}
// END FUNCTION

// FUNCTION: 0x10254450 size=0x424
#include "CBaseCombatWeapon.h"
#include "CBasePlayer.h"
#include "CPASAttenuationFilter.h"
#include "CSingleUserRecipientFilter.h"
#include "CEntitySoundOriginView.h"
#include "engineserver.h"
#include "engineiface.h"
extern char g_10937cf1;
struct CWeaponSoundVS333
{
	virtual void vs0();
	virtual void vs1();
	virtual void vs2();
	virtual void vs3();
	virtual void vs4();
	virtual void vs5();
	virtual void vs6();
	virtual void vs7();
	virtual void vs8();
	virtual void vs9();
	virtual void vs10();
	virtual void vs11();
	virtual void vs12();
	virtual void vs13();
	virtual void vs14();
	virtual void vs15();
	virtual void vs16();
	virtual void vs17();
	virtual void vs18();
	virtual void vs19();
	virtual void vs20();
	virtual void vs21();
	virtual void vs22();
	virtual void vs23();
	virtual void vs24();
	virtual void vs25();
	virtual void vs26();
	virtual void vs27();
	virtual void vs28();
	virtual void vs29();
	virtual void vs30();
	virtual void vs31();
	virtual void vs32();
	virtual void vs33();
	virtual void vs34();
	virtual void vs35();
	virtual void vs36();
	virtual void vs37();
	virtual void vs38();
	virtual void vs39();
	virtual void vs40();
	virtual void vs41();
	virtual void vs42();
	virtual void vs43();
	virtual void vs44();
	virtual void vs45();
	virtual void vs46();
	virtual void vs47();
	virtual void vs48();
	virtual void vs49();
	virtual void vs50();
	virtual void vs51();
	virtual void vs52();
	virtual void vs53();
	virtual void vs54();
	virtual void vs55();
	virtual void vs56();
	virtual void vs57();
	virtual void vs58();
	virtual void vs59();
	virtual void vs60();
	virtual void vs61();
	virtual void vs62();
	virtual void vs63();
	virtual void vs64();
	virtual void vs65();
	virtual void vs66();
	virtual void vs67();
	virtual void vs68();
	virtual void vs69();
	virtual void vs70();
	virtual void vs71();
	virtual void vs72();
	virtual void vs73();
	virtual void vs74();
	virtual void vs75();
	virtual void vs76();
	virtual void vs77();
	virtual void vs78();
	virtual void vs79();
	virtual void vs80();
	virtual void vs81();
	virtual void vs82();
	virtual void vs83();
	virtual void vs84();
	virtual void vs85();
	virtual void vs86();
	virtual void vs87();
	virtual void vs88();
	virtual void vs89();
	virtual void vs90();
	virtual void vs91();
	virtual void vs92();
	virtual void vs93();
	virtual void vs94();
	virtual void vs95();
	virtual void vs96();
	virtual void vs97();
	virtual void vs98();
	virtual void vs99();
	virtual void vs100();
	virtual void vs101();
	virtual void vs102();
	virtual void vs103();
	virtual void vs104();
	virtual void vs105();
	virtual void vs106();
	virtual void vs107();
	virtual void vs108();
	virtual void vs109();
	virtual void vs110();
	virtual void vs111();
	virtual void vs112();
	virtual void vs113();
	virtual void vs114();
	virtual void vs115();
	virtual void vs116();
	virtual void vs117();
	virtual void vs118();
	virtual void vs119();
	virtual void vs120();
	virtual void vs121();
	virtual void vs122();
	virtual void vs123();
	virtual void vs124();
	virtual void vs125();
	virtual void vs126();
	virtual void vs127();
	virtual void vs128();
	virtual void vs129();
	virtual void vs130();
	virtual void vs131();
	virtual void vs132();
	virtual void vs133();
	virtual void vs134();
	virtual void vs135();
	virtual void vs136();
	virtual void vs137();
	virtual void vs138();
	virtual void vs139();
	virtual void vs140();
	virtual void vs141();
	virtual void vs142();
	virtual void vs143();
	virtual void vs144();
	virtual void vs145();
	virtual void vs146();
	virtual void vs147();
	virtual void vs148();
	virtual void vs149();
	virtual void vs150();
	virtual void vs151();
	virtual void vs152();
	virtual void vs153();
	virtual void vs154();
	virtual void vs155();
	virtual void vs156();
	virtual void vs157();
	virtual void vs158();
	virtual void vs159();
	virtual void vs160();
	virtual void vs161();
	virtual void vs162();
	virtual void vs163();
	virtual void vs164();
	virtual void vs165();
	virtual void vs166();
	virtual void vs167();
	virtual void vs168();
	virtual void vs169();
	virtual void vs170();
	virtual void vs171();
	virtual void vs172();
	virtual void vs173();
	virtual void vs174();
	virtual void vs175();
	virtual void vs176();
	virtual void vs177();
	virtual void vs178();
	virtual void vs179();
	virtual void vs180();
	virtual void vs181();
	virtual void vs182();
	virtual void vs183();
	virtual void vs184();
	virtual void vs185();
	virtual void vs186();
	virtual void vs187();
	virtual void vs188();
	virtual void vs189();
	virtual void vs190();
	virtual void vs191();
	virtual void vs192();
	virtual void vs193();
	virtual void vs194();
	virtual void vs195();
	virtual void vs196();
	virtual void vs197();
	virtual void vs198();
	virtual void vs199();
	virtual void vs200();
	virtual void vs201();
	virtual void vs202();
	virtual void vs203();
	virtual void vs204();
	virtual void vs205();
	virtual void vs206();
	virtual void vs207();
	virtual void vs208();
	virtual void vs209();
	virtual void vs210();
	virtual void vs211();
	virtual void vs212();
	virtual void vs213();
	virtual void vs214();
	virtual void vs215();
	virtual void vs216();
	virtual void vs217();
	virtual void vs218();
	virtual void vs219();
	virtual void vs220();
	virtual void vs221();
	virtual void vs222();
	virtual void vs223();
	virtual void vs224();
	virtual void vs225();
	virtual void vs226();
	virtual void vs227();
	virtual void vs228();
	virtual void vs229();
	virtual void vs230();
	virtual void vs231();
	virtual void vs232();
	virtual void vs233();
	virtual void vs234();
	virtual void vs235();
	virtual void vs236();
	virtual void vs237();
	virtual void vs238();
	virtual void vs239();
	virtual void vs240();
	virtual void vs241();
	virtual void vs242();
	virtual void vs243();
	virtual void vs244();
	virtual void vs245();
	virtual void vs246();
	virtual void vs247();
	virtual void vs248();
	virtual void vs249();
	virtual void vs250();
	virtual void vs251();
	virtual void vs252();
	virtual void vs253();
	virtual void vs254();
	virtual void vs255();
	virtual void vs256();
	virtual void vs257();
	virtual void vs258();
	virtual void vs259();
	virtual void vs260();
	virtual void vs261();
	virtual void vs262();
	virtual void vs263();
	virtual void vs264();
	virtual void vs265();
	virtual void vs266();
	virtual void vs267();
	virtual void vs268();
	virtual void vs269();
	virtual void vs270();
	virtual void vs271();
	virtual void vs272();
	virtual void vs273();
	virtual void vs274();
	virtual void vs275();
	virtual void vs276();
	virtual void vs277();
	virtual void vs278();
	virtual void vs279();
	virtual void vs280();
	virtual void vs281();
	virtual void vs282();
	virtual void vs283();
	virtual void vs284();
	virtual void vs285();
	virtual void vs286();
	virtual void vs287();
	virtual void vs288();
	virtual void vs289();
	virtual void vs290();
	virtual void vs291();
	virtual void vs292();
	virtual void vs293();
	virtual void vs294();
	virtual bool vfunc295();
};
struct CWeaponSoundRec333 { char pad[0x80]; int m80; int m84; int m88; float m8c; char m90; };

inline int WpnEntIdx(int e) { return engine->vfunc35(e); }
inline int WpnDead(int x) { return x + 1; }
struct WpnEntV { char m_pad0000[0x2e0]; int m_pEdict; int entindex() { return engine->vfunc35(m_pEdict); } };

void CBaseCombatWeapon::vfunc333(int a, int b, int c, int d, int e, int f)
{
	if (g_10937cf1)
		return;
	int idx = a;
	if (vfunc347(idx) <= 0)
		return;
	int r = enginerandom->vfunc2(0, vfunc347(idx) - 1);
	float atten = 0.27f;
	int x = 0;
	CWeaponSoundRec333 *rec = (CWeaponSoundRec333 *)sub_10252120(idx, r);
	float flVolume;
	if (*(float *)&c == 0.0f) {
		flVolume = 1.0f;
		if (rec->m8c != 0.0f)
			flVolume = rec->m8c;
	} else
		flVolume = *(float *)&c;
	if (d == 0) {
		d = 100;
		if (rec->m80)
			d = rec->m80;
		if (rec->m84 && rec->m88)
			d = enginerandom->vfunc2(rec->m84, rec->m88);
	}
	if (*(float *)&e != 0.0f)
		atten = *(float *)&e;
	if (f)
		x = f;
	if (rec->m90) {
		if (!sub_102521f0())
			return;
		if (!*(int *)((char *)sub_102521f0() + 0xa8))
			return;
		enginesound->vfunc0((const char *)rec, 0);
		void *o = sub_102521f0();
		CBasePlayer *pl = 0;
		if (o)
			pl = *(CBasePlayer **)((char *)o + 0xa8);
		CSingleUserRecipientFilter filter(pl);
		if (((CWeaponSoundVS333 *)this)->vfunc295())
			filter.UsePredictionRules();
		int edict = *(int *)((char *)sub_102521f0() + 0x2e0);
		enginesound->vfunc3(&filter, engine->vfunc35(edict), 6, (const char *)rec, flVolume, atten, 0, d, 0, 0, 1, 0);
	} else if (sub_102521f0()) {
		CPASAttenuationFilter filter((CEntitySoundOriginView *)sub_102521f0(), atten);
		if (((CWeaponSoundVS333 *)this)->vfunc295())
			filter.UsePredictionRules();
		int edict = *(int *)((char *)sub_102521f0() + 0x2e0);
		enginesound->vfunc3(&filter, engine->vfunc35(edict), b, (const char *)rec, flVolume, atten, x, d, 0, 0, 1, 0);
	} else {
		CPASAttenuationFilter filter((CEntitySoundOriginView *)this, atten);
		if (((CWeaponSoundVS333 *)this)->vfunc295())
			filter.UsePredictionRules();
		enginesound->vfunc3(&filter, WpnEntIdx(m_pEdict2e0), b, (const char *)rec, flVolume, atten, x, d, 0, 0, 1, 0);
		
	}
}
// END FUNCTION

// FUNCTION: 0x10254990 size=0x11a
#include "CBaseCombatWeapon.h"
struct CBCWOwnerV { char pad[0x2e0]; int m_edict; int entindex() { return engine->vfunc35(m_edict); } };
struct CBCWV : CBaseCombatWeapon
{
	CBCWOwnerV *GetOwner() { return (CBCWOwnerV *)sub_102521f0(); }
	int entindex() { return engine->vfunc35(*(int *)((char *)this + 0x2e0)); }
};
void CBaseCombatWeapon::vfunc334(int a, int b)
{
	CBCWV *self = (CBCWV *)this;
	if (vfunc347(a) <= 0)
		return;
	for (int i = 0; i < vfunc347(a); i++) {
		char *pRecord = sub_10252120(a, i);
		if (pRecord[0x90]) {
			if (self->GetOwner())
				enginesound->vfunc7(self->GetOwner()->entindex(), 6, pRecord);
		} else {
			if (self->GetOwner())
				enginesound->vfunc7(self->GetOwner()->entindex(), b, pRecord);
			else {
				int edict = *(int *)((char *)this + 0x2e0);
				enginesound->vfunc7(engine->vfunc35(edict), b, pRecord);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10254e90 size=0xb
#include "CBaseCombatWeapon.h"

bool CBaseCombatWeapon::vfunc325()
{
	return sub_10254b00(0xc2);
}
// END FUNCTION

// FUNCTION: 0x10254eb0 size=0xd1
#include "CBaseCombatWeapon.h"
#include "CUnknown1070b244.h"
#include "globalvars.h"

char __fastcall sub_102506a0(CBaseCombatWeapon *pWeapon);

struct COwner_10254eb0
{
	char m_pad0000[0x1564];
	float m_flTimer1564;
};

struct CWeaponView_10254eb0
{
	char m_pad0000[0x730];
	float m_flTimes730[2];
	char m_pad738[0x854 - 0x738];
	int m_nPending854;
};

extern CUnknown1070b244 *g_1070b244;

// TARGET: CBaseCombatWeapon::vfunc321
void CBaseCombatWeapon::vfunc321()
{
	CWeaponView_10254eb0 *pView = (CWeaponView_10254eb0 *)this;
	if (vfunc309())
	{
		int nNone = -1;
		if (pView->m_nPending854 == nNone)
		{
			if (!sub_102506a0(this) && g_1070b244->vfunc2(0, 100) <= 8)
				vfunc307(0xb7);
			else
				vfunc307(0xb6);
		}
		else
		{
			sub_10253110();
			vfunc307(pView->m_nPending854);
			pView->m_nPending854 = nNone;
			COwner_10254eb0 *pOwner = (COwner_10254eb0 *)sub_102521f0();
			if (pOwner)
				pOwner->m_flTimer1564 = vfunc311();
			for (int i = 0; i < 2; i++)
				pView->m_flTimes730[i] = gpGlobals->curtime;
		}
		sub_10257640();
	}
}
// END FUNCTION

// FUNCTION: 0x10254fd0 size=0x6
#include "CBaseCombatWeapon.h"
int CBaseCombatWeapon::vfunc328()
{
    return 0xbc;
}
// END FUNCTION

// FUNCTION: 0x10254ff0 size=0x6
int sub_10254ff0(void)
{
    return 0xc0;
}
// END FUNCTION

// FUNCTION: 0x10255010 size=0x1
#include "CBaseCombatWeapon.h"
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

// FUNCTION: 0x10255050 size=0x1ef
#include "CBaseCombatWeapon.h"
#include "CBaseCombatCharacter.h"
#include "CBaseAnimating.h"

struct CWeaponOwnerEntity
{
	char m_pad0000[0x9c];
	CBaseCombatCharacter *m_pCharacter;	// 0x9c
	char m_pad00a0[0xa8 - 0xa0];
	CBaseCombatCharacter *m_pPlayer;	// 0xa8
};

struct CWeaponCharacterView
{
	char m_pad0000[0x1c64];
	CHandle<CBaseAnimating> m_hViewModel;	// 0x1c64
};

#define WEAPON_BYTE(o) (*(char *)((char *)this + o))
#define WEAPON_INT(o) (*(int *)((char *)this + o))
#define ANIM_SEQUENCE(p) (*(int *)((char *)(p) + 0x6f0))
#define VIEW(p) ((CWeaponCharacterView *)(p))

void CBaseCombatWeapon::vfunc322()
{
	if (WEAPON_BYTE(0x8c8)) {
		CWeaponOwnerEntity *pOwnerEnt = (CWeaponOwnerEntity *)sub_102521f0();
		if (pOwnerEnt) {
			CBaseCombatCharacter *pPlayer = pOwnerEnt->m_pPlayer;
			if (pPlayer && WEAPON_BYTE(0x898)) {
				float flNext = pPlayer->m_flNextAttack1564;
				if (flNext <= gpGlobals->curtime) {
					if (WEAPON_BYTE(0x899)) {
						vfunc323();
						return;
					}
					if (pPlayer->sub_103346c0(m_nAmmoType) <= 0) {
						vfunc323();
						return;
					}
					if (WEAPON_INT(0x74c) < vfunc275(0)) {
						bool bChanged = true;
						if (sub_10256220() && VIEW(pPlayer)->m_hViewModel.Get()) {
							int nSequence = VIEW(pPlayer)->m_hViewModel.Get()->sub_1008dd30(0xc1, -1);
							bChanged = ANIM_SEQUENCE(VIEW(pPlayer)->m_hViewModel.Get()) != nSequence;
						}
						if (bChanged) {
							WEAPON_INT(0x74c)++;
							if (sub_102521f0())
								pPlayer->sub_10334500(1, m_nAmmoType);
						}
						vfunc325();
					} else {
						vfunc323();
					}
				}
			}
		}
	} else {
		CWeaponOwnerEntity *pOwnerEnt = (CWeaponOwnerEntity *)sub_102521f0();
		if (pOwnerEnt) {
			CBaseCombatCharacter *pCharacter = pOwnerEnt->m_pCharacter;
			if (pCharacter && WEAPON_BYTE(0x898)) {
				float flNext = pCharacter->m_flNextAttack1564;
				if (flNext <= gpGlobals->curtime) {
					vfunc323();
					for (int i = 0; i < 2; i++)
						m_flTimes730[i] = gpGlobals->curtime;
				}
			}
		}
	}
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

// FUNCTION: 0x10255430 size=0x1e3
#include "CBaseCombatWeapon.h"
#include "CTraceFilterNoCharacterCollide.h"
#include "CEntityVSlots.h"
#include "Ray_t.h"
#include "CTraceFilterSimple.h"
#include "CGameTrace.h"
#include "engineserver.h"
#include "globalvars.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738964.h"
#include "CBaseEntity.h"

extern Vector g_1070d1b0;
struct CWeaponOwnerView { char m_pad0[0xa8]; CEntityVSlots *m_pA8; };
void sub_10139610(const float *pAngles, float *pForward, float *pRight, float *pUp);
void sub_10146570(Vector *pStart, Vector *pEnd, int r, int g, int b, int a, float flDuration);

// TARGET: CBaseCombatWeapon::vfunc285
void *CBaseCombatWeapon::vfunc285()
{
	if (!(vfunc360() & 0x6000))
		return 0;
	CWeaponOwnerView *pView = (CWeaponOwnerView *)sub_102521f0();
	CEntityVSlots *pOwner = pView ? pView->m_pA8 : 0;
	if (!pOwner)
		return 0;
	if (engine->vfunc120() != m_n884) {
		m_n87c = 0;
		m_n884 = engine->vfunc120();
		Vector fwd;
		sub_10139610((const float *)((char *)pOwner + 0x206c), &fwd.x, 0, 0);
		Vector vecStart;
		vecStart = pOwner->slot389(*pOwner->slot220());
		Vector vecEnd;
		vecEnd = vecStart + fwd * 4000.0f;
		CTraceFilterSimple filter((CBaseEntity *)this, 0);
		Ray_t ray;
		ray.sub_1006dec0(vecStart, &vecEnd.x, &g_1070d1b0.x, &g_1070d1b0.x, 0, 1);
		CGameTrace tr;
		g_1070b254->vfunc4(&ray, 0x46004003, (CTraceFilterNoCharacterCollide *)&filter, &tr);
		if (!g_10738964->vfunc1() && g_10738964->m_n2c)
			sub_10146570((Vector *)&tr, (Vector *)tr.m_endpos, 0xff, 0xff, 0, 1, -1.0f);
		if (tr.m_fraction >= 1.0f || !tr.m_pEnt)
			return 0;
		m_n87c = *(int *)((char *)tr.m_pEnt + 0x98);
	}
	return (void *)m_n87c;
}
// END FUNCTION

// FUNCTION: 0x102556a0 size=0x14
#include "CBaseCombatWeapon.h"

void CBaseCombatWeapon::vfunc324()
{
	*((char *)this + 0x898) = 0;
	vfunc334(0xa, 3);
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

// FUNCTION: 0x10255700 size=0x3ee
#include "CBaseCombatWeapon.h"
#include "CVDmg_t.h"
#include "CUnknown1003ff80.h"
#include "CUnknown1016b460.h"
#include "CWeaponOwner.h"
#include "CBasePlayer.h"
#include "CSoundEnt.h"
#include "globalvars.h"

#define OV(n) virtual void v##n();
#define OV10(p) OV(p##0) OV(p##1) OV(p##2) OV(p##3) OV(p##4) OV(p##5) OV(p##6) OV(p##7) OV(p##8) OV(p##9)
struct OwnerV
{
	OV10(0) OV10(1) OV10(2) OV10(3) OV10(4) OV10(5) OV10(6) OV10(7) OV10(8) OV10(9)
	OV10(10) OV10(11) OV10(12) OV10(13) OV10(14) OV10(15) OV10(16) OV10(17) OV(180) OV(181) OV(182) OV(183) OV(184)
	virtual void v185(void *info);
};

struct WeaponV
{
	OV10(0) OV10(1) OV10(2) OV10(3) OV10(4) OV10(5) OV10(6) OV10(7) OV10(8) OV10(9)
	OV10(10) OV10(11) OV10(12) OV10(13) OV10(14) OV10(15) OV10(16) OV10(17) OV10(18) OV10(19) OV10(20) OV10(21)
	virtual int v220();
	OV(221) OV(222) OV(223) OV(224) OV(225) OV(226) OV(227) OV(228) OV(229)
	OV10(23) OV10(24) OV10(25) OV10(26)
	OV(270) OV(271) OV(272) OV(273) OV(274) OV(275) OV(276)
	virtual bool v277(int a);
	OV(278) OV(279) OV10(28) OV10(29)
	OV(300) OV(301) OV(302) OV(303) OV(304) OV(305) OV(306)
	virtual void v307(int a);
	OV(308) OV(309) OV10(31) OV(320) OV(321) OV(322) OV(323) OV(324)
	virtual void v325();
	OV(326) OV(327)
	virtual int v328();
	OV(329) OV(330)
	virtual const Vector &v331();
	virtual float v332();
	virtual void v333(int a, int b, int c, int d, int e, int f);
	OV(334) OV(335) OV(336) OV(337) OV(338)
	virtual void v339();
};

struct V3 { float x, y, z; };

struct DmgHolder326
{
	CVDmg_t m_d;
	~DmgHolder326() { m_d.sub_101fa680(); }
};

struct FireInfo326
{
	int m_nShots;	// 0x30
	int m_n34;
	V3 m_vSrc;	// 0x38
	V3 m_vDir;	// 0x44
	V3 m_v50;	// 0x50
	V3 m_v5c;	// 0x5c
	V3 m_v68;	// 0x68
	float m_flDist;	// 0x74
	DmgHolder326 m_Dmg;	// 0x78
	int m_nAmmo;	// 0xbc
	int m_nC0;
	int m_nC4;
	void *m_pWeapon;	// 0xc8
	int m_nCC;
	int m_nFlags;	// 0xd0
	union { int m_nD4; float m_flD4; };
	int *m_pD8[6];	// 0xd8..0xec
	int m_nF0;
	CUnknown1003ff80 m_F4;
	char m_pad[0x50];
};

extern char g_1072bcaf;
extern int g_1072bc3c;
extern Vector g_1070d1b0;

// TARGET: CBaseCombatWeapon::vfunc326
void CBaseCombatWeapon::vfunc326()
{
	WeaponV *pW = (WeaponV *)this;
	int *pRoll = sub_102517e0();
	if (pW->v277(0) && *(int *)((char *)this + 0x74c) == 0)
	{
		pW->v325();
		return;
	}
	CBasePlayer *pOwner = (CBasePlayer *)sub_10252290();
	if (!pOwner)
		return;
	pOwner->vfunc429();
	pW->v333(1, 1, 0, 0, 0, 0);
	*(unsigned int *)((char *)pOwner + 0x19c) |= 2;
	pW->v307(pW->v328());
	pOwner->vfunc449(5, 0);
	Vector v1;
	pOwner->vfunc389(&v1, (const Vector *)pOwner->vfunc220());
	Vector v2;
	pOwner->sub_10176520(&v2, 0.087155745f);
	int n = 0;
	float interval = pW->v332();
	if (m_flTimes730[0] <= gpGlobals->curtime)
	{
		do
		{
			m_flTimes730[0] += interval;
			n++;
		} while (interval != 0 && m_flTimes730[0] <= gpGlobals->curtime);
	}
	int clip = *(int *)((char *)this + 0x74c);
	if (n > clip)
		n = clip;
	*(int *)((char *)this + 0x74c) = clip - n;
	unsigned int flags = 0;
	if (*(int *)((char *)sub_102517b0() + 0x4fed8))
		flags = 1;
	if (*(int *)((char *)sub_102517b0() + 0x4fedc))
		flags |= 2;
	FireInfo326 info;
	info.m_F4.sub_1003ff80();
	info.m_nShots = 1;
	info.m_n34 = 1;
	info.m_nC0 = 4;
	info.m_nAmmo = -1;
	info.m_vSrc = *(V3 *)&g_1070d1b0;
	info.m_v5c = *(V3 *)&g_1070d1b0;
	((Vector *)&info.m_vDir)->sub_1003e4b0(g_1070d1b0);
	((Vector *)&info.m_v68)->sub_1003e4b0(g_1070d1b0);
	info.m_vSrc = *(V3 *)&v1;
	info.m_flDist = 56755.84f;
	info.m_nC4 = 0;
	info.m_pWeapon = 0;
	info.m_nCC = 0;
	info.m_nFlags = 0;
	info.m_flD4 = 0.0f;
	info.m_pD8[0] = 0; info.m_pD8[1] = 0; info.m_pD8[2] = 0; info.m_pD8[3] = 0; info.m_pD8[4] = 0; info.m_pD8[5] = 0;
	info.m_nF0 = 0;
	info.m_nShots = n;
	info.m_vDir = *(V3 *)&v2;
	info.m_v68 = *(V3 *)&pW->v331();
	info.m_Dmg.m_d = *(CVDmg_t *)(m_Dmg77c[pRoll[0]]);
	info.m_nAmmo = (&m_nAmmoType)[pRoll[0x10c / 4]];
	info.m_nC0 = 2;
	info.m_pWeapon = this;
	info.m_nFlags = flags;
	info.m_nD4 = *(int *)((char *)sub_102517b0() + 0x4feec);
	info.m_pD8[0] = (int *)((char *)sub_102517b0() + 0x4fef0);
	info.m_pD8[1] = (int *)((char *)sub_102517b0() + 0x4ff70);
	info.m_pD8[2] = (int *)((char *)sub_102517b0() + 0x4fff0);
	info.m_pD8[3] = (int *)((char *)sub_102517b0() + 0x50070);
	info.m_pD8[4] = (int *)((char *)sub_102517b0() + 0x500f0);
	((OwnerV *)pOwner)->v185(&info);
	char bFlag = g_1072bcaf;
	int snd = g_1072bc3c;
	CSoundEnt::sub_101bac90(1, (const Vector *)pW->v220(), snd, 0.2f, bFlag, (CBaseEntity *)pOwner);
	if (*(int *)((char *)this + 0x74c) == 0 && pOwner->sub_103346c0(m_nAmmoType) <= 0)
		((CUnknown1016b460 *)pOwner)->sub_1016b460((int)"!HEV_AMO0", 0, 0);
	pW->v339();
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

// FUNCTION: 0x10255dd0 size=0x342
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CBaseCombatWeapon.h"
#include "CWeaponOwner.h"
#include "CEntryZ.h"
#include "CKeyHolder.h"
#include "CVDmg_t.h"
#include <stdio.h>
#include <string.h>

extern char g_106b8540[];
extern CKeyHolderSet g_1073a2e4;
void sub_101434b0(int idx, int line, const char *psz, int a, int r, int g, int b, int al);

int CBaseCombatWeapon::vfunc124()
{
	char szText[0x200];
	int nLine = sub_100a02b0();
	if (m_fDebugOverlays224 & 1) {
		if (sub_102517b0()->m_nSection24d0 != -1) {
			const char *pName = FindEntryZ(sub_102517b0()->m_nSection24d0)->m_name;
			sprintf(szText, "Type: %s", pName ? pName : g_106b8540);
		} else {
			strcpy(szText, "Type: <ERROR>");
		}
		int e = m_pEdict2e0;
		sub_101434b0(engine->vfunc35(e), nLine, szText, 0, 255, 255, 255, 255);
		nLine++;
		sprintf(szText, "Worth: %d", sub_102517b0()->m_nWorth2558);
		e = m_pEdict2e0;
		sub_101434b0(engine->vfunc35(e), nLine, szText, 0, 255, 255, 255, 255);
		nLine++;
		for (int i = 0; i < 3; i++) {
			CVDmg_t *pDmg = (CVDmg_t *)m_Dmg77c + i;
			CWeaponAttackSlot *pAtk = &sub_102517b0()->m_Attacks[i];
			if (pAtk->m_bActive04) {
				sprintf(szText, "AttackRate: %.2f", pAtk->m_flAttackRate260);
				e = m_pEdict2e0;
				sub_101434b0(engine->vfunc35(e), nLine, szText, 0, 255, 255, 255, 255);
				nLine++;
				if (*(int *)pDmg != -1) {
					sprintf(szText, "Damage: %s", pDmg->sub_101fb470());
					e = m_pEdict2e0;
					sub_101434b0(engine->vfunc35(e), nLine, szText, 0, 255, 255, 255, 255);
					nLine++;
				}
				if (pAtk->m_nBotchKey25c != -1) {
					const char *pName = g_1073a2e4.Find(pAtk->m_nBotchKey25c)->m_pszName;
					sprintf(szText, "BotchTable: %s", pName ? pName : g_106b8540);
					e = m_pEdict2e0;
					sub_101434b0(engine->vfunc35(e), nLine, szText, 0, 255, 255, 255, 255);
					nLine++;
				}
			}
		}
	}
	return nLine;
}
// END FUNCTION

// FUNCTION: 0x10256560 size=0xda
#include "CBaseCombatWeapon.h"
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

// FUNCTION: 0x10256680 size=0x6
extern void *g_105c5ba0;

void **sub_10256680(void)
{
    return &g_105c5ba0;
}
// END FUNCTION

// FUNCTION: 0x10256710 size=0x6
extern void *g_1088ae94;

void *sub_10256710(void)
{
    return &g_1088ae94;
}
// END FUNCTION

// FUNCTION: 0x10256730 size=0x3
#include "CBaseCombatWeapon.h"
// TARGET: CBaseCombatWeapon::vfunc81
int CBaseCombatWeapon::vfunc81() { return 0; }
// END FUNCTION

// FUNCTION: 0x10256750 size=0x6
extern void *g_105c5bc4;

void *sub_10256750(void)
{
    return &g_105c5bc4;
}
// END FUNCTION

// FUNCTION: 0x10257230 size=0xe
#include "CBaseCombatWeapon.h"
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
#include "CBaseCombatWeapon.h"
// TARGET: CBaseCombatWeapon::vfunc288
void CBaseCombatWeapon::vfunc288()
{
	vfunc349();
}
// END FUNCTION

// FUNCTION: 0x10257850 size=0x50
#include "CBaseCombatWeapon.h"
#include "CBaseEntity.h"
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
#include "CBaseEntity.h"
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
#include "CBaseCombatWeapon.h"
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
#include "CBaseEntity.h"
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

// FUNCTION: 0x102579f0 size=0x688
#include "CBasePlayer.h"
// TARGET: CBaseCombatWeapon::vfunc270
#include "CBaseCombatWeapon.h"
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
#include "CGameTrace.h"
#include "CVDmg_t.h"
#include "CUnknown101c2770.h"
#include "CUnknown101c29e0.h"
#include "CUnknown101c2a90.h"
#include "CUnknown101e8f20.h"
#include "CUnknown10349590.h"
#include "CUnknown103498b0.h"
#include "CDevFlagObj.h"
#include "CSoundEnt.h"
#include "CBCCSlotViews.h"
#include "Tier1.h"
#include "Vector.h"
#include <stdlib.h>

inline void *__cdecl operator new(unsigned int, void *p) { return p; }

class CUnknown101c2a10 { public: void sub_101c2a10(int value); };
struct SRange { char m_pad[0x10]; int sub_10349830(); };
struct InfoV;
void sub_101cfef0(struct InfoV *p, int a, int b, int c, int d);
char *sub_101d3730(const char *pszFormat, ...);
int sub_101c2c30();
void sub_101c2c60();
void sub_10012a8a();
extern void (*g_109f362c)(const char *pszFormat, ...);
extern CDevFlagObj *g_1070b13c;
extern CDevFlagObj *g_1074f04c;
extern CVDmg_t *g_1072cb10;
extern float g_1072cb40;
extern Vector g_1072cb20;
extern unsigned int g_1072cb5c;
extern int g_1072bc5c;
extern unsigned char g_1072bcb7;
extern CUnknown101e8f20 g_10739d08;
extern CVStatList_t g_109f0b40;
extern unsigned char g_109f0b2a;

struct DiceRec { char pad[4]; int m_n4; int m_n8; int m_nc; };
struct DmgInfoView {
    CVDmg_t *m_pDmg;
    char pad04[0x18];
    float m_vec1c[3];
    int m_n28;
    char pad2c[0x10];
    int m_n3c;
    char pad40[8];
    float m_fl44;
};
struct MeleeInfo_t { char pad00[0x28]; int m_aCounts[1]; };

class CCharSlotView
{
public:
    VIEW_SLOT100(0) VIEW_SLOT100(1) VIEW_SLOT100(2)
    VIEW_SLOT10(30)
    VIEW_SLOT(310) VIEW_SLOT(311) VIEW_SLOT(312) VIEW_SLOT(313) VIEW_SLOT(314) VIEW_SLOT(315) VIEW_SLOT(316) VIEW_SLOT(317)
    virtual char vfunc318(int a, int b, int c);
    virtual char vfunc319(int a, int b, int c);
    virtual char vfunc320(int a, int b);
    virtual char vfunc321(int a);
    VIEW_SLOT(322) VIEW_SLOT(323) VIEW_SLOT(324) VIEW_SLOT(325)
    virtual char vfunc326(int a, int b);
    VIEW_SLOT(327) VIEW_SLOT(328) VIEW_SLOT(329)
    VIEW_SLOT10(33) VIEW_SLOT10(34) VIEW_SLOT10(35) VIEW_SLOT10(36) VIEW_SLOT10(37) VIEW_SLOT10(38) VIEW_SLOT10(39)
    virtual char vfunc400();
};

void CBaseCombatWeapon::vfunc270(CGameTrace *pHit, void *pInfo)
{
    CBaseCombatCharacter *pOwner = (CBaseCombatCharacter *)sub_10252240();
    if (!pOwner)
        return;
    CBaseEntity *pVictim = pHit->m_pEnt;
    CBaseCombatCharacter *pVictimChar = pVictim ? (CBaseCombatCharacter *)pVictim->m_p9c : 0;
    vfunc339();
    CSoundEnt::sub_101bac90(0x10, (const Vector *)pHit->m_endpos, g_1072bc5c, 0.2f, g_1072bcb7, pOwner);
    if (!pVictim)
        return;
    int *pRec = sub_102517e0();
    Vector dir = *(Vector *)pHit->m_endpos - *(Vector *)pHit->m_startpos;
    VectorNormalize(dir);
    void *pAI = pOwner->m_pA8;
    if (pAI && pVictimChar && pRec[0xf1] > 0)
    {
        ((CBasePlayer *)pAI)->sub_1017e150(pRec[0xf1], -1.0f, sub_101d3730("MeleeHit %s with %s", pVictimChar->sub_100ab4f0(), ((CBaseEntity *)this)->sub_100ab4f0()));
    }
    sub_101c2c30();
    CVDmg_t dmg = *(CVDmg_t *)((char *)this + 0x77c + *pRec * 0x44);
    dmg.sub_101fa960((CVDmgSource_t *)pOwner);
    DmgInfoView info;
    ((CUnknown101c2770 *)&info)->sub_101c2770(&dmg);
    info.m_n28 = (int)this;
    info.m_n3c = 0;
    ((CUnknown101c29e0 *)&info)->sub_101c29e0((const int *)pHit);
    int nMode = 1;
    int nDice = 1;
    bool bBlocked = pOwner->sub_10345ab0(pVictimChar);
    char *pDiceRec = pOwner->sub_10345980(pVictimChar);
    bool bWentThrough = false;
    if (pDiceRec)
    {
        DiceRec *pDice = (DiceRec *)pDiceRec;
        bWentThrough = ((CUnknown10349590 *)pDiceRec)->sub_10349650();
        nDice = (int)(float)((pDice->m_n4 - pDice->m_n8) - pDice->m_nc);
        dmg.m_field38 = pDice->m_nc;
    }
    else
    {
        bBlocked = false;
    }
    if (bBlocked)
    {
        if (!g_1070b13c->vfunc1() && g_1070b13c->m_n2c)
        {
            switch (((SRange *)pDiceRec)->sub_10349830())
            {
            case 0: pOwner->sub_100abbf0((int)"BLOCKED ON HIT", 0); break;
            case 1: pOwner->sub_100abbf0((int)"BLOCKED NORMAL", 0); break;
            case 2: pOwner->sub_100abbf0((int)"BLOCKED MAJOR", 0); break;
            default: pOwner->sub_100abbf0((int)"BLOCKED UNKNOWN", 0); break;
            }
            switch (((CUnknown103498b0 *)pDiceRec)->sub_103498b0())
            {
            case 0: pVictimChar->sub_100abbf0((int)"BLOCKING DODGE_ATTACK", 0); break;
            case 1: pVictimChar->sub_100abbf0((int)"BLOCKING DODGE", 0); break;
            case 2: pVictimChar->sub_100abbf0((int)"BLOCKING", 0); break;
            case 3: pVictimChar->sub_100abbf0((int)"BLOCKING STAGGER", 0); break;
            case 4: pVictimChar->sub_100abbf0((int)"BLOCKING HIT", 0); break;
            default: pVictimChar->sub_100abbf0((int)"BLOCKING UNKNOWN", 0); break;
            }
        }
        ((CCharSlotView *)pVictimChar)->vfunc318((int)pOwner, (int)pDiceRec, (int)&dmg);
        ((CCharSlotView *)pOwner)->vfunc319((int)pVictimChar, (int)pDiceRec, (int)&dmg);
    }
    if (!bWentThrough && bBlocked)
        goto Tail;
    if (nDice <= 0)
        nDice = 1;
    dmg.m_field0c = nDice;
    dmg.sub_101fb3e0(8);
    pVictim->sub_100a7d00((int)&info, (int)&dir, (int)pHit);
    {
        float fBase = (float)dmg.m_field04;
        float fMod = (float)dmg.m_block14.sub_10204900(pOwner);
        float fLethality;
        if (g_1072cb10)
            fLethality = (float)g_1072cb10->sub_101faa70();
        else
            fLethality = g_1072cb40;
        CVStatListSet *pSet = CVStatListSet::Of(pOwner);
        CVStatList_t *pList;
        int i;
        for (i = 0; i < pSet->m_nLists; i++)
        {
            if (pSet->m_pLists[i]->m_field10 == 3)
            {
                pList = pSet->m_pLists[i];
                goto doFind;
            }
        }
        if (!(g_109f0b2a & 1))
        {
            g_109f0b2a |= 1;
            new (&g_109f0b40) CVStatList_t(-1);
            atexit((void (*)())sub_10012a8a);
        }
        pList = &g_109f0b40;
doFind:
        int nPotence = pList->sub_102012d0(9);
        if (nPotence > 0)
        {
            if ((float)nPotence > fLethality)
            {
                fLethality = (float)nPotence;
                if (!g_1074f04c->vfunc1() && g_1074f04c->m_n2c)
                    g_109f3630("Potence level %d active!  Remaining Lethality is auto-bumped to %f!\n", nPotence, fLethality);
            }
            else
            {
                if (!g_1074f04c->vfunc1() && g_1074f04c->m_n2c)
                    g_109f3630("Potence level %d active!  Lethality is already higher, so it remains at %f!\n", nPotence, fLethality);
            }
        }
        float flMult = ((CUnknown101c2a90 *)&info)->sub_101c2a70();
        if (!g_1074f04c->vfunc1() && g_1074f04c->m_n2c)
            g_109f3630("Final damage:  DamageInflicted (%f) * (BaseDamage (%f) + DamageModifier(%f)) * Multiplier (%f) = Total (%f)\n",
                fLethality, fBase, fMod, flMult,
                (fMod + fBase) * flMult * fLethality);
        fLethality = (fMod + fBase) * flMult * fLethality;
        if (pOwner->sub_1033c900(0x100000))
        {
            int n = g_10739d08.sub_101e8f20(pOwner);
            fLethality = (float)n * fLethality * 0.01f;
            pOwner->sub_1033c770(0x100000);
        }
        Vector vecVel;
        pOwner->sub_103455a0(pVictimChar, pInfo, &vecVel);
        g_1072cb20 = vecVel;
        g_1072cb40 = fLethality;
        g_1072cb5c = *pVictim->vfunc1();
        ((CUnknown101c2a10 *)&g_1072cb10)->sub_101c2a10(-1);
        if (fLethality > 0.0f)
            nMode = bBlocked ? 0 : 2;
        sub_101c2c60();
        this->vfunc269((CBaseCombatWeapon *)pVictim, dir);
    }
    if (!bBlocked && pVictimChar)
    {
        if ((pInfo && &((MeleeInfo_t *)pInfo)->m_aCounts[0] && ((CCharSlotView *)pVictimChar)->vfunc326((int)pInfo, (int)pOwner))
            || ((CCharSlotView *)pVictimChar)->vfunc400())
        {
            int act = pVictimChar->sub_103449b0((CBaseEntity *)pHit, (CBaseEntity *)pOwner, pInfo);
            if (act == -1)
                g_109f362c("%s could not find a valid knockback activity\n", pVictimChar->sub_100ab4f0());
            else
                ((CCharSlotView *)pVictimChar)->vfunc320((int)pOwner, act);
        }
        else
        {
            ((CCharSlotView *)pVictimChar)->vfunc321((int)pOwner);
        }
    }
Tail:
    sub_101cfef0((InfoV *)pHit, 0x80, 1, (int)this, nMode);
    pVictim->vfunc21((int)pOwner);
    pOwner->vfunc24((int)pVictim);
    dmg.sub_101fa680();
}
// END FUNCTION

// FUNCTION: 0x10258320 size=0x82
#include "CBaseCombatWeapon.h"
#include "Vector.h"
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

// FUNCTION: 0x10258420 size=0x5
#include "CBaseCombatWeapon.h"
#include "CBaseEntity.h"

// TARGET: CBaseCombatWeapon::vfunc127
// the game's 0x10258420: a tail call (jmp) of CBaseEntity::vfunc127
int CBaseCombatWeapon::vfunc127(int a0)
{
	return ((CBaseEntity *)this)->CBaseEntity::vfunc127(a0);
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

// FUNCTION: 0x10258520 size=0x3
#include "CBaseCombatWeapon.h"
// TARGET: CBaseCombatWeapon::vfunc293
int CBaseCombatWeapon::vfunc293() { return 0; }
// END FUNCTION

// FUNCTION: 0x10258540 size=0x1
// TARGET: sub_10258540
void sub_10258540()
{
}
// END FUNCTION

// FUNCTION: 0x10258560 size=0xe
#include "CBaseCombatWeapon.h"
// TARGET: CBaseCombatWeapon::vfunc291
void CBaseCombatWeapon::vfunc291()
{
	vfunc307(0xc4);
}
// END FUNCTION
