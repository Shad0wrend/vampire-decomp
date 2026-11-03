// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103ee1d0 size=0x6
#include "CWeaponThrown_Grenade_Frag.h"
#include "datamap.h"
namespace lifted {
extern char g_1067caec;
}
datamap_t *CWeaponThrown_Grenade_Frag::vfunc82()
{
    return (datamap_t *)&lifted::g_1067caec;
}
// END FUNCTION

// FUNCTION: 0x103ee260 size=0x2c
#define S10(b) virtual void s##b##0(); virtual void s##b##1(); virtual void s##b##2(); virtual void s##b##3(); virtual void s##b##4(); virtual void s##b##5(); virtual void s##b##6(); virtual void s##b##7(); virtual void s##b##8(); virtual void s##b##9();

struct CGrenadeUnit103ee260 {
    S10(0) S10(1) S10(2) S10(3) S10(4) S10(5) S10(6) S10(7) S10(8) S10(9)
    S10(10) S10(11) S10(12) S10(13) S10(14) S10(15) S10(16) S10(17) S10(18) S10(19)
    S10(20) S10(21) S10(22) S10(23) S10(24) S10(25) S10(26) S10(27) S10(28) S10(29)
    virtual void s300();
    virtual void s301();
    virtual void s302();
    virtual void s303();
    virtual void s304();
    virtual void s305();
    char pad[0x928 - 4];
    float m_f928;
    int m_i92c;
    char pad930;
    char m_b931;
    void sub_100047be();
    void sub_103ee260();
};

// TARGET: sub_103ee260
void CGrenadeUnit103ee260::sub_103ee260()
{
    sub_100047be();
    s305();
    m_f928 = 512.0f;
    m_i92c = 0;
    m_b931 = 0;
}
// END FUNCTION

// FUNCTION: 0x103ee2a0 size=0x52
#include "CWeaponThrown_Grenade_Frag.h"
#include "engineserver.h"
#include "engineiface.h"
void CWeaponThrown_Grenade_Frag::vfunc104()
{
	engine->vfunc17("grenade_frag_emitter", 1);
	engine->vfunc17("grenade_concussion_emitter", 1);
	engine->vfunc17("grenade_smoke_emitter", 1);
	enginesound->vfunc0("weapons/ranged/grenade_pineapple/tic.wav", 0);
	sub_10250ed0();
}
// END FUNCTION

// FUNCTION: 0x103ee410 size=0x47
#include "CWeaponThrown_Grenade_Frag.h"

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)

struct CGrenadeOwnerView
{
	S100(a)
	S10(b0)
	virtual void b10(); virtual void b11();
	virtual void vfunc112(int a, int b);
	S100(c)
	S100(d)
	S10(f0) S10(f1) S10(f2) S10(f3) S10(f4) S10(f5) S10(f6) S10(f7) S10(f8)
	virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4();
	virtual void g5(); virtual void g6();
	virtual void vfunc410();
};

// TARGET: CWeaponThrown_Grenade_Frag::vfunc319
void CWeaponThrown_Grenade_Frag::vfunc319()
{
	char *pEntity = (char *)sub_102521f0();
	if (pEntity) {
		CGrenadeOwnerView *p = *(CGrenadeOwnerView **)(pEntity + 0xa8);
		if (p) {
			p->vfunc112(0, *(int *)((char *)this + 0x92c));
			if (*(int *)((char *)this + 0x920))
				p->vfunc410();
		}
	}
	sub_103ed1e0();
}
// END FUNCTION

// FUNCTION: 0x103ee4f0 size=0xf
#include "CWeaponThrown_Grenade_Frag.h"
namespace lifted {
int sub_10007cf2();
}
int CWeaponThrown_Grenade_Frag::vfunc315()
{
    *(int *)((char *)this + 0x920) = 0;
    return lifted::sub_10007cf2();
}
// END FUNCTION

// FUNCTION: 0x103ee510 size=0xdb
#include "CWeaponThrown_Grenade_Frag.h"
#include "CBaseEntity.h"
void sub_1000dcd8();

#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)

struct SSlots
{
	V100(a) V100(b) V100(c)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6();
	virtual void s307(int a);
	virtual void d8(); virtual void d9();
	V100(e)
	V10(f0) V10(f1) V10(f2)
	virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4();
	virtual void g5(); virtual void g6(); virtual void g7(); virtual void g8();
	virtual void s449(int a, int b);
};

// TARGET: CWeaponThrown_Grenade_Frag::vfunc326
void CWeaponThrown_Grenade_Frag::vfunc326()
{
	char *self = (char *)this;
	if (sub_103ee8f0()) {
		*(char *)(self + 0x930) = 0;
		*(float *)(self + 0x924) = gpGlobals->curtime;
		*(int *)(self + 0x920) = 1;
		char *owner = (char *)sub_102521f0();
		if (owner) {
			SSlots *sub = *(SSlots **)(owner + 0xa8);
			if (sub)
				sub->s449(5, 0);
		}
		*(float *)(self + 0x91c) = gpGlobals->curtime + 3.3f;
		((SSlots *)this)->s307(0xb8);
		return;
	}
	if (*(int *)(self + 0x920) == 1 && (*(float *)((int)self + 0x924) + 0.3f) < gpGlobals->curtime) {
		*(int *)(self + 0x920) = 3;
		*(float *)(self + 0x91c) = 3.0f + gpGlobals->curtime;
		((CBaseEntity *)this)->sub_100ac4e0((int)sub_1000dcd8, 0, 0);
		*(float *)((int)self + 0x17c) = gpGlobals->curtime + 1.0f;
	}
}
// END FUNCTION

// FUNCTION: 0x103ee630 size=0x1e
#define P10(x) virtual void x##0(); virtual void x##1(); virtual void x##2(); virtual void x##3(); virtual void x##4(); virtual void x##5(); virtual void x##6(); virtual void x##7(); virtual void x##8(); virtual void x##9();

// Local view of the vtable: slot 374 is the virtual call; the other slots are placeholders.
struct CUnkGrenade103ee630 {
	P10(p0) P10(p1) P10(p2) P10(p3) P10(p4) P10(p5) P10(p6) P10(p7) P10(p8) P10(p9)
	P10(p10) P10(p11) P10(p12) P10(p13) P10(p14) P10(p15) P10(p16) P10(p17) P10(p18) P10(p19)
	P10(p20) P10(p21) P10(p22) P10(p23) P10(p24) P10(p25) P10(p26) P10(p27) P10(p28) P10(p29)
	P10(p30) P10(p31) P10(p32) P10(p33) P10(p34) P10(p35) P10(p36)
	virtual void p370(); virtual void p371(); virtual void p372(); virtual void p373();
	virtual void vfunc374();
	char m_pad0004[0x918 - 4];
	unsigned char m_b918;
};

// TARGET: sub_103ee630
void __fastcall sub_103ee630(CUnkGrenade103ee630 *pThis)
{
	if (pThis->m_b918)
	{
		pThis->vfunc374();
		pThis->m_b918 = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x103ee990 size=0xb4
#include "vampire_all.h"
#include "CWeaponThrown_Grenade_Frag.h"
#include "CBaseEntity.h"

struct CGrenadeStateX
{
	char m_pad0000[0x17c];
	float m_flNextThink;
	char m_pad0180[0x86c - 0x180];
	int m_n86c;
	char m_pad0870[0x920 - 0x870];
	int m_nState;
	float m_flTime;
	char m_pad0928[0x930 - 0x928];
	char m_bDone;
};

struct CGrenadeCharX
{
	void sub_1015fbb0(int nSound, int a);
};

struct CGrenadeOwnerEntX
{
	char m_pad0000[0xa8];
	CGrenadeCharX *m_pChar;
};

struct CWeaponUnit
{
	void sub_103ed920();
};


void sub_1000d62f();

// TARGET: CWeaponThrown_Grenade_Frag::vfunc265
void CWeaponThrown_Grenade_Frag::vfunc265()
{
	CGrenadeStateX *p = (CGrenadeStateX *)this;
	if (!p->m_bDone) {
		if (p->m_nState == 3 && p->m_flTime + 0.3f < gpGlobals->curtime) {
			p->m_nState = 5;
			((CWeaponUnit *)this)->sub_103ed920();
			CGrenadeOwnerEntX *pOwner = (CGrenadeOwnerEntX *)sub_102521f0();
			if (pOwner && pOwner->m_pChar) {
				if (p->m_n86c == 0)
					pOwner->m_pChar->sub_1015fbb0(0xef9, 1);
				else
					pOwner->m_pChar->sub_1015fbb0(0xefb, 1);
			}
		} else if (p->m_nState == 1) {
			p->m_nState = 3;
			p->m_flNextThink = p->m_flTime + 0.3f;
			((CBaseEntity *)this)->sub_100ac4e0((int)sub_1000d62f, 0, 0);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x103eea80 size=0x8
#include "CWeaponThrown_Grenade_Frag.h"
void CWeaponThrown_Grenade_Frag::vfunc266()
{
	m_bFlag918 = true;
}
// END FUNCTION

// FUNCTION: 0x103eec10 size=0x38
#include "CWeaponThrown_Grenade_Frag.h"

void sub_1000dcd8();

// TARGET: CWeaponThrown_Grenade_Frag::vfunc373
void CWeaponThrown_Grenade_Frag::vfunc373(int unused)
{
    sub_100ac4e0((void *)sub_1000dcd8, 0, 0);
    *(int *)&m_flTimer91c = *(int *)&gpGlobals->curtime;
    m_flNextThink17c = gpGlobals->curtime + 0.01;
}
// END FUNCTION

// FUNCTION: 0x103eec80 size=0x20
#include "CBaseEntity.h"
#include "CWeaponThrown_Grenade_Frag.h"

// TARGET: CWeaponThrown_Grenade_Frag::vfunc35
int CWeaponThrown_Grenade_Frag::vfunc35(CBaseEntity *pOther)
{
	if (!m_b931) {
		if (sub_102521f0() == 0)
			return 0x49;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x103eecb0 size=0x20
#include "CBaseEntity.h"
#include "CWeaponThrown_Grenade_Frag.h"

int CWeaponThrown_Grenade_Frag::vfunc34(CBaseEntity *pOther)
{
	if (m_b931 == 0) {
		if (sub_102521f0() == 0)
			return 5;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x103eece0 size=0x2c
struct CGrenadeUnit103eece0 {
    char pad[0x931];
    char m_b931;
    unsigned char sub_10015933();
    void *sub_102521f0();
    unsigned char sub_103eece0();
};

// TARGET: sub_103eece0
unsigned char CGrenadeUnit103eece0::sub_103eece0()
{
    unsigned char r;
    if (m_b931 == 0) {
        if (sub_102521f0() == 0) {
            return sub_10015933() | 8;
        }
    }
    r = sub_10015933();
    r &= 0xc7;
    return r;
}
// END FUNCTION

// FUNCTION: 0x103eed20 size=0xf6
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CWeaponThrown_Grenade_Frag.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"

#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)
#define PV100(p) PV10(p##0) PV10(p##1) PV10(p##2) PV10(p##3) PV10(p##4) PV10(p##5) PV10(p##6) PV10(p##7) PV10(p##8) PV10(p##9)

struct CPhysObjX
{
	PV(0) PV(1) PV(2) PV(3) PV(4) PV(5) PV(6) PV(7) PV(8) PV(9)
	PV10(1) PV10(2) PV10(3)
	PV(40)
	virtual void vfunc41(const float *pVelocity, const float *pAngVelocity);
};

struct CGrenadeSlotsX
{
	PV(0) PV(1) PV(2) PV(3) PV(4) PV(5) PV(6) PV(7) PV(8) PV(9)
	PV10(1) PV10(2) PV10(3) PV10(4) PV10(5) PV10(6) PV10(7) PV10(8) PV10(9)
	PV100(1) PV100(2)
	PV10(30) PV10(31) PV10(32) PV10(33) PV10(34)
	PV(350) PV(351) PV(352) PV(353) PV(354) PV(355) PV(356) PV(357) PV(358)
	virtual void vfunc359();
};

struct CGrenadeThisX
{
	char m_pad0000[0x11c];
	const char *m_classname;
	char m_pad0120[0x91c - 0x120];
	float m_flTimer;
	char m_pad0920[0x930 - 0x920];
	char m_bNoThrow;
};
struct CGrenadeProjX
{
	char m_pad0000[0x17c];
	float m_flNextThink;
	char m_pad0180[0x931 - 0x180];
	char m_b931;
};
extern float g_1070d9d0[];
extern void (__cdecl *g_109f3628)(const char *fmt);
CBaseEntity *sub_100a99d0(const char *classname, const float *origin, const float *angles, CBaseEntity *owner);
void sub_1000c568();

// TARGET: CWeaponThrown_Grenade_Frag::vfunc372
CBaseEntity *CWeaponThrown_Grenade_Frag::vfunc372(Vector vecOrigin, Vector vecAngles, Vector vecVelocity, Vector angVelocity)
{
	CGrenadeThisX *pThis = (CGrenadeThisX *)this;
	CBaseEntity *pGrenade = sub_100a99d0(pThis->m_classname ? pThis->m_classname : g_106b8540, &vecOrigin.x, g_1070d9d0, 0);
	if (pGrenade) {
		CGrenadeProjX *pProj = (CGrenadeProjX *)pGrenade;
		pGrenade->m_nTakeDamage = 2;
		pProj->m_b931 = 1;
		pGrenade->m_iHealth = 1;
		CPhysObjX *pPhys = (CPhysObjX *)pGrenade->m_obj36c;
		pGrenade->m_pfnTouch = 0;
		if (!pPhys) {
			pPhys = (CPhysObjX *)pGrenade->sub_100a5ea0(2, 0, 0, 0);
			if (!pPhys) {
				g_109f3628("No physics data for grenade\n");
				((CGrenadeSlotsX *)pGrenade)->vfunc359();
				return 0;
			}
		}
		if (!pThis->m_bNoThrow)
			pPhys->vfunc41(&vecVelocity.x, &angVelocity.x);
		pGrenade->sub_100ac4e0((int)sub_1000c568, 0, 0);
		if (pThis->m_flTimer < gpGlobals->curtime)
			pThis->m_flTimer = gpGlobals->curtime;
		pProj->m_flNextThink = pThis->m_flTimer + 0.01f;
	}
	return pGrenade;
}
// END FUNCTION

// FUNCTION: 0x103eee80 size=0x2a
#include "CWeaponThrown_Grenade_Frag.h"
#include "CBaseEntity.h"


// TARGET: CWeaponThrown_Grenade_Frag::vfunc376
int CWeaponThrown_Grenade_Frag::vfunc376(int a)
{
    if (*(int *)((char *)this + 0x1fc) == 2) {
        *(float *)((char *)this + 0x17c) = gpGlobals->curtime + 0.1f;
        return 1;
    }
    return ((CBaseEntity *)this)->sub_100a1250((const void *)a);
}
// END FUNCTION

// FUNCTION: 0x103eef70 size=0x6
#include "CWeaponThrown_Grenade_Frag.h"
namespace lifted {
extern char g_10942e0c;
}
int CWeaponThrown_Grenade_Frag::vfunc80()
{
    return (int)&lifted::g_10942e0c;
}
// END FUNCTION

// FUNCTION: 0x103eef90 size=0x3
#include "CWeaponThrown_Grenade_Frag.h"
int CWeaponThrown_Grenade_Frag::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103ef510 size=0x6
#include "CWeaponThrown_Grenade_Frag.h"
namespace lifted {
extern char g_1067ccd0;
}
int CWeaponThrown_Grenade_Frag::vfunc362()
{
    return (int)&lifted::g_1067ccd0;
}
// END FUNCTION

// FUNCTION: 0x103ef530 size=0x6
#include "CWeaponThrown_Grenade_Frag.h"
int CWeaponThrown_Grenade_Frag::vfunc363()
{
    return 0x73;
}
// END FUNCTION

// FUNCTION: 0x103ef5c0 size=0x6
#include "CWeaponThrown_Grenade_Frag.h"
int CWeaponThrown_Grenade_Frag::vfunc290()
{
    return 2;
}
// END FUNCTION

// FUNCTION: 0x103f13b0 size=0x1e
#include "CWeaponThrown_Grenade_Frag.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponThrown_Grenade_Frag::vfunc5
CWeaponThrown_Grenade_Frag *CWeaponThrown_Grenade_Frag::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
