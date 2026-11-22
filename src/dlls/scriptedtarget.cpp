// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 17 blocks
#include "vampire.h"

// FUNCTION: 0x1034d410 size=0x8
#include "CScriptedTarget.h"
// TARGET: CScriptedTarget::sub_1034d410
unsigned char CScriptedTarget::sub_1034d410()
{
    unsigned char b;
    b = ((CBaseEntity *)this)->CBaseEntity::vfunc117();
    b &= 0xfd;
    return b;
}
// END FUNCTION

// FUNCTION: 0x1034d430 size=0x6
#include "datamap.h"
#include "CScriptedTarget.h"
namespace lifted {
extern char g_106257e8;
}
datamap_t * CScriptedTarget::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_106257e8);
}
// END FUNCTION

// FUNCTION: 0x1034d450 size=0x5
int * sub_1034d490(void);
int * g_10938050 = ((int * (*)(int))sub_1034d490)(0);
// END FUNCTION

// FUNCTION: 0x1034d490 size=0xb0
class ISaveRestoreOps;
struct datamap_t;
struct typedescription_t {
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    ISaveRestoreOps *pSaveRestoreOps;
    void *inputFunc;
    datamap_t *td;
    int fieldSizeInBytes;
    int unk;
};
extern ISaveRestoreOps *g_1055dc70;
extern int g_106257e8[2];
void sub_1000eae3();
void sub_10012ef9();
void sub_100112cf();

int *sub_1034d490()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0xe, "m_vLastPosition", {0x5f44, 0}, 1, 2 },
        { 4, "m_iDisabled", {0x5f50, 0}, 1, 6, "StartDisabled" },
        { 2, "m_iszEntity", {0x5f54, 0}, 1, 6, "m_iszEntity" },
        { 1, "m_flRadius", {0x5f58, 0}, 1, 6, "m_flRadius" },
        { 4, "m_nMoveSpeed", {0x5f5c, 0}, 1, 6, "MoveSpeed" },
        { 1, "m_flPauseDuration", {0x5f60, 0}, 1, 6, "PauseDuration" },
        { 0xf, "m_flPauseDoneTime", {0x5f64, 0}, 1, 2 },
        { 1, "m_flEffectDuration", {0x5f68, 0}, 1, 6, "EffectDuration" },
        { 0, "CScriptedTargetScriptThink", {0, 0}, 1, 0x20, 0, 0, (void *)sub_1000eae3 },
        { 0, "InputEnable", {0, 0}, 1, 8, "Enable", 0, (void *)sub_10012ef9 },
        { 0, "InputDisable", {0, 0}, 1, 8, "Disable", 0, (void *)sub_100112cf },
        { 10, "m_AtTarget", {0x5f6c, 0}, 1, 0x16, "AtTarget", g_1055dc70 },
        { 10, "m_LeaveTarget", {0x5f84, 0}, 1, 0x16, "LeaveTarget", g_1055dc70 },
    };
    g_106257e8[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_106257e8[0] = (int)&dataDesc[1];
    return g_106257e8;
}
// END FUNCTION

// FUNCTION: 0x1034d570 size=0x8
namespace lifted {
int sub_10012be3();
}
int __stdcall sub_1034d570(int a0)
{
    return lifted::sub_10012be3();
}
// END FUNCTION

// FUNCTION: 0x1034d590 size=0x8
struct CUnknown1034d590 { void sub_1000a1b4(); void sub_1034d590(int); };
void CUnknown1034d590::sub_1034d590(int) { sub_1000a1b4(); }
// END FUNCTION

// FUNCTION: 0x1034d5b0 size=0x50
#include "CScriptedTarget.h"
#include "CEntityVSlots.h"
void sub_1000eae3();

void CScriptedTarget::sub_1034d5b0()
{
	float *pOrigin = &((CEntityVSlots *)this)->slot217()->x;
	m_vecOrigin5f44[0] = pOrigin[0];
	m_vecOrigin5f44[1] = pOrigin[1];
	m_vecOrigin5f44[2] = pOrigin[2];
	sub_100ac4e0((int)sub_1000eae3, 0, 0);
	m_n5f50 = 0;
	m_flNextThink = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x1034d620 size=0x8c
#include "CUnknown1034d620.h"

extern CGlobalEntityList *g_10566458;
extern int g_10938054;

static inline bool HandleValid(const unsigned int *ph)
{
	if (*ph == 0xffffffff)
		return false;
	CGlobalEntityList_Slot *s = &g_10566458->m_Slots[*ph & 0x1fff];
	return s->m_Serial == (int)(*ph >> 13) && s->m_pEntity;
}

static inline CUnknown1034d620_Ent *HandleGet(const unsigned int *ph)
{
	if (*ph != 0xffffffff) {
		CGlobalEntityList_Slot *s = &g_10566458->m_Slots[*ph & 0x1fff];
		if (s->m_Serial == (int)(*ph >> 13))
			return (CUnknown1034d620_Ent *)s->m_pEntity;
	}
	return 0;
}

void CUnknown1034d620::sub_1034d620()
{
	sub_10007fe5(0, 0, 0);
	m_field5f50 = 1;
	if (HandleValid(&m_hEntity))
		HandleGet(&m_hEntity)->m_pTarget->vfunc366(g_10938054, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x1034d6e0 size=0xdb
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CScriptedTarget.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

#define SV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)

// The entity's virtual table up to slot 217 (GetAbsOrigin).
struct CScriptedTargetSlots
{
	SV100(a) SV100(b) SV10(c)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6();
	virtual float *vfunc217();
};

int sub_10325e70();
extern int g_10938054;

// TARGET: CScriptedTarget::vfunc103
void CScriptedTarget::vfunc103()
{
    if (g_10938054 == 0)
        g_10938054 = sub_10325e70();
    {
        ScopeTrace trace("CBaseEntity::SetSolid", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
        ((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
    }
    sub_100b3b00();
    float *pOrigin = ((CScriptedTargetSlots *)this)->vfunc217();
    m_vecOrigin5f44[0] = pOrigin[0];
    m_vecOrigin5f44[1] = pOrigin[1];
    m_vecOrigin5f44[2] = pOrigin[2];
    if (m_n5f50 == 0)
        sub_1034d5b0();
    sub_100b3840(0x10);
}
// END FUNCTION

// FUNCTION: 0x1034d800 size=0x2b7
#include "CAI_BaseNPC.h"
#include "CEntityVSlots.h"
#include "CGameTrace.h"
#include "CScriptedTarget.h"
#include "Ray_t.h"
#include "UTIL_Trace.h"
#include "Vector.h"
void __cdecl sub_10146570(const Vector *pStart, const Vector *pEnd, int r, int g, int b, int a, float flWidth);
extern void (__cdecl *g_109f362c)(const char *pszFormat, ...);

struct CUnk1034d620View
{
	void sub_1034d620();
};

CScriptedTarget *CScriptedTarget::sub_1034d800()
{
	if ( m_flPauseDoneTime == g_104454c4 )
	{
		m_flPauseDoneTime = m_flPauseDuration + gpGlobals->curtime;
		m_out5f6c.sub_100cd660( m_hUser5ce4.Get(), this, 0.0f );
	}

	if ( gpGlobals->curtime >= m_flPauseDoneTime )
	{
		m_flPauseDoneTime = 0;
		m_out5f84.sub_100cd660( m_hUser5ce4.Get(), this, 0.0f );

		CScriptedTarget *pNextTarget = (CScriptedTarget *)( (CEntityVSlots *)this )->slot172();
		if ( !pNextTarget )
		{
			( (CUnk1034d620View *)this )->sub_1034d620();
			( (CAI_BaseNPC *)this )->sub_10279cc0( 0 );
		}
		else
		{
			CGameTrace trace;
			UTIL_TraceLine( *( (CEntityVSlots *)this )->slot217(), *( (CEntityVSlots *)pNextTarget )->slot217(), 0x46004003, this, 0, &trace );

			if ( trace.m_fraction != 1.0 )
				g_109f362c( "WARNING: Scripted Target from (%s) to (%s) is occluded!\n", sub_1000b5cd(), pNextTarget->sub_1000b5cd() );

			pNextTarget->sub_1034d5b0();
			( (CAI_BaseNPC *)pNextTarget )->sub_10279cc0( m_hUser5ce4.Get() );
			( (CAI_BaseNPC *)this )->sub_10279cc0( 0 );
			( (CUnk1034d620View *)this )->sub_1034d620();
		}
		return pNextTarget;
	}
	return this;
}
// END FUNCTION

// FUNCTION: 0x1034db70 size=0x190
#include "Vector.h"
#include "CBaseEntity.h"
#include "CUnknown1034d620.h"

#define SV1(n) virtual void n();
#define SV10(p) SV1(p##0) SV1(p##1) SV1(p##2) SV1(p##3) SV1(p##4) SV1(p##5) SV1(p##6) SV1(p##7) SV1(p##8) SV1(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)

struct CSlotView217
{
	SV100(a) SV100(b) SV10(c0) SV1(c10) SV1(c11) SV1(c12) SV1(c13) SV1(c14) SV1(c15) SV1(c16)
	virtual float *vfunc217();
};

struct CUnknown101cccf0
{
	int m_nCurrent;
	int m_nCount;
	CBaseEntity *m_pList[0x100];
	CUnknown101cccf0 *sub_101cccf0(int a, int b, int c, int d);
};

int __fastcall sub_101ccd40(int *pQuery);
int __cdecl _strcmpi(const char *, const char *);
extern char g_106b8540[];
extern CGlobalEntityList g_106eb5d8;
extern int g_10938054;

CBaseEntity *CUnknown1034d620::sub_1034db70()
{
	const char *pszName = m_pszTargetName ? m_pszTargetName : g_106b8540;
	CBaseEntity *pFound = g_106eb5d8.sub_100f7770(0, pszName, 0, 0);
	if (pFound && (pFound->sub_100b3700() & 0x2000) && ((CUnknown1034d620_Ent *)pFound)->m_pTarget->vfunc366(g_10938054, 0, (int)this))
		return pFound;

	CBaseEntity *pBest = 0;
	float flBest = 16384.0f;
	CUnknown101cccf0 query;
	query.sub_101cccf0((int)((CSlotView217 *)this)->vfunc217(), m_nSearchRadius, 0, 0);
	for (CBaseEntity *pEnt = (CBaseEntity *)sub_101ccd40(&query.m_nCurrent); pEnt; pEnt = (CBaseEntity *)sub_101ccd40(&query.m_nCurrent))
	{
		if (pEnt->sub_100b3700() & 0x2000)
		{
			const char *pszMine = m_pszTargetName ? m_pszTargetName : g_106b8540;
			const char *pszOther = pEnt->m_classname11c ? pEnt->m_classname11c : g_106b8540;
			if (_strcmpi(pszOther, pszMine) == 0)
			{
				Vector vecDelta = *(Vector *)((CSlotView217 *)pEnt)->vfunc217() - *(Vector *)((CSlotView217 *)this)->vfunc217();
				float flDist = vecDelta.Length();
				if (flDist < flBest)
				{
					flBest = flDist;
					pBest = pEnt;
				}
			}
		}
		query.m_nCurrent++;
	}
	if (pBest && ((CUnknown1034d620_Ent *)pBest)->m_pTarget->vfunc366(g_10938054, 0, (int)this))
		return pBest;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1034dd70 size=0x5f
#include "CUnknown1034d620.h"
#include "CAI_BaseNPC.h"
#include "CEHandleGet.h"
#include "globalvars.h"

// TARGET: CUnknown1034d620::sub_1034dd70
void CUnknown1034d620::sub_1034dd70()
{
	if (!EHandle_Get(m_hEntity))
	{
		m_n5f64 = 0;
		((CAI_BaseNPC *)this)->sub_10279cc0(sub_1034db70());
	}
	m_flNextThink = gpGlobals->curtime + 0.1;
}
// END FUNCTION

// FUNCTION: 0x1034ddf0 size=0x1f1
#include "CScriptedTarget.h"
#include "ehandle.h"

__declspec(dllimport) char *Q_strncpy(char *pDest, const char *pSrc, int maxLen);
__declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);
void sub_101434b0(int nEntIndex, int nLine, const char *pszText, int nDuration, int r, int g, int b, int a);

#define SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct SScriptedTargetSlots
{
	SLOTS10(a0) SLOTS10(a1) SLOTS10(a2) SLOTS10(a3) SLOTS10(a4) SLOTS10(a5) SLOTS10(a6) SLOTS10(a7) SLOTS10(a8) SLOTS10(a9)
	SLOTS10(b0) SLOTS10(b1) SLOTS10(b2) SLOTS10(b3) SLOTS10(b4) SLOTS10(b5) SLOTS10(b6)
	virtual void c70();
	virtual void c71();
	virtual CBaseEntity *vfunc172();
};

int CScriptedTarget::vfunc124()
{
	char text[512];
	int nLine = CBaseEntity::vfunc124();
	if (m_pad0224[0] & 1) {
		if (m_n5f50)
			Q_strncpy(text, "State: Off", sizeof(text));
		else
			Q_strncpy(text, "State: On", sizeof(text));
		int nEdict = m_pEdict2e0;
		sub_101434b0(engine->vfunc35(nEdict), nLine, text, 0, 255, 255, 255, 255);
		nLine++;
		CBaseEntity *pNext = ((SScriptedTargetSlots *)this)->vfunc172();
		if (pNext)
			Q_snprintf(text, sizeof(text), "Next: %s", pNext->sub_1000b5cd());
		else
			Q_strncpy(text, "Next: -NONE-", sizeof(text));
		nEdict = m_pEdict2e0;
		sub_101434b0(engine->vfunc35(nEdict), nLine, text, 0, 255, 255, 255, 255);
		nLine++;
		if (m_hUser5ce4.Get())
			Q_snprintf(text, sizeof(text), "User: %s", m_hUser5ce4.Get()->sub_1000b5cd());
		else if (m_n5f50)
			Q_strncpy(text, "User: -NONE-", sizeof(text));
		else
			Q_strncpy(text, "User: -LOOKING-", sizeof(text));
		nEdict = m_pEdict2e0;
		sub_101434b0(engine->vfunc35(nEdict), nLine, text, 0, 255, 255, 255, 255);
		nLine++;
	}
	return nLine;
}
// END FUNCTION

// FUNCTION: 0x1034e070 size=0x21d
#include "CScriptedTarget.h"
#include "CEntityDebugView.h"
#include "CEHandleGet.h"

void sub_10142aa0(float *pOrigin, const Vector &vecMins, const Vector &vecMaxs, int r, int g, int b, int a, int c);
void sub_10143b70(float *pOrigin, const Vector &vecMins, const Vector &vecMaxs, int r, int g, int b, int a, float flDuration);
void sub_10142e90(float *pStart, float *pEnd, int r, int g, int b, int noDepth, int duration);

void CScriptedTarget::vfunc123()
{
	CEntityDebugView *pView = (CEntityDebugView *)this;
	if (*(unsigned char *)((char *)this + 0x224) & 0x24) {
		if (m_n5f50) {
			sub_10142aa0(pView->vfunc217(), Vector(-5.0f, -5.0f, -5.0f), Vector(5.0f, 5.0f, 5.0f), 200, 100, 100, 0, 0);
		} else {
			sub_10143b70(m_vecOrigin5f44, Vector(-8.0f, -8.0f, -8.0f), Vector(8.0f, 8.0f, 8.0f), 255, 0, 0, 1, 0.1f);
			sub_10142aa0(pView->vfunc217(), Vector(-5.0f, -5.0f, -5.0f), Vector(5.0f, 5.0f, 5.0f), 255, 0, 0, 0, 0);
			sub_10142e90(pView->vfunc217(), m_vecOrigin5f44, 255, 0, 0, 1, 0);
		}
		CEntityDebugView *pNext = pView->vfunc172();
		if (pNext)
			sub_10142e90(pView->vfunc217(), pNext->vfunc217(), 200, 100, 100, 1, 0);
		if (EHandle_Get(m_hUser5ce4)) {
			float vecUser[3];
			CEntityDebugView *pUser = (CEntityDebugView *)EHandle_Get(m_hUser5ce4);
			sub_10142e90(pView->vfunc217(), pUser->vfunc193(vecUser), 0, 255, 0, 1, 0);
		}
	}
	CBaseEntity::vfunc123();
}
// END FUNCTION

// FUNCTION: 0x1034e320 size=0x35
#include "CScriptedTarget.h"

void sub_1009d940(void *p, int n);
void sub_1009d960(void *p, int n);

int CScriptedTarget::vfunc126(int a)
{
	void *member = (char *)this + 0x5f64;
	sub_1009d940(member, 3);
	int r = sub_1000d279(a);
	sub_1009d960(member, 3);
	return r;
}
// END FUNCTION

// FUNCTION: 0x1034e370 size=0x28
#include "CScriptedTarget.h"
void __cdecl sub_10015311(void *p, int mode);

// TARGET: CScriptedTarget::vfunc127
int CScriptedTarget::vfunc127(int a)
{
	int r = sub_1000b163(a);
	sub_10015311((char *)this + 0x5f64, 3);
	return r;
}
// END FUNCTION

// FUNCTION: 0x1034e3b0 size=0x41
#include "CScriptedTarget.h"
#include "COutputEvent.h"
#include "CAI_BaseNPC.h"

void sub_100aa7b0(void *p);

CBaseEntity *CScriptedTarget::vfunc5(unsigned int flags)
{
	((COutputEvent *)((char *)this + 0x5f9c))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x5f84))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x5f6c))->sub_100cd2d0();
	((CAI_BaseNPC *)this)->sub_1000c9cd();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
