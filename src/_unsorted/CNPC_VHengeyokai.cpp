// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
struct EngPrecacheB {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12();
	virtual void v13(const char *name, int a);
	virtual void v14(); virtual void v15(); virtual void v16();
	virtual void v17(const char *name, int a);
};

extern EngPrecache *g_1070b248;
extern EngPrecacheB *g_1070b22c;
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
	g_1070b22c->v13("models/character/monster/Hengeyokai/hengeyokai.mdl", 0);
	g_1070b22c->v17("Hengeyokai_freeze_emitter", 0);
	sub_101d0ec0("item_w_hengeyokai_fist");
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

// FUNCTION: 0x10380f90 size=0x18
#include "CNPC_VHengeyokai.h"

char CNPC_VHengeyokai::vfunc69(void *pOther)
{
	if (*((unsigned char *)pOther + 0x4c) & 0x16)
		return 1;
	return sub_1029b180(pOther);
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

// FUNCTION: 0x10383560 size=0x6a
#include "CNPC_VHengeyokai.h"
#include "CUnknown1070b22c.h"

extern char g_106b8540[];
extern CUnknown1070b22c *g_1070b22c;
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
		sub_1000ae7f(g_1070b22c->vfunc35(edict), line, name, 0.0f, 255, 255, 255, 255);
		line++;
	}
	return line;
}
// END FUNCTION
