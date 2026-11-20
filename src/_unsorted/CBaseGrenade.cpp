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

// FUNCTION: 0x104296e0 size=0x4e0
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseGrenade.h"
#include "CGameTrace.h"
#include "ScopeTrace.h"
#include "CFlagsUnit.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CUnknown101c26d0.h"
#include "CUnknown1070b254.h"
#include "UTIL_BloodStream.h"
#include "engineserver.h"
#include "engineiface.h"
#include "CEHandleGet.h"
#include "string_t.h"

struct CSurfDataView { char m_pad[0x70]; char m_chMaterial; };
struct CSurfPropsView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual CSurfDataView *GetSurfaceData(int index);
};
extern CSurfPropsView *g_10723944;

struct CTEExplView
{
	virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03(); virtual void v04();
	virtual void v05(); virtual void v06(); virtual void v07(); virtual void v08(); virtual void v09();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20();
	virtual void Explosion(CRecipientFilter &filter, float delay, const float *pos, int modelindex, float scale, int framerate, int flags, int radius, int magnitude, const Vector *normal = 0, char materialType = 'C');
};

struct CCollisionView104296e0
{
	char m_pad[0x44];
	unsigned short m_usSolidFlags;
	void sub_100dc580(int flags);
	void AddSolidFlags(int flags) { sub_100dc580(m_usSolidFlags | flags); }
};

extern short g_1088ae7c;
extern short g_1088ae50;
extern float g_1070d1b0[3];
void sub_101cf600(CBaseGrenade *p);
void sub_101babc0(int iType, const float *pOrigin, int iVolume, float flDuration, char bFlag);
void sub_101cfea0(CGameTrace *pTrace, int decal, int a);
void sub_101c0b10();

inline int Grenade_PointContents(const float *v) { return g_1070b254->vfunc0(v, 0); }

struct CGrenadeEntIndexView : CBaseGrenade
{
	int entindex() { return engine->vfunc35(m_pEdict2e0); }
	void SetNextThink(float thinkTime) { m_flNextThink = thinkTime; }
	void SetNextThinkR(const float &thinkTime) { m_flNextThink = thinkTime; }
};

struct CGrenadeExplodeVS
{
	virtual void vs0();
	virtual void vs1();
	virtual void vs2();
	virtual void vs3();
	virtual void vs4();
	virtual void vs5();
	virtual void vs6();
	virtual void vs7();
	virtual void vs8();
	virtual void vs9();
	virtual void vs10();
	virtual void vs11();
	virtual void vs12();
	virtual void vs13();
	virtual void vs14();
	virtual void vs15();
	virtual void vs16();
	virtual void vs17();
	virtual void vs18();
	virtual void vs19();
	virtual void vs20();
	virtual void vs21();
	virtual void vs22();
	virtual void vs23();
	virtual void vs24();
	virtual void vs25();
	virtual void vs26();
	virtual void vs27();
	virtual void vs28();
	virtual void vs29();
	virtual void vs30();
	virtual void vs31();
	virtual void vs32();
	virtual void vs33();
	virtual void vs34();
	virtual void vs35();
	virtual void vs36();
	virtual void vs37();
	virtual void vs38();
	virtual void vs39();
	virtual void vs40();
	virtual void vs41();
	virtual void vs42();
	virtual void vs43();
	virtual void vs44();
	virtual void vs45();
	virtual void vs46();
	virtual void vs47();
	virtual void vs48();
	virtual void vs49();
	virtual void vs50();
	virtual void vs51();
	virtual void vs52();
	virtual void vs53();
	virtual void vs54();
	virtual void vs55();
	virtual void vs56();
	virtual void vs57();
	virtual void vs58();
	virtual void vs59();
	virtual void vs60();
	virtual void vs61();
	virtual void vs62();
	virtual void vs63();
	virtual void vs64();
	virtual void vs65();
	virtual void vs66();
	virtual void vs67();
	virtual void vs68();
	virtual void vs69();
	virtual void vs70();
	virtual void vs71();
	virtual void vs72();
	virtual void vs73();
	virtual void vs74();
	virtual void vs75();
	virtual void vs76();
	virtual void vs77();
	virtual void vs78();
	virtual void vs79();
	virtual void vs80();
	virtual void vs81();
	virtual void vs82();
	virtual void vs83();
	virtual void vs84();
	virtual void vs85();
	virtual void vs86();
	virtual void vs87();
	virtual void vs88();
	virtual void vs89();
	virtual void vs90();
	virtual void vs91();
	virtual void vs92();
	virtual void vs93();
	virtual void vs94();
	virtual void vs95();
	virtual void vs96();
	virtual void vs97();
	virtual void vs98();
	virtual void vs99();
	virtual void vs100();
	virtual void vs101();
	virtual void vs102();
	virtual void vs103();
	virtual void vs104();
	virtual void vs105();
	virtual void vs106();
	virtual void vs107();
	virtual void vs108();
	virtual void vs109();
	virtual void vs110();
	virtual void vs111();
	virtual void vs112();
	virtual void vs113();
	virtual void vs114();
	virtual void vs115();
	virtual void vs116();
	virtual void vs117();
	virtual void vs118();
	virtual void vs119();
	virtual void vs120();
	virtual void vs121();
	virtual void vs122();
	virtual void vs123();
	virtual void vs124();
	virtual void vs125();
	virtual void vs126();
	virtual void vs127();
	virtual void vs128();
	virtual void vs129();
	virtual void vs130();
	virtual void vs131();
	virtual void vs132();
	virtual void vs133();
	virtual void vs134();
	virtual void vs135();
	virtual void vs136();
	virtual void vs137();
	virtual void vs138();
	virtual void vs139();
	virtual void vs140();
	virtual void vs141();
	virtual void vs142();
	virtual void vs143();
	virtual void vs144();
	virtual void vs145();
	virtual void vs146();
	virtual void vs147();
	virtual void vs148();
	virtual void vs149();
	virtual void vs150();
	virtual void vs151();
	virtual void vs152();
	virtual void vs153();
	virtual void vs154();
	virtual void vs155();
	virtual void vs156();
	virtual void vs157();
	virtual void vs158();
	virtual void vs159();
	virtual void vs160();
	virtual void vs161();
	virtual void vs162();
	virtual void vs163();
	virtual void vs164();
	virtual void vs165();
	virtual void vs166();
	virtual void vs167();
	virtual void vs168();
	virtual void vs169();
	virtual void vs170();
	virtual void vs171();
	virtual void vs172();
	virtual void vs173();
	virtual void vs174();
	virtual void vs175();
	virtual void vs176();
	virtual void vs177();
	virtual void vs178();
	virtual void vs179();
	virtual void vs180();
	virtual void vs181();
	virtual void vs182();
	virtual void vs183();
	virtual void vs184();
	virtual void vs185();
	virtual void vs186();
	virtual void vs187();
	virtual void vs188();
	virtual void vs189();
	virtual void vs190();
	virtual void vs191();
	virtual void vs192();
	virtual void vs193();
	virtual void vs194();
	virtual void vs195();
	virtual void vs196();
	virtual void vs197();
	virtual void vs198();
	virtual void vs199();
	virtual void vs200();
	virtual void vs201();
	virtual void vs202();
	virtual void vs203();
	virtual void vs204();
	virtual void vs205();
	virtual void vs206();
	virtual void vs207();
	virtual void vs208();
	virtual void vs209();
	virtual void vs210();
	virtual void vs211();
	virtual void vfunc212(string_t set);
};


inline int GrenEntIdx(int e) { return engine->vfunc35(e); }
struct CGrenSoundV
{
	virtual void v0(); virtual void v1(); virtual void v2();
	virtual void EmitSound(const CRecipientFilter &filter, int iEntIndex, int iChannel, const char *pSample,
		float flVolume, float flAttenuation, int iFlags = 0, int iPitch = 100,
		const Vector *pOrigin = 0, const Vector *pDirection = 0, bool bUpdatePositions = true, float soundtime = 0.0f);
};
inline void GrenEmit(const CRecipientFilter &filter, int iEntIndex, int iChannel, const char *pSample, float flVolume, float flAttenuation)
{
	enginesound->vfunc3(&filter, iEntIndex, iChannel, pSample, flVolume, flAttenuation, 0, 100, 0, 0, 1, 0);
}
// TARGET: CBaseGrenade::vfunc406
void CBaseGrenade::vfunc406(CGameTrace *pTrace, int bitsDamageType)
{
	((CGrenadeExplodeVS *)this)->vfunc212(string_t(0));
	{
		ScopeTrace scope("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540);
		((CCollisionView104296e0 *)((char *)this + 0x270))->AddSolidFlags(4);
	}
	m_nTakeDamage = 0;
	if (pTrace->m_fraction != 1.0)
	{
		Vector vecPos = *(Vector *)pTrace->m_endpos + *(Vector *)pTrace->m_planeNormal * 0.6f;
		vfunc62(&vecPos.x);
	}
	sub_101cf600(this);
	int contents = Grenade_PointContents(vfunc220());
	if (pTrace->m_fraction != 1.0)
	{
		Vector vecNormal = *(Vector *)pTrace->m_planeNormal;
		CSurfDataView *pdata = g_10723944->GetSurfaceData(pTrace->m_surfaceProps);
		CPASFilter filter(vfunc220());
		((CTEExplView *)g_10540528)->Explosion(filter, 0.0,
			vfunc220(),
			!(contents & 0x4030) ? g_1088ae7c : g_1088ae50,
			m_f19b8 * .03,
			25,
			0,
			m_f19b8,
			m_flDamage,
			&vecNormal,
			pdata->m_chMaterial);
	}
	else
	{
		CPASFilter filter(vfunc220());
		((CTEExplView *)g_10540528)->Explosion(filter, 0.0,
			vfunc220(),
			!(contents & 0x4030) ? g_1088ae7c : g_1088ae50,
			m_f19b8 * .03,
			25,
			0,
			m_f19b8,
			m_flDamage);
	}
	sub_101babc0(1, vfunc220(), 0x400, 3.0, 0);
	{
		CUnknown101c26d0 info;
		g_1070ba0c->vfunc33(*info.sub_101c26d0(this, (void *)EHandle_Get(m_hHeld19b0), m_flDamage, bitsDamageType, 0, 0, -1), (const Vector *)vfunc220(), m_f19b8, 0, 0);
	}
	if (enginerandom->vfunc1(0, 1.0f) < 0.5)
		sub_101cfea0(pTrace, 0x1e, 1);
	else
		sub_101cfea0(pTrace, 0x1f, 1);
	float flRndSound = enginerandom->vfunc1(0, 1.0f);
	CPASAttenuationFilter filter2((CEntitySoundOriginView *)this);
	CGrenadeEntIndexView *pv = (CGrenadeEntIndexView *)this;
	switch (enginerandom->vfunc2(0, 2))
	{
	case 0: enginesound->vfunc3(&filter2, GrenEntIdx(m_pEdict2e0), 2, "weapons/debris1.wav", 0.55f, 0.8f, 0, 100, 0, 0, 1, 0); break;
	case 1: enginesound->vfunc3(&filter2, GrenEntIdx(m_pEdict2e0), 2, "weapons/debris2.wav", 0.55f, 0.8f, 0, 100, 0, 0, 1, 0); break;
	case 2: enginesound->vfunc3(&filter2, GrenEntIdx(m_pEdict2e0), 2, "weapons/debris3.wav", 0.55f, 0.8f, 0, 100, 0, 0, 1, 0); break;
	}
	sub_100ac4e0((int)sub_101c0b10, 0, 0);
	m_pfnTouch = 0;
	m_nEffectFlags |= 0x40;
	sub_100b2e30(g_1070d1b0);
	m_field200 = 2;
	m_flNextThink = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x10429f20 size=0xb
#include "CBaseGrenade.h"
void CBaseGrenade::vfunc144(void *unused)
{
	vfunc407();
}
// END FUNCTION

// FUNCTION: 0x10429ff0 size=0x212
#include "CBaseGrenade.h"
#include "UTIL_Trace.h"
#include "CEntitySoundOriginView.h"
#include "CPASAttenuationFilter.h"

void sub_101cdba0(const float *pOrigin, float a, float b, float c, float d, int e, int f);

struct Grenade_trace_t : public CGameTrace
{
	Grenade_trace_t() {}
	~Grenade_trace_t() {}
};

void CBaseGrenade::vfunc407()
{
	Grenade_trace_t tr;
	Vector vecSpot;
	vecSpot = *(Vector *)vfunc220() + Vector(0, 0, 8);
	UTIL_TraceLine_RayCall(vecSpot, vecSpot - Vector(0, 0, 40), 0x400b, this, 0, &tr);
	vfunc406(&tr, 0x40);
	if (vfunc409() != 0.0f)
		sub_101cdba0(vfunc220(), vfunc409(), 150.0f, 1.0f, vfunc410(), 0, 0);
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	int edict = m_pEdict2e0;
	enginesound->vfunc3(&filter, engine->vfunc35(edict), 1, "common/null.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
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
CBaseEntity *CBaseGrenade::vfunc5(unsigned int flags)
{
	sub_1000a67d();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
