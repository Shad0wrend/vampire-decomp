// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 10 blocks
#include "vampire.h"

// FUNCTION: 0x101cf3c0 size=0xa7
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
extern void (__cdecl *g_109f366c)(const char *fmt);

void sub_101cf3c0(CBaseEntity *pEnt, const Vector &mins, const Vector &maxs)
{
	for (int i = 0; i < 3; i++)
	{
		if (mins[i] > maxs[i])
			g_109f366c("backwards mins/maxs");
	}
	pEnt->sub_1009edc0(&mins.x, &maxs.x);
	Vector vecMins, vecMaxs;
	VectorCopy(mins, vecMins);
	VectorCopy(maxs, vecMaxs);
	Vector vecSize;
	VectorSubtract(vecMaxs, vecMins, vecSize);
	((CEntityVSlots *)pEnt)->slot213(&vecSize.x);
}
// END FUNCTION

// FUNCTION: 0x101cf4a0 size=0xd8
#include "Vector.h"
#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)

struct CModelEntX
{
	SV10(0)
	virtual void v10(int nModelIndex);
	SV(11) SV(12) SV(13) SV(14) SV(15) SV(16) SV(17) SV(18) SV(19)
	SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV100(1)
	SV(200) SV(201) SV(202) SV(203) SV(204) SV(205) SV(206) SV(207) SV(208) SV(209) SV(210) SV(211)
	virtual void v212(int iszModelName);
};

struct CModelInfoX
{
	SV(0) SV(1)
	virtual void *GetModel(int nModelIndex);
	virtual void GetModelBounds(void *pModel, Vector *pMins, Vector *pMaxs);
	SV(4) SV(5) SV(6) SV(7) SV(8) SV(9) SV(10) SV(11)
	virtual int GetModelIndex(const char *pszName);
};
extern CModelInfoX *g_1070b250;
extern Vector g_1070d1b0;
extern "C" __declspec(dllimport) void __cdecl Error(const char *pMsg, ...);

char sub_101d37a0(const char *psz);
const char *__cdecl sub_101d3730(const char *pszFormat, ...);
void sub_101cf3c0(CModelEntX *pEntity, const Vector *pMins, const Vector *pMaxs, int bNotify);

inline int AllocPooledString(const char *pszValue)
{
	if (pszValue && *pszValue)
		return (int)pszValue;
	return 0;
}

void sub_101cf4a0(CModelEntX *pEntity, const char *pszModelName)
{
	if (pszModelName && pszModelName[0]) {
		int nIndex = g_1070b250->GetModelIndex(pszModelName);
		if (nIndex < 0)
			Error("no precache: %s\n", pszModelName);
		if (sub_101d37a0(pszModelName))
			Error(sub_101d3730("UTIL_SetModel passed a va string '%s'", pszModelName));
		pEntity->v10(nIndex);
		pEntity->v212(AllocPooledString(pszModelName));
		void *pModel = g_1070b250->GetModel(nIndex);
		if (pModel) {
			Vector mins;
			Vector maxs;
			g_1070b250->GetModelBounds(pModel, &mins, &maxs);
			sub_101cf3c0(pEntity, &mins, &maxs, 1);
		} else {
			sub_101cf3c0(pEntity, &g_1070d1b0, &g_1070d1b0, 1);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101cf5c0 size=0x27
#include "CBaseEntity.h"

// TARGET: sub_101cf5c0
void sub_101cf5c0(CBaseEntity *p, int v, int flags)
{
	p->vfunc62((const float *)v);
	if ((char)flags)
		p->sub_100a53d0(0);
}
// END FUNCTION

// FUNCTION: 0x101cf600 size=0x9
namespace lifted {
struct C1001514a { int sub_1001514a(); };
}
int sub_101cf600(int a0)
{
    return ((lifted::C1001514a *)a0)->sub_1001514a();
}
// END FUNCTION

// FUNCTION: 0x101cf620 size=0xd
extern "C" __declspec(dllimport) void Msg(const char *fmt, ...);

void sub_101cf620()
{
	Msg("UTIL_ParticleEffect:  Disabled\n");
}
// END FUNCTION

// FUNCTION: 0x101cf640 size=0x23
extern int g_10566258;
extern short g_1088ae52;

// TARGET: sub_101cf640
void sub_101cf640(int a, int b, int c)
{
    void *pObj = (void *)g_10566258;
    ((void (__fastcall *)(void *, int, int, int, int, int))(*(void ***)pObj)[2])(pObj, a, a, g_1088ae52, b, c);
}
// END FUNCTION

// FUNCTION: 0x101cf680 size=0x74
#include "Vector.h"
#include <math.h>
// TARGET: sub_101cf680
void sub_101cf680(Vector &direction, float epsilon)
{
    float proj = 1.0f - epsilon;
    for (int i = 0; i < 3; i++) {
        if (fabs(direction[i]) > proj) {
            if (direction[i] < 0)
                direction[i] = -1.0f;
            else
                direction[i] = 1.0f;
            direction[(i + 1) % 3] = 0;
            direction[(i + 2) % 3] = 0;
            return;
        }
    }
}
// END FUNCTION

// FUNCTION: 0x101cf720 size=0x7b
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
extern char g_1072d4b8[];
extern int (*g_109f387c)(char *, int, const char *, char *);

char *sub_101cf720(const char *format, ...)
{
    g_109f3620[*g_109f3680].name = "UTIL_VarArgs";
    g_109f3620[*g_109f3680].ent = g_106b8540;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    char *argptr = (char *)&format + sizeof(format);
    g_109f387c(g_1072d4b8, 0x400, format, argptr);
    --*g_109f3680;
    return g_1072d4b8;
}
// END FUNCTION

// FUNCTION: 0x101cf7c0 size=0x114
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
extern "C" unsigned int strlen(const char *);
extern void (*g_109f3890)(char *, const char *, int);

void sub_101cf7c0(const char *in, char *out, int maxlen)
{
    ScopeTrace scope("UTIL_Extract_FileBase", g_106b8540);
    if (out && maxlen > 0) {
        if (!in || !in[0]) {
            *out = 0;
        } else {
            int len = strlen(in);
            int end = len - 1;
            while (end && in[end] != '.' && in[end] != '/' && in[end] != '\\')
                end--;
            if (in[end] != '.')
                end = len - 1;
            else
                end--;
            int start = len - 1;
            while (start >= 0 && in[start] != '/' && in[start] != '\\')
                start--;
            if (start >= 0 && (in[start] == '/' || in[start] == '\\'))
                start++;
            else
                start = 0;
            g_109f3890(out, &in[start], (end - start + 2 < maxlen) ? end - start + 2 : maxlen);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x101cf930 size=0x53
#include "CGlobalEntityList.h"
#include "CBaseEntity.h"
extern CGlobalEntityList g_106eb5d8;
__declspec(dllimport) void Warning(const char *, ...);

#define P10(x) virtual void x##0(); virtual void x##1(); virtual void x##2(); virtual void x##3(); virtual void x##4(); virtual void x##5(); virtual void x##6(); virtual void x##7(); virtual void x##8(); virtual void x##9();
struct CMasterSlotView
{
	P10(a0) P10(a1) P10(a2) P10(a3) P10(a4) P10(a5) P10(a6) P10(a7) P10(a8) P10(a9)
	P10(b0)
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6();
	virtual char vfunc117();
	P10(d0) P10(d1)
	virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4(); virtual void e5(); virtual void e6(); virtual void e7(); virtual void e8();
	virtual bool vfunc147(CBaseEntity *pActivator);
};

// TARGET: sub_101cf930
bool __cdecl sub_101cf930(const char *pszMaster, CBaseEntity *pActivator)
{
	if (pszMaster) {
		CMasterSlotView *pMaster = (CMasterSlotView *)g_106eb5d8.sub_100f7770(0, pszMaster, pActivator, 0);
		if (pMaster && (pMaster->vfunc117() & 0x80))
			return pMaster->vfunc147(pActivator);
		Warning("Master was null or not a master!\n");
	}
	return 1;
}
// END FUNCTION
