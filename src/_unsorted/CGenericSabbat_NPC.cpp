// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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

struct IVModelInfoX
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12();
	virtual int PrecacheModel(const char *name, int preload);
};
struct IEngineSoundX
{
	virtual int PrecacheSound(const char *name, int preload);
};
struct G1074f028 { void sub_10207e60(void *ent); };

extern G1074f028 g_1074f028;
extern IVModelInfoX *g_1070b22c;
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
	g_1070b22c->PrecacheModel(v->GetModelName().ToCStr(), 0);
	g_1070b248->PrecacheSound(g_1062a004, 0);
	g_1070b248->PrecacheSound(g_1062a008, 0);
	g_1070b248->PrecacheSound(g_1062a00c, 0);
	for (unsigned int i = 0; i < 4; i++)
		g_1070b248->PrecacheSound(g_1062a014[i], 0);
	CAI_BaseNPC::vfunc104();
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
