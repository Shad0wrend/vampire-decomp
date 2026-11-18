// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10359e30 size=0x6
extern char g_10629a38;

char sub_10359e30(void)
{
    return g_10629a38;
}
// END FUNCTION

// FUNCTION: 0x10359e90 size=0x1d
#include "CGeneric_NPC.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093a234;
extern B g_10936c74;
int CGeneric_NPC::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093a234.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x10359f00 size=0x6
#include "CGeneric_NPC.h"
namespace lifted {
extern char g_1093a1a8;
}
CAI_CondOwner * CGeneric_NPC::vfunc580()
{
    return (CAI_CondOwner *)((int)&lifted::g_1093a1a8);
}
// END FUNCTION

// FUNCTION: 0x10359f20 size=0x6
#include "CGeneric_NPC.h"
namespace lifted {
extern int g_10629a40;
}
const char * CGeneric_NPC::vfunc451()
{
    return (const char *)lifted::g_10629a40;
}
// END FUNCTION

// FUNCTION: 0x10359f40 size=0x1e
#include "CGeneric_NPC.h"

void sub_100aa7b0(void *p);

// TARGET: CGeneric_NPC::vfunc5
CGeneric_NPC *CGeneric_NPC::vfunc5(int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10359f70 size=0xdf
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CGeneric_NPC.h"

struct CGenericNPCSlots
{
	virtual void x0(); virtual void x1(); virtual void x2(); virtual void x3(); virtual void x4(); virtual void x5(); virtual void x6(); virtual void x7(); virtual void x8();
	virtual string_t GetModelName();
#define S10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
	S10(a) S10(b) S10(c) S10(d) S10(e) S10(f) S10(g) S10(h) S10(i) S10(j) S10(k) S10(l) S10(m) S10(n) S10(o) S10(p) S10(q) S10(r) S10(s) S10(t)
	virtual void u0(); virtual void u1();
	virtual void SetModelName(string_t name);
#undef S10
};

extern char g_10629c00[];
extern const char *g_10629a18;
extern const char *g_10629a1c;
extern const char *g_10629a20;
extern const char *g_10629a28[4];

inline const char *STRING(const string_t &s) { return s.pszValue ? s.pszValue : g_106b8540; }
#define MAKE_STRING(str) string_t(*(str) != 0 ? (str) : 0)

void CGeneric_NPC::vfunc104()
{
	CGenericNPCSlots *self = (CGenericNPCSlots *)this;
	if (!self->GetModelName().pszValue || !STRING(self->GetModelName()) || !*STRING(self->GetModelName()))
		self->SetModelName(MAKE_STRING(g_10629c00));
	engine->vfunc13(STRING(self->GetModelName()), 0);
	enginesound->vfunc0(g_10629a18, 0);
	enginesound->vfunc0(g_10629a1c, 0);
	enginesound->vfunc0(g_10629a20, 0);
	for (unsigned int i = 0; i < 4; i++)
		enginesound->vfunc0(g_10629a28[i], 0);
	sub_100097b4();
}
// END FUNCTION

// FUNCTION: 0x1035a090 size=0x13e
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CGeneric_NPC.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

#define V virtual void
#define S10(p) V p##0(); V p##1(); V p##2(); V p##3(); V p##4(); V p##5(); V p##6(); V p##7(); V p##8(); V p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)
struct SNpc {
	V a0(); V a1(); V a2(); V a3(); V a4(); V a5(); V a6(); V a7(); V a8();
	virtual const char **vfunc9(int *pOut);
	S10(b0) S10(b1) S10(b2) S10(b3) S10(b4) S10(b5) S10(b6) S10(b7) V b80(); V b81(); V b82();
	virtual void vfunc93(int moveType, int moveCollide);
	S10(c0) V c1();
	virtual void vfunc105(const char *pszModel);
	S100(d0) S100(d1) S100(d2) S10(e0) V e1(); V e2(); V e3(); V e4();
	virtual void vfunc420();
	void sub_10273070(int a);
	void sub_1026dc00(int a);
};
struct SCvar {
	virtual void v0();
	virtual char vfunc1();
	char m_pad[0x28 - 4];
	float m_f28;
};

extern SCvar *g_1093a1f4;
extern float g_104454c4;

void CGeneric_NPC::vfunc103()
{
	SNpc *p = (SNpc *)this;
	int nOut;
	vfunc104();
	const char *name = *p->vfunc9(&nOut);
	if (!name)
		name = g_106b8540;
	p->vfunc105(name);
	*(int *)((char *)this + 0x1568) = 0;
	*(int *)((char *)this + 0x156c) = 0;
	p->sub_10273070(0);
	{
		const char *entName = *(const char **)((char *)this + 0x26c);
		ScopeTrace trace("CBaseEntity::SetSolid", entName ? entName : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(2);
	}
	p->vfunc93(4, 0);
	*(int *)((char *)this + 0x1570) = 0xf7;
	*(int *)((char *)this + 0x19c) = 0;
	*(int *)((char *)this + 0x210) = (int)(g_1093a1f4->vfunc1() ? g_104454c4 : g_1093a1f4->m_f28);
	*(float *)((char *)this + 0x1574) = 0.2f;
	*(int *)((char *)this + 0x5cc0) = 0;
	p->sub_1026dc00(1);
	p->sub_1026dc00(0x200000);
	p->sub_1026dc00(0x800000);
	p->vfunc420();
}
// END FUNCTION

// FUNCTION: 0x1035a220 size=0x11b
#include "CGeneric_NPC.h"
#include "CBaseEntity.h"
#include "CEntitySoundOriginView.h"
#include "CPASAttenuationFilter.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_10629a1c[];

// TARGET: CGeneric_NPC::vfunc495
void CGeneric_NPC::vfunc495()
{
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this, ATTN_NONE);
	filter.MakeReliable();
	int edict = ((CBaseEntity *)this)->m_pEdict2e0;
	int entindex = engine->vfunc35(edict);
	g_1070b248->vfunc3(&filter, entindex, 2, g_10629a1c[g_1070b244->vfunc2(0, 0)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x1035a390 size=0x11b
#include "CGeneric_NPC.h"
#include "CBaseEntity.h"
#include "CEntitySoundOriginView.h"
#include "CPASAttenuationFilter.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_10629a18[];

// TARGET: CGeneric_NPC::vfunc489
void CGeneric_NPC::vfunc489()
{
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this, ATTN_NONE);
	filter.MakeReliable();
	int edict = ((CBaseEntity *)this)->m_pEdict2e0;
	int entindex = engine->vfunc35(edict);
	g_1070b248->vfunc3(&filter, entindex, 2, g_10629a18[g_1070b244->vfunc2(0, 0)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x1035a500 size=0x11b
#include "CGeneric_NPC.h"
#include "CBaseEntity.h"
#include "CEntitySoundOriginView.h"
#include "CPASAttenuationFilter.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_10629a20[];

// TARGET: CGeneric_NPC::vfunc488
void CGeneric_NPC::vfunc488()
{
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this, ATTN_NONE);
	filter.MakeReliable();
	int edict = ((CBaseEntity *)this)->m_pEdict2e0;
	int entindex = engine->vfunc35(edict);
	g_1070b248->vfunc3(&filter, entindex, 2, g_10629a20[g_1070b244->vfunc2(0, 0)], 0.5f, 0.8f, 0, 100, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x1035a670 size=0x11c
#include "CGeneric_NPC.h"
#include "CBaseEntity.h"
#include "CEntitySoundOriginView.h"
#include "CPASAttenuationFilter.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_10629a28[];

// TARGET: CGeneric_NPC::vfunc491
void CGeneric_NPC::vfunc491()
{
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this, ATTN_NONE);
	filter.MakeReliable();
	int edict = ((CBaseEntity *)this)->m_pEdict2e0;
	int entindex = engine->vfunc35(edict);
	g_1070b248->vfunc3(&filter, entindex, 2, g_10629a28[g_1070b244->vfunc2(0, 3)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x1035a7e0 size=0x14
#include "CGeneric_NPC.h"

int CGeneric_NPC::vfunc473()
{
	switch (m_n5cc0)
	{
	case 1:
		return 0x19;
	}
	return 0x17;
}
// END FUNCTION

// FUNCTION: 0x1035a810 size=0x2a
#include "CGeneric_NPC.h"
extern const float g_1044f00c;
extern const float g_1049949c;
extern const float g_1047a3ac;

float CGeneric_NPC::vfunc516()
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

// FUNCTION: 0x1035a850 size=0x6
int sub_1035a850(void)
{
    return 4;
}
// END FUNCTION

// FUNCTION: 0x1035a8a0 size=0x5
#include "animevent_t.h"
#include "CGeneric_NPC.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CGeneric_NPC::vfunc259
// the game's 0x1035a8a0: a tail call (jmp) of CAI_BaseNPCTroika::vfunc259
void CGeneric_NPC::vfunc259(animevent_t *a0)
{
	CAI_BaseNPCTroika::vfunc259(a0);
}
// END FUNCTION

// FUNCTION: 0x1035a900 size=0xd
void sub_1028fcc0(float a);

void sub_1035a900(float a)
{
	sub_1028fcc0(a);
}
// END FUNCTION

// FUNCTION: 0x1035a920 size=0x1
#include "CGeneric_NPC.h"
void CGeneric_NPC::vfunc434()
{
}
// END FUNCTION

// FUNCTION: 0x1035a980 size=0x68
#include "CGeneric_NPC.h"
#include "Vector.h"

typedef Vector *(__fastcall *OriginFn)(void *pThis, void **vt);
extern float g_10449258;
void __cdecl sub_100043cc(void *pEnt, Vector *pPos, int flag);

void CGeneric_NPC::vfunc144(int a)
{
	sub_1000a62d(a);
	void **vt = *(void ***)this;
	Vector *p = ((OriginFn)vt[220])(this, vt);
	Vector tmp;
	tmp.z = p->z;
	tmp.z += g_10449258;
	tmp.x = p->x;
	tmp.y = p->y;
	Vector pos = tmp;
	sub_100043cc(this, &pos, 0);
	sub_10003472(0);
}
// END FUNCTION
