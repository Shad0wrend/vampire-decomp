// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1037e4f0 size=0x6
#include "datamap.h"
#include "CNPC_VHengeyokai.h"
namespace lifted {
extern char g_1063bdb0;
}
datamap_t *CNPC_VHengeyokai::vfunc82()
{
    return (datamap_t *)&lifted::g_1063bdb0;
}
// END FUNCTION

// FUNCTION: 0x1037e7f0 size=0x3
#include "CNPC_VHengeyokai.h"
bool CNPC_VHengeyokai::vfunc615()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1037e810 size=0x5
#include "CNPC_VHengeyokai.h"
bool CNPC_VHengeyokai::vfunc378(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1037e830 size=0x6
#include "CNPC_VHengeyokai.h"
namespace lifted {
extern char g_1093b328;
}
int CNPC_VHengeyokai::vfunc580()
{
    return (int)&lifted::g_1093b328;
}
// END FUNCTION

// FUNCTION: 0x1037e850 size=0x6
#include "CNPC_VHengeyokai.h"
namespace lifted {
extern int g_1063c038;
}
int CNPC_VHengeyokai::vfunc451()
{
    return lifted::g_1063c038;
}
// END FUNCTION

// FUNCTION: 0x1037e870 size=0x86
#include "CNPC_VHengeyokai.h"
#include "utlvector.h"

void sub_100aa7b0(void *pEntity);

CNPC_VHengeyokai *CNPC_VHengeyokai::vfunc5(unsigned int flags)
{
	((CUtlVector<CNPC_VHengeyokaiTimer> *)&m_Timers)->~CUtlVector<CNPC_VHengeyokaiTimer>();
	sub_1028d610();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1037ea00 size=0x6
extern unsigned char g_1063c030;
// TARGET: sub_1037ea00
unsigned char sub_1037ea00()
{
    return g_1063c030;
}
// END FUNCTION

// FUNCTION: 0x1037ea60 size=0x1d
#include "CNPC_VHengeyokai.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093b27c;
extern B g_10936c74;
int CNPC_VHengeyokai::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093b27c.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x1037f960 size=0x73
#include "CNPC_VHengeyokai.h"

struct EngPrecache {
	virtual void v0(const char *name, int a);
};

extern EngPrecache *g_1070b248;
extern const char *g_1063bd94[4];
extern const char *g_1063bda4[3];
void sub_101d0ec0(const char *name);

void CNPC_VHengeyokai::vfunc104()
{
	sub_100013f7();
	for (unsigned i = 0; i < 4; i++)
		g_1070b248->v0(g_1063bd94[i], 0);
	for (unsigned j = 0; j < 3; j++)
		g_1070b248->v0(g_1063bda4[j], 0);
	engine->vfunc13("models/character/monster/Hengeyokai/hengeyokai.mdl", 0);
	engine->vfunc17("Hengeyokai_freeze_emitter", 0);
	sub_101d0ec0("item_w_hengeyokai_fist");
}
// END FUNCTION

// FUNCTION: 0x1037fa00 size=0x46
#include "CBaseEntity.h"
#include "CNPC_VHengeyokai.h"
void CNPC_VHengeyokai::vfunc103()
{
	CBaseEntity *pEnt = (CBaseEntity *)this;
	sub_10014876();
	Vector vecExtents(50.0f, 50.0f, 100.0f);
	pEnt->sub_1009b060(vecExtents);
	pEnt->sub_100b3900(4);
	pEnt->sub_100b3840(0x20);
}
// END FUNCTION

// FUNCTION: 0x1037fa70 size=0x4d
#include "CNPC_VHengeyokai.h"
#include "globalvars.h"

extern int g_109340d8;

// TARGET: CNPC_VHengeyokai::vfunc420
void CNPC_VHengeyokai::vfunc420()
{
	sub_1029a0b0();
	*(int volatile *)((char *)this + 0x6680) = 0;
	*(unsigned int volatile *)((char *)this + 0x6664) = 0xffffffff;
	*(int *)((char *)this + 0x6678) = 0;
	*(char *)((char *)this + 0x667c) = 0;
	float t = gpGlobals->curtime + 3.0f;
	*(char *)((char *)this + 0x6694) = 0;
	*(float *)((char *)this + 0x6670) = t;
	g_109340d8 = 0x12;
}
// END FUNCTION

// FUNCTION: 0x1037fae0 size=0x6
#include "CNPC_VHengeyokai.h"
int CNPC_VHengeyokai::vfunc473()
{
    return 0x17;
}
// END FUNCTION

// FUNCTION: 0x1037fb00 size=0x6
#include "CNPC_VHengeyokai.h"
int CNPC_VHengeyokai::vfunc138()
{
    return 0x1d;
}
// END FUNCTION

// FUNCTION: 0x1037fb20 size=0x6
#include "CNPC_VHengeyokai.h"
int CNPC_VHengeyokai::vfunc337()
{
    return 0x40001;
}
// END FUNCTION

// FUNCTION: 0x1037fb40 size=0x5
#include "CNPC_VHengeyokai.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VHengeyokai::vfunc463
// the game's 0x1037fb40: a tail call (jmp) of CNPC_VHuman::vfunc463
void CNPC_VHengeyokai::vfunc463(int a0, int a1)
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc463(a0, a1);
}
// END FUNCTION

// FUNCTION: 0x1037fb60 size=0xf3
#include "CNPC_VHengeyokai.h"
#include "CEHandleGet.h"

#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)
struct HengeSlots {
	SV100(0)
	SV10(10) SV10(11) SV10(12) SV10(13) SV10(14) SV10(15)
	SV(160) SV(161) SV(162) SV(163) SV(164) SV(165) SV(166)
	virtual void *s167();
	SV(168) SV(169)
	SV10(17) SV10(18) SV10(19) SV10(20) SV10(21)
	virtual float *s220();
	SV(221) SV(222) SV(223) SV(224) SV(225) SV(226) SV(227) SV(228) SV(229)
	SV10(23) SV10(24) SV10(25) SV10(26) SV10(27) SV10(28) SV10(29)
	SV100(3) SV100(4) SV100(5)
	SV10(60) SV(610) SV(611) SV(612) SV(613) SV(614) SV(615) SV(616)
	virtual void s617();
};

char __fastcall sub_10381c80(char *pNPC);
extern const char *g_1063bd88[];
void sub_101cdba0(float *pOrigin, float a, float b, float c, float d, int e, int f);

void CNPC_VHengeyokai::vfunc259(CNPC_VHengeyokaiEvent *pEvent)
{
	switch (pEvent->m_type) {
	case 0x7f8:
		if (!sub_10381c80((char *)this))
			sub_10382670(EHandle_Get(m_h6664), g_1063bd88[m_n6668]);
		break;
	case 0x802:
	case 0x803:
		if (m_b6694) {
			sub_101cdba0(((HengeSlots *)this)->s220(), 2.0f, 0.2f, 0.2f, 1024.0f, 0, 0);
			((HengeSlots *)this)->s617();
		}
		break;
	case 0xbbd:
		if (sub_10381c80((char *)this))
			sub_10382400(((HengeSlots *)this)->s167());
		break;
	default:
		sub_100076bc(pEvent);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x1037fca0 size=0x25c
#include "CBaseEntity.h"
#include "CUnknown10381be0.h"
#include "CNPC_VHengeyokai.h"
#include "CEntityVSlots.h"
#include "engineiface.h"

char __fastcall sub_10381c80(CNPC_VHengeyokai *pNPC);
char __fastcall sub_10381ca0(CNPC_VHengeyokai *pNPC);

int CNPC_VHengeyokai::vfunc438()
{
	CEntityVSlots *pSlots = (CEntityVSlots *)this;
	m_n1b2c = 0x13;
	switch (m_n5cc0) {
	case 2:
		m_b5b80 = 0;
		if (sub_10269aa0(0x58) && sub_10381c80(this))
			return 0x15e;
		if (((CUnknown10381be0 *)this)->sub_10381be0()) {
			sub_10381ba0(0);
			if (sub_10269d30(0x51)) {
				m_h6664 = 0xffffffff;
				sub_102c43b0(0.0f);
				return sub_10382f60();
			}
			if (!sub_10269d30(0x5f) && !sub_10269d30(8)) {
				int r = sub_10382d40();
				if (r)
					return r;
				m_h6664 = 0xffffffff;
				sub_102c43b0(0.0f);
				return 0x15f;
			}
			m_h6664 = 0xffffffff;
			sub_102c43b0(0.0f);
			return sub_10382f60();
		}
		if (sub_10381c80(this)) {
			if (sub_10381ca0(this) && !pSlots->slot530((CEntityVSlots *)pSlots->slot167()))
				return 0x161;
			if (!sub_10269aa0(0x48) && sub_10269aa0(0x46)) {
				if (sub_10269aa0(0x5f) || sub_10269aa0(8))
					return 0x15e;
				if (sub_10269aa0(0x1b)) {
					if (!m_b667d && enginerandom->vfunc2(0, 99) < 5) {
						m_b667d = 1;
						return 0x162 + (sub_103822a0((CBaseEntity *)pSlots->slot167()) ? 2 : 0);
					}
					return 0x160 + (sub_103822a0((CBaseEntity *)pSlots->slot167()) ? 3 : 0);
				}
			}
			return 0x166;
		}
		m_flags14b8 &= ~8;
		{
			int r2 = sub_10382d40();
			if (r2)
				return r2;
		}
		if (pSlots->slot530((CEntityVSlots *)pSlots->slot167()))
			return 0x167;
		if (sub_10269aa0(0x48))
			return 0x165;
		if (sub_10269aa0(9))
			return 0x165 + (sub_10269aa0(0x46) ? 4 : 0);
		break;
	case 5:
		return 0x16f;
	}
	return sub_10384ee0();
}
// END FUNCTION

// FUNCTION: 0x1037ffa0 size=0x110
#include "CNPC_VHengeyokai.h"

// TARGET: CNPC_VHengeyokai::vfunc440
int CNPC_VHengeyokai::vfunc440(int task)
{
	if (task != 0x16e && m_n670 == 1)
		sub_10383130();
	switch (task)
	{
	case 0x5b:
		return 0x15a;
	case 0xea:
		return 0x15b;
	case 0xdc:
		return 0x15c;
	case 0xdd:
		return 0x15d;
	}
	return sub_103851c0(task);
}
// END FUNCTION

// FUNCTION: 0x10380100 size=0xf
#include "CNPC_VHengeyokai.h"
namespace lifted {
int sub_10011225();
}
int CNPC_VHengeyokai::vfunc461()
{
    *(int *)((char *)this + 0x1b38) = 0x13;
    return lifted::sub_10011225();
}
// END FUNCTION

// FUNCTION: 0x10380120 size=0x6f
#include "CNPC_VHengeyokai.h"
#include "ConVar.h"

struct S_Heng : CNPC_VHengeyokai { void sub_103816e0(void *p); };
extern ConVar g_1093b2e0;

void CNPC_VHengeyokai::vfunc432(int a)
{
	int state;
	void *p = sub_10380fc0(&state);
	if (p) {
		switch (state) {
		case 0:
			goto other;
		case 1:
			((S_Heng *)this)->sub_103816e0(p);
			break;
		default:
		other:
			sub_10381460(p);
			break;
		}
	}
	sub_10385a10(a);
	if (g_1093b2e0.GetBool()) {
		sub_103830e0();
		g_1093b2e0.sub_10246160(0);
	}
}
// END FUNCTION

// FUNCTION: 0x103801b0 size=0x5
#include "CNPC_VHengeyokai.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VHengeyokai::vfunc434
// the game's 0x103801b0: a tail call (jmp) of CNPC_VHuman::vfunc434
void CNPC_VHengeyokai::vfunc434()
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc434();
}
// END FUNCTION

// FUNCTION: 0x103801d0 size=0x9a
#include "CNPC_VHengeyokai.h"
extern "C" unsigned int __cdecl strlen(const char *);
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl _strnicmp(const char *, const char *, unsigned int);
extern char g_106b8540[];
#pragma intrinsic(strlen)

static inline bool ClassMatchesComplex(CNPC_VHengeyokaiEnt *pEnt, const char *pszClassOrWildcard)
{
	unsigned int len = strlen(pszClassOrWildcard);
	if (len == 0)
		return pEnt->m_iName == 0;
	if (pszClassOrWildcard[len - 1] != '*') {
		const char *pszClass = pEnt->m_iClassname;
		return _strcmpi(pszClass ? pszClass : g_106b8540, pszClassOrWildcard) == 0;
	}
	const char *pszClass = pEnt->m_iClassname;
	return _strnicmp(pszClass ? pszClass : g_106b8540, pszClassOrWildcard, len - 1) == 0;
}

static inline bool ClassMatches(CNPC_VHengeyokaiEnt *pEnt, const char *pszClassOrWildcard)
{
	const char *pszClass = pEnt->m_iClassname;
	if (pszClass && pszClass == pszClassOrWildcard)
		return true;
	return ClassMatchesComplex(pEnt, pszClassOrWildcard);
}

int CNPC_VHengeyokai::sub_103801d0(CNPC_VHengeyokaiInfo *pInfo)
{
	int result = sub_10001b45(pInfo);
	if (ClassMatches(pInfo->m_pEnt, "point_explosion"))
		sub_103830e0();
	return result;
}
// END FUNCTION

// FUNCTION: 0x103802a0 size=0x5c
#include "CVDmg_t.h"
#include "CNPC_VHengeyokai.h"

struct CGargoyleDmgInfo
{
	CVDmg_t *m_pDmg;	// 0x0
	char m_pad04[0x30 - 4];
	float m_flDamage;	// 0x30
	char m_pad34[4];
	unsigned int m_nFlags;	// 0x38
};

// TARGET: CNPC_VHengeyokai::vfunc292
void CNPC_VHengeyokai::vfunc292(CGargoyleDmgInfo *pInfo, int b, int c)
{
	unsigned int flags;
	if (pInfo->m_pDmg)
		flags = pInfo->m_pDmg->m_field10 | pInfo->m_nFlags;
	else
		flags = pInfo->m_nFlags;
	if (!(flags & 0x4000002)) {
		float dmg;
		if (pInfo->m_pDmg)
			dmg = (float)pInfo->m_pDmg->sub_101faa70();
		else
			dmg = pInfo->m_flDamage;
		if (dmg != 0.0f)
			sub_10015843(pInfo, b, c);
	}
}
// END FUNCTION

// FUNCTION: 0x10380320 size=0x34
// TARGET: CNPC_VHengeyokai::vfunc320
#include "CNPC_VHengeyokai.h"
#include "CAI_BaseNPCTroika.h"

struct CRandomStreamView
{
	virtual int vf0();
	virtual int vf1();
	virtual int vf2(int lo, int hi);
};

extern CRandomStreamView *g_1070b244;

char CNPC_VHengeyokai::vfunc320(int a, int b)
{
	if (g_1070b244->vf2(1, 100) <= 50) {
		((CAI_BaseNPCTroika *)this)->vfunc320(a, b);
		return 1;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10380370 size=0x5
#include "CNPC_VHengeyokai.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VHengeyokai::vfunc366
// the game's 0x10380370: a tail call (jmp) of CNPC_VHuman::vfunc366
bool CNPC_VHengeyokai::vfunc366(int a0, int a1, int a2)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc366(a0, a1, a2);
}
// END FUNCTION

// FUNCTION: 0x10380390 size=0x23
#include "CNPC_VHengeyokai.h"
#include "CNPC_VVampire.h"

struct CNPC_VHengeyokaiCalls {
	char sub_10381c80();
	void sub_103828a0();
};

// TARGET: CNPC_VHengeyokai::vfunc144
void CNPC_VHengeyokai::vfunc144(int info)
{
	if (((CNPC_VHengeyokaiCalls *)this)->sub_10381c80()) {
		((CNPC_VHengeyokaiCalls *)this)->sub_103828a0();
	}
	((CNPC_VVampire *)this)->vfunc144(info);
}
// END FUNCTION

// FUNCTION: 0x103803d0 size=0x72
#include "CNPC_VHengeyokai.h"

unsigned char __fastcall sub_10381c80(char *pNPC);

#define SLOT_V(n) virtual void a##n();
#define SLOT_V10(p) SLOT_V(p##0) SLOT_V(p##1) SLOT_V(p##2) SLOT_V(p##3) SLOT_V(p##4) SLOT_V(p##5) SLOT_V(p##6) SLOT_V(p##7) SLOT_V(p##8) SLOT_V(p##9)

struct CHengeyokaiSlots
{
	SLOT_V10(0) SLOT_V10(1) SLOT_V10(2) SLOT_V10(3) SLOT_V10(4) SLOT_V10(5) SLOT_V10(6) SLOT_V10(7)
	SLOT_V10(8) SLOT_V10(9) SLOT_V10(10) SLOT_V10(11) SLOT_V10(12) SLOT_V10(13) SLOT_V10(14) SLOT_V10(15)
	SLOT_V(160) SLOT_V(161) SLOT_V(162) SLOT_V(163) SLOT_V(164) SLOT_V(165) SLOT_V(166)
	virtual void *vfunc167();
};

struct CGlobal10924a6c
{
	virtual void a0();
	virtual void vfunc1();
};

extern CGlobal10924a6c *g_10924a6c;

void CNPC_VHengeyokai::vfunc433()
{
    sub_102b27f0();
    sub_10015839(0xf);
    sub_10015839(0xc);
    sub_10015839(0xd);
    if (sub_10381c80((char *)this) && sub_10269aa0(0x4a) && sub_10382020(((CHengeyokaiSlots *)this)->vfunc167())) {
        g_10924a6c->vfunc1();
        sub_10269a20(0x1b);
    } else {
        sub_10015839(0x1b);
    }
}
// END FUNCTION

// FUNCTION: 0x10380510 size=0x82
#include "CNPC_VHengeyokai.h"
#include "CUnknown10381be0.h"
#include "CUnknown10382970.h"

unsigned char __fastcall sub_10381c80(char *pNpc);

// TARGET: CNPC_VHengeyokai::vfunc448
void CNPC_VHengeyokai::vfunc448(int a)
{
	if (m_n5cc0 == 2 && sub_10269d30(0x5c))
		m_flags5d8c &= 0x7fffffff;
	if (((CUnknown10381be0 *)this)->sub_10381be0()) {
		((CUnknown10382970 *)this)->sub_10382970(CBaseHandle(*(const CBaseHandle *)&m_h6664));
		sub_10381ba0(0);
	}
	if (!sub_10381c80((char *)this)) {
		sub_102c43b0(0.75f);
		m_h6664 = 0xffffffff;
	}
	m_n6678 = 0;
	sub_1029adb0(a);
}
// END FUNCTION

// FUNCTION: 0x10380cb0 size=0x22a
#include "CBaseEntity.h"
#include "CNPC_VHengeyokai.h"
#include "CAI_Motor.h"

struct CHengeyokaiEnemiesView { void sub_102dfed0(Vector *pVec, CBaseEntity *pEnemy); };
struct CHengeyokaiTaskView { char sub_10278c80(); void sub_10382d20(); };
struct CHengeyokaiMotorView { void sub_102e0a60(float flYaw); };

// TARGET: CNPC_VHengeyokai::vfunc444
void CNPC_VHengeyokai::vfunc444(int *pTask)
{
	switch (*pTask) {
	case 0xc9:
	{
		CBaseEntity *pEnemy = vfunc164();
		Vector vec;
		((CHengeyokaiEnemiesView *)vfunc541())->sub_102dfed0(&vec, pEnemy);
		if (!(m_flags5d8c & 0x2000))
			vfunc572();
		m_pMotor5d44->sub_102e20b0(&vec.x, -1.0f);
		if (sub_103822a0(pEnemy)) {
			if (sub_10269aa0(0x1b) || gpGlobals->curtime >= m_fl6674)
				sub_10273e80(0);
		}
		break;
	}
	case 0xca:
	{
		CBaseEntity *pEnemy = vfunc165();
		Vector vec;
		((CHengeyokaiEnemiesView *)vfunc541())->sub_102dfed0(&vec, pEnemy);
		if (!(m_flags5d8c & 0x2000))
			vfunc572();
		m_pMotor5d44->sub_102e20b0(&vec.x, -1.0f);
		if (sub_103822a0(pEnemy))
			sub_10273e80(0);
		break;
	}
	case 0x132:
	case 0x133:
		((CHengeyokaiTaskView *)this)->sub_10382d20();
		if (vfunc248()) {
			((CHengeyokaiMotorView *)m_pMotor5d44)->sub_102e0a60(180.0f);
			sub_10273e80(0);
		}
		break;
	case 0x134:
		if (vfunc248())
			sub_10273e80(0);
		break;
	case 0x14b:
		sub_10383470();
		break;
	case 200:
		if (!(m_flags5d8c & 0x2000))
			vfunc572();
		goto chase;
	case 0x31:
		if (!(m_flags5d8c & 0x2000))
			vfunc572();
	chase:
		m_pMotor5d44->sub_102e1e20(-1);
		if (((CHengeyokaiTaskView *)this)->sub_10278c80())
			sub_10273e80(0);
		break;
	default:
		sub_10011928(pTask);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x10380f70 size=0x3
#include "CNPC_VHengeyokai.h"
bool CNPC_VHengeyokai::vfunc70()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10380f90 size=0x18
#include "CNPC_VHengeyokai.h"

char CNPC_VHengeyokai::vfunc69(void *pOther)
{
	if (*((unsigned char *)pOther + 0x4c) & 0x16)
		return 1;
	return sub_1029b180(pOther);
}
// END FUNCTION

// FUNCTION: 0x10381750 size=0x1a
#include "CNPC_VHengeyokai.h"
struct S10924edc { virtual void a(); virtual void b(); };
extern S10924edc *g_10924edc;
char CNPC_VHengeyokai::vfunc599(int unused)
{
	g_10924edc->b();
	return m_b6078 = 1;
}
// END FUNCTION

// FUNCTION: 0x10381780 size=0x17
#include "CNPC_VHengeyokai.h"
struct S10924edc { virtual void a(); virtual void b(); };
extern S10924edc *g_10924edc;

// TARGET: CNPC_VHengeyokai::vfunc600
bool CNPC_VHengeyokai::vfunc600(int unused)
{
	m_b6078 = 1;
	g_10924edc->b();
	return true;
}
// END FUNCTION

// FUNCTION: 0x103817b0 size=0xe
#include "CNPC_VHengeyokai.h"
struct CUnk10924edc
{
	virtual void v0();
	virtual void v1();
};
extern CUnk10924edc *g_10924edc;
// TARGET: CNPC_VHengeyokai::vfunc601
void CNPC_VHengeyokai::vfunc601(int unused)
{
	g_10924edc->v1();
}
// END FUNCTION

// FUNCTION: 0x103817d0 size=0x3
#include "CNPC_VHengeyokai.h"
bool CNPC_VHengeyokai::vfunc602()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103817f0 size=0x120
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CNPC_VHengeyokai.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_1063bd94[];

void CNPC_VHengeyokai::vfunc617()
{
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	filter.MakeReliable();
	int edict = *(int *)((char *)this + 0x2e0);
	int idx = engine->vfunc35(edict);
	g_1070b248->vfunc3(&filter, idx, 4, g_1063bd94[g_1070b244->vfunc2(0, 3)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x10381960 size=0x120
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CNPC_VHengeyokai.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_1063bda4[];

void CNPC_VHengeyokai::vfunc618()
{
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	filter.MakeReliable();
	int edict = *(int *)((char *)this + 0x2e0);
	int idx = engine->vfunc35(edict);
	g_1070b248->vfunc3(&filter, idx, 4, g_1063bda4[g_1070b244->vfunc2(0, 2)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x10381ad0 size=0x5
#include "CNPC_VHengeyokai.h"
#include "CBaseEntity.h"

// TARGET: CNPC_VHengeyokai::vfunc175
// the game's 0x10381ad0: a tail call (jmp) of CBaseEntity::vfunc175
void CNPC_VHengeyokai::vfunc175(CBaseEntity *a0)
{
	((CBaseEntity *)this)->CBaseEntity::vfunc175(a0);
}
// END FUNCTION

// FUNCTION: 0x10381af0 size=0x5
#include "CNPC_VHengeyokai.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VHengeyokai::vfunc24
// the game's 0x10381af0: a tail call (jmp) of CAI_BaseNPCTroika::vfunc24
void CNPC_VHengeyokai::vfunc24(int a0)
{
	((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc24(a0);
}
// END FUNCTION

// FUNCTION: 0x10381b10 size=0x24
extern char g_10739a4c[];

struct CUnknownGlobal10739a4c {
	void sub_1000d954(void *pArg);
};

struct CUnknown10381b10 {
	void sub_10381b10();
};

// TARGET: CUnknown10381b10::sub_10381b10
void CUnknown10381b10::sub_10381b10()
{
	((CUnknownGlobal10739a4c *)g_10739a4c)->sub_1000d954(this);
	*(int *)((char *)this + 0xe80) = 0;
	*(int *)((char *)this + 0xe88) = 0;
	*(int *)((char *)this + 0xe84) = 0;
}
// END FUNCTION

// FUNCTION: 0x10381b50 size=0x3d
#include "CNPC_VHengeyokai.h"

bool __fastcall sub_10381c80(CNPC_VHengeyokai *p);

// TARGET: CNPC_VHengeyokai::vfunc375
int CNPC_VHengeyokai::vfunc375(int nAct)
{
	if (sub_10381c80(this))
	{
		switch (nAct)
		{
		case 1:
			return 0x128;
		case 9:
		case 0x13:
			return 0x129;
		}
	}
	return sub_10006b40(nAct);
}
// END FUNCTION

// FUNCTION: 0x10383090 size=0x39
#include "CNPC_VHengeyokai.h"

// TARGET: CNPC_VHengeyokai::vfunc435
void CNPC_VHengeyokai::vfunc435(int arg)
{
	sub_100048f9(arg);
	if ((~*(unsigned int *)((char *)this + 0x14b8) & 8) != 0)
	{
		int n = m_n6678;
		*(int *)((char *)this + 0x6680) = 0;
		if (n > 0)
		{
			m_n6678 = n - 1;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10383540 size=0x5
#include "CNPC_VHengeyokai.h"
bool CNPC_VHengeyokai::vfunc74(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10383560 size=0x6a
#include "CNPC_VHengeyokai.h"

extern char g_106b8540[];
void __cdecl sub_1000ae7f(int idx, int line, const char *text, float duration, int r, int g, int b, int a);

struct HenViewX {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
	virtual const char **vfunc9(int *pOut);
};

int CNPC_VHengeyokai::vfunc124()
{
	int line = sub_10006f64();
	if (*((unsigned char *)this + 0x224) & 1) {
		int tmp;
		const char *name = *((HenViewX *)this)->vfunc9(&tmp);
		if (!name)
			name = g_106b8540;
		int edict = *(int *)((char *)this + 0x2e0);
		sub_1000ae7f(engine->vfunc35(edict), line, name, 0.0f, 255, 255, 255, 255);
		line++;
	}
	return line;
}
// END FUNCTION
