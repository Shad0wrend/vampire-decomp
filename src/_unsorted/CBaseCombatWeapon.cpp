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
