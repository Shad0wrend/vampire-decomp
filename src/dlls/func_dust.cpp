// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 41 blocks
#include "vampire.h"

// FUNCTION: 0x10113680 size=0x6
#include "CFunc_Dust.h"
namespace lifted {
extern char g_10709dc8;
}
int CFunc_Dust::vfunc80()
{
    return (int)&lifted::g_10709dc8;
}
// END FUNCTION

// FUNCTION: 0x101136a0 size=0x3
#include "CFunc_Dust.h"
int CFunc_Dust::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101136c0 size=0xa
#include "SendTable.h"
SendTable g_10709dac;
// END FUNCTION

// FUNCTION: 0x10113740 size=0x5
int sub_10113780(void);
int g_10709da8 = ((int (*)(int))sub_10113780)(0);
// END FUNCTION

// FUNCTION: 0x10113780 size=0x244
#include "SendTable.h"
SendProp sub_10246af0(const char *, int, int, int, int, int, void *);
SendProp sub_10246510(const char *, int, int, int, int, float, float, void *);
SendProp sub_10246dc0(const char *, int, void *, void *);
void sub_10246300();
void sub_102464d0();
extern int g_106e816c;
extern SendTable g_10709dac;
extern const char *g_1056fabc;

// TARGET: sub_10113780
int sub_10113780()
{
	static SendProp props[] = {
		sub_10246af0("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_10246af0("m_Color.r", 0x450, 1, 8, 1, 0, 0),
		sub_10246af0("m_Color.g", 0x451, 1, 8, 1, 0, 0),
		sub_10246af0("m_Color.b", 0x452, 1, 8, 1, 0, 0),
		sub_10246af0("m_Color.a", 0x453, 1, 8, 1, 0, 0),
		sub_10246af0("m_SpawnRate", 0x454, 4, 0xc, 1, 0, 0),
		sub_10246af0("m_SpeedMax", 0x460, 4, 0xc, 1, 0, 0),
		sub_10246510("m_flSizeMin", 0x458, 4, 0, 4, 0.0f, -121121.121094f, (void *)sub_10246300),
		sub_10246510("m_flSizeMax", 0x45c, 4, 0, 4, 0.0f, -121121.121094f, (void *)sub_10246300),
		sub_10246af0("m_DistMax", 0x46c, 4, 0x10, 1, 0, 0),
		sub_10246af0("m_LifetimeMin", 0x464, 4, 4, 1, 0, 0),
		sub_10246af0("m_LifetimeMax", 0x468, 4, 4, 1, 0, 0),
		sub_10246af0("m_DustFlags", 0x474, 4, 3, 1, 0, 0),
		sub_10246af0("m_iszSpriteName", 0x470, 4, 0x20, 1, 0, 0),
		sub_10246af0("m_nModelIndex", 0x1a4, 4, 0xb, 0, 0, 0),
		sub_10246dc0("m_Collision", 0x270, &g_106e816c, (void *)sub_102464d0),
	};
	g_10709dac.sub_10247240(&props[1], 0xf, g_1056fabc);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10113aa0 size=0x6
#include "datamap.h"
#include "CFunc_Dust.h"
namespace lifted {
extern char g_1056fac0;
}
datamap_t *CFunc_Dust::vfunc82()
{
    return (datamap_t *)&lifted::g_1056fac0;
}
// END FUNCTION

// FUNCTION: 0x10113ac0 size=0x5
int sub_10113b00(void);
int g_1070a320 = ((int (*)(int))sub_10113b00)(0);
// END FUNCTION

// FUNCTION: 0x10113b00 size=0x1a
namespace lifted {
extern int g_1056fac0;
extern int g_1056fac4;
extern char g_1056fb04;
}
int sub_10113b00()
{
    lifted::g_1056fac4 = 0xc;
    lifted::g_1056fac0 = (int)&lifted::g_1056fb04;
    return (int)&lifted::g_1056fac0;
}
// END FUNCTION

// FUNCTION: 0x10113b30 size=0x43
#include "platform.h"
#include "CFunc_DustMotes.h"
void *sub_100aa720(int size);
extern char g_10570070[];

// TARGET: func_dustmotes
DLL_EXPORT CBaseEntity *func_dustmotes()
{
	void *mem = sub_100aa720(0x478);
	CFunc_DustMotes *p;
	if (mem)
		p = ((CFunc_DustMotes *)mem)->sub_10113c30();
	else
		p = 0;
	p->vfunc106(g_10570070);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10113ba0 size=0x49
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000de36(GP *);
extern int vt_1046004c;
extern char g_105700c8[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: func_dustcloud
DLL_EXPORT GP *func_dustcloud()
{
	GP *p = (GP *)sub_1000db89(0x478);
	if (p) {
		sub_1000de36(p);
		*(int **)p = &vt_1046004c;
	} else {
		p = 0;
	}
	p->name(g_105700c8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10113c10 size=0x8
#include "CBaseEntity.h"
#include "CFunc_Dust.h"
// TARGET: CFunc_Dust::vfunc117
char CFunc_Dust::vfunc117() { char c = ((CBaseEntity *)this)->CBaseEntity::vfunc117(); return c & (char)0xfd; }
// END FUNCTION

// FUNCTION: 0x10113c30 size=0x20
#include "CFunc_DustMotes.h"

void __fastcall sub_10113c90(void *self);
extern char g_104604dc[];

// TARGET: CFunc_DustMotes::sub_10113c30
CFunc_DustMotes *CFunc_DustMotes::sub_10113c30()
{
	sub_10113c90(this);
	*(void **)this = g_104604dc;
	*(unsigned int *)((char *)this + 0x474) |= 2;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10113c60 size=0x1e
#include "CFunc_DustMotes.h"

void sub_100aa7b0(void *p);

// TARGET: CFunc_DustMotes::vfunc5
CBaseEntity *CFunc_DustMotes::vfunc5(unsigned int flags)
{
	sub_10004fca();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10113c90 size=0x1e
#include "CFunc_Dust.h"

struct CBase100090fc
{
	void sub_100090fc(int a);
};

extern char g_1046096c[];

// TARGET: CFunc_Dust::sub_10113c90
CFunc_Dust *CFunc_Dust::sub_10113c90()
{
	((CBase100090fc *)this)->sub_100090fc(0);
	*(void **)this = g_1046096c;
	*(int *)((char *)this + 0x474) = 1;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10113cc0 size=0x1e
#include "CFunc_Dust.h"

void sub_100aa7b0(void *p);

// TARGET: CFunc_Dust::vfunc5
CFunc_Dust *CFunc_Dust::vfunc5(unsigned int flags)
{
	sub_10004fca();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10113cf0 size=0xb
namespace lifted {
extern char g_1046096c;
int sub_1000cb8a();
}
struct CUnknown10113cf0 { int sub_10113cf0(); };
int CUnknown10113cf0::sub_10113cf0()
{
    *(int *)this = (int)&lifted::g_1046096c;
    return lifted::sub_1000cb8a();
}
// END FUNCTION

// FUNCTION: 0x10113d10 size=0xf5
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CFunc_Dust.h"
#include "CUnknown101466e0.h"
#include "ScopeTrace.h"
#include <string.h>

struct CFuncDustFields
{
	char m_pad0000[0x1b0];
	CUnknown101466e0 m_b1b0;
	char m_b1b1;
	char m_pad01b2[0x26c - 0x1b2];
	const char *m_name26c;
	char m_pad0270[0x470 - 0x270];
	const char *m_isz470;
};

// TARGET: CFunc_Dust::vfunc103
void CFunc_Dust::vfunc103()
{
	CBaseEntity *pEnt = (CBaseEntity *)this;
	CFuncDustFields *pFields = (CFuncDustFields *)this;
	int local;
	const char *model = *pEnt->vfunc9(&local);
	pEnt->vfunc105(model ? model : g_106b8540);
	const char *isz = pFields->m_isz470 ? pFields->m_isz470 : g_106b8540;
	if (strlen(isz) == 0)
		pFields->m_isz470 = ("materials/particle/sparkles.vmt")[0] ? "materials/particle/sparkles.vmt" : 0;
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", pFields->m_name26c ? pFields->m_name26c : g_106b8540);
		CCollisionProperty *pCol = (CCollisionProperty *)((char *)this + 0x270);
		pCol->sub_100dc580(pCol->m_usSolidFlags | 0x20);
	}
	pFields->m_b1b0.sub_101466e0(1);
	pFields->m_b1b1 = 1;
	pEnt->CBaseEntity::vfunc103();
}
// END FUNCTION

// FUNCTION: 0x10113e50 size=0x5
#include "CFunc_Dust.h"
#include "CBaseEntity.h"

// TARGET: CFunc_Dust::vfunc113
// the game's 0x10113e50: a tail call (jmp) of CBaseEntity::vfunc113
void CFunc_Dust::vfunc113()
{
	((CBaseEntity *)this)->CBaseEntity::vfunc113();
}
// END FUNCTION

// FUNCTION: 0x10113e70 size=0xca
#include "CFunc_Dust.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl atoi(const char *);

bool CFunc_Dust::vfunc110(const char *szKeyName, const char *szValue)
{
	unsigned int *pFlags = (unsigned int *)((char *)this + 0x474);
	if (_strcmpi(szKeyName, "StartDisabled") == 0) {
		if (*szValue == '1')
			*pFlags &= ~1u;
		else
			*pFlags |= 1;
		return true;
	}
	if (_strcmpi(szKeyName, "Alpha") == 0) {
		*((unsigned char *)this + 0x453) = (unsigned char)atoi(szValue);
		return true;
	}
	if (_strcmpi(szKeyName, "Frozen") == 0) {
		if (*szValue == '1')
			*pFlags |= 4;
		else
			*pFlags &= ~4u;
		return true;
	}
	return sub_1009e430(szKeyName, szValue);
}
// END FUNCTION

// FUNCTION: 0x10113f80 size=0x1c
struct CUnk10113f80
{
	char m_pad0000[0x1b1];
	char m_bChanged1b1;	// 0x1b1
	char m_pad01b2[0x474 - 0x1b2];
	unsigned int m_n474;	// 0x474

	void sub_10113f80(int unused);
};

// TARGET: CUnk10113f80::sub_10113f80
void CUnk10113f80::sub_10113f80(int unused)
{
	unsigned int f = m_n474;
	if ((f & 1) == 0)
	{
		*(volatile unsigned int *)&m_n474 = f | 1;
		*(volatile char *)&m_bChanged1b1 = 1;
	}
}
// END FUNCTION

// FUNCTION: 0x10113fb0 size=0x1c
struct CUnk10113fb0
{
	char m_pad0000[0x1b1];
	char m_bChanged1b1;	// 0x1b1
	char m_pad01b2[0x474 - 0x1b2];
	unsigned int m_n474;	// 0x474

	void sub_10113fb0(int unused);
};

// TARGET: CUnk10113fb0::sub_10113fb0
void CUnk10113fb0::sub_10113fb0(int unused)
{
	unsigned int f = m_n474;
	if (f & 1)
	{
		*(volatile unsigned int *)&m_n474 = f & ~1;
		*(volatile char *)&m_bChanged1b1 = 1;
	}
}
// END FUNCTION

// FUNCTION: 0x10113fe0 size=0x38
#include "CTEDust.h"

// TARGET: CTEDust::CTEDust
CTEDust::CTEDust(const char *name) : CTEParticleSystem(name)
{
	m_fl0018 = 1.0f;
	m_fl001c = 1.0f;
	m_vec0020.Init(0.0f, 0.0f, 0.0f);
}
// END FUNCTION

// FUNCTION: 0x10114030 size=0x3
#include "CTEDust.h"
void CTEDust::vfunc3(const Vector &a0, const QAngle &a1)
{
}
// END FUNCTION

// FUNCTION: 0x10114050 size=0x1e
#include "CTEDust.h"

// TARGET: CTEDust::vfunc2
CBaseTempEntity *CTEDust::vfunc2(unsigned int flags)
{
	sub_100058d5();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10114080 size=0xb
namespace lifted {
extern char g_10460df8;
int sub_100021d0();
}
struct CUnknown10114080 { int sub_10114080(); };
int CUnknown10114080::sub_10114080()
{
    *(int *)this = (int)&lifted::g_10460df8;
    return lifted::sub_100021d0();
}
// END FUNCTION

// FUNCTION: 0x101140a0 size=0x39
#include "CTEDust.h"
#include "IVEngineServerFull.h"


void CTEDust::vfunc4(int a, int b)
{
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x101140f0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_1070a4d4;
extern char g_1056fd14[];
ServerClassReg g_1070a4f4("CTEDust", &g_1070a4d4, g_1056fd14);
// END FUNCTION

// FUNCTION: 0x10114160 size=0x6
#include "CTEDust.h"
namespace lifted {
extern char g_1070a4f4;
}
ServerClass * CTEDust::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_1070a4f4);
}
// END FUNCTION

// FUNCTION: 0x10114180 size=0x3
#include "CTEDust.h"
int CTEDust::vfunc1()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101141a0 size=0xa
#include "SendTable.h"
SendTable g_1070a4d4;
// END FUNCTION

// FUNCTION: 0x10114220 size=0x5
int sub_10114260(void);
int g_1070a4d0 = ((int (*)(int))sub_10114260)(0);
// END FUNCTION

// FUNCTION: 0x10114260 size=0xe5
#include "SendProp.h"

class SendTable
{
public:
	void sub_10247240(SendProp *pProps, int nProps, const char *pName);	// SendTable::Construct (stub 0x1000e8fe)
};

SendProp sub_10246af0(const char *name, int offset, int size, int bits, int flags, int extra, void *proxy);
SendProp sub_10246700(const char *name, int offset, int size, int bits, int flags, float low, float high, void *proxy);
SendProp sub_10246510(const char *name, int offset, int size, int bits, int flags, float low, float high, void *proxy);
SendProp sub_10246dc0(const char *name, int offset, int pTable, void *proxy);
void sub_10009539();
void sub_10006aeb();
void sub_10003012();
extern SendTable g_1070a4d4;
extern const char *g_1056fd20;
extern int g_1059cb88;

// TARGET: sub_10114260
int sub_10114260()
{
	static SendProp g_SendProps[] = {
		sub_10246af0("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_10246dc0("baseclass", 0, g_1059cb88, (void *)sub_10009539),
		sub_10246510("m_flSize", 0x18, 4, -1, 4, 0.0f, -121121.121121f, (void *)sub_10006aeb),
		sub_10246510("m_flSpeed", 0x1c, 4, -1, 4, 0.0f, -121121.121121f, (void *)sub_10006aeb),
		sub_10246700("m_vecDirection", 0x20, 12, 32, 4, 0.0f, -121121.121121f, (void *)sub_10003012),
	};
	g_1070a4d4.sub_10247240(g_SendProps + 1, 4, g_1056fd20);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x101143c0 size=0xa
#define PCD_INITIALIZERS
#include "CTEDust.h"
CTEDust g_1070a50c("Dust");
// END FUNCTION

// FUNCTION: 0x10114440 size=0x63
#include "CTEDust.h"
#include "Vector.h"
extern CTEDust g_1070a50c;
struct CTEView {
	char m_pad0000[0xc];
	Vector m_vecOrigin;	// 0x0c
	int m_n18;
	int m_n1c;
	Vector m_vecAngles;	// 0x20
};
void sub_10114440(int a, int b, const Vector *pOrigin, const Vector *pAngles, int c, int d)
{
	CTEView *p = (CTEView *)&g_1070a50c;
	p->m_vecOrigin = *pOrigin;
	p->m_vecAngles = *pAngles;
	p->m_n18 = c;
	p->m_n1c = d;
	g_1070a50c.vfunc4(a, b);
}
// END FUNCTION

// FUNCTION: 0x101144d0 size=0x4b
#include "platform.h"
#include "CConstraintAnchor.h"
#include "CBaseEntity.h"
void *sub_100aa720(unsigned int size);
extern char g_10460e1c[];	// CEnvDustPuff vftable
extern const char g_10570180[];

// TARGET: env_dustpuff
DLL_EXPORT CBaseEntity *env_dustpuff()
{
	void *mem = sub_100aa720(0x458);
	CBaseEntity *p;
	if (mem) {
		((CConstraintAnchorBase *)mem)->sub_1009d980(0);
		*(void **)mem = g_10460e1c;
		p = (CBaseEntity *)mem;
	} else {
		p = 0;
	}
	p->vfunc106(g_10570180);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10114540 size=0x6
#include "datamap.h"
#include "CEnvDustPuff.h"
namespace lifted {
extern char g_1056fd24;
}
datamap_t *CEnvDustPuff::vfunc82()
{
    return (datamap_t *)&lifted::g_1056fd24;
}
// END FUNCTION

// FUNCTION: 0x10114560 size=0x5
int sub_101145a0(void);
int g_1070a4cc = ((int (*)(int))sub_101145a0)(0);
// END FUNCTION

// FUNCTION: 0x101145a0 size=0x1a
namespace lifted {
extern int g_1056fd24;
extern int g_1056fd28;
extern char g_1056fd6c;
}
int sub_101145a0()
{
    lifted::g_1056fd28 = 3;
    lifted::g_1056fd24 = (int)&lifted::g_1056fd6c;
    return (int)&lifted::g_1056fd24;
}
// END FUNCTION

// FUNCTION: 0x101145d0 size=0x57
#include "CBaseCombatCharacter.h"

struct CSlotView {
	CBCC_SLOTS10(q0) CBCC_SLOTS10(q1) CBCC_SLOTS10(q2) CBCC_SLOTS10(q3) CBCC_SLOTS10(q4) CBCC_SLOTS10(q5) CBCC_SLOTS10(q6)
	CBCC_SLOTS10(q7) CBCC_SLOTS10(q8) CBCC_SLOTS10(q9) CBCC_SLOTS10(r0) CBCC_SLOTS10(r1) CBCC_SLOTS10(r2) CBCC_SLOTS10(r3)
	CBCC_SLOTS10(r4) CBCC_SLOTS10(r5) CBCC_SLOTS10(r6) CBCC_SLOTS10(r7) CBCC_SLOTS10(r8) CBCC_SLOTS10(r9) CBCC_SLOTS10(s0)
	virtual void t0(); virtual void t1(); virtual void t2(); virtual void t3(); virtual void t4(); virtual void t5(); virtual void t6();
	virtual const Vector &GetAbsOrigin();
	virtual void t8();
	virtual const float *GetAbsAngles();
	char m_pad[0x164 - 4];
	float m_flSpeed;
	char m_pad2[0x450 - 0x168];
	float m_flScale;
};

void __cdecl sub_10139610(const float *pAngles, float *pForward, float *pRight, float *pUp);
struct IEffectsView { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void Dust(const Vector &pos, const Vector &dir, float size, float speed); };
extern IEffectsView *g_10566258;

// TARGET: sub_101145d0
void __fastcall sub_101145d0(CBaseCombatCharacter *pThis, int unused, int a)
{
	CSlotView *p = (CSlotView *)pThis;
	Vector dir;
	sub_10139610(p->GetAbsAngles(), &dir.x, 0, 0);
	g_10566258->Dust(p->GetAbsOrigin(), dir, p->m_flScale, p->m_flSpeed);
}
// END FUNCTION

// FUNCTION: 0x10114650 size=0x1e
#include "CFunc_DustCloud.h"

void sub_100aa7b0(void *p);

// TARGET: CFunc_DustCloud::vfunc5
CFunc_DustCloud *CFunc_DustCloud::vfunc5(unsigned int flags)
{
	sub_10004fca();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10114680 size=0x1e
#include "CEnvDustPuff.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvDustPuff::vfunc5
CBaseEntity *CEnvDustPuff::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
