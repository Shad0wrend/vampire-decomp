// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1035b490 size=0x6
extern char g_1062a024;

char sub_1035b490(void)
{
    return g_1062a024;
}
// END FUNCTION

// FUNCTION: 0x1035b4f0 size=0x1d
#include "CGenericSabbat_NPC.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093a350;
extern B g_10936c74;
int CGenericSabbat_NPC::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093a350.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x1035b560 size=0x6
#include "CGenericSabbat_NPC.h"
namespace lifted {
extern char g_1093a3b0;
}
int CGenericSabbat_NPC::vfunc580()
{
    return (int)&lifted::g_1093a3b0;
}
// END FUNCTION

// FUNCTION: 0x1035b580 size=0x6
#include "CGenericSabbat_NPC.h"
namespace lifted {
extern int g_1062a02c;
}
const char * CGenericSabbat_NPC::vfunc451()
{
    return (const char *)lifted::g_1062a02c;
}
// END FUNCTION

// FUNCTION: 0x1035b5a0 size=0x1e
#include "CGenericSabbat_NPC.h"

void sub_100aa7b0(void *p);

// TARGET: CGenericSabbat_NPC::vfunc5
CGenericSabbat_NPC *CGenericSabbat_NPC::vfunc5(int flags)
{
	sub_1000c9cd();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1035b5d0 size=0xe9
#include "CGenericSabbat_NPC.h"

extern char g_106b8540[];

struct string_t
{
	const char *pszValue;
	const char *ToCStr() const { return pszValue ? pszValue : g_106b8540; }
};

#define VF(n) virtual void v##n();
#define VF10(n) VF(n##0) VF(n##1) VF(n##2) VF(n##3) VF(n##4) VF(n##5) VF(n##6) VF(n##7) VF(n##8) VF(n##9)
#define VF100(n) VF10(n##0) VF10(n##1) VF10(n##2) VF10(n##3) VF10(n##4) VF10(n##5) VF10(n##6) VF10(n##7) VF10(n##8) VF10(n##9)

struct SabbatView
{
	VF(0) VF(1) VF(2) VF(3) VF(4) VF(5) VF(6) VF(7) VF(8)
	virtual string_t GetModelName();
	VF(10) VF(11) VF(12) VF(13) VF(14) VF(15) VF(16) VF(17) VF(18) VF(19)
	VF10(2) VF10(3) VF10(4) VF10(5) VF10(6) VF10(7) VF10(8) VF10(9)
	VF100(1)
	VF10(20)
	VF(210) VF(211)
	virtual void SetModelName(string_t name);
};

struct IEngineSoundX
{
	virtual int PrecacheSound(const char *name, int preload);
};
struct G1074f028 { void sub_10207e60(void *ent); };

extern G1074f028 g_1074f028;
extern IEngineSoundX *g_1070b248;
extern const char *g_1062a000;
extern const char *g_1062a004;
extern const char *g_1062a008;
extern const char *g_1062a00c;
extern const char *g_1062a014[4];

void CGenericSabbat_NPC::vfunc104()
{
	g_1074f028.sub_10207e60(this);
	SabbatView *v = (SabbatView *)this;
	if (!v->GetModelName().pszValue || !v->GetModelName().ToCStr() || !*v->GetModelName().ToCStr())
	{
		string_t s;
		s.pszValue = *g_1062a000 ? g_1062a000 : 0;
		v->SetModelName(s);
	}
	engine->vfunc13(v->GetModelName().ToCStr(), 0);
	g_1070b248->PrecacheSound(g_1062a004, 0);
	g_1070b248->PrecacheSound(g_1062a008, 0);
	g_1070b248->PrecacheSound(g_1062a00c, 0);
	for (unsigned int i = 0; i < 4; i++)
		g_1070b248->PrecacheSound(g_1062a014[i], 0);
	CAI_BaseNPC::vfunc104();
}
// END FUNCTION

// FUNCTION: 0x1035b700 size=0x132
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CGenericSabbat_NPC.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

struct CSabbatGlobal
{
	virtual void v0();
	virtual bool v1();
	char pad[0x28 - 4];
	float m_f28;
};

extern CSabbatGlobal *g_1093a36c;
extern float g_104454c4;

void CGenericSabbat_NPC::vfunc103()
{
	CEntityVSlots *pEnt = (CEntityVSlots *)this;
	pEnt->slot104();
	int tmp;
	const char *pszModel = *pEnt->slot9(&tmp);
	if (!pszModel)
		pszModel = g_106b8540;
	pEnt->slot105(pszModel);
	*(int *)((char *)this + 0x1568) = 0;
	*(int *)((char *)this + 0x156c) = 0;
	sub_10273070(0);
	{
		const char *pszName = *(const char **)((char *)this + 0x26c);
		ScopeTrace trace("CBaseEntity::SetSolid", pszName ? pszName : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(2);
	}
	pEnt->slot93(4, 0);
	*(int *)((char *)this + 0x1570) = 0xf7;
	*(int *)((char *)this + 0x19c) = 0;
	float flHealth = g_1093a36c->v1() ? g_104454c4 : g_1093a36c->m_f28;
	*(int *)((char *)this + 0x210) = (int)flHealth;
	*(int *)((char *)this + 0x1574) = 0x3e4ccccd;
	*(int *)((char *)this + 0x5cc0) = 0;
	sub_1026dc00(1);
	sub_1026dc00(0x800000);
	pEnt->slot420();
}
// END FUNCTION

// FUNCTION: 0x1035b890 size=0x11f
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CGenericSabbat_NPC.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_1062a008[];

void CGenericSabbat_NPC::vfunc495()
{
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	filter.MakeReliable();
	int edict = *(int *)((char *)this + 0x2e0);
	int idx = engine->vfunc35(edict);
	g_1070b248->vfunc3(&filter, idx, 2, g_1062a008[g_1070b244->vfunc2(0, 0)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x1035ba00 size=0x11f
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CGenericSabbat_NPC.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_1062a004[];

void CGenericSabbat_NPC::vfunc489()
{
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	filter.MakeReliable();
	int edict = *(int *)((char *)this + 0x2e0);
	int idx = engine->vfunc35(edict);
	g_1070b248->vfunc3(&filter, idx, 2, g_1062a004[g_1070b244->vfunc2(0, 0)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x1035bb70 size=0x11f
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CGenericSabbat_NPC.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_1062a00c[];

void CGenericSabbat_NPC::vfunc488()
{
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	filter.MakeReliable();
	int edict = *(int *)((char *)this + 0x2e0);
	int idx = engine->vfunc35(edict);
	g_1070b248->vfunc3(&filter, idx, 2, g_1062a00c[g_1070b244->vfunc2(0, 0)], 0.5f, 0.8f, 0, 100, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x1035bce0 size=0x120
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CGenericSabbat_NPC.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_1062a014[];

void CGenericSabbat_NPC::vfunc491()
{
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	filter.MakeReliable();
	int edict = *(int *)((char *)this + 0x2e0);
	int idx = engine->vfunc35(edict);
	g_1070b248->vfunc3(&filter, idx, 2, g_1062a014[g_1070b244->vfunc2(0, 3)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x1035be80 size=0x2a
#include "CGenericSabbat_NPC.h"
extern const float g_1044f00c;
extern const float g_1049949c;
extern const float g_1047a3ac;

float CGenericSabbat_NPC::vfunc516()
{
    int state = *(int *)((char *)this + 0xfec);
    if (state != 0x13) {
        if (state > 0x3a && state <= 0x3c)
            return g_1044f00c;
        return g_1049949c;
    }
    return g_1047a3ac;
}
// END FUNCTION

// FUNCTION: 0x1035bec0 size=0x6
int sub_1035bec0(void)
{
    return 0xf;
}
// END FUNCTION

// FUNCTION: 0x1035bf70 size=0xd
void __fastcall sub_1000a529(void *pThis, int dummy, float a);

// TARGET: sub_1035bf70
void __fastcall sub_1035bf70(void *pThis, int dummy, float a)
{
	sub_1000a529(pThis, dummy, a);
}
// END FUNCTION

// FUNCTION: 0x1035bfb0 size=0x1
#include "CGenericSabbat_NPC.h"
void CGenericSabbat_NPC::vfunc434()
{
}
// END FUNCTION

// FUNCTION: 0x1035c010 size=0x1a
#include "CGenericSabbat_NPC.h"

void CGenericSabbat_NPC::vfunc144(int a)
{
	sub_10090890(0);
	CAI_BaseNPC::vfunc144(a);
}
// END FUNCTION
