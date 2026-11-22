// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 11 blocks
#include "vampire.h"

// FUNCTION: 0x1034e490 size=0x6
#include "datamap.h"
#include "CFogController.h"
namespace lifted {
extern char g_10625e58;
}
datamap_t *CFogController::vfunc82()
{
    return (datamap_t *)&lifted::g_10625e58;
}
// END FUNCTION

// FUNCTION: 0x1034e4b0 size=0x5
int sub_1034e4f0(void);
int g_1093805c = ((int (*)(int))sub_1034e4f0)(0);
// END FUNCTION

// FUNCTION: 0x1034e4f0 size=0x1a
namespace lifted {
extern int g_10625e58;
extern int g_10625e5c;
extern char g_10625e9c;
}
int sub_1034e4f0()
{
    lifted::g_10625e5c = 6;
    lifted::g_10625e58 = (int)&lifted::g_10625e9c;
    return (int)&lifted::g_10625e58;
}
// END FUNCTION

// FUNCTION: 0x1034e520 size=0xbb
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct EntLike
{
	char pad[0x494];
	int m_n494;
};
struct UnknownLike
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual EntLike *GetBaseEntity();
};
struct EdictLike
{
	char pad[0x40];
	UnknownLike *m_pUnk;
};
#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct EngineLike
{
	SL10(a0) SL10(a1) SL10(a2)
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6(); virtual void b7();
	virtual EdictLike *PEntityOfEntIndex(int index);
};
extern EngineLike *g_1070b22c;

struct InputLike
{
	char pad0[8];
	int m_nValue;
	char pad1[0x18 - 0xc];
	int m_nType;
};

void __stdcall sub_1034e520(InputLike *pInput)
{
	EdictLike *pEdict = g_1070b22c->PEntityOfEntIndex(0);
	g_109f3620[*g_109f3680].a = "CBaseEntity::Instance";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	if (!pEdict)
		pEdict = g_1070b22c->PEntityOfEntIndex(0);
	EntLike *pEnt;
	if (pEdict && pEdict->m_pUnk)
		pEnt = pEdict->m_pUnk->GetBaseEntity();
	else
		pEnt = 0;
	--*g_109f3680;
	if (pInput->m_nType == 1)
		pEnt->m_n494 = pInput->m_nValue;
	else
		pEnt->m_n494 = 0;
}
// END FUNCTION

// FUNCTION: 0x1034e610 size=0xbb
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct EntLike
{
	char pad[0x498];
	int m_n498;
};
struct UnknownLike
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual EntLike *GetBaseEntity();
};
struct EdictLike
{
	char pad[0x40];
	UnknownLike *m_pUnk;
};
#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct EngineLike
{
	SL10(a0) SL10(a1) SL10(a2)
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6(); virtual void b7();
	virtual EdictLike *PEntityOfEntIndex(int index);
};
extern EngineLike *g_1070b22c;

struct InputLike
{
	char pad0[8];
	int m_nValue;
	char pad1[0x18 - 0xc];
	int m_nType;
};

void __stdcall sub_1034e610(InputLike *pInput)
{
	EdictLike *pEdict = g_1070b22c->PEntityOfEntIndex(0);
	g_109f3620[*g_109f3680].a = "CBaseEntity::Instance";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	if (!pEdict)
		pEdict = g_1070b22c->PEntityOfEntIndex(0);
	EntLike *pEnt;
	if (pEdict && pEdict->m_pUnk)
		pEnt = pEdict->m_pUnk->GetBaseEntity();
	else
		pEnt = 0;
	--*g_109f3680;
	if (pInput->m_nType == 1)
		pEnt->m_n498 = pInput->m_nValue;
	else
		pEnt->m_n498 = 0;
}
// END FUNCTION

// FUNCTION: 0x1034e700 size=0xa2
#include "CBaseEntity.h"

#define PV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct SEdictUnknown
{
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3();
	virtual CBaseEntity *GetBaseEntity();	// slot 4
};

struct SEdict
{
	char pad[0x40];
	SEdictUnknown *m_pUnknown;	// 0x40
};

// The engine interface viewed as a plain list of slots up to 38.
struct SEngine
{
	PV10(a0) PV10(a1) PV10(a2)
	virtual void a30(); virtual void a31(); virtual void a32(); virtual void a33();
	virtual void a34(); virtual void a35(); virtual void a36(); virtual void a37();
	virtual SEdict *PEntityOfEntIndex(int index);	// slot 38
};

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern SEngine *g_1070b22c;

static inline CBaseEntity *Instance(SEdict *pEdict)
{
	g_109f3620[*g_109f3680].a = "CBaseEntity::Instance";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	if (!pEdict)
		pEdict = g_1070b22c->PEntityOfEntIndex(0);
	CBaseEntity *pEnt = (pEdict && pEdict->m_pUnknown) ? pEdict->m_pUnknown->GetBaseEntity() : 0;
	--*g_109f3680;
	return pEnt;
}

void __stdcall sub_1034e700(int unused)
{
	*((char *)Instance(g_1070b22c->PEntityOfEntIndex(0)) + 0x47c) = 1;
}
// END FUNCTION

// FUNCTION: 0x1034e7e0 size=0xa2
#include "CBaseEntity.h"

#define PV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct SEdictUnknown
{
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3();
	virtual CBaseEntity *GetBaseEntity();	// slot 4
};

struct SEdict
{
	char pad[0x40];
	SEdictUnknown *m_pUnknown;	// 0x40
};

// The engine interface viewed as a plain list of slots up to 38.
struct SEngine
{
	PV10(a0) PV10(a1) PV10(a2)
	virtual void a30(); virtual void a31(); virtual void a32(); virtual void a33();
	virtual void a34(); virtual void a35(); virtual void a36(); virtual void a37();
	virtual SEdict *PEntityOfEntIndex(int index);	// slot 38
};

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern SEngine *g_1070b22c;

static inline CBaseEntity *Instance(SEdict *pEdict)
{
	g_109f3620[*g_109f3680].a = "CBaseEntity::Instance";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	if (!pEdict)
		pEdict = g_1070b22c->PEntityOfEntIndex(0);
	CBaseEntity *pEnt = (pEdict && pEdict->m_pUnknown) ? pEdict->m_pUnknown->GetBaseEntity() : 0;
	--*g_109f3680;
	return pEnt;
}

void __stdcall sub_1034e7e0(int unused)
{
	*((char *)Instance(g_1070b22c->PEntityOfEntIndex(0)) + 0x47c) = 0;
}
// END FUNCTION

// FUNCTION: 0x1034e8c0 size=0xa8
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "inputdata_t.h"
#include "ScopeTrace.h"

#define PV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct SEdictUnknown
{
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3();
	virtual CBaseEntity *GetBaseEntity();	// slot 4
};

struct SEdict
{
	char pad[0x40];
	SEdictUnknown *m_pUnknown;	// 0x40
};

struct SEngine
{
	PV10(a0) PV10(a1) PV10(a2)
	virtual void a30(); virtual void a31(); virtual void a32(); virtual void a33();
	virtual void a34(); virtual void a35(); virtual void a36(); virtual void a37();
	virtual SEdict *PEntityOfEntIndex(int index);	// slot 38
};

extern SEngine *g_1070b22c;

static inline CBaseEntity *Instance(SEdict *pEdict)
{
	ScopeTrace scope("CBaseEntity::Instance", g_106b8540);
	if (!pEdict)
		pEdict = g_1070b22c->PEntityOfEntIndex(0);
	return (pEdict && pEdict->m_pUnknown) ? pEdict->m_pUnknown->GetBaseEntity() : 0;
}

struct color32_1034e8c0 { unsigned char r, g, b, a; };
struct Variant1034e8c0
{
	color32_1034e8c0 rgbaVal;
	char pad[0x10 - 4];
	int fieldType;
	color32_1034e8c0 Color32() const { return rgbaVal; }
};
struct InputData1034e8c0
{
	void *pActivator;
	void *pCaller;
	Variant1034e8c0 value;
};
struct CWorldView1034e8c0
{
	char pad[0x48c];
	color32_1034e8c0 m_color;
};
void __stdcall sub_1034e8c0(InputData1034e8c0 &inputdata)
{
	CWorldView1034e8c0 *pWorld = (CWorldView1034e8c0 *)Instance(g_1070b22c->PEntityOfEntIndex(0));
	pWorld->m_color = inputdata.value.Color32();
}
// END FUNCTION

// FUNCTION: 0x1034e9a0 size=0xa8
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "inputdata_t.h"
#include "ScopeTrace.h"

struct IServerUnknownSlots { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void *GetBaseEntity(); };
struct EdictT { char pad[0x40]; IServerUnknownSlots *m_pUnk; };
struct Ent { char pad[0x490]; int m_val; };

inline Ent *Instance(EdictT *pent)
{
	ScopeTrace scope("CBaseEntity::Instance", g_106b8540);
	if (!pent)
		pent = (EdictT *)engine->vfunc38(0);
	return (pent && pent->m_pUnk) ? (Ent *)pent->m_pUnk->GetBaseEntity() : 0;
}
struct color32 { unsigned char r, g, b, a; };
struct VariantView { union { int iVal; color32 rgbaVal; }; color32 Color32() const { return rgbaVal; } };
struct InputView { char pad[8]; VariantView value; };
struct WorldView { char pad[0x490]; color32 m_FogColor2; };

void __stdcall sub_1034e9a0(inputdata_t &in)
{
	WorldView *pWorld = (WorldView *)Instance((EdictT *)engine->vfunc38(0));
	pWorld->m_FogColor2 = ((InputView &)in).value.Color32();
}
// END FUNCTION

// FUNCTION: 0x1034ea80 size=0x3e3
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CFogController.h"
#include "CWorld.h"
#include "DebugOverlay.h"
#include "ScopeTrace.h"
#include "Tier1.h"

CBaseEntity *sub_100ab250(void *pEdict);

struct fogcolor32 { unsigned char r, g, b, a; };

inline void DebugEntityText(int edict, int line, const char *pszText)
{
	sub_101434b0(engine->vfunc35(edict), line, pszText, 0, 255, 255, 255, 255);
}

inline int SnprintfF(int (*fn)(char *, int, const char *, ...), char *buf, const char *fmt, double f)
{
	return fn(buf, 512, fmt, f);
}

int CFogController::vfunc124()
{
	long text_offset = this->CBaseEntity::vfunc124();
	if (m_fDebugOverlays224 & 1) {
		CWorld *pWorld;
		char tempstr[512];
		void *pEdict = engine->vfunc38(0);
		{
			ScopeTrace trace("CBaseEntity::Instance", g_106b8540);
			if (!pEdict)
				pEdict = engine->vfunc38(0);
			pWorld = (CWorld *)sub_100ab250(pEdict);
		}
		const char *pszState = pWorld->m_bColdWorld ? "On" : "Off";
		int (*Q_snprintf)(char *, int, const char *, ...) = g_109f388c;
		Q_snprintf(tempstr, sizeof(tempstr), "State: %s", pszState);
		DebugEntityText(m_pEdict2e0, text_offset, tempstr);
		double d = pWorld->m_flFogStart;
		text_offset++;
		Q_snprintf(tempstr, sizeof(tempstr), "Start: %3.0f", d);
		DebugEntityText(m_pEdict2e0, text_offset, tempstr);
		d = pWorld->m_flFogEnd;
		text_offset++;
		Q_snprintf(tempstr, sizeof(tempstr), "End  : %3.0f", d);
		DebugEntityText(m_pEdict2e0, text_offset, tempstr);
		text_offset += 1;
		fogcolor32 color = *(fogcolor32 *)&pWorld->m_nFogColor1;
		int t0 = color.r; Q_snprintf(tempstr, sizeof(tempstr), "1) Red  : %i", t0);
		DebugEntityText(m_pEdict2e0, text_offset, tempstr);
		text_offset++;
		Q_snprintf(tempstr, sizeof(tempstr), "1) Green: %i", color.g);
		DebugEntityText(m_pEdict2e0, text_offset, tempstr);
		text_offset++;
		Q_snprintf(tempstr, sizeof(tempstr), "1) Blue : %i", color.b);
		DebugEntityText(m_pEdict2e0, text_offset, tempstr);
		text_offset++;
		color = *(fogcolor32 *)&pWorld->m_nFogColor2;
		Q_snprintf(tempstr, sizeof(tempstr), "2) Red  : %i", color.r);
		DebugEntityText(m_pEdict2e0, text_offset, tempstr);
		text_offset++;
		Q_snprintf(tempstr, sizeof(tempstr), "2) Green: %i", color.g);
		DebugEntityText(m_pEdict2e0, text_offset, tempstr);
		text_offset++;
		Q_snprintf(tempstr, sizeof(tempstr), "2) Blue : %i", color.b);
		DebugEntityText(m_pEdict2e0, text_offset, tempstr);
		text_offset++;
	}
	return text_offset;
}
// END FUNCTION

// FUNCTION: 0x1034ef70 size=0x1e
#include "CFogController.h"

void sub_100aa7b0(void *p);

// TARGET: CFogController::vfunc5
CBaseEntity *CFogController::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
