// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10429260 size=0x6
#include "CBaseGrenade.h"
#include "datamap.h"
namespace lifted {
extern char g_106acc78;
}
datamap_t * CBaseGrenade::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_106acc78);
}
// END FUNCTION

// FUNCTION: 0x10429360 size=0x6
#include "CBaseGrenade.h"
namespace lifted {
extern char g_109ee728;
}
int CBaseGrenade::vfunc80()
{
    return (int)&lifted::g_109ee728;
}
// END FUNCTION

// FUNCTION: 0x10429380 size=0x3
#include "CBaseGrenade.h"
int CBaseGrenade::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x104296c0 size=0x6
#include "CBaseGrenade.h"
namespace lifted {
extern char g_106ad03c;
}
int CBaseGrenade::vfunc79()
{
    return (int)&lifted::g_106ad03c;
}
// END FUNCTION

// FUNCTION: 0x10429f20 size=0xb
#include "CBaseGrenade.h"
void CBaseGrenade::vfunc144(int unused)
{
	vfunc407();
}
// END FUNCTION

// FUNCTION: 0x1042ace0 size=0x121
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseGrenade.h"
#include "CRecipientFilter.h"
#include "CPASAttenuationFilter.h"
#include "ScopeTrace.h"

class S_SoundSystem
{
public:
	virtual void s0();
	virtual void s1();
	virtual void s2();
	virtual void slot3(const CRecipientFilter *pFilter, int entindex, int channel, const char *pszSample, float flVolume, float flAttenuation, int flags, int pitch, int a, int b, int c, int d);
};

struct S_GrenadeView
{
	char m_pad[0x19c4];
	const char *m_pszSample;
};

#define EO10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define EO100(p) EO10(p##0) EO10(p##1) EO10(p##2) EO10(p##3) EO10(p##4) EO10(p##5) EO10(p##6) EO10(p##7) EO10(p##8) EO10(p##9)

class S_EntOrigin
{
public:
	EO100(a)	// slots 0..99
	EO100(b)	// slots 100..199
	EO10(c0) EO10(c1)	// slots 200..219
	virtual void c20(); virtual void c21();	// 220, 221
	virtual Vector *slot222(Vector *pOut);
};

extern S_SoundSystem *g_1070b248;
extern char vt_104470dc[];
extern char vt_104470b0[];

struct S_PASFilter
{
	void *m_vptr;
	int m_pad04;
	CRecipientVec m_Vec;
	int m_n1c;
	char m_pad20[8];
	char m_b28;
};

static inline const char *S_STRING(const char *const &p)
{
	return p ? p : g_106b8540;
}

void CBaseGrenade::vfunc408()
{
	S_PASFilter filter;
	Vector pos;
	S_EntOrigin *pEnt = (S_EntOrigin *)this;
	Vector *pOrigin = pEnt->slot222(&pos);
	((CRecipientFilter *)&filter)->sub_1019ce00();
	filter.m_vptr = vt_104470dc;
	((CRecipientFilter *)&filter)->sub_1019d280(&pOrigin->x);
	filter.m_vptr = vt_104470b0;
	((CRecipientFilter *)&filter)->sub_1019d4b0(*pEnt->slot222(&pos), 0.8f);
	S_GrenadeView *pView = (S_GrenadeView *)this;
	const char *pszSample;
	if (pView->m_pszSample == 0)
		pszSample = "weapons/grenade_hit1.wav";
	else
		pszSample = S_STRING(pView->m_pszSample);
	int edict = m_pEdict2e0;
	g_1070b248->slot3((CRecipientFilter *)&filter, engine->vfunc35(edict), 2, pszSample, 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x1042b080 size=0x6c
#include "CBaseGrenade.h"

struct ISoundSink {
	virtual void PrecacheSound(const char *s, int n);
};
extern ISoundSink *g_1070b248;

struct CBaseCombatCharacterThunk {
	void sub_10011324();
};

// TARGET: CBaseGrenade::vfunc104
void CBaseGrenade::vfunc104()
{
	((CBaseCombatCharacterThunk *)this)->sub_10011324();
	g_1070b248->PrecacheSound("weapons/debris1.wav", 0);
	g_1070b248->PrecacheSound("weapons/debris2.wav", 0);
	g_1070b248->PrecacheSound("weapons/debris3.wav", 0);
	g_1070b248->PrecacheSound("weapons/grenade_hit1.wav", 0);
	g_1070b248->PrecacheSound("weapons/grenade_hit2.wav", 0);
	g_1070b248->PrecacheSound("weapons/grenade_hit3.wav", 0);
}
// END FUNCTION

// FUNCTION: 0x1042b180 size=0x4
#include "CBaseGrenade.h"
int CBaseGrenade::vfunc145()
{
    return -1;
}
// END FUNCTION

// FUNCTION: 0x1042b1a0 size=0x7
#include "CBaseGrenade.h"
namespace lifted {
extern float g_10462994;
}
float CBaseGrenade::vfunc409()
{
    return lifted::g_10462994;
}
// END FUNCTION

// FUNCTION: 0x1042b1c0 size=0x7
#include "CBaseGrenade.h"
namespace lifted {
extern float g_10516284;
}
float CBaseGrenade::vfunc410()
{
    return lifted::g_10516284;
}
// END FUNCTION

// FUNCTION: 0x1042b1e0 size=0x5
#include "CBaseGrenade.h"
bool CBaseGrenade::vfunc72(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1042b200 size=0x7
#include "CBaseGrenade.h"
float CBaseGrenade::vfunc190()
{
    return *(float *)((char *)this + 0x19c0);
}
// END FUNCTION

// FUNCTION: 0x1042b220 size=0x7
#include "CBaseGrenade.h"
float CBaseGrenade::vfunc411()
{
    return *(float *)((char *)this + 0x19b8);
}
// END FUNCTION

// FUNCTION: 0x1042b240 size=0xd
#include "CBaseGrenade.h"
struct GrenadeField19c0 { char pad[0x19c0]; int m; };
void CBaseGrenade::vfunc191(int value)
{
	((GrenadeField19c0 *)this)->m = value;
}
// END FUNCTION

// FUNCTION: 0x1042b260 size=0xd
#include "CBaseGrenade.h"
struct GrenadeField19b8 { char pad[0x19b8]; int m; };
void CBaseGrenade::vfunc412(int value)
{
	((GrenadeField19b8 *)this)->m = value;
}
// END FUNCTION

// FUNCTION: 0x1042b280 size=0x1e
#include "CBaseGrenade.h"

void sub_100aa7b0(void *p);

// TARGET: CBaseGrenade::vfunc5
CBaseGrenade *CBaseGrenade::vfunc5(unsigned int flags)
{
	sub_1000a67d();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
