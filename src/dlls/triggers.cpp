// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 194 blocks
#include "vampire.h"

// FUNCTION: 0x101c4980 size=0x6
#include "datamap.h"
#include "CBaseTrigger.h"
namespace lifted {
extern char g_1059d570;
}
datamap_t * CBaseTrigger::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059d570);
}
// END FUNCTION

// FUNCTION: 0x101c49a0 size=0x5
int * sub_101c49e0(void);
int * g_1072cf98 = ((int * (*)(int))sub_101c49e0)(0);
// END FUNCTION

// FUNCTION: 0x101c49e0 size=0xb0
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
extern int g_1059d570[2];
void sub_1000432c();
void sub_1000439a();
void sub_10004386();
void sub_10004318();
void sub_1000429b();
void sub_100043bd();
void sub_1000439f();
void sub_1000431d();
void sub_100042a0();

int *sub_101c49e0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 2, "m_iFilterName", {0x560, 0}, 1, 6, "filtername" },
        { 5, "m_bDisabled", {0x55c, 0}, 1, 6, "StartDisabled" },
        { 0, "InputEnable", {0, 0}, 1, 8, "Enable", 0, (void *)sub_1000432c },
        { 0, "InputDisable", {0, 0}, 1, 8, "Disable", 0, (void *)sub_1000439a },
        { 0, "InputToggle", {0, 0}, 1, 8, "Toggle", 0, (void *)sub_10004386 },
        { 0, "InputToggleFlagClient", {0, 0}, 1, 8, "ToggleFlagClient", 0, (void *)sub_10004318 },
        { 0, "InputToggleFlagNPC", {0, 0}, 1, 8, "ToggleFlagNPC", 0, (void *)sub_1000429b },
        { 0, "InputEnableFlagClient", {0, 0}, 1, 8, "EnableFlagClient", 0, (void *)sub_100043bd },
        { 0, "InputEnableFlagNPC", {0, 0}, 1, 8, "EnableFlagNPC", 0, (void *)sub_1000439f },
        { 0, "InputDisableFlagClient", {0, 0}, 1, 8, "DisableFlagClient", 0, (void *)sub_1000431d },
        { 0, "InputDisableFlagNPC", {0, 0}, 1, 8, "DisableFlagNPC", 0, (void *)sub_100042a0 },
        { 10, "m_OnStartTouch", {0x568, 0}, 1, 0x16, "OnStartTouch", g_1055dc70 },
        { 10, "m_OnEndTouch", {0x580, 0}, 1, 0x16, "OnEndTouch", g_1055dc70 },
    };
    g_1059d570[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1059d570[0] = (int)&dataDesc[1];
    return g_1059d570;
}
// END FUNCTION

// FUNCTION: 0x101c4ac0 size=0x69
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000d5ee(GP *);
void __fastcall sub_10002ddd(void *);
extern int vt_1047d08c;
extern char g_1059f658[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: trigger
DLL_EXPORT GP *trigger()
{
	GP *p = (GP *)sub_1000db89(0x598);
	if (p) {
		sub_1000d5ee(p);
		*((int *)p + 0x159) = -1;
		sub_10002ddd((char *)p + 0x568);
		sub_10002ddd((char *)p + 0x580);
		*(int **)p = &vt_1047d08c;
	} else {
		p = 0;
	}
	p->name(g_1059f658);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101c4b50 size=0x8
#include "CBaseTrigger.h"
// TARGET: CBaseTrigger::sub_101c4b50
unsigned char CBaseTrigger::sub_101c4b50()
{
    unsigned char b;
    b = ((CBaseEntity *)this)->CBaseEntity::vfunc117();
    b &= 0xfd;
    return b;
}
// END FUNCTION

// FUNCTION: 0x101c4b70 size=0x3
#include "CBaseTrigger.h"

void CBaseTrigger::vfunc250(int a, int b, int c, int d, int e)
{
}
// END FUNCTION

// FUNCTION: 0x101c4b90 size=0x3
#include "CBaseTrigger.h"

void CBaseTrigger::vfunc141(class CVDmg_t *pInfo, const Vector *pDir, struct CGameTrace *pTrace)
{
}
// END FUNCTION

// FUNCTION: 0x101c4bb0 size=0x8
#include "CBaseTrigger.h"

void CBaseTrigger::vfunc241(int unused)
{
	sub_101c4bf0();
}
// END FUNCTION

// FUNCTION: 0x101c4bd0 size=0x8
#include "CBaseTrigger.h"

void CBaseTrigger::vfunc242(int unused)
{
	sub_101c4dd0();
}
// END FUNCTION

// FUNCTION: 0x101c4bf0 size=0x113
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseTrigger.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

struct SolidFlagBits
{
	unsigned short f0 : 1;
	unsigned short f1 : 1;
	unsigned short f2 : 1;
	unsigned short f3 : 1;
};

// TARGET: CBaseTrigger::sub_101c4bf0
void CBaseTrigger::sub_101c4bf0()
{
	unsigned char isSet;
	{
		ScopeTrace trace("CBaseEntity::IsSolidFlagSet", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
		isSet = ((SolidFlagBits *)((char *)this + 0x2b4))->f3;
	}
	if (!isSet)
	{
		{
			ScopeTrace trace("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540);
			CCollisionProperty *pColl = (CCollisionProperty *)((char *)this + 0x270);
			pColl->sub_100dc580(*(unsigned short *)((char *)pColl + 0x44) | 8);
		}
		sub_100a53d0(0);
	}
	*(char *)((char *)this + 0x55c) = 0;
}
// END FUNCTION

// FUNCTION: 0x101c4d60 size=0x4b
#include "CBaseTrigger.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList g_106eb5d8;

// TARGET: CBaseTrigger::vfunc113
void CBaseTrigger::vfunc113()
{
	if (m_iFilterName) {
		CBaseEntity *pFilter = g_106eb5d8.sub_100f7770(0, m_iFilterName, 0, 0);
		if (pFilter)
			m_i564 = *pFilter->vfunc1();
		else
			m_i564 = -1;
	}
	CBaseEntity::vfunc113();
}
// END FUNCTION

// FUNCTION: 0x101c4dd0 size=0x113
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseTrigger.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

struct SolidFlagBits
{
	unsigned short f0 : 1;
	unsigned short f1 : 1;
	unsigned short f2 : 1;
	unsigned short f3 : 1;
};

// TARGET: CBaseTrigger::sub_101c4dd0
void CBaseTrigger::sub_101c4dd0()
{
	unsigned char isSet;
	{
		ScopeTrace trace("CBaseEntity::IsSolidFlagSet", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
		isSet = ((SolidFlagBits *)((char *)this + 0x2b4))->f3;
	}
	if (isSet)
	{
		{
			ScopeTrace trace("CBaseEntity::RemoveSolidFlags", m_name26c ? m_name26c : g_106b8540);
			CCollisionProperty *pColl = (CCollisionProperty *)((char *)this + 0x270);
			pColl->sub_100dc580(*(unsigned short *)((char *)pColl + 0x44) & ~8);
		}
		sub_100a53d0(0);
	}
	*(char *)((char *)this + 0x55c) = 1;
}
// END FUNCTION

// FUNCTION: 0x101c4f40 size=0xff
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseTrigger.h"
#include "ScopeTrace.h"

extern "C" __declspec(dllimport) char *Q_strncpy(char *dest, const char *src, int maxLen);
void sub_101434b0(int entIndex, int line, const char *text, int a, int r, int g, int b, int alpha);

int CBaseTrigger::vfunc124()
{
	char text[256];
	int line = CBaseEntity::vfunc124();
	if (((unsigned char *)this)[0x224] & 1) {
		bool bEnabled;
		{
			ScopeTrace trace("CBaseEntity::IsSolidFlagSet", m_name26c ? m_name26c : g_106b8540);
			bEnabled = (((unsigned char *)this)[0x2b4] >> 3) & 1;
		}
		if (bEnabled)
			Q_strncpy(text, "State: Enabled", 255);
		else
			Q_strncpy(text, "State: Disabled", 255);
		int edict = m_pEdict2e0;
		sub_101434b0(engine->vfunc35(edict), line, text, 0, 255, 255, 255, 255);
		line++;
	}
	return line;
}
// END FUNCTION

// FUNCTION: 0x101c5080 size=0x2a0
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseTrigger.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "CEHandleGet.h"
#include "ScopeTrace.h"
#include "Vector.h"

extern float g_1070d9d0[];	// vec3_origin

class CTriggerBrushConVar
{
public:
	virtual void vfunc0();
	virtual char vfunc1();
	char m_pad0004[0x2c - 4];
	int m_n2c;
};

extern CTriggerBrushConVar *g_1072cfcc;

void CBaseTrigger::sub_101c5080()
{
	CCollisionProperty *pCollision;

	if ( *(Vector *)( (CEntityVSlots *)this )->slot221() != *(Vector *)g_1070d9d0 )
		( (CEntityVSlots *)this )->slot171();

	CBaseEntity *pParent = (CBaseEntity *)EHandle_Get( m_hTouch254 );

	{
		ScopeTrace st( "CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540 );
		pCollision = (CCollisionProperty *)( (char *)this + 0x270 );
		pCollision->sub_100dc480( pParent ? 6 : 1 );
	}
	{
		ScopeTrace st( "CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540 );
		pCollision->AddSolidFlags( 4 );
	}
	if ( m_bDisabled )
	{
		ScopeTrace st( "CBaseEntity::RemoveSolidFlags", m_name26c ? m_name26c : g_106b8540 );
		pCollision->sub_100dc580( pCollision->m_usSolidFlags & ~8 );
	}
	else
	{
		ScopeTrace st( "CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540 );
		pCollision->AddSolidFlags( 8 );
	}

	( (CEntityVSlots *)this )->slot93( 0, 0 );

	int nModel;
	const char *pszModel = *( (CEntityVSlots *)this )->slot9( &nModel );
	( (CEntityVSlots *)this )->slot105( pszModel ? pszModel : g_106b8540 );

	if ( !( m_flags204 & 0x10 ) )
	{
		if ( g_1072cfcc->vfunc1() || g_1072cfcc->m_n2c == 0 )
			m_nEffectFlags |= 0x40;
	}
}
// END FUNCTION

// FUNCTION: 0x101c53d0 size=0x3f
#include "vampire.h"

#define CSV_ROW(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CEntSlot94View
{
	CSV_ROW(r0)
	CSV_ROW(r1)
	CSV_ROW(r2)
	CSV_ROW(r3)
	CSV_ROW(r4)
	CSV_ROW(r5)
	CSV_ROW(r6)
	CSV_ROW(r7)
	CSV_ROW(r8)
	virtual void r90();
	virtual void r91();
	virtual int vfunc92();
	virtual void r93();
	virtual int vfunc94();
};

// TARGET: sub_101c53d0
bool __stdcall sub_101c53d0(void *pEnt)
{
	if ((unsigned char)(*(unsigned int *)((char *)pEnt + 0x4c) >> 3) & 1)
	{
		return true;
	}
	if (((CEntSlot94View *)pEnt)->vfunc92() == 1)
	{
		if (((CEntSlot94View *)pEnt)->vfunc94() == 8)
		{
			return true;
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x101c5420 size=0x26
// TARGET: sub_101c5420
bool __stdcall sub_101c5420(void *pEnt)
{
    void **vt = *(void ***)pEnt;
    if (((int (__fastcall *)(void *))vt[94])(pEnt) == 7)
        return true;
    unsigned int f = *(unsigned int *)((char *)pEnt + 0x4c);
    bool b = (f >> 13) & 1; return b;
}
// END FUNCTION

// FUNCTION: 0x101c5460 size=0xe2
#include "CBaseTrigger.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList *g_10566458;

#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
struct CFilterSlotsX {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV10(10) SV10(11) SV10(12) SV10(13) SV10(14) SV10(15) SV10(16) SV10(17) SV10(18) SV10(19)
	SV10(20) SV10(21) SV10(22) SV10(23)
	SV(240)
	virtual bool s241(CBaseEntity *pOther);
};

static inline CFilterSlotsX *ResolveFilter(unsigned int h)
{
	if (h != 0xffffffff) {
		CGlobalEntityList_Slot *slot = &g_10566458->m_Slots[h & 0x1fff];
		if (slot->m_Serial == (int)(h >> 13))
			return (CFilterSlotsX *)slot->m_pEntity;
	}
	return 0;
}

bool CBaseTrigger::sub_101c5460(CBaseEntity *pOther)
{
	if (((m_flags204 & 1) && (pOther->sub_100b3700() & 0x80))
		|| ((m_flags204 & 2) && (pOther->sub_100b3700() & 0x2000))
		|| ((m_flags204 & 4) && sub_101c53d0(pOther))
		|| ((m_flags204 & 8) && sub_101c5420(pOther))) {
		if (!ResolveFilter(*(unsigned int *)&m_i564))
			return true;
		return ResolveFilter(*(volatile unsigned int *)&m_i564)->s241(pOther);
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x101c5590 size=0x26
#include "CBaseTrigger.h"

struct CBaseTriggerSub568 {
    void sub_10010794(void *a, CBaseTrigger *b, int c);
};

// TARGET: CBaseTrigger::vfunc174
void CBaseTrigger::vfunc174(CBaseEntity *p)
{
    if (sub_101c5460(p)) {
        ((CBaseTriggerSub568 *)((char *)this + 0x568))->sub_10010794(p, this, 0);
    }
}
// END FUNCTION

// FUNCTION: 0x101c55d0 size=0x26
#include "CBaseTrigger.h"

struct CBaseTriggerSub568 {
    void sub_10010794(void *a, CBaseTrigger *b, int c);
};

// TARGET: CBaseTrigger::vfunc176
void CBaseTrigger::vfunc176(CBaseEntity *p)
{
    if (sub_101c5460(p)) {
        ((CBaseTriggerSub568 *)((char *)this + 0x580))->sub_10010794(p, this, 0);
    }
}
// END FUNCTION

// FUNCTION: 0x101c5610 size=0x16e
#include "CBaseTrigger.h"
struct TraceFrame { const char *a; const char *b; const char *c; };
extern TraceFrame *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
extern char g_105387dc[];
extern char g_1053aa9c[];
extern char g_1055bc44[];
extern char g_1053dbfc[];
struct SolidHelper { char pad[0x44]; unsigned short m_f; void sub_1000e9a8(int); };
struct EntHelper { void sub_10005bcd(int); };

// TARGET: CBaseTrigger::vfunc243
void CBaseTrigger::vfunc243(unsigned int)
{
	char *base = (char *)this;
	const char *name;
	if (this) {
		name = *(const char **)(base + 0x26c);
		if (!name) name = g_106b8540;
	} else {
		name = g_105387dc;
	}
	g_109f3620[*g_109f3680].a = g_1053aa9c;
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	bool solid = (*(unsigned char *)(base + 0x2b4) >> 3) & 1;
	(*g_109f3680)--;
	name = *(const char **)(base + 0x26c);
	if (solid) {
		if (!name) name = g_106b8540;
		g_109f3620[*g_109f3680].a = g_1055bc44;
		g_109f3620[*g_109f3680].b = name;
		g_109f3620[*g_109f3680].c = g_106b8540;
		(*g_109f3680)++;
		SolidHelper *p = (SolidHelper *)(base + 0x270);
		int f = p->m_f & ~8;
		p->sub_1000e9a8(f);
	} else {
		if (!name) name = g_106b8540;
		g_109f3620[*g_109f3680].a = g_1053dbfc;
		g_109f3620[*g_109f3680].b = name;
		g_109f3620[*g_109f3680].c = g_106b8540;
		(*g_109f3680)++;
		SolidHelper *p = (SolidHelper *)(base + 0x270);
		int f = p->m_f | 8;
		p->sub_1000e9a8(f);
	}
	(*g_109f3680)--;
	((EntHelper *)this)->sub_10005bcd(0);
}
// END FUNCTION

// FUNCTION: 0x101c57e0 size=0x20
#include "CBaseTrigger.h"

void CBaseTrigger::vfunc244(int unused)
{
	if (m_flags204 & 1)
		m_flags204 &= ~1;
	else
		m_flags204 |= 1;
}
// END FUNCTION

// FUNCTION: 0x101c5810 size=0x20
#include "CBaseTrigger.h"

void CBaseTrigger::vfunc245(int unused)
{
	if (m_flags204 & 2)
		m_flags204 &= ~2;
	else
		m_flags204 |= 2;
}
// END FUNCTION

// FUNCTION: 0x101c5840 size=0x15
#include "CBaseTrigger.h"

void CBaseTrigger::vfunc246(int a)
{
	if (!(m_flags204 & 1))
		m_flags204 |= 1;
}
// END FUNCTION

// FUNCTION: 0x101c5870 size=0x15
#include "CBaseTrigger.h"

void CBaseTrigger::vfunc247(int a)
{
	if (!(m_flags204 & 2))
		m_flags204 |= 2;
}
// END FUNCTION

// FUNCTION: 0x101c58a0 size=0x15
#include "CBaseTrigger.h"

void CBaseTrigger::vfunc248(int a)
{
	if (m_flags204 & 1)
		m_flags204 &= ~1;
}
// END FUNCTION

// FUNCTION: 0x101c58d0 size=0x15
#include "CBaseTrigger.h"

void CBaseTrigger::vfunc249(int a)
{
	if (m_flags204 & 2)
		m_flags204 &= ~2;
}
// END FUNCTION

// FUNCTION: 0x101c5900 size=0x3a
#include "CUnknown1070b244.h"

extern CUnknown1070b244 *g_1070b244;

struct CUnk101c5900
{
    void sub_1000596b(float a, float b, float c);
};

// TARGET: sub_101c5900
void sub_101c5900(CUnk101c5900 *p, int a, float c)
{
    if (p) {
        float f = g_1070b244->vfunc1(3.0f, 4.5f);
        p->sub_1000596b(c, f, 1.0f);
    }
}
// END FUNCTION

// FUNCTION: 0x101c5950 size=0x6
#include "datamap.h"
#include "CTriggerHurt.h"
namespace lifted {
extern char g_1059d7f0;
}
datamap_t * CTriggerHurt::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059d7f0);
}
// END FUNCTION

// FUNCTION: 0x101c5970 size=0x5
int * sub_101c59b0(void);
int * g_1072cf68 = ((int * (*)(int))sub_101c59b0)(0);
// END FUNCTION

// FUNCTION: 0x101c59b0 size=0x1f5
#include "CHandleVectorOps.h"
#include "saverestore_utlvector.h"

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
extern int g_1059d7f0[2];
void sub_1000cc89();
void sub_100064b0();
void sub_10009557();

// TARGET: sub_101c59b0
int *sub_101c59b0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, "CTriggerHurtHurtThink", {0, 0}, 1, 0x20, 0, 0, (void *)sub_1000cc89 },
        { 0, "CTriggerHurtHurtOnceThink", {0, 0}, 1, 0x20, 0, 0, (void *)sub_100064b0 },
        { 1, "m_flDamage", {0x598, 0}, 1, 6, "damage" },
        { 4, "m_bitsDamageInflict", {0x5a0, 0}, 1, 6, "damagetype" },
        { 1, "m_flDamageVelMag", {0x5a4, 0}, 1, 6, "damagevelocitymag" },
        { 3, "m_vecDamageVelPos", {0x5a8, 0}, 1, 6, "damagevelocitypos" },
        { 4, "m_nDamageVelDir", {0x5c0, 0}, 1, 6, "damagevelocitydir" },
        { 15, "m_flLastDmgTime", {0x59c, 0}, 1, 2 },
        { 3, "m_vecDamageVelVect", {0x5b4, 0}, 1, 2 },
        { 10, "m_hurtEntities", {0x5f4, 0}, 1, 2, 0, (ISaveRestoreOps *)CUtlVectorDataopsInstantiator<CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity> > >, 12>::GetDataOps((CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity> > > *)0), 0 },
        { 0, "InputHurtNow", {0, 0}, 1, 8, "HurtNow", 0, (void *)sub_10009557 },
        { 1, "m_flDamage", {0x598, 0}, 1, 0xe, "SetDamage", 0, 0 },
        { 10, "m_OnHurt", {0x5c4, 0}, 1, 0x16, "OnHurt", g_1055dc70 },
        { 10, "m_OnHurtPlayer", {0x5dc, 0}, 1, 0x16, "OnHurtPlayer", g_1055dc70 },
    };
    g_1059d7f0[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1059d7f0[0] = (int)&dataDesc[1];
    return g_1059d7f0;
}
// END FUNCTION

// FUNCTION: 0x101c5c30 size=0x43
#include "platform.h"
#include "CTriggerHurt.h"
void *sub_100aa720(int size);
extern char g_1059f788[];

// TARGET: trigger_hurt
DLL_EXPORT CBaseEntity *trigger_hurt()
{
	void *mem = sub_100aa720(0x608);
	CTriggerHurt *p;
	if (mem)
		p = ((CTriggerHurt *)mem)->sub_101c5ca0();
	else
		p = 0;
	p->vfunc106(g_1059f788);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101c5ca0 size=0x74
#include "CTriggerHurt.h"

// TARGET: CTriggerHurt::CTriggerHurt
CTriggerHurt::CTriggerHurt()
{
	m_i5c0 = 0;
}
// END FUNCTION

// FUNCTION: 0x101c5d40 size=0xa0
#include "utlmemory.h"
#include "CTriggerHurt.h"
#include "UtlMem.h"

extern void (__cdecl *g_109f3624)(void *);	// Plat_Free
void sub_100aa7b0(void *pEntity);	// CBaseEntity::operator delete

struct CTriggerHurtVec	// the CUtlVector<int> of the damaged entities at +0x5f4, as its inlined destructor sees it
{
	UtlMem m_Memory;
	int m_Size;
	int *m_pElements;

	void Destruct()
	{
		m_Size = 0;
		m_Memory.sub_10185100();
		m_pElements = m_Memory.m_pMemory;
		if (m_Memory.m_growSize != -1) {
			if (m_Memory.m_pMemory) {
				g_109f3624(m_Memory.m_pMemory);
				m_Memory.m_pMemory = 0;
			}
			m_Memory.m_allocationCount = 0;
		}
	}
};

CBaseEntity *CTriggerHurt::vfunc5(unsigned int flags)
{
	((CTriggerHurtVec *)&m_hurtEntities)->Destruct();
	m_out5dc.sub_100cd2d0();
	m_out5c4.sub_100cd2d0();
	m_out580.sub_100cd2d0();
	m_out568.sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x4bc))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x4a4))->sub_100cd2d0();
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101c5e10 size=0x4c
#include "CBaseTrigger.h"
void __fastcall sub_100cd2d0(void *p);
void __fastcall sub_1009df20(void *p);
void sub_100aa7b0(void *p);
// TARGET: CBaseTrigger::vfunc5
CBaseEntity *CBaseTrigger::vfunc5(unsigned int flags)
{
	sub_100cd2d0((char *)this + 0x580);
	sub_100cd2d0((char *)this + 0x568);
	sub_100cd2d0((char *)this + 0x4bc);
	sub_100cd2d0((char *)this + 0x4a4);
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity *)(this);
}
// END FUNCTION

// FUNCTION: 0x101c5e80 size=0x89
#include "CTriggerHurt.h"

#define SV1(n) virtual void n();
#define SV10(p) SV1(p##0) SV1(p##1) SV1(p##2) SV1(p##3) SV1(p##4) SV1(p##5) SV1(p##6) SV1(p##7) SV1(p##8) SV1(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)

struct CSlotView217
{
	SV100(a) SV100(b) SV10(c0) SV1(c10) SV1(c11) SV1(c12) SV1(c13) SV1(c14) SV1(c15) SV1(c16)
	virtual float *vfunc217();
};

void sub_1000cc89();

void CTriggerHurt::vfunc103()
{
	CBaseEntity::vfunc103();
	sub_101c5080();
	sub_100ac4e0((int)sub_1000cc89, 0, 0);
	m_vecPushDir5b4 = m_vecTarget5a8 - *(Vector *)((CSlotView217 *)this)->vfunc217();
	VectorNormalize(m_vecPushDir5b4);
	m_vecPushDir5b4 *= m_flSpeed5a4;
}
// END FUNCTION

// FUNCTION: 0x101c5f40 size=0x36a
#include "CTriggerHurt.h"
#include "CBaseCombatCharacter.h"
#include "CEntityVSlots.h"
#include "CTakeDamageInfo.h"
#include "CCollisionProperty.h"

void sub_10002b80();

bool CTriggerHurt::sub_101c5f40(CBaseEntity *pOther, float flDamage)
{
	if (!pOther || !pOther->m_nTakeDamage)
		return false;
	if (!sub_101c5460(pOther))
		return false;

	CTakeDamageInfo info;
	void (CBaseEntity::*pfn)(CTakeDamageInfo *) = (void (CBaseEntity::*)(CTakeDamageInfo *))&CBaseEntity::sub_100a1250;
	if (flDamage < 0.0f) {
		((CEntityVSlots *)pOther)->slot143(-flDamage, m_nDamageType5a0);
	} else {
		if (m_flSpeed5a4 > 0.0f) {
			Vector dir, pos;
			if (m_i5c0 == 0) {
				VectorCopy(m_vecPushDir5b4, dir);
				pos = *((CEntityVSlots *)this)->slot217();
			} else {
				if (m_i5c0 == 1) {
					pos = m_vecTarget5a8;
					dir = *((CEntityVSlots *)pOther)->slot217() - m_vecTarget5a8;
				} else {
					pos = *((CEntityVSlots *)pOther)->slot217();
					dir = m_vecTarget5a8 - *((CEntityVSlots *)pOther)->slot217();
				}
				VectorNormalize(dir);
				dir *= m_flSpeed5a4;
			}
			if (sub_101c53d0(this)) {
				CBaseCombatCharacter *pC = (CBaseCombatCharacter *)pOther->m_p9c;
				if (pC) {
					Vector tmp = dir;
					VectorNormalize(tmp);
					pC->sub_10344f80(&tmp, 2, 0);
				}
			}
			(pOther->*pfn)(info.sub_101c2720(this, this, &dir.x, &pos.x, flDamage, m_nDamageType5a0, 0));
		} else {
			(pOther->*pfn)(info.sub_101c26d0(this, this, flDamage, m_nDamageType5a0, 0, 0, -1));
		}
	}
	if (m_nDamageType5a0 & 8) {
		CBaseCombatCharacter *pChar = (CBaseCombatCharacter *)pOther->m_p9c;
		if (pChar && !pChar->sub_100a52a0() && ((CEntityVSlots *)pChar)->slot163()) {
			Vector wmins, wmaxs;
			CCollisionProperty *pCol = (CCollisionProperty *)((char *)this + 0x270);
			pCol->sub_100dcd90((float *)((char *)pCol + 4), (float *)((char *)pCol + 0x10), &wmins.x, &wmaxs.x);
			pChar->sub_10342910((void *)sub_10002b80, this, 1, 0, wmins, wmaxs);
		}
	}
	if (pOther->m_pA8)
		m_out5dc.sub_100cd660(pOther, this, 0);
	else
		m_out5c4.sub_100cd660(pOther, this, 0);
	m_hurtEntities.AddToTail(EHANDLE(pOther));
	return true;
}
// END FUNCTION

// FUNCTION: 0x101c6390 size=0x27
#include "CTriggerHurt.h"


// TARGET: CTriggerHurt::sub_101c6390
void CTriggerHurt::sub_101c6390()
{
	if (sub_101c6550(3.0f) > 0)
		m_flNextThink = gpGlobals->curtime + 3.0f;
}
// END FUNCTION

// FUNCTION: 0x101c63d0 size=0x2c
#include "CTriggerHurt.h"

// TARGET: CTriggerHurt::sub_101c63d0
void CTriggerHurt::sub_101c63d0()
{
	sub_101c6550(3.0f);
	((CBaseEntity *)this)->sub_100ac4e0(0, 0, 0);
	*(int *)((char *)this + 0x17c) = 0;
	((CBaseTrigger *)this)->sub_101c4dd0();
}
// END FUNCTION

// FUNCTION: 0x101c6410 size=0xfb
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CTriggerHurt.h"
#include "utlvector.h"

extern double g_10449270;

void CTriggerHurt::vfunc176(CBaseEntity *pOther)
{
	if (sub_101c5460(pOther)) {
		EHANDLE hOther;
		hOther = pOther;
		CUtlVector<EHANDLE> *pList = (CUtlVector<EHANDLE> *)&m_hurtEntities;
		if (pList->Find(hOther) < 0)
			sub_101c5f40(pOther, (float)(m_flDamage * g_10449270));
	}
	sub_101c55d0(pOther);
}
// END FUNCTION

// FUNCTION: 0x101c6550 size=0xa1
#include "CTriggerHurt.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

struct CTouchNode
{
	unsigned int m_hEntity;
	int m_pad04;
	CTouchNode *m_pNext;
};

int CTriggerHurt::sub_101c6550(float flDamage)
{
	flDamage *= m_flDamage;
	m_flLastDmgTime = gpGlobals->curtime;
	int nHurt = 0;
	m_hurtEntities.m_Size = 0;
	CTouchNode *pRoot = (CTouchNode *)sub_1003cd50(1);
	if (pRoot) {
		for (CTouchNode *pLink = pRoot->m_pNext; pLink != pRoot; pLink = pLink->m_pNext) {
			unsigned int h = pLink->m_hEntity;
			if (h != 0xffffffff) {
				CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
				if (s->m_Serial == (h >> 13) && s->m_pEntity) {
					if (sub_101c5f40((CBaseEntity *)s->m_pEntity, flDamage))
						nHurt++;
				}
			}
		}
	}
	return nHurt;
}
// END FUNCTION

// FUNCTION: 0x101c6630 size=0x22
// TARGET: CTriggerHurt::vfunc175
#include "CTriggerHurt.h"
void CTriggerHurt::vfunc175(CBaseEntity *pOther)
{
    if (m_flNextThink < gpGlobals->curtime) {
        m_flNextThink = gpGlobals->curtime;
    }
}
// END FUNCTION

// FUNCTION: 0x101c6670 size=0x48
#include "CTriggerHurt.h"
#include "globalvars.h"

void sub_100064b0();

// TARGET: CTriggerHurt::sub_101c6670
void CTriggerHurt::sub_101c6670(int a)
{
	if (!m_bDisabled)
	{
		sub_101c6550(1.0f);
		return;
	}
	sub_101c4bf0();
	sub_100ac4e0((int)sub_100064b0, 0, 0);
	m_flNextThink = gpGlobals->curtime + 0.1f;
}
// END FUNCTION

// FUNCTION: 0x101c66e0 size=0x7a
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000d5ee(GP *);
void __fastcall sub_10002ddd(void *);
extern int vt_1047d08c;
extern int vt_1047da24;
extern char g_1059f7e0[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: trigger_multiple
DLL_EXPORT GP *trigger_multiple()
{
	GP *p = (GP *)sub_1000db89(0x5b0);
	if (p) {
		sub_1000d5ee(p);
		*((int *)p + 0x159) = -1;
		sub_10002ddd((char *)p + 0x568);
		sub_10002ddd((char *)p + 0x580);
		*(int **)p = &vt_1047d08c;
		sub_10002ddd((char *)p + 0x598);
		*(int **)p = &vt_1047da24;
	} else {
		p = 0;
	}
	p->name(g_1059f7e0);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101c6780 size=0x6
#include "datamap.h"
#include "CTriggerMultiple.h"
namespace lifted {
extern char g_1059da9c;
}
datamap_t * CTriggerMultiple::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059da9c);
}
// END FUNCTION

// FUNCTION: 0x101c67a0 size=0x5
int * sub_101c67e0(void);
int * g_1072cfa8 = ((int * (*)(int))sub_101c67e0)(0);
// END FUNCTION

// FUNCTION: 0x101c67e0 size=0x52
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
extern int g_1059da9c[2];
void sub_10015212();
void sub_1000ae1b();

int *sub_101c67e0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, "CTriggerMultipleMultiTouch", {0, 0}, 1, 0x20, 0, 0, (void *)sub_10015212 },
        { 0, "CTriggerMultipleMultiWaitOver", {0, 0}, 1, 0x20, 0, 0, (void *)sub_1000ae1b },
        { 10, "m_OnTrigger", {0x598, 0}, 1, 0x16, "OnTrigger", g_1055dc70 },
    };
    g_1059da9c[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1059da9c[0] = (int)&dataDesc[1];
    return g_1059da9c;
}
// END FUNCTION

// FUNCTION: 0x101c6860 size=0x38
// TARGET: CTriggerMultiple::vfunc103
#include "CTriggerMultiple.h"

void sub_10015212();

void CTriggerMultiple::vfunc103()
{
    ((CBaseEntity *)this)->CBaseEntity::vfunc103();
    sub_101c5080();
    if (*(float *)((char *)this + 0x500) == 0.0f) {
        *(float *)((char *)this + 0x500) = 0.2f;
    }
    *(void **)((char *)this + 0x1ec) = (void *)sub_10015212;
}
// END FUNCTION

// FUNCTION: 0x101c68b0 size=0x1f
#include "CTriggerMultiple.h"

// TARGET: CTriggerMultiple::sub_101c68b0
void CTriggerMultiple::sub_101c68b0(CBaseEntity *pOther)
{
    if (sub_101c5460(pOther))
    {
        sub_101c68e0(pOther);
    }
}
// END FUNCTION

// FUNCTION: 0x101c68e0 size=0xe8
#include "CTriggerMultiple.h"
#include "CEHandleGet.h"


struct MultiView {
	char m_pad[0x500];
	float m_flWait;
	char m_pad504[0x53c - 0x504];
	unsigned int m_hActivator;
};

void sub_1000ae1b();
void sub_10015b68();

void CTriggerMultiple::sub_101c68e0(CBaseEntity *pActivator)
{
	MultiView *v = (MultiView *)this;
	if (!(m_flNextThink > gpGlobals->curtime)) {
		if (pActivator)
			v->m_hActivator = *pActivator->vfunc1();
		else
			v->m_hActivator = 0xffffffff;
		m_OnTrigger.sub_100cd660(EHandle_Get(v->m_hActivator), this, 0.0f);
		if (v->m_flWait > 0.0f) {
			sub_100ac4e0((int)&sub_1000ae1b, 0, 0);
			m_flNextThink = gpGlobals->curtime + v->m_flWait;
		} else {
			m_pfnTouch = 0;
			m_flNextThink = gpGlobals->curtime + 0.1;
			sub_100ac4e0((int)&sub_10015b68, 0, 0);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101c6a10 size=0xc
namespace lifted {
int __stdcall sub_10007fe5(int, int, int);
}
int sub_101c6a10()
{
    return lifted::sub_10007fe5(0, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x101c6a30 size=0x7a
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000d5ee(GP *);
void __fastcall sub_10002ddd(void *);
extern int vt_1047d08c;
extern int vt_1047dee4;
extern char g_1059f814[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: trigger_once
DLL_EXPORT GP *trigger_once()
{
	GP *p = (GP *)sub_1000db89(0x5b0);
	if (p) {
		sub_1000d5ee(p);
		*((int *)p + 0x159) = -1;
		sub_10002ddd((char *)p + 0x568);
		sub_10002ddd((char *)p + 0x580);
		*(int **)p = &vt_1047d08c;
		sub_10002ddd((char *)p + 0x598);
		*(int **)p = &vt_1047dee4;
	} else {
		p = 0;
	}
	p->name(g_1059f814);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101c6ad0 size=0x14
#include "CTriggerOnce.h"

// TARGET: CTriggerOnce::vfunc103
void CTriggerOnce::vfunc103()
{
	sub_101c6860();
	*(int *)((char *)this + 0x500) = 3212836864;
}
// END FUNCTION

// FUNCTION: 0x101c6b00 size=0x84
#include "platform.h"
#include "CBaseEntity.h"

extern void *vt_1047d08c[];
extern void *vt_1047e3a4[];
extern char g_1059f844[];
void *sub_100aa720(int size);

struct COutputCtor {
	char m_data[0x18];
	void sub_100cd2a0();
};

struct CTriggerLookView : CBaseEntity {
	void sub_101c0e20();
	char m_padView[0x564 - 0x3e0];
	int m_h564;
	COutputCtor m_out568;
	COutputCtor m_out580;
	COutputCtor m_out598;
	int m_h5b0;
};

DLL_EXPORT CBaseEntity *trigger_look()
{
	CTriggerLookView *p = (CTriggerLookView *)sub_100aa720(0x5c4);
	CBaseEntity *e;
	if (p) {
		p->sub_101c0e20();
		p->m_h564 = -1;
		p->m_out568.sub_100cd2a0();
		p->m_out580.sub_100cd2a0();
		*(void ***)p = vt_1047d08c;
		p->m_out598.sub_100cd2a0();
		p->m_h5b0 = -1;
		*(void ***)p = vt_1047e3a4;
		e = p;
	} else
		e = 0;
	e->vfunc106(g_1059f844);
	return e;
}
// END FUNCTION

// FUNCTION: 0x101c6bc0 size=0x6
#include "datamap.h"
#include "CTriggerLook.h"
namespace lifted {
extern char g_1059db68;
}
datamap_t * CTriggerLook::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059db68);
}
// END FUNCTION

// FUNCTION: 0x101c6be0 size=0x5
int sub_101c6c20(void);
int g_1072cfa4 = ((int (*)(int))sub_101c6c20)(0);
// END FUNCTION

// FUNCTION: 0x101c6c20 size=0x1a
namespace lifted {
extern int g_1059db68;
extern int g_1059db6c;
extern char g_1059dbac;
}
int sub_101c6c20()
{
    lifted::g_1059db6c = 5;
    lifted::g_1059db68 = (int)&lifted::g_1059dbac;
    return (int)&lifted::g_1059db68;
}
// END FUNCTION

// FUNCTION: 0x101c6c50 size=0x19
#include "CTriggerLook.h"
namespace lifted {
int sub_100075f9();
}
void CTriggerLook::vfunc103()
{
    *(int *)((char *)this + 0x5b0) = -1;
    *(int *)((char *)this + 0x5bc) = -1082130432;
    lifted::sub_100075f9();
}
// END FUNCTION

// FUNCTION: 0x101c6c80 size=0x1b
#include "CTriggerLook.h"

void CTriggerLook::vfunc176(CBaseEntity *pOther)
{
	CBaseTrigger::vfunc176(pOther);
	m_flLookTimeLast = -1.0f;
}
// END FUNCTION

// FUNCTION: 0x101c6cb0 size=0x235
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CTriggerLook.h"
#include "Vector.h"
// TARGET: CTriggerLook::vfunc175

void sub_101c0b10(CBaseEntity *pEnt);

void CTriggerLook::vfunc175(CBaseEntity *pOther)
{
	if ( !m_hLookTarget.Get() )
	{
		m_hLookTarget = (CBaseEntity *)((CEntityVSlots *)this)->slot172();

		if ( !m_hLookTarget.Get() )
			return;
	}

	if ( !pOther )
		return;

	CEntityVSlots *pLooker = (CEntityVSlots *)pOther->m_pA8;
	if ( !pLooker )
		return;

	Vector vecLook;
	pLooker->slot369(&vecLook);

	CBaseEntity *pTarget = m_hLookTarget.Get();

	Vector vecEyes;
	Vector *pEyes = pLooker->slot193(&vecEyes);
	Vector *pTargetOrigin = ((CEntityVSlots *)pTarget)->slot217();

	Vector vecDelta = *pTargetOrigin - *pEyes;
	vecDelta.NormalizeInPlace();

	float flDot = DotProduct(vecLook, vecDelta);

	if ( flDot > m_flFieldOfView )
	{
		if ( m_flLookTimeLast == -1.0f )
		{
			m_flLastLookTime = gpGlobals->curtime;
			m_flLookTimeLast = 0.0f;
		}
		else
		{
			m_flLookTimeLast += gpGlobals->curtime - m_flLastLookTime;
			m_flLastLookTime = gpGlobals->curtime;
		}

		if ( m_flLookTimeLast >= m_flLookTimeTotal )
		{
			m_OnTrigger.sub_100cd660(pOther, this, 0);

			m_flLookTimeLast = -1.0f;

			if ( m_flags204 & 0x80 )
			{
				sub_100ac4e0((int)sub_101c0b10, 0, 0);
				m_flNextThink = gpGlobals->curtime;
			}
		}
	}
	else
	{
		m_flLookTimeLast = -1.0f;
	}
}
// END FUNCTION

// FUNCTION: 0x101c6f80 size=0xae
#include "CTriggerLook.h"
void sub_101434b0(int entindex, int offset, const char *text, int duration, int r, int g, int b, int a);
extern "C" __declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);

// TARGET: CTriggerLook::vfunc124
int CTriggerLook::vfunc124()
{
    int text_offset = CBaseTrigger::vfunc124();
    if (*(char *)((char *)this + 0x224) & 1) {
        char tempstr[255];
        float flLast = m_flLookTimeLast < 0.0f ? 0.0f : m_flLookTimeLast;
        Q_snprintf(tempstr, sizeof(tempstr), "Time:   %3.2f", m_flLookTimeTotal - flLast);
        int pEdict = m_pEdict2e0;
        sub_101434b0(engine->vfunc35(pEdict), text_offset, tempstr, 0, 255, 255, 255, 255);
        text_offset++;
    }
    return text_offset;
}
// END FUNCTION

// FUNCTION: 0x101c7060 size=0x4b
#include "platform.h"
#include "CConstraintAnchor.h"
#include "CBaseEntity.h"
void *sub_100aa720(unsigned int size);
extern char g_1047e864[];	// CTriggerVolume vftable
extern const char g_1059f888[];

// TARGET: trigger_transition
DLL_EXPORT CBaseEntity *trigger_transition()
{
	void *mem = sub_100aa720(0x450);
	CBaseEntity *p;
	if (mem) {
		((CConstraintAnchorBase *)mem)->sub_1009d980(0);
		*(void **)mem = g_1047e864;
		p = (CBaseEntity *)mem;
	} else {
		p = 0;
	}
	p->vfunc106(g_1059f888);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101c70d0 size=0xd2
#include "CBaseEntity.h"
#include "CTriggerVolume.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

struct CCollisionObj { void sub_1000428c(int solid); };
struct CSlot212Arg { int v; };

struct CVolSlots
{
	EVS10(0) EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18) EVS10(19) EVS10(20)
	EVS(210) EVS(211)
	virtual void slot212(CSlot212Arg a);
};

void CTriggerVolume::vfunc103()
{
	CBaseEntity *e = (CBaseEntity *)this;
	{
		ScopeTrace t("CBaseEntity::SetSolid", e ? (STRINGR_F(e->m_name26c)) : g_105387dc);
		((CCollisionObj *)((char *)e + 0x270))->sub_1000428c(0);
	}
	int tmp;
	e->vfunc93(0, 0);
	const char *s = *e->vfunc9(&tmp);
	e->vfunc105(STRINGR_F(s));
	CSlot212Arg a;
	a.v = 0;
	((CVolSlots *)e)->slot212(a);
	e->vfunc10(0);
	e->sub_100b3b00();
}
// END FUNCTION

// FUNCTION: 0x101c71f0 size=0x7a
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000d5ee(GP *);
void __fastcall sub_10002ddd(void *);
extern int vt_1047d08c;
extern int vt_1047ecf4;
extern char g_1059f8a0[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: trigger_changelevel
DLL_EXPORT GP *trigger_changelevel()
{
	GP *p = (GP *)sub_1000db89(0x5fc);
	if (p) {
		sub_1000d5ee(p);
		*((int *)p + 0x159) = -1;
		sub_10002ddd((char *)p + 0x568);
		sub_10002ddd((char *)p + 0x580);
		*(int **)p = &vt_1047d08c;
		sub_10002ddd((char *)p + 0x5e4);
		*(int **)p = &vt_1047ecf4;
	} else {
		p = 0;
	}
	p->name(g_1059f8a0);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101c7290 size=0x6
#include "datamap.h"
#include "CChangeLevel.h"
namespace lifted {
extern char g_1059dc88;
}
datamap_t * CChangeLevel::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059dc88);
}
// END FUNCTION

// FUNCTION: 0x101c72b0 size=0x5
int * sub_101c72f0(void);
int * g_1072cfb4 = ((int * (*)(int))sub_101c72f0)(0);
// END FUNCTION

// FUNCTION: 0x101c72f0 size=0xa6
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
extern int g_1059dc88[2];
void sub_1000da12();
void sub_10007a54();
void sub_1000b7cb();
void sub_1001355c();

int *sub_101c72f0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 7, "m_szMapName", {0x598, 0}, 0x20, 2 },
        { 7, "m_szLandmarkName", {0x5b8, 0}, 0x20, 2 },
        { 2, "m_sTip_BkgImage", {0x5dc, 0}, 1, 6, "Tip_BkgImage" },
        { 4, "m_iTip_Size", {0x5e0, 0}, 1, 6, "Tip_Size" },
        { 0, "CChangeLevelUseChangeLevel", {0, 0}, 1, 0x20, 0, 0, (void *)sub_1000da12 },
        { 0, "CChangeLevelExecuteChangeLevel", {0, 0}, 1, 0x20, 0, 0, (void *)sub_10007a54 },
        { 0, "CChangeLevelTouchChangeLevel", {0, 0}, 1, 0x20, 0, 0, (void *)sub_1000b7cb },
        { 10, "m_OnChangeLevel", {0x5e4, 0}, 1, 0x16, "OnChangeLevel", g_1055dc70 },
        { 0, "InputChangeNow", {0, 0}, 1, 8, "ChangeNow", 0, (void *)sub_1001355c },
    };
    g_1059dc88[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1059dc88[0] = (int)&dataDesc[1];
    return g_1059dc88;
}
// END FUNCTION

// FUNCTION: 0x101c73d0 size=0xba
#include "CChangeLevel.h"
#include "CBaseToggle.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" unsigned int __cdecl strlen(const char *);
#pragma intrinsic(strlen)
__declspec(dllimport) void Warning(const char *fmt, ...);
__declspec(dllimport) char *Q_strncpy(char *dest, const char *src, int maxLen);

// TARGET: CChangeLevel::vfunc110
bool CChangeLevel::vfunc110(const char *szKeyName, const char *szValue)
{
	if (!_strcmpi(szKeyName, "map")) {
		if (strlen(szValue) >= sizeof(m_szMapName))
			Warning("Map name '%s' too long (32 chars)\n", szValue);
		Q_strncpy(m_szMapName, szValue, sizeof(m_szMapName));
	}
	else if (!_strcmpi(szKeyName, "landmark")) {
		if (strlen(szValue) >= sizeof(m_szLandmarkName))
			Warning("Landmark name '%s' too long (32 chars)\n", szValue);
		Q_strncpy(m_szLandmarkName, szValue, sizeof(m_szLandmarkName));
	}
	else
		return ((CBaseToggle *)this)->CBaseToggle::vfunc110(szKeyName, szValue);
	return true;
}
// END FUNCTION

// FUNCTION: 0x101c74c0 size=0xaf
#include "CChangeLevel.h"
#include <string.h>

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" __declspec(dllimport) void __cdecl Error(const char *fmt, ...);
extern char *(__cdecl *g_109f3890)(char *dest, const char *src, int count);	// Q_strncpy
extern char g_106b8540[];
void __cdecl sub_101cf7c0(char *szIn, char *szOut, int nOut);

// TARGET: CChangeLevel::vfunc103
void CChangeLevel::vfunc103()
{
	if (!_strcmpi(m_szMapName, g_106b8540))
		Error("a trigger_changelevel doesn't have a map");
	if (!_strcmpi(m_szLandmarkName, g_106b8540))
		Error("trigger_changelevel to %s doesn't have a landmark", m_szMapName);
	if (m_name26c)
		m_pfnUse = (void (CBaseEntity::*)(CBaseEntity *, CBaseEntity *, int, float))&CChangeLevel::sub_1000da12;
	sub_101c5080();
	if (!(m_flags204 & 2))
		m_pfnTouch = (void (CBaseEntity::*)(CBaseEntity *))&CChangeLevel::sub_1000b7cb;
	char szMap[260];
	sub_101cf7c0(m_szMapName, szMap, 260);
	g_109f3890(m_szMapName, szMap, 32);
}
// END FUNCTION

// FUNCTION: 0x101c75a0 size=0xbb
#include "CReliableBroadcastFilter.h"


void sub_101c75a0()
{
	CReliableBroadcastFilter filter;
	engine->vfunc65(&filter, 0x1a);
	engine->vfunc66();
}
// END FUNCTION

// FUNCTION: 0x101c7690 size=0xf9
#include "CChangeLevel.h"
#include "CGlobalEntityList.h"
#include "ConVar.h"

extern "C" int _strcmpi(const char *, const char *);
extern char g_106b8540[];
extern CGlobalEntityList g_106eb5d8;
extern void (*g_109f364c)(const char *pszFormat, ...);	// DevWarning
ConVar *sub_10245660(const char *pszName);

CBaseEntity *sub_101c7690(const char *pLandmarkName, CChangeLevel *pCaller)
{
	static ConVar *developer = sub_10245660("developer");
	if (pLandmarkName) {
		CBaseEntity *pLandmark = g_106eb5d8.sub_100f7770(0, pLandmarkName, 0, 0);
		while (pLandmark) {
			const char *pszClass = pLandmark->m_classname11c;
			if (!pszClass)
				pszClass = g_106b8540;
			if (_strcmpi(pszClass, "info_landmark") == 0)
				return pLandmark;
			pLandmark = g_106eb5d8.sub_100f7770(pLandmark, pLandmarkName, 0, 0);
		}
	}
	if (!pCaller) {
		g_109f364c("Can't find landmark %s\n", pLandmarkName);
		return 0;
	}
	g_109f364c("%s can't find landmark %s\n", pCaller->sub_1000b5cd(), pLandmarkName);
	if (developer && developer->GetInt()) {
		pCaller->vfunc67();
		*(unsigned int *)((char *)pCaller + 0x224) |= 2;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x101c77d0 size=0x7c
#include "CChangeLevel.h"
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "inputdata_t.h"

struct CPlayerLink
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual CBaseEntity *v4();
};

extern CGlobalEntityList *g_10566458;

__declspec(dllimport) void Warning(const char *fmt, ...);

static inline CBaseEntity *EHandle_GetEntity(unsigned int h)
{
	if (h == 0xffffffff)
		return 0;
	CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
	if (pSlot->m_Serial != (int)(h >> 13))
		return 0;
	return (CBaseEntity *)pSlot->m_pEntity;
}

static inline CPlayerLink *PlayerOfOwner(CBaseEntity *pEntity)
{
	if (!pEntity)
		return 0;
	CBaseEntity *pOwner = EHandle_GetEntity(*(unsigned int *)((char *)pEntity + 0x8c));
	if (!pOwner)
		return 0;
	return (CPlayerLink *)pOwner->m_pA8;
}

// TARGET: CChangeLevel::sub_101c77d0
void CChangeLevel::sub_101c77d0(inputdata_t *pInput)
{
	CBaseEntity *pActivator = (CBaseEntity *)pInput->pActivator;
	CPlayerLink *pPlayer = pActivator ? (CPlayerLink *)pActivator->m_pA8 : 0;

	if (!pPlayer)
		pPlayer = PlayerOfOwner((CBaseEntity *)pInput->pActivator);

	if (pPlayer)
		sub_101c7890(pPlayer->v4());
	else
		Warning("%s recieved ChangeNow input from non-player activator!\n", sub_1000b5cd());
}
// END FUNCTION

// FUNCTION: 0x101c7870 size=0xd
namespace lifted {
int __stdcall sub_1000faba(int);
}
int __stdcall sub_101c7870(int a0, int a1, int a2, int a3)
{
    return lifted::sub_1000faba(a0);
}
// END FUNCTION

// FUNCTION: 0x101c7890 size=0x24a
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CChangeLevel.h"
#include "CBaseEntity.h"
#include "CGameRules.h"
#include "COutputEvent.h"
#include "ScopeTrace.h"
#include "Tier1.h"
#include "CBaseCombatCharacter.h"
#include "CEntityVSlots.h"

struct CServerUnknownView
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
	virtual CBaseEntity *v4();
};

struct CEntityHelper
{
	void sub_10170090();
};

extern CGameRules *g_1070ba0c;
extern char g_1072cf78[];
extern char g_1072cf44[];
__declspec(dllimport) void Q_strncpy(char *pDest, const char *pSrc, int maxLen);
__declspec(dllimport) char *Q_stristr(char *pStr, const char *pSearch);
extern void (*g_109f3650)(int nLevel, const char *pMsg, ...);

int __cdecl sub_101c7fa0(void *p, void *q);
CBaseEntity *__cdecl sub_101c7690(const char *pLandmark, CChangeLevel *pLevel);
long __cdecl sub_101d2850(const char *pExpr, int nMode);
CBaseEntity *__cdecl sub_101cd9e0(int index);

inline CBaseEntity *GetContainingEntityX(void *pEdict)
{
	if (pEdict && *(CServerUnknownView **)((char *)pEdict + 0x40))
		return (*(CServerUnknownView **)((char *)pEdict + 0x40))->v4();
	return 0;
}

inline CBaseEntity *InstanceX(void *pEdict)
{
	ScopeTrace trace("CBaseEntity::Instance", g_106b8540, g_106b8540);
	if (!pEdict)
		pEdict = engine->vfunc38(0);
	return GetContainingEntityX(pEdict);
}

inline int InTransitionX(CBaseCombatCharacter *pCharacter, char *pszLandmark)
{
	return sub_101c7fa0(pCharacter, pszLandmark);
}

inline bool IsSpecial(char *p) { return Q_stristr(p, "sewer_map_landmark") != 0 || Q_stristr(p, "taxi_landmark") != 0; }
inline bool HasLandmark(char *p, CChangeLevel *pl) { return sub_101c7690(p, pl) != 0 || Q_stristr(p, "sewer_map_landmark") != 0 || Q_stristr(p, "taxi_landmark") != 0; }
inline void CopySpot(char *p) { Q_strncpy(g_1072cf44, p, 0x20); }
void CChangeLevel::sub_101c7890(CBaseEntity *pPlayer)
{
	if (((CGameRules *)g_1070ba0c)->vfunc22())
		return;

	if (gpGlobals->curtime == *(float *)((char *)this + 0x5d8))
		return;

	*(float *)((char *)this + 0x5d8) = gpGlobals->curtime;

	CBaseEntity *pEntity = InstanceX(engine->vfunc38(1));
	CBaseCombatCharacter *pCharacter = pEntity ? (CBaseCombatCharacter *)pEntity->m_pA8 : 0;

	int transitionState = sub_101c7fa0(pCharacter, m_szLandmarkName);
	if (transitionState == 0)
	{
		g_109f3650(2, "Player isn't in the transition volume %s, aborting\n", m_szLandmarkName);
		return;
	}

	char szCmd[0x40];
	int nStoryState = sub_101d2850("__main__.G.Story_State", 0x102);
	const char *pszBkg = *(const char * const *)&m_sTip_BkgImage;
	g_109f388c(szCmd, 0x40, "vloadtips \"%s\" %d %d %d",
		pszBkg ? pszBkg : g_106b8540, m_iTip_Size, nStoryState, pCharacter->sub_10337860());
	engine->vfunc7(szCmd);

	Q_strncpy(g_1072cf78, m_szMapName, 0x20);

	if (pPlayer)
		*(int *)((char *)this + 0x53c) = *((CEntityVSlots *)pPlayer)->slot1();
	else
		*(int *)((char *)this + 0x53c) = -1;

	((COutputEvent *)((char *)this + 0x5e4))->sub_100cd660(pPlayer, this, 0.0f);

	g_1072cf44[0] = 0;
	if (sub_101c7690(m_szLandmarkName, this))
		Q_strncpy(g_1072cf44, m_szLandmarkName, 0x20);
	else if (Q_stristr(m_szLandmarkName, "sewer_map_landmark"))
		Q_strncpy(g_1072cf44, m_szLandmarkName, 0x20);
	else if (Q_stristr(m_szLandmarkName, "taxi_landmark"))
		Q_strncpy(g_1072cf44, m_szLandmarkName, 0x20);

	g_109f3650(3, "CHANGE LEVEL: %s %s\n", g_1072cf78, g_1072cf44);

	CBaseEntity *pWho = sub_101cd9e0(1);
	if (pWho)
		((CEntityHelper *)pWho)->sub_10170090();

	engine->vfunc9(g_1072cf78, g_1072cf44);
}
// END FUNCTION

// FUNCTION: 0x101c7b80 size=0x195
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CGlobalEntityList.h"
#include "CUnknown1070b22c.h"
#include "ScopeTrace.h"
#include "CChangeLevel.h"

__declspec(dllimport) char *Q_strncpy(char *pszDest, const char *pszSrc, int nMaxLen);
extern "C" __declspec(dllimport) void __cdecl DevMsg(int nLevel, const char *pszFormat, ...);

struct CChangeLevelTargetView {	// the engine's edict: only the unknown pointer at +0x40
	char m_pad0000[0x40];
	CGlobalEntityList_Ent *m_pUnknown;	// 0x40
};

struct CChangeLevelPlayerView {
	char m_pad0000[0xa8];
	CEntityVSlots *m_pObject;	// 0xa8
};

class CUnknown1070ba0c
{
public:
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21();
	virtual char vfunc22();	// a boolean answer in al (true skips the level change)
};

class CEngineChangeLevel
{
public:
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
	virtual void vfunc9(const char *pszMap, const char *pszLandmark);	// ChangeLevel
};

struct CPlayerChangeLevelView
{
	void sub_10170090();	// stub 0x1000f97a
};

extern CUnknown1070ba0c *g_1070ba0c;
extern CUnknown1070b22c *g_1070b22c;
extern char g_1072cf78[];
extern char g_1072cf44[];

CBaseEntity *sub_10136580(const char *pszClassname);
const char **sub_1042bff0(const char **ppszOut, const char *pszValue);
CPlayerChangeLevelView *sub_101cd9e0(int a);

// TARGET: sub_101c7b80
void sub_101c7b80(const char *pszMap, const char *pszLandmark)
{
	if (g_1070ba0c->vfunc22())
		return;
	CChangeLevelTargetView *pEdict = (CChangeLevelTargetView *)g_1070b22c->vfunc38(1);
	CBaseEntity *pPlayer;
	{
		ScopeTrace trace("CBaseEntity::Instance", g_106b8540);
		if (!pEdict)
			pEdict = (CChangeLevelTargetView *)g_1070b22c->vfunc38(0);
		if (pEdict && pEdict->m_pUnknown)
			pPlayer = pEdict->m_pUnknown->vfunc4();
		else
			pPlayer = 0;
	}
	CEntityVSlots *pObject = pPlayer ? ((CChangeLevelPlayerView *)pPlayer)->m_pObject : 0;
	CBaseEntity *pLandmark = sub_10136580("info_landmark");
	if (!pLandmark)
		return;
	const char *pszLandmarkCopy = pszLandmark;
	pLandmark->sub_100a0420(*sub_1042bff0(&pszLandmark, pszLandmarkCopy));
	((CEntityVSlots *)pLandmark)->slot62((const float *)pObject->slot220());
	CChangeLevel *pChangeLevel = (CChangeLevel *)sub_10136580("trigger_changelevel");
	const char *pszMapCopy = pszMap;
	Q_strncpy(pChangeLevel->m_szMapName, pszMapCopy, 0x20);
	Q_strncpy(pChangeLevel->m_szLandmarkName, pszLandmarkCopy, 0x20);
	Q_strncpy(g_1072cf78, pszMapCopy, 0x20);
	g_1072cf44[0] = 0;
	Q_strncpy(g_1072cf44, pszLandmarkCopy, 0x20);
	DevMsg(3, "CHANGE LEVEL: %s %s\n", g_1072cf78, g_1072cf44);
	CPlayerChangeLevelView *pLocal = sub_101cd9e0(1);
	if (pLocal)
		pLocal->sub_10170090();
	((CEngineChangeLevel *)g_1070b22c)->vfunc9(g_1072cf78, g_1072cf44);
}
// END FUNCTION

// FUNCTION: 0x101c7d90 size=0x4b
#include "CChangeLevel.h"
extern char g_1072cf78[];
extern char g_1072cf44[];
__declspec(dllimport) void DevMsg(const char *, ...);
// TARGET: CChangeLevel::sub_101c7d90
void CChangeLevel::sub_101c7d90(CBaseEntity *pPlayer)
{
    if (*(int *)((char *)pPlayer + 0xa8)) {
        if (pPlayer->vfunc94() == 9) {
            DevMsg("In level transition: %s %s\n", g_1072cf78, g_1072cf44);
            return;
        }
        sub_101c7890(pPlayer);
    }
}
// END FUNCTION

// FUNCTION: 0x101c7e00 size=0x123
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBCCSlotViews.h"
#include "ScopeTrace.h"

extern "C" __declspec(dllimport) char *__cdecl Q_strncpy(char *, const char *, int);
extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SEdictView {
    char pad[0x40];
    CServerUnknownSlotView *m_pUnknown;
};

struct SEntry101c7e00 {
    char name[0x20];
    char label[0x20];
    SEdictView *edict;
    float pos[3];
};

int sub_101c7e00(SEntry101c7e00 *table, int count, const char *name, const char *label, SEdictView *pEdict)
{
    if (!table || !name || !label || !pEdict)
        return 0;
    for (int i = 0; i < count; i++) {
        if (table[i].edict == pEdict && _strcmpi(table[i].name, name) == 0)
            return 0;
    }
    Q_strncpy(table[count].name, name, 0x20);
    Q_strncpy(table[count].label, label, 0x20);
    table[count].edict = pEdict;
    void *pEnt;
    {
        ScopeTrace trace("CBaseEntity::Instance", g_106b8540);
        if (pEdict->m_pUnknown)
            pEnt = pEdict->m_pUnknown->vfunc4();
        else
            pEnt = 0;
    }
    float *pos = ((CEntityOrigin220SlotView *)pEnt)->vfunc220();
    table[count].pos[0] = pos[0];
    table[count].pos[1] = pos[1];
    table[count].pos[2] = pos[2];
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101c7f80 size=0x5
#include "levellist.h"
int __cdecl sub_101c7ff0(struct levellist_t *, int, char const *, char const *);
// TARGET: sub_101c7f80
// the game's 0x101c7f80: a tail call (jmp) of sub_101c7ff0
int __cdecl sub_101c7f80(struct levellist_t *a0, int a1, char const *a2, char const *a3)
{
	return sub_101c7ff0(a0, a1, a2, a3);
}
// END FUNCTION

// FUNCTION: 0x101c7fa0 size=0x3c
typedef unsigned int (__fastcall *FlagSlotFn)(void *);
typedef int (__fastcall *IntSlotFn)(void *);

int sub_101c7fa0(void *pObj)
{
    if (pObj == 0) {
        return 0;
    }
    if (!(((FlagSlotFn)(*(void ***)pObj)[117])(pObj) & 0x100)) {
        if (((IntSlotFn)(*(void ***)pObj)[94])(pObj) != 0xb) {
            ((IntSlotFn)(*(void ***)pObj)[94])(pObj);
        }
    }
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101c7ff0 size=0x640
#include "CEHandleGet.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown1073dc28.h"
#include "utlrbtree.h"
#include "CBaseEntity.h"
#include "levellist.h"
#include "CSave.h"
#include "CGlobalEntityList.h"
#include "ScopeTrace.h"
#include "engineserver.h"
#include "globalvars.h"
#include "CBaseCombatWeapon.h"
#include "CUnknown100a8220.h"
#include "utlvector.h"
extern CGlobalEntityList g_106eb5d8;
extern char g_1055ef50[];
extern char g_10538764[];
extern "C" void *__cdecl __RTDynamicCast(void *p, long off, void *src, void *dst, int bThrow);
extern "C" int __cdecl _strcmpi(const char *a, const char *b);
__declspec(dllimport) char *Q_strncpy(char *dst, const char *src, int n);
__declspec(dllimport) void DevMsg(int level, const char *fmt, ...);
__declspec(dllimport) void Warning(const char *fmt, ...);
extern void (*g_109f366c)(const char *fmt, ...);
int sub_101c7690(const char *pName, CBaseEntity *pTrigger);
int sub_101c7e00(levellist_t *pList, int count, const char *pMap, const char *pLandmark, void *pEdict);
int sub_101c7fa0(CBaseEntity *pEnt, const char *pLandmark);
CBaseEntity *sub_100ab250(void *pEdict);

struct CNameObj2 { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual const char *GetName(); };
struct CNameObj { virtual void s0(); virtual void s1(); virtual void s2(); virtual CNameObj2 *GetObj(); };
struct CEdictNameView { char pad[0x40]; CNameObj *m_pUnknown; };
inline const char *GetClassname(CBaseEntity *e)
{
	CEdictNameView *ed = (CEdictNameView *)e->m_pEdict2e0;
	if (!ed->m_pUnknown)
		return g_106b8540;
	return ed->m_pUnknown->GetObj()->GetName();
}
inline CBaseEntity *InstanceE(void *pent)
{
	ScopeTrace scope("CBaseEntity::Instance", g_106b8540);
	if (!pent)
		pent = (void *)engine->vfunc38(0);
	return sub_100ab250(pent);
}
inline CBaseEntity *InstanceI(int iEnt)
{
	return InstanceE((void *)engine->vfunc38(iEnt));
}
__forceinline CBaseEntity *HGet(const EHANDLE &h)
{
	const EHandleEntInfo *pInfo;
	if (h.m_Index == 0xffffffff)
		return 0;
	pInfo = &EHandleDetail::g_10566458->m_EntPtrArray[h.GetEntryIndex()];
	if (pInfo->m_SerialNumber == h.GetSerialNumber())
		return (CBaseEntity *)pInfo->m_pEntity;
	return 0;
}
struct CChangeLevelView : CBaseEntity
{
	char pad[0x598 - sizeof(CBaseEntity)];
	char m_szMapName[32];
	char m_szLandmarkName[32];
};
struct CPartyView
{
	char pad[0x14c0];
	CUtlVector<EHANDLE> m_Party;
	char pad2[0x1c64 - 0x14d4];
	EHANDLE m_hLeader;
};
inline CPartyView *Pv_c7(CBaseEntity *p) { return (CPartyView *)p->m_pA8; }
struct CSaveDataView { char pad[0x1330]; int m_n1330; };
struct CGlobalsView { char pad[0x20]; void *pSaveData; };
typedef CUtlVector<int> CSaveIntVec;

// TARGET: sub_101c7ff0
int sub_101c7ff0(levellist_t *pLevelList, int maxList, const char *pMapName, const char *pLandmarkName)
{
	CBaseEntity *pChange, *pLandmark;
	int i, count;
	count = 0;
	pChange = g_106eb5d8.sub_100f7380(0, "trigger_changelevel");
	if (!pChange)
		return 0;
	while (pChange) {
		CChangeLevelView *pTrigger = (CChangeLevelView *)__RTDynamicCast(pChange, 0, g_10538764, g_1055ef50, 0);
		if (pTrigger) {
			pLandmark = (CBaseEntity *)sub_101c7690(pTrigger->m_szLandmarkName, pTrigger);
			if (pLandmark) {
				if (pLandmarkName) {
					if (!_strcmpi(pLandmarkName, "taxi_landmark") && !_strcmpi(pTrigger->m_szLandmarkName, "taxi_landmark") && pMapName)
						Q_strncpy(pTrigger->m_szMapName, pMapName, 0x20);
					if (!_strcmpi(pLandmarkName, "sewer_map_landmark") && !_strcmpi(pTrigger->m_szLandmarkName, "sewer_map_landmark") && pMapName)
						Q_strncpy(pTrigger->m_szMapName, pMapName, 0x20);
				}
				void *pev = (void *)pLandmark->m_pEdict2e0;
				if (sub_101c7e00(pLevelList, count, pTrigger->m_szMapName, pTrigger->m_szLandmarkName, pev)) {
					count++;
					if (count >= maxList) {
						g_109f366c("Too many level transitions on this map, possible corruption.");
						break;
					}
				}
			}
		}
		pChange = g_106eb5d8.sub_100f7380(pChange, "trigger_changelevel");
	}

	if (((CGlobalsView *)gpGlobals)->pSaveData && ((CSaveDataView *)((CGlobalsView *)gpGlobals)->pSaveData)->m_n1330) {
		CSave saveHelper((CSaveDataView *)((CGlobalsView *)gpGlobals)->pSaveData);
		__int64 flags;
		for (i = 0; i < count; i++) {
			int j, iEntity = 0;
			CBaseEntity *pEntList[0x200];
			__int64 entityFlags[0x200];
			CBaseEntity *pEntity = 0;
			CBaseEntity *pLandmarkEntity = InstanceE(pLevelList[i].pentLandmark);
			while ((pEntity = g_106eb5d8.sub_100f7060(pEntity)) != 0) {
				DevMsg(3, "Trying %s\n", GetClassname(pEntity));
				int caps = pEntity->vfunc117();
				if (!(caps & 0x80000000)) {
					flags = 0;
					bool bMove = false;
					if (caps & 2) {
						bool bWeapon = false;
						if (pEntity->m_n00a0) {
							CBaseEntity *pw = (CBaseEntity *)((CBaseCombatWeapon *)pEntity->m_n00a0)->sub_10252290();
							if (pw && pw->m_pA8)
								bWeapon = true;
						}
						if (pEntity->m_pA8 || bWeapon)
							bMove = true;
						else {
							CBaseEntity *pPlayer = InstanceI(1);
							CPartyView *pView = pPlayer ? Pv_c7(pPlayer) : 0;
							if (pView) {
								if (HGet(pView->m_hLeader) == pEntity)
									bMove = true;
								else {
									for (int k = 0; k < pView->m_Party.Count(); k++) {
										if (HGet(pView->m_Party[k]) == pEntity) {
											bMove = true;
											break;
										}
									}
								}
							}
						}
					if (bMove)
						flags = 0x2000000000000000i64;
					}
					if (*(int *)((char *)pEntity + 0x120) && !((CUnknown100a8220 *)pEntity)->sub_100a8220())
						flags |= 0x1000000000000000i64;
					if (flags) {
						if (iEntity >= 0x200) {
							Warning("Too many entities across a transition!");
							break;
						}
						entityFlags[iEntity] = flags;
						pEntList[iEntity] = pEntity;
						iEntity++;
						DevMsg(1, "Saving %s\n", GetClassname(pEntity));
					} else
						DevMsg(3, "Failed %s\n", GetClassname(pEntity));
				} else
					DevMsg(3, "DON'T SAVE %s\n", GetClassname(pEntity));
			}
			for (j = 0; j < iEntity; j++) {
				if (entityFlags[j] && sub_101c7fa0(pEntList[j], pLevelList[i].landmarkName)) {
					int index = saveHelper.sub_101a08f0(pEntList[j]);
					saveHelper.sub_101a0980(index, entityFlags[j] | (1 << i));
				} else
					DevMsg(1, "Screened out %s\n", GetClassname(pEntList[j]));
			}
		}
		((CSaveIntVec *)&saveHelper.m_pSections)->~CSaveIntVec();
	}
	return count;
}
// END FUNCTION

// FUNCTION: 0x101c87c0 size=0x6
#include "datamap.h"
#include "CTriggerPush.h"
namespace lifted {
extern char g_1059de58;
}
datamap_t * CTriggerPush::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059de58);
}
// END FUNCTION

// FUNCTION: 0x101c87e0 size=0x5
int sub_101c8820(void);
int g_1072d010 = ((int (*)(int))sub_101c8820)(0);
// END FUNCTION

// FUNCTION: 0x101c8820 size=0x1a
namespace lifted {
extern int g_1059de58;
extern int g_1059de5c;
extern char g_1059de9c;
}
int sub_101c8820()
{
    lifted::g_1059de5c = 6;
    lifted::g_1059de58 = (int)&lifted::g_1059de9c;
    return (int)&lifted::g_1059de58;
}
// END FUNCTION

// FUNCTION: 0x101c8850 size=0x43
#include "platform.h"
#include "CTriggerPush.h"
void *sub_100aa720(int size);
extern char g_1059fbd0[];

// TARGET: trigger_push
DLL_EXPORT CBaseEntity *trigger_push()
{
	void *mem = sub_100aa720(0x5a4);
	CTriggerPush *p;
	if (mem)
		p = ((CTriggerPush *)mem)->sub_101c88c0();
	else
		p = 0;
	p->vfunc106(g_1059fbd0);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101c88c0 size=0x40
#include "CTriggerPush.h"

extern int vt_1048ab34[];
extern int vt_1047f1b4[];

struct CUnknownTerminalBase101c88c0 {
    void sub_1000d5ee();
};

struct CUnknownMember101c88c0 {
    void sub_10002ddd();
};

// TARGET: CTriggerPush::sub_101c88c0
CTriggerPush *CTriggerPush::sub_101c88c0()
{
    ((CUnknownTerminalBase101c88c0 *)this)->sub_1000d5ee();
    *(int *)((char *)this + 0x564) = -1;
    ((CUnknownMember101c88c0 *)((char *)this + 0x568))->sub_10002ddd();
    ((CUnknownMember101c88c0 *)((char *)this + 0x580))->sub_10002ddd();
    *(int **)this = vt_1047f1b4;
    *(int *)((char *)this + 0x598) = 0;
    *(int *)((char *)this + 0x59c) = 0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x101c8910 size=0x4c
#include "CTriggerPush.h"
void __fastcall sub_100cd2d0(void *p);
void __fastcall sub_1009df20(void *p);
void sub_100aa7b0(void *p);
// TARGET: CTriggerPush::vfunc5
CBaseEntity *CTriggerPush::vfunc5(unsigned int flags)
{
	sub_100cd2d0((char *)this + 0x580);
	sub_100cd2d0((char *)this + 0x568);
	sub_100cd2d0((char *)this + 0x4bc);
	sub_100cd2d0((char *)this + 0x4a4);
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity *)(this);
}
// END FUNCTION

// FUNCTION: 0x101c8980 size=0x23
#include "CUnknown100bc0f0.h"

class CUnknown101c8980
{
public:
	char pad0[0x164];
	int m_unk164;

	void sub_101c8980(CInputData100bc0f0 *data);
};

// TARGET: CUnknown101c8980::sub_101c8980
void CUnknown101c8980::sub_101c8980(CInputData100bc0f0 *data)
{
	if (data->m_type == 1)
		m_unk164 = data->m_value;
	else
		m_unk164 = 0;
}
// END FUNCTION

// FUNCTION: 0x101c89c0 size=0x76
#include "CBaseEntity.h"
#include "inputdata_t.h"

void sub_1000fdda();

struct CView101c89c0 : CBaseEntity {
	void sub_101c89c0(inputdata_t &inputdata);
};

inline float VariantFloat(const variant_t &v) { return (v.fieldType == 1) ? v.flValue : 0.0f; }

void CView101c89c0::sub_101c89c0(inputdata_t &inputdata)
{
	if (VariantFloat(inputdata.value) != *(float *)((char *)this + 0x164)) {
		*(float *)((char *)this + 0x59c) = VariantFloat(inputdata.value);
		sub_100ac4e0((int)sub_1000fdda, 0, 0);
		*(float *)((char *)this + 0x5a0) = gpGlobals->curtime;
		*(float *)((char *)this + 0x17c) = gpGlobals->curtime + 0.01;
	}
}
// END FUNCTION

// FUNCTION: 0x101c8a60 size=0x23
#include "CUnknown100bc0f0.h"

class CUnknown101c8a60
{
public:
	char pad0[0x598];
	int m_unk598;

	void sub_101c8a60(CInputData100bc0f0 *data);
};

// TARGET: CUnknown101c8a60::sub_101c8a60
void CUnknown101c8a60::sub_101c8a60(CInputData100bc0f0 *data)
{
	if (data->m_type == 1)
		m_unk598 = data->m_value;
	else
		m_unk598 = 0;
}
// END FUNCTION

// FUNCTION: 0x101c8aa0 size=0x85
#include "CTriggerPush.h"
#include "CEntityVSlots.h"

extern Vector g_1070d9d0;	// vec3_angle

void CTriggerPush::vfunc103()
{
	CBaseEntity::vfunc103();
	CEntityVSlots *pSlots = (CEntityVSlots *)this;
	if (*pSlots->slot221() == g_1070d9d0) {
		Vector vecAngles(0, 360, 0);
		pSlots->slot64(&vecAngles.x);
	}
	sub_101c5080();
	*(int *)((char *)this + 0x59c) = *(int *)((char *)this + 0x164);
}
// END FUNCTION

// FUNCTION: 0x101c8b60 size=0xa3
#include "CBaseEntity.h"
float sub_102283a0(float a, float b, float c, float d);

struct CView101c8b60 {
    char pad0[0x164];
    float m_f164;
    char pad1[0x17c - 0x168];
    float m_flNextThink;
    char pad2[0x598 - 0x180];
    float m_f598;
    float m_f59c;
    float m_flLastTime;
    void sub_101c8b60();
};

// TARGET: CView101c8b60::sub_101c8b60
void CView101c8b60::sub_101c8b60()
{
    float dt = gpGlobals->curtime - m_flLastTime;
    double v = (dt > 0.2f) ? (double)0.2f : ((dt < 0.001) ? 0.001 : dt);
    m_f164 = sub_102283a0(m_f164, m_f59c, m_f598, (m_flLastTime = gpGlobals->curtime, (float)v));
    if (m_f164 == m_flNextThink) {
        ((CBaseEntity *)this)->sub_100ac4e0(0, 0, 0);
        return;
    }
    m_flNextThink = gpGlobals->curtime + 0.1;
}
// END FUNCTION

// FUNCTION: 0x101c8c40 size=0x3a1
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "IPhysicsObject.h"
#include "CTriggerPush.h"
#include "ScopeTrace.h"
#include "CEntityVSlots.h"
#include <math.h>

void sub_101cd940(CTriggerPush *p);
extern float g_104454c4;

// TARGET: CTriggerPush::vfunc175
void CTriggerPush::vfunc175(CBaseEntity *pOther)
{
	bool bSolid;
	{
		ScopeTrace trace("CBaseEntity::IsSolid", pOther ? (pOther->m_name26c ? pOther->m_name26c : g_106b8540) : g_105387dc);
		bSolid = pOther->m_n2b0 && !(pOther->m_b2b4 & 4);
	}
	if (!bSolid)
		return;
	if (pOther->vfunc92() == 1)
		return;
	if (!sub_101c5460(pOther))
		return;

	if (m_flags204 & 0x80) {
		Vector v = m_flSpeed164 * *(Vector *)m_vecMovedir + *(Vector *)pOther->m_vel3d4;
		pOther->sub_100b2e30(&v.x);
		if (pOther->m_vel3d4[2] > g_104454c4)
			pOther->sub_100b3640(1);
		sub_101cd940(this);
		return;
	}
	switch (pOther->vfunc94()) {
	case 0: case 8: case 9: case 0xb: case 0xc:
		break;
	case 7:
		if (pOther->m_obj36c) {
			((IPhysicsObject *)pOther->m_obj36c)->vfunc30(&(m_flSpeed164 * *(Vector *)m_vecMovedir * 100.0f * gpGlobals->frametime));
		}
		break;
	default: {
		Vector v = m_flSpeed164 * *(Vector *)m_vecMovedir;
		if (pOther->sub_100b3700() & 0xa00) {
			if (fabs(m_flSpeed164) < 0.10000000149011612)
				break;
			pOther->sub_100b2e30(&v.x);
			break;
		}
		if (pOther->sub_100b3700() & 0x800000) {
			v = v + pOther->m_vecBaseVelocity;
		}
		if (v.z > g_104454c4 && (pOther->sub_100b3700() & 1)) {
			pOther->sub_100b3640(1);
			Vector p = *((CEntityVSlots *)pOther)->slot220();
			p.z += 1.0f;
			pOther->vfunc62(&p.x);
		}
		pOther->m_vecBaseVelocity = v;
		pOther->sub_100b3580(0x800000);
		break;
	}
	}
}
// END FUNCTION

// FUNCTION: 0x101c90e0 size=0x43
#include "platform.h"
#include "CTriggerTeleport.h"
void *sub_100aa720(int size);
extern char g_1059fc00[];

// TARGET: trigger_teleport
DLL_EXPORT CBaseEntity *trigger_teleport()
{
	void *mem = sub_100aa720(0x5a0);
	CTriggerTeleport *p;
	if (mem)
		p = ((CTriggerTeleport *)mem)->sub_101c91e0();
	else
		p = 0;
	p->vfunc106(g_1059fc00);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101c9150 size=0x6
#include "datamap.h"
#include "CTriggerTeleport.h"
namespace lifted {
extern char g_1059dfa4;
}
datamap_t * CTriggerTeleport::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059dfa4);
}
// END FUNCTION

// FUNCTION: 0x101c9170 size=0x5
int sub_101c91b0(void);
int g_1072cfc4 = ((int (*)(int))sub_101c91b0)(0);
// END FUNCTION

// FUNCTION: 0x101c91b0 size=0x1a
namespace lifted {
extern int g_1059dfa4;
extern int g_1059dfa8;
extern char g_1059dfec;
}
int sub_101c91b0()
{
    lifted::g_1059dfa8 = 2;
    lifted::g_1059dfa4 = (int)&lifted::g_1059dfec;
    return (int)&lifted::g_1059dfa4;
}
// END FUNCTION

// FUNCTION: 0x101c91e0 size=0x3c
#include "CTriggerTeleport.h"

// TARGET: CTriggerTeleport::CTriggerTeleport
CTriggerTeleport::CTriggerTeleport()
{
	m_n59c = 0;
}
// END FUNCTION

// FUNCTION: 0x101c9230 size=0x4c
#include "CTriggerTeleport.h"
void __fastcall sub_100cd2d0(void *p);
void __fastcall sub_1009df20(void *p);
void sub_100aa7b0(void *p);
// TARGET: CTriggerTeleport::vfunc5
CBaseEntity *CTriggerTeleport::vfunc5(unsigned int flags)
{
	sub_100cd2d0((char *)this + 0x580);
	sub_100cd2d0((char *)this + 0x568);
	sub_100cd2d0((char *)this + 0x4bc);
	sub_100cd2d0((char *)this + 0x4a4);
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity *)(this);
}
// END FUNCTION

// FUNCTION: 0x101c92a0 size=0x5
#include "CTriggerTeleport.h"
#include "CBaseTrigger.h"
// TARGET: CTriggerTeleport::vfunc103
// the game's 0x101c92a0: a tail call (jmp) of CBaseTrigger::sub_101c5080
void CTriggerTeleport::vfunc103()
{
	((CBaseTrigger *)this)->CBaseTrigger::sub_101c5080();
}
// END FUNCTION

// FUNCTION: 0x101c92c0 size=0x33f
#include "CLogicAuto.h"
#include "CTriggerTeleport.h"
#include "CEntityVSlots.h"
#include "CGlobalEntityList.h"
#include "CBaseTrigger.h"
#include "engineserver.h"

extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];
void sub_1013a7e0(const Vector &v, float ang, Vector &out);

struct CTeleportCollView { virtual Vector *slot0(); virtual Vector *slot1(); };
struct CTeleportPortal {
	char pad[0x1f58];
	Vector m_vecA;
	Vector m_vecB;
	float m_flYaw;
	float m_flTime;
	int m_n;
};
struct CTeleportOther : CEntityVSlots {
	char pad[0xa8 - 4];
	CTeleportPortal *m_pPortal;
	char pad2[0x270 - 0xac];
	CTeleportCollView m_Coll;
	char pad3[0x3d4 - 0x274];
	Vector m_vecVel;
};

static inline float anglemod(float a)
{
	a = (360.0f / 65536) * ((int)(a * (65536.0f / 360.0f)) & 65535);
	return a;
}

static inline float GetYaw(const Vector *v)
{
	return v->y;
}

// TARGET: CTriggerTeleport::vfunc175
void CTriggerTeleport::vfunc175(CBaseEntity *pOther)
{
	if (!sub_101c5460(pOther))
		return;
	const char *pszTarget = *(const char **)((char *)this + 0x20c);
	CEntityVSlots *pentTarget = (CEntityVSlots *)g_106eb5d8.sub_100f7770(0, pszTarget ? pszTarget : g_106b8540, pOther, 0);
	if (!pentTarget)
		return;
	CTeleportOther *pEnt = (CTeleportOther *)pOther;
	CEntityVSlots *pentLandmark = 0;
	Vector vecLandmarkOffset(0, 0, 0);
	if (m_targetName598) {
		pentLandmark = (CEntityVSlots *)g_106eb5d8.sub_100f7770(0, m_targetName598, pOther, 0);
		if (pentLandmark) {
			vecLandmarkOffset = *pEnt->slot220() - *pentLandmark->slot220();
		}
	}
	pOther->sub_100b3640(1);
	Vector tmp = *pentTarget->slot220();
	if (!pentLandmark && pEnt->m_pPortal) {
		tmp.z -= pEnt->m_Coll.slot1()->z;
	}
	Vector vecVelocity(0, 0, 0);
	QAngle angles(0, 0, 0);
	const QAngle *pAngles;
	Vector *pVelocity;
	float flYaw;
	Vector vecSrc, vecDst;
	if (!pentLandmark) {
		pAngles = (QAngle *)pentTarget->slot221();
		pVelocity = 0;
		flYaw = pAngles->y;
		flYaw -= GetYaw(pEnt->slot219());
		vecSrc = *pEnt->slot217();
		vecDst = *pentTarget->slot217();
	} else {
		flYaw = pentTarget->slot221()->y;
		flYaw -= GetYaw(pentLandmark->slot221());
		angles = *(QAngle *)pEnt->slot221();
		pAngles = &angles;
		angles.y = anglemod(angles.y + flYaw);
		vecVelocity = pEnt->m_vecVel;
		pVelocity = &vecVelocity;
		sub_1013a7e0(vecVelocity, flYaw, vecVelocity);
		sub_1013a7e0(vecLandmarkOffset, flYaw, vecLandmarkOffset);
		vecSrc = *pentLandmark->slot217();
		vecDst = *pentTarget->slot217();
	}
	tmp += vecLandmarkOffset;
	pEnt->slot181(&tmp, (int)pAngles, (int)pVelocity);
	CTeleportPortal *pPortal = pEnt->m_pPortal;
	if (pPortal) {
		pPortal->m_vecA = vecSrc;
		pPortal->m_vecB = vecDst;
		pPortal->m_flYaw = flYaw;
		pPortal->m_flTime = engine->vfunc119(0);
		pPortal->m_n = m_n59c;
	}
}
// END FUNCTION

// FUNCTION: 0x101c96d0 size=0x4b
#include "platform.h"
#include "CConstraintAnchor.h"
#include "CBaseEntity.h"
void *sub_100aa720(unsigned int size);
extern char g_1044b584[];	// CPointEntity vftable
extern const char g_1059fc3c[];

// TARGET: info_teleport_destination
DLL_EXPORT CBaseEntity *info_teleport_destination()
{
	void *mem = sub_100aa720(0x450);
	CBaseEntity *p;
	if (mem) {
		((CConstraintAnchorBase *)mem)->sub_1009d980(0);
		*(void **)mem = g_1044b584;
		p = (CBaseEntity *)mem;
	} else {
		p = 0;
	}
	p->vfunc106(g_1059fc3c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101c9740 size=0x69
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000d5ee(GP *);
void __fastcall sub_10002ddd(void *);
extern int vt_1047fb54;
extern char g_1059fc7c[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: trigger_autosave
DLL_EXPORT GP *trigger_autosave()
{
	GP *p = (GP *)sub_1000db89(0x598);
	if (p) {
		sub_1000d5ee(p);
		*((int *)p + 0x159) = -1;
		sub_10002ddd((char *)p + 0x568);
		sub_10002ddd((char *)p + 0x580);
		*(int **)p = &vt_1047fb54;
	} else {
		p = 0;
	}
	p->name(g_1059fc7c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101c97d0 size=0x25
#include "CTriggerSave.h"

struct CUnknown1070ba0c
{
    virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4();
    virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9();
    virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4();
    virtual void b5(); virtual void b6(); virtual void b7(); virtual void b8(); virtual void b9();
    virtual void c0(); virtual void c1(); virtual bool vfunc22();
};

extern CUnknown1070ba0c *g_1070ba0c;
void sub_10014614(CTriggerSave *pThis);

// TARGET: CTriggerSave::vfunc103
void CTriggerSave::vfunc103()
{
    if (g_1070ba0c->vfunc22())
    {
        sub_10014614(this);
        return;
    }
    sub_1000dfd0();
}
// END FUNCTION

// FUNCTION: 0x101c9810 size=0x30
#include "CTriggerSave.h"
void sub_10014614(CTriggerSave *pThis);
struct CTriggerSaveOtherView { char pad[0xa8]; void *m_pA8; };
void CTriggerSave::vfunc175(CBaseEntity *pOther)
{
	if (((CTriggerSaveOtherView *)pOther)->m_pA8) {
		sub_10014614(this);
		engine->vfunc59("autosave\n");
	}
}
// END FUNCTION

// FUNCTION: 0x101c9850 size=0x5
#include "CBaseTrigger.h"
struct CWrap101c9850 { void sub_101c9850(); };
// TARGET: sub_101c9850
// the game's 0x101c9850: a tail call (jmp) of CBaseTrigger::sub_101c5080
void CWrap101c9850::sub_101c9850()
{
	((CBaseTrigger *)this)->CBaseTrigger::sub_101c5080();
}
// END FUNCTION

// FUNCTION: 0x101c9870 size=0x1d
struct CUnknown101c9870 {
	void sub_101c9870(CUnknown101c9870 *pOther);
};

void CUnknown101c9870::sub_101c9870(CUnknown101c9870 *pOther)
{
	if (*(int *)((char *)pOther + 0xa8) != 0)
	{
		float v = *(float *)((char *)this + 0x3ec);
		*(float *)((char *)pOther + 0x3ec) = v;
	}
}
// END FUNCTION

// FUNCTION: 0x101c98a0 size=0x4b
#include "platform.h"
#include "CConstraintAnchor.h"
#include "CBaseEntity.h"
void *sub_100aa720(unsigned int size);
extern char g_10480014[];	// CAI_ChangeTarget vftable
extern const char g_1059fcb8[];

// TARGET: ai_changetarget
DLL_EXPORT CBaseEntity *ai_changetarget()
{
	void *mem = sub_100aa720(0x454);
	CBaseEntity *p;
	if (mem) {
		((CConstraintAnchorBase *)mem)->sub_1009d980(0);
		*(void **)mem = g_10480014;
		p = (CBaseEntity *)mem;
	} else {
		p = 0;
	}
	p->vfunc106(g_1059fcb8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101c9910 size=0x8
#include "CBaseEntity.h"
#include "CAI_ChangeTarget.h"
// TARGET: CAI_ChangeTarget::vfunc117
char CAI_ChangeTarget::vfunc117() { char c = ((CBaseEntity *)this)->CBaseEntity::vfunc117(); return c & (char)0xfd; }
// END FUNCTION

// FUNCTION: 0x101c9930 size=0x6
#include "datamap.h"
#include "CAI_ChangeTarget.h"
namespace lifted {
extern char g_1059e044;
}
datamap_t *CAI_ChangeTarget::vfunc82()
{
    return (datamap_t *)&lifted::g_1059e044;
}
// END FUNCTION

// FUNCTION: 0x101c9950 size=0x5
int sub_101c9990(void);
int g_1072cfc0 = ((int (*)(int))sub_101c9990)(0);
// END FUNCTION

// FUNCTION: 0x101c9990 size=0x1a
namespace lifted {
extern int g_1059e044;
extern int g_1059e048;
extern char g_1059e08c;
}
int sub_101c9990()
{
    lifted::g_1059e048 = 2;
    lifted::g_1059e044 = (int)&lifted::g_1059e08c;
    return (int)&lifted::g_1059e044;
}
// END FUNCTION

// FUNCTION: 0x101c99c0 size=0x55
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];

struct S101c99c0Obj { char pad[0x5de8]; int m_n5de8; };
struct S101c99c0Ent { char pad[0x94]; S101c99c0Obj *m_pObj; char pad2[0x20c - 0x98]; const char *m_pName; char pad3[0x450 - 0x210]; int m_n450; };

// TARGET: sub_101c99c0
void __fastcall sub_101c99c0(S101c99c0Ent *pThis, int unused, int **pArg)
{
	S101c99c0Ent *pEnt = 0;
	for (;;) {
		const char *name = pThis->m_pName;
		CBaseEntity *pSearching = (CBaseEntity *)*pArg;
		if (!name)
			name = g_106b8540;
		pEnt = (S101c99c0Ent *)g_106eb5d8.sub_100f7770((CBaseEntity *)pEnt, name, pSearching, 0);
		if (!pEnt)
			break;
		*(int *)((char *)pEnt + 0x20c) = pThis->m_n450;
		S101c99c0Obj *o = pEnt->m_pObj;
		if (o)
			o->m_n5de8 = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x101c9a40 size=0x4b
#include "platform.h"
#include "CConstraintAnchor.h"
#include "CBaseEntity.h"
void *sub_100aa720(unsigned int size);
extern char g_104804a4[];	// CAI_ChangeHintGroup vftable
extern const char g_1059fcf4[];

// TARGET: ai_changehintgroup
DLL_EXPORT CBaseEntity *ai_changehintgroup()
{
	void *mem = sub_100aa720(0x460);
	CBaseEntity *p;
	if (mem) {
		((CConstraintAnchorBase *)mem)->sub_1009d980(0);
		*(void **)mem = g_104804a4;
		p = (CBaseEntity *)mem;
	} else {
		p = 0;
	}
	p->vfunc106(g_1059fcf4);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101c9ab0 size=0x8
unsigned char __fastcall sub_100b4320(void *pThis);

// TARGET: sub_101c9ab0
unsigned char __fastcall sub_101c9ab0(void *pThis)
{
	unsigned char bResult = sub_100b4320(pThis);
	bResult &= 0xfd;
	return bResult;
}
// END FUNCTION

// FUNCTION: 0x101c9ad0 size=0x6
#include "datamap.h"
#include "CAI_ChangeHintGroup.h"
namespace lifted {
extern char g_1059e0e4;
}
datamap_t *CAI_ChangeHintGroup::vfunc82()
{
    return (datamap_t *)&lifted::g_1059e0e4;
}
// END FUNCTION

// FUNCTION: 0x101c9af0 size=0x5
int sub_101c9b30(void);
int g_1072cf6c = ((int (*)(int))sub_101c9b30)(0);
// END FUNCTION

// FUNCTION: 0x101c9b30 size=0x1a
namespace lifted {
extern int g_1059e0e4;
extern int g_1059e0e8;
extern char g_1059e12c;
}
int sub_101c9b30()
{
    lifted::g_1059e0e8 = 5;
    lifted::g_1059e0e4 = (int)&lifted::g_1059e12c;
    return (int)&lifted::g_1059e0e4;
}
// END FUNCTION

// FUNCTION: 0x101c9b60 size=0xe9
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList g_106eb5d8;
extern "C" int __cdecl _strcmpi(const char *, const char *);

struct CSquadSetNPC : public CBaseEntity
{
	void sub_102781e0(int squad);	// stub 0x10009912
};

struct CSquadSetEnt
{
	char m_pad0000[0x94];
	CSquadSetNPC *m_pNPC;
};

struct CSquadSetter : public CEntityVSlots
{
	char m_pad0004[0x450 - 4];
	int m_nMode;
	const char *m_pszName;
	int m_nSquad;
	float m_flRadius;
	void sub_101c9b60(int unused);
};

void CSquadSetter::sub_101c9b60(int unused)
{
	for (CSquadSetEnt *pEnt = (CSquadSetEnt *)g_106eb5d8.sub_100f79b0(0, (const float *)slot220(), m_flRadius); pEnt; pEnt = (CSquadSetEnt *)g_106eb5d8.sub_100f79b0((CBaseEntity *)pEnt, (const float *)slot220(), m_flRadius)) {
		CSquadSetNPC *pNPC = pEnt->m_pNPC;
		if (pNPC) {
			switch (m_nMode) {
			case 0:
				if (_strcmpi(pNPC->m_name26c ? pNPC->m_name26c : g_106b8540, m_pszName ? m_pszName : g_106b8540))
					continue;
				break;
			case 1: {
				const char *b = m_pszName ? m_pszName : g_106b8540;
				const char *a = pNPC->sub_1009f200();
				if (_strcmpi(a, b))
					continue;
				break;
			}
			case 2:
				if (_strcmpi(*(const char **)((char *)pNPC + 0x5db0) ? *(const char **)((char *)pNPC + 0x5db0) : g_106b8540, m_pszName ? m_pszName : g_106b8540))
					continue;
				break;
			}
			pNPC->sub_102781e0(m_nSquad);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101c9c90 size=0x6
#include "datamap.h"
#include "CTriggerProximity.h"
namespace lifted {
extern char g_1059e208;
}
datamap_t * CTriggerProximity::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059e208);
}
// END FUNCTION

// FUNCTION: 0x101c9cb0 size=0x5
int * sub_101c9cf0(void);
int * g_1072d020 = ((int * (*)(int))sub_101c9cf0)(0);
// END FUNCTION

// FUNCTION: 0x101c9cf0 size=0x52
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
extern int g_1059e208[2];
void sub_1000ffbf();

int *sub_101c9cf0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, "CTriggerProximityMeasureThink", {0, 0}, 1, 0x20, 0, 0, (void *)sub_1000ffbf },
        { 2, "m_iszMeasureTarget", {0x59c, 0}, 1, 6, "measuretarget" },
        { 1, "m_fRadius", {0x5a0, 0}, 1, 6, "radius" },
        { 10, "m_NearestEntityDistance", {0x5a8, 0}, 1, 0x16, "NearestEntityDistance", g_1055dc70 },
    };
    g_1059e208[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1059e208[0] = (int)&dataDesc[1];
    return g_1059e208;
}
// END FUNCTION

// FUNCTION: 0x101c9d70 size=0x84
#include "platform.h"
#include "CTriggerProximity.h"

extern char g_1059fd34[];

// TARGET: trigger_proximity
DLL_EXPORT CBaseEntity *trigger_proximity()
{
	CTriggerProximity *p = new CTriggerProximity;
	p->vfunc106(g_1059fd34);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101c9e30 size=0x4b
#include "platform.h"
#include "CConstraintAnchor.h"
#include "CBaseEntity.h"
void *sub_100aa720(unsigned int size);
extern char g_1044b584[];	// CPointEntity vftable
extern const char g_1059fd4c[];

// TARGET: logic_proximity
DLL_EXPORT CBaseEntity *logic_proximity()
{
	void *mem = sub_100aa720(0x450);
	CBaseEntity *p;
	if (mem) {
		((CConstraintAnchorBase *)mem)->sub_1009d980(0);
		*(void **)mem = g_1044b584;
		p = (CBaseEntity *)mem;
	} else {
		p = 0;
	}
	p->vfunc106(g_1059fd4c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101c9ea0 size=0x32
#include "CTriggerProximity.h"

void sub_101cf600(CTriggerProximity *pTrigger);

// TARGET: CTriggerProximity::vfunc103
void CTriggerProximity::vfunc103()
{
    if (m_flMeasure05a0 == 0.0f) {
        m_flMeasure05a0 = 32.0f;
    }
    sub_101c5080();
    sub_101cf600(this);
}
// END FUNCTION

// FUNCTION: 0x101c9ef0 size=0xbb
#include "CTriggerProximity.h"

extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];
extern void (__cdecl *g_109f362c)(const char *, ...);

void CTriggerProximity::vfunc113()
{
	sub_100113a6();
	const char *pszName = m_pszMeasureTarget;
	if (!pszName)
		pszName = g_106b8540;
	CGlobalEntityList_Ent *pTarget = (CGlobalEntityList_Ent *)g_106eb5d8.sub_100f7770(0, pszName, 0, 0);
	if (pTarget)
		m_hMeasureTarget.m_Index = *pTarget->v1();
	else
		m_hMeasureTarget.m_Index = 0xffffffff;
	if (!(m_hMeasureTarget.IsValid() && m_hMeasureTarget.Get()->m_pEdict))
		g_109f362c("TriggerProximity - Missing measure target or measure target with no origin!\n");
}
// END FUNCTION

// FUNCTION: 0x101c9fe0 size=0x4a
#include "CTriggerProximity.h"

void sub_1000ffbf();

void CTriggerProximity::vfunc174(CBaseEntity *pOther)
{
	CBaseTrigger::vfunc174(pOther);
	if (sub_101c5460(pOther)) {
		m_i05a4++;
		sub_100ac4e0((int)sub_1000ffbf, 0, 0);
		m_flNextThink = gpGlobals->curtime;
	}
}
// END FUNCTION

// FUNCTION: 0x101ca050 size=0x45
#include "CTriggerProximity.h"
void CTriggerProximity::vfunc176(CBaseEntity *pOther)
{
	CBaseTrigger::vfunc176(pOther);
	if (sub_101c5460(pOther)) {
		if (--m_i05a4 == 0) {
			sub_100ac4e0(0, 0, 0);
			m_flNextThink = 0;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101ca0c0 size=0x24f
// TARGET: CTriggerProximity::sub_101ca0c0
#include "CTriggerProximity.h"
#include "CEntityVSlots.h"

struct CProxTouchLink
{
	CTriggerProximityHandle m_hEntity;	// 0x00
	int m_iStamp;	// 0x04
	CProxTouchLink *m_pNext;	// 0x08
};

struct CProxTouchList
{
	int m_pad00[2];
	CProxTouchLink *m_pFirst;	// 0x08
};

__inline float OutputValue(const COutputEvent &output)
{
	return *(const float *)&output;
}

__inline Vector &EntityOrigin(CBaseEntity *pEntity)
{
	return *(Vector *)((CEntityVSlots *)pEntity)->slot220();
}

void CTriggerProximity::sub_101ca0c0()
{
	if (m_hMeasureTarget.IsValid() && m_hMeasureTarget.Get()->m_pEdict) {
		float flNearestDist = m_flMeasure05a0 + 100.0f;
		CBaseEntity *pNearest = 0;

		CProxTouchList *pList = (CProxTouchList *)sub_1003cd50(1);
		if (pList) {
			CProxTouchLink *pLink = pList->m_pFirst;
			while (pLink != (CProxTouchLink *)pList) {
				CBaseEntity *pEntity = (CBaseEntity *)pLink->m_hEntity.Get();
				if (pEntity && sub_101c5460(pEntity)) {
					CBaseEntity *pTarget = ((EHANDLE &)m_hMeasureTarget).Get();
					float flDist = (EntityOrigin(pEntity) - EntityOrigin(pTarget)).Length();
					if (flDist < flNearestDist) {
						flNearestDist = flDist;
						pNearest = pEntity;
					}
				}
				pLink = pLink->m_pNext;
			}
		}

		if (flNearestDist <= m_flMeasure05a0) {
			if (flNearestDist / m_flMeasure05a0 != OutputValue(m_out05a8)) {
				float flRatio = flNearestDist / m_flMeasure05a0;
				((CVariantCopy *)&m_out05a8)->sub_1000b320(1, &flRatio);
				m_out05a8.sub_100cd300(*(CVariantCopy *)&m_out05a8, pNearest, this, 0);
			}
		}
		m_flNextThink = gpGlobals->curtime;
		return;
	}

	sub_100ac4e0(0, 0, 0);
	m_flNextThink = 0;
}
// END FUNCTION

// FUNCTION: 0x101ca3b0 size=0x7a
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000d5ee(GP *);
void __fastcall sub_10002ddd(void *);
extern int vt_1047d08c;
extern int vt_10480df4;
extern char g_1059fddc[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: trigger_fog
DLL_EXPORT GP *trigger_fog()
{
	GP *p = (GP *)sub_1000db89(0x5b0);
	if (p) {
		sub_1000d5ee(p);
		*((int *)p + 0x159) = -1;
		sub_10002ddd((char *)p + 0x568);
		sub_10002ddd((char *)p + 0x580);
		*(int **)p = &vt_1047d08c;
		sub_10002ddd((char *)p + 0x598);
		*(int **)p = &vt_10480df4;
	} else {
		p = 0;
	}
	p->name(g_1059fddc);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101ca450 size=0x6
extern char g_1059e2fc[];

// TARGET: sub_101ca450
void *sub_101ca450()
{
	return g_1059e2fc;
}
// END FUNCTION

// FUNCTION: 0x101ca470 size=0x5
int sub_101ca4b0(void);
int g_1072cfb0 = ((int (*)(int))sub_101ca4b0)(0);
// END FUNCTION

// FUNCTION: 0x101ca4b0 size=0x1a
namespace lifted {
extern int g_1059e2fc;
extern int g_1059e300;
extern char g_1059e344;
}
int sub_101ca4b0()
{
    lifted::g_1059e300 = 1;
    lifted::g_1059e2fc = (int)&lifted::g_1059e344;
    return (int)&lifted::g_1059e2fc;
}
// END FUNCTION

// FUNCTION: 0x101ca4e0 size=0x14
#include "CTriggerFog.h"

void sub_101ca510();

void CTriggerFog::vfunc103()
{
	sub_101c6860();
	*(void **)((char *)this + 0x1ec) = (void *)&sub_101ca510;
}
// END FUNCTION

// FUNCTION: 0x101ca510 size=0x14e
#include "CBaseTrigger.h"
#include "CEntityVSlots.h"
#include "CPVSFilter.h"

#define TV(n) virtual void s##n();
struct CTempEntsView101ca510
{
	TV(0) TV(1) TV(2) TV(3) TV(4) TV(5) TV(6) TV(7) TV(8) TV(9) TV(10) TV(11) TV(12) TV(13) TV(14) TV(15) TV(16) TV(17) TV(18) TV(19) TV(20) TV(21)
	virtual void vfunc22(IRecipientFilter *pFilter, int nDelay, const Vector *pOrigin, const Vector *pDir);
};

struct CTriggerUnit101ca510 : CBaseTrigger
{
	void sub_101ca510(CBaseEntity *pOther);
};

extern CTempEntsView101ca510 *g_10540528;
float sub_102f9c70(const Vector *pPos);

void CTriggerUnit101ca510::sub_101ca510(CBaseEntity *pOther)
{
	if (!sub_101c5460(pOther))
		return;
	Vector vecVel;
	((CEntityVSlots *)pOther)->slot199(&vecVel, 0);
	if (vecVel.Length() > 5.0f)
	{
		vecVel *= 0.25f;
		Vector vecOrigin = *((CEntityVSlots *)pOther)->slot220();
		vecOrigin.z = sub_102f9c70(&vecOrigin) + 12.0f;
		CPVSFilter filter(vecOrigin);
		g_10540528->vfunc22(&filter, 0, &vecOrigin, &vecVel);
	}
}
// END FUNCTION

// FUNCTION: 0x101ca6c0 size=0x84
#include "platform.h"
#include "CBaseEntity.h"

extern void *vt_1047d08c[];
extern void *vt_104812b4[];
extern void *vt_10481770[];
extern char g_1059fe2c[];
void *sub_100aa720(int size);

struct COutputCtor {
	char m_data[0x18];
	void sub_100cd2a0();
};

struct CTriggerWindView : CBaseEntity {
	void sub_101c0e20();
	char m_padView[0x564 - 0x3e0];
	int m_h564;
	COutputCtor m_out568;
	COutputCtor m_out580;
	COutputCtor m_out598;
	char m_pad5b0[0x5e0 - 0x5b0];
	void **m_pWindVtable;
};

DLL_EXPORT CBaseEntity *trigger_wind()
{
	CTriggerWindView *p = (CTriggerWindView *)sub_100aa720(0x5ec);
	CBaseEntity *e;
	if (p) {
		p->sub_101c0e20();
		p->m_h564 = -1;
		p->m_out568.sub_100cd2a0();
		p->m_out580.sub_100cd2a0();
		*(void ***)p = vt_1047d08c;
		p->m_out598.sub_100cd2a0();
		p->m_pWindVtable = vt_10481770;
		*(void ***)p = vt_104812b4;
		e = p;
	} else
		e = 0;
	e->vfunc106(g_1059fe2c);
	return e;
}
// END FUNCTION

// FUNCTION: 0x101ca780 size=0x119
#include "CPhysicsWind.h"
#include "QAngle.h"
#include "Vector.h"
#include "globalvars.h"
#include <math.h>

extern QAngle g_1070d9d0;
extern Vector g_1070d1b0;
void sub_10139550(const QAngle &angles, Vector *forward);

int CPhysicsWind::vfunc0(void *pController, int pObject, float deltaTime, Vector &linear, Vector &angular)
{
	pObject = pObject % 15 + 5;
	QAngle angles = g_1070d9d0;
	angles.y = (float)(cos((gpGlobals->curtime + 1.0f) * pObject) * 30.0 + m_nBaseYaw);
	Vector forward;
	sub_10139550(angles, &forward);
	Vector wind;
	wind.x = forward.x;
	wind.y = forward.y;
	wind.z = (float)(sin((gpGlobals->curtime + 1.0f) * pObject) + 1.1);
	float flScale = m_flScale;
	linear = wind * 3.0f * flScale;
	Vector tmp = g_1070d1b0;
	angular = tmp;
	return 4;
}
// END FUNCTION

// FUNCTION: 0x101ca8f0 size=0x6
extern char g_1059e370[];

// TARGET: sub_101ca8f0
void *sub_101ca8f0()
{
	return g_1059e370;
}
// END FUNCTION

// FUNCTION: 0x101ca910 size=0x5
int sub_101ca950(void);
int g_1072cf9c = ((int (*)(int))sub_101ca950)(0);
// END FUNCTION

// FUNCTION: 0x101ca950 size=0x1a
namespace lifted {
extern int g_1059e370;
extern int g_1059e374;
extern char g_1059e3b4;
}
int sub_101ca950()
{
    lifted::g_1059e374 = 0xd;
    lifted::g_1059e370 = (int)&lifted::g_1059e3b4;
    return (int)&lifted::g_1059e370;
}
// END FUNCTION

// FUNCTION: 0x101ca980 size=0x83
#include "CTriggerWind.h"
#define W_V(n) virtual void w##n();
#define W_V10(p) W_V(p##0) W_V(p##1) W_V(p##2) W_V(p##3) W_V(p##4) W_V(p##5) W_V(p##6) W_V(p##7) W_V(p##8) W_V(p##9)
struct CWindSystemX {
    W_V10(0) W_V10(1) W_V10(2)
    W_V(30) W_V(31) W_V(32) W_V(33) W_V(34) W_V(35) W_V(36) W_V(37) W_V(38)
    virtual int w39(float *pVec);
};
extern CWindSystemX *g_10723940;
void sub_1000d17a();

// TARGET: CTriggerWind::vfunc103
void CTriggerWind::vfunc103()
{
    m_b05d8 = 1;
    m_n05dc = g_10723940->w39(m_vec05e0);
    m_n05c0 = (int)vfunc221()[1];
    sub_100b3b00();
    sub_101c6860();
    m_n05b8 = m_n05b0;
    m_n05c8 = m_n05c0;
    sub_100ac4e0((int)sub_1000d17a, 0, 0);
    *(float *)((char *)this + 0x17c) = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x101caa40 size=0x4d
#include "CBaseEntity.h"
#include "CTriggerWind.h"
struct CWindPhysObj {
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
};
struct CWindObj {
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2(CWindPhysObj *pObj);
};
// TARGET: CTriggerWind::vfunc174
void CTriggerWind::vfunc174(CBaseEntity *pOther)
{
	if (m_n05dc) {
		if (pOther->vfunc94() == 7 && *(int *)((char *)pOther + 0xa8) == 0) {
			CWindPhysObj *pObj = (CWindPhysObj *)pOther->m_obj36c;
			if (pObj) {
				((CWindObj *)m_n05dc)->vfunc2(pObj);
				pObj->vfunc2();
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101caab0 size=0x4b
#include "CTriggerWind.h"
#include "CBaseEntity.h"

struct S101caab0_Wind
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3(int pObject);
};

struct S101caab0_Ent { char pad[0xa8]; int m_field; };

// TARGET: CTriggerWind::vfunc176
void CTriggerWind::vfunc176(CBaseEntity *pOther)
{
	if (m_n05dc && pOther->vfunc94() == 7 && !((S101caab0_Ent *)pOther)->m_field && pOther->m_obj36c)
		((S101caab0_Wind *)m_n05dc)->v3(pOther->m_obj36c);
}
// END FUNCTION

// FUNCTION: 0x101cab20 size=0x26
#include "CTriggerWind.h"


// TARGET: CTriggerWind::vfunc241
void CTriggerWind::vfunc241(int a)
{
	sub_10012206(a);
	*(float *)((char *)this + 0x17c) = gpGlobals->curtime + 0.1;
}
// END FUNCTION

// FUNCTION: 0x101cab60 size=0x284
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include <math.h>
#include "CTriggerWind.h"
#include "ScopeTrace.h"
#include "globalvars.h"
#include "engineiface.h"

void *sub_101cd9e0(int index);
float sub_1013d450(float a, float b, float c);

// TARGET: CTriggerWind::sub_101cab60
void CTriggerWind::sub_101cab60()
{
	bool bSolid;
	{
		const char *pName = this ? (*(const char **)((char *)this + 0x26c) ? *(const char **)((char *)this + 0x26c) : g_106b8540) : g_105387dc;
		ScopeTrace trace("CBaseEntity::IsSolidFlagSet", pName);
		bSolid = (*(unsigned char *)((char *)this + 0x2b4) >> 3) & 1;
	}
	float *pNextThink = (float *)((char *)this + 0x17c);
	if (!bSolid) {
		((int *)m_vec05e0)[2] = 0;
		m_b05d8 = 1;
		return;
	}
	if (!sub_101cd9e0(1)) {
		*pNextThink = gpGlobals->curtime + 0.2;
		return;
	}
	char bPick = m_b05d8;
	*pNextThink = gpGlobals->curtime + 0.1;
	if (bPick) {
		m_b05d8 = 0;
		m_nSpeedTarget = enginerandom->vfunc2(-m_nSpeedNoise, m_nSpeedNoise) + m_n05b0;
		int v = enginerandom->vfunc2(-m_nDirNoise, m_nDirNoise) + m_n05c0;
		m_nDirTarget = (int)((float)(unsigned short)(int)((float)v * 182.04445f) * 0.005493164f);
	} else {
		bool bDone = true;
		if (fabs((double)(m_nSpeedTarget - m_n05b8)) > 5.0) {
			m_n05b8 = (int)((float)m_n05b8 + (m_nSpeedTarget > m_n05b8 ? 5.0f : -5.0f));
			bDone = false;
		}
		if (fabs((double)(m_nDirTarget - m_n05c8)) > 5.0) {
			float flCur = (float)m_n05c8;
			float flTarget = (float)m_nDirTarget;
			m_n05c8 = (int)sub_1013d450(flTarget, flCur, 5.0f);
		} else if (bDone) {
			m_n05b8 = m_nSpeedTarget;
			float flRand = enginerandom->vfunc1((float)-m_nHoldNoise, (float)m_nHoldNoise) + m_nHoldBase;
			m_b05d8 = 1;
			*pNextThink = flRand + *pNextThink;
		}
	}
	((int *)m_vec05e0)[1] = m_n05c8;
	m_vec05e0[2] = (float)m_n05b8;
}
// END FUNCTION

// FUNCTION: 0x101caea0 size=0x2c
struct CVariantArg101caea0
{
	char pad0[8];
	int m_value;	// 0x08
	char pad1[0x18 - 0xc];
	int m_type;	// 0x18
};

struct CUnkVirt101caea0
{
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7();
};

struct CUnk101caea0
{
	char pad0[0x5b0];
	int m_unk5b0;
	char pad1[0x5d8 - 0x5b4];
	char m_b5d8;
	char pad2[0x5dc - 0x5d9];
	CUnkVirt101caea0 *m_p5dc;

	void sub_101caea0(const CVariantArg101caea0 *d);
};

// TARGET: CUnk101caea0::sub_101caea0
void CUnk101caea0::sub_101caea0(const CVariantArg101caea0 *d)
{
	m_unk5b0 = (d->m_type == 4) ? d->m_value : 0;
	m_b5d8 = 1;
	m_p5dc->vfunc7();
}
// END FUNCTION

// FUNCTION: 0x101caee0 size=0xe9
#include "CTriggerWind.h"

extern "C" __declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);

#define ESD10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

class CEngineServerTW
{
public:
    ESD10(a) ESD10(b) ESD10(c)
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4();
    virtual int IndexOfEdict(int pEdict);
};

extern CEngineServerTW *g_1070b22c;
void sub_101434b0(int nEntIndex, int nLine, const char *pszText, int nDuration, int r, int g, int b, int a);

static inline int EntIndex(CTriggerWind *p)
{
    int pEdict = *(int *)((char *)p + 0x2e0);
    return g_1070b22c->IndexOfEdict(pEdict);
}

int CTriggerWind::vfunc124()
{
    int nTextOffset = sub_101c4f40();
    if (*((unsigned char *)this + 0x224) & 1) {
        char szText[255];
        Q_snprintf(szText, 255, "Dir: %i (%i)", m_n05c8, *(int *)((char *)this + 0x5cc));
        sub_101434b0(EntIndex(this), nTextOffset, szText, 0, 255, 255, 255, 255);
        nTextOffset++;
        Q_snprintf(szText, 255, "Speed: %i (%i)", m_n05b8, *(int *)((char *)this + 0x5bc));
        sub_101434b0(EntIndex(this), nTextOffset, szText, 0, 255, 255, 255, 255);
        nTextOffset++;
    }
    return nTextOffset;
}
// END FUNCTION

// FUNCTION: 0x101cb010 size=0x8b
#include "platform.h"
#include "CBaseEntity.h"

void *sub_100aa720(int size);
extern void *vt_1047d08c[];
extern void *vt_1047da24[];
extern void *vt_1048178c[];
extern char g_1059fe84[];
void __fastcall sub_1000d5ee(void *pThis);
void __fastcall sub_10002ddd(void *pThis);

struct CTriggerImpactView
{
	char m_pad0000[0x564];
	unsigned int m_hFilter;
};

// TARGET: trigger_impact
DLL_EXPORT CBaseEntity *trigger_impact()
{
	void *mem = sub_100aa720(0x5d4);
	CBaseEntity *p;
	if (mem)
	{
		p = (CBaseEntity *)mem;
		CTriggerImpactView *v = (CTriggerImpactView *)mem;
		sub_1000d5ee(p);
		v->m_hFilter = 0xffffffff;
		sub_10002ddd((char *)p + 0x568);
		sub_10002ddd((char *)p + 0x580);
		*(void ***)p = vt_1047d08c;
		sub_10002ddd((char *)p + 0x598);
		*(void ***)p = vt_1047da24;
		sub_10002ddd((char *)p + 0x5bc);
		*(void ***)p = vt_1048178c;
	}
	else
		p = 0;
	p->vfunc106(g_1059fe84);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101cb0d0 size=0x6
#include "datamap.h"
#include "CTriggerImpact.h"
namespace lifted {
extern char g_1059e5f0;
}
datamap_t *CTriggerImpact::vfunc82()
{
    return (datamap_t *)&lifted::g_1059e5f0;
}
// END FUNCTION

// FUNCTION: 0x101cb0f0 size=0x5
int * sub_101cb130(void);
int * g_1072d018 = ((int * (*)(int))sub_101cb130)(0);
// END FUNCTION

// FUNCTION: 0x101cb130 size=0xa1
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
extern int g_1059e5f0[2];
void sub_10014308();
void sub_1000b965();
void sub_1000d422();

int *sub_101cb130()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 1, "m_flMagnitude", {0x5b0, 0}, 1, 6, "Magnitude" },
        { 1, "m_flNoise", {0x5b4, 0}, 1, 6, "Noise" },
        { 1, "m_flViewkick", {0x5b8, 0}, 1, 6, "Viewkick" },
        { 0, "InputImpact", {0, 0}, 1, 8, "Impact", 0, (void *)sub_1000b965 },
        { 1, "InputSetMagnitude", {0, 0}, 1, 8, "SetMagnitude", 0, (void *)sub_1000d422 },
        { 10, "m_pOutputForce", {0x5bc, 0}, 1, 0x16, "ImpactForce", g_1055dc70 },
        { 0, "CTriggerImpactDisable", {0, 0}, 1, 0x20, 0, 0, (void *)sub_10014308 },
    };
    g_1059e5f0[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1059e5f0[0] = (int)&dataDesc[1];
    return g_1059e5f0;
}
// END FUNCTION

// FUNCTION: 0x101cb210 size=0xc
#include "CTriggerImpact.h"
namespace lifted {
int sub_100048ef();
}
int CTriggerImpact::vfunc103()
{
    *(char *)((char *)this + 0x55c) = 1;
    return lifted::sub_100048ef();
}
// END FUNCTION

// FUNCTION: 0x101cb230 size=0x1
#include "CTriggerImpact.h"
void CTriggerImpact::vfunc171()
{
}
// END FUNCTION

// FUNCTION: 0x101cb250 size=0xb2
#include "CTriggerImpact.h"
#include "CBaseTrigger.h"
#include "CEntityVSlots.h"
#include "inputdata_t.h"
#include "globalvars.h"

void sub_10139610(const float *pAngles, Vector *pForward, Vector *pRight, Vector *pUp);

void CTriggerImpact::sub_101cb250(inputdata_t *pInput)
{
	Vector vecDir;
	sub_10139610((float *)((CEntityVSlots *)this)->slot221(), &vecDir, 0, 0);
	void *pCaller = pInput->pCaller;
	void *pActivator = pInput->pActivator;
	m_out5bc.SetVector3D(vecDir * m_flMagnitude);
	m_out5bc.sub_100cd300(*(CVariantCopy *)&m_out5bc, pActivator, pCaller, 0);
	((CBaseTrigger *)this)->sub_101c4bf0();
	m_flNextThink = gpGlobals->curtime + 0.1;
	union { void (CBaseTrigger::*pmf)(); int addr; } u;
	u.pmf = &CBaseTrigger::sub_101c4dd0;
	((CBaseEntity *)this)->sub_100ac4e0(u.addr, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x101cb340 size=0x196
#include "CBaseEntity.h"
#include "CTriggerImpact.h"
#include "Vector.h"
#include "QAngle.h"
#include <stdlib.h>
#include <math.h>

#define TI_SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CImpactPhysics {
	TI_SLOTS10(a0) TI_SLOTS10(a1) TI_SLOTS10(a2)
	virtual void ApplyForceCenter(const Vector &force);
};

struct CImpactEntity {
	TI_SLOTS10(a00) TI_SLOTS10(a01) TI_SLOTS10(a02) TI_SLOTS10(a03) TI_SLOTS10(a04) TI_SLOTS10(a05) TI_SLOTS10(a06) TI_SLOTS10(a07) TI_SLOTS10(a08) TI_SLOTS10(a09)
	TI_SLOTS10(a10) TI_SLOTS10(a11) TI_SLOTS10(a12) TI_SLOTS10(a13) TI_SLOTS10(a14) TI_SLOTS10(a15)
	virtual void b160(); virtual void b161(); virtual void b162(); virtual void b163(); virtual void b164();
	virtual void b165(); virtual void b166(); virtual void b167(); virtual void b168();
	virtual void ViewPunch(const QAngle &angPunch);
	char m_pad0004[0xa8 - 4];
	int m_na8;
	char m_pad00ac[0x36c - 0xac];
	CImpactPhysics *m_pPhysics36c;
	CImpactPhysics *VPhysicsGetObject() { return m_pPhysics36c; }
	bool IsPlayer() { return m_na8 != 0; }
};

struct CImpactSelf {
	TI_SLOTS10(a00) TI_SLOTS10(a01) TI_SLOTS10(a02) TI_SLOTS10(a03) TI_SLOTS10(a04) TI_SLOTS10(a05) TI_SLOTS10(a06) TI_SLOTS10(a07) TI_SLOTS10(a08) TI_SLOTS10(a09)
	TI_SLOTS10(a10) TI_SLOTS10(a11) TI_SLOTS10(a12) TI_SLOTS10(a13) TI_SLOTS10(a14) TI_SLOTS10(a15) TI_SLOTS10(a16) TI_SLOTS10(a17) TI_SLOTS10(a18) TI_SLOTS10(a19)
	TI_SLOTS10(a20) TI_SLOTS10(a21)
	virtual void d220();
	virtual const QAngle &GetLocalAngles();
};

void sub_10139610(const QAngle &angles, Vector *pForward, Vector *pRight, Vector *pUp);

inline Vector ImpactRandomVector(float minVal, float maxVal)
{
	Vector random;
	float flScale = (maxVal - minVal) * 3.051851e-5f;
	random.x = (float)rand() * flScale + minVal;
	random.y = (float)rand() * flScale + minVal;
	random.z = (float)rand() * flScale + minVal;
	return random;
}

inline Vector MulV(const Vector &a, float b) { Vector res; res.x = a[0] * b; res.y = a[1] * b; res.z = a[2] * b; return res; }
inline Vector MulF(float fl, const Vector &v) { return MulV(v, fl); }
void CTriggerImpact::vfunc174(CBaseEntity *pOtherEnt)
{
	CImpactEntity *pOther = (CImpactEntity *)pOtherEnt;
	CImpactSelf *pSelf = (CImpactSelf *)this;
	if (pOther != 0 && pOther->VPhysicsGetObject() != 0) {
		Vector vDir;
		sub_10139610(pSelf->GetLocalAngles(), &vDir, 0, 0);
		Vector vRandom = ImpactRandomVector(-m_flRandomness, m_flRandomness);
		vDir.x += vRandom.x;
		vDir.y += vRandom.y;
		vDir.z += vRandom.z;
		const Vector &dir = vDir;
		pOther->VPhysicsGetObject()->ApplyForceCenter(MulF(m_flMagnitude, dir));
	}
	if (pOther->IsPlayer() && fabs(m_flMagnitude) > 0.0) {
		Vector vDir;
		sub_10139610(pSelf->GetLocalAngles(), &vDir, 0, 0);
		float flPunch = -m_f5b8 * m_flMagnitude * 0.1;
		pOther->ViewPunch(QAngle(vDir.y * flPunch, 0, vDir.x * flPunch));
	}
}
// END FUNCTION

// FUNCTION: 0x101cb550 size=0x23
#include "CUnknown100bc0f0.h"

class CUnknown101cb550
{
public:
	char pad0[0x5b0];
	int m_unk5b0;

	void sub_101cb550(CInputData100bc0f0 *data);
};

// TARGET: CUnknown101cb550::sub_101cb550
void CUnknown101cb550::sub_101cb550(CInputData100bc0f0 *data)
{
	if (data->m_type == 1)
		m_unk5b0 = data->m_value;
	else
		m_unk5b0 = 0;
}
// END FUNCTION

// FUNCTION: 0x101cb590 size=0x85
#include "CTriggerImpact.h"

extern "C" __declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);
void sub_101434b0(int edictIndex, int line, const char *text, int a, int r, int g, int b, int alpha);

int CTriggerImpact::vfunc124()
{
	char szText[256];
	int nLines = sub_100104e2();
	if (m_flags224 & 1) {
		Q_snprintf(szText, 255, "Magnitude: %3.2f", m_flMagnitude);
		int edict = m_pEdict2e0;
		sub_101434b0(engine->vfunc35(edict), nLines, szText, 0, 255, 255, 255, 255);
		nLines++;
	}
	return nLines;
}
// END FUNCTION

// FUNCTION: 0x101cb650 size=0x6
#include "datamap.h"
#include "CTriggerCheckVolume.h"
namespace lifted {
extern char g_1059e768;
}
datamap_t * CTriggerCheckVolume::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059e768);
}
// END FUNCTION

// FUNCTION: 0x101cb670 size=0x5
int * sub_101cb6b0(void);
int * g_1072cfbc = ((int * (*)(int))sub_101cb6b0)(0);
// END FUNCTION

// FUNCTION: 0x101cb6b0 size=0x52
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
extern int g_1059e768[2];
void sub_10004395();

int *sub_101cb6b0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, "InputCheckNow", {0, 0}, 1, 8, "CheckNow", 0, (void *)sub_10004395 },
        { 10, "m_OnEntityInVolume", {0x598, 0}, 1, 0x16, "OnEntityInVolume", g_1055dc70 },
    };
    g_1059e768[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1059e768[0] = (int)&dataDesc[1];
    return g_1059e768;
}
// END FUNCTION

// FUNCTION: 0x101cb730 size=0x7a
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000d5ee(GP *);
void __fastcall sub_10002ddd(void *);
extern int vt_1047d08c;
extern int vt_10481c4c;
extern char g_1059fef0[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: trigger_checkvolume
DLL_EXPORT GP *trigger_checkvolume()
{
	GP *p = (GP *)sub_1000db89(0x5b0);
	if (p) {
		sub_1000d5ee(p);
		*((int *)p + 0x159) = -1;
		sub_10002ddd((char *)p + 0x568);
		sub_10002ddd((char *)p + 0x580);
		*(int **)p = &vt_1047d08c;
		sub_10002ddd((char *)p + 0x598);
		*(int **)p = &vt_10481c4c;
	} else {
		p = 0;
	}
	p->name(g_1059fef0);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101cb7d0 size=0x9f
#include "CTriggerCheckVolume.h"
#include "CCollisionProperty.h"

int sub_101cca80(CBaseEntity **pList, int listMax, const float *pMins, const float *pMaxs, int a, int b);	// stub 0x10003f35

struct CCheckList { CBaseEntity *e[0x800]; CCheckList() { for (int i = 0; i < 0x800; i++) e[i] = 0; } };

void CTriggerCheckVolume::vfunc251(int a)
{
	if (!m_bDisabled) {
		CCheckList list;
		float mins[3];
		float maxs[3];
		CCollisionProperty *pCollide = (CCollisionProperty *)((char *)this + 0x270);
		pCollide->sub_100dcd90((float *)((char *)pCollide + 4), (float *)((char *)pCollide + 0x10), mins, maxs);
		int n = sub_101cca80(list.e, 0x800, mins, maxs, 0, 0);
		for (int i = 0; i < n; i++) {
			if (sub_101c5460(list.e[i]))
				m_out598.sub_100cd660(list.e[i], this, 0);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101cb8a0 size=0x10
#include "CTriggerCheckVolume.h"

// TARGET: CTriggerCheckVolume::vfunc103
void CTriggerCheckVolume::vfunc103()
{
	CBaseEntity::vfunc103();
	sub_101c5080();
}
// END FUNCTION

// FUNCTION: 0x101cb8c0 size=0x6
#include "datamap.h"
#include "CStealthModifier.h"
namespace lifted {
extern char g_1059e804;
}
datamap_t * CStealthModifier::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059e804);
}
// END FUNCTION

// FUNCTION: 0x101cb8e0 size=0x5
int sub_101cb920(void);
int g_1072d014 = ((int (*)(int))sub_101cb920)(0);
// END FUNCTION

// FUNCTION: 0x101cb920 size=0x1a
namespace lifted {
extern int g_1059e804;
extern int g_1059e808;
extern char g_1059e84c;
}
int sub_101cb920()
{
    lifted::g_1059e808 = 1;
    lifted::g_1059e804 = (int)&lifted::g_1059e84c;
    return (int)&lifted::g_1059e804;
}
// END FUNCTION

// FUNCTION: 0x101cb950 size=0x69
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000d5ee(GP *);
void __fastcall sub_10002ddd(void *);
extern int vt_1048210c;
extern char g_1059ff30[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: trigger_stealth_mod
DLL_EXPORT GP *trigger_stealth_mod()
{
	GP *p = (GP *)sub_1000db89(0x59c);
	if (p) {
		sub_1000d5ee(p);
		*((int *)p + 0x159) = -1;
		sub_10002ddd((char *)p + 0x568);
		sub_10002ddd((char *)p + 0x580);
		*(int **)p = &vt_1048210c;
	} else {
		p = 0;
	}
	p->name(g_1059ff30);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101cb9e0 size=0x10
#include "CStealthModifier.h"

// TARGET: CStealthModifier::vfunc103
void CStealthModifier::vfunc103()
{
	CBaseEntity::vfunc103();
	sub_101c5080();
}
// END FUNCTION

// FUNCTION: 0x101cba00 size=0x2d
struct CStealthUnit101cba00 {
    char pad[0x598];
    int m_i598;
    void sub_10008ef4(void *pOther);
    void sub_101cba00(void *pOther);
};
struct CCombatUnit101cba00 {
    void sub_1032f930(int a);
};
struct CEntUnit101cba00 {
    char pad[0x9c];
    void *m_p9c;
};

// TARGET: sub_101cba00
void CStealthUnit101cba00::sub_101cba00(void *pOther)
{
    sub_10008ef4(pOther);
    if (((CEntUnit101cba00 *)pOther)->m_p9c) {
        ((CCombatUnit101cba00 *)((CEntUnit101cba00 *)pOther)->m_p9c)->sub_1032f930(m_i598);
    }
}
// END FUNCTION

// FUNCTION: 0x101cba40 size=0x2d
#include "CStealthModifier.h"

struct CStealthTarget
{
	void sub_10011f13(int);
};

// TARGET: CStealthModifier::vfunc176
void CStealthModifier::vfunc176(CBaseEntity *pOther)
{
	CBaseTrigger::vfunc176(pOther);
	if (*(CStealthTarget **)((char *)pOther + 0x9c) != 0)
	{
		(*(CStealthTarget **)((char *)pOther + 0x9c))->sub_10011f13(m_i598);
	}
}
// END FUNCTION

// FUNCTION: 0x101cba80 size=0x6
#include "datamap.h"
#include "CTriggerEnvAudio.h"
namespace lifted {
extern char g_1059e878;
}
datamap_t * CTriggerEnvAudio::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059e878);
}
// END FUNCTION

// FUNCTION: 0x101cbaa0 size=0x5
int sub_101cbae0(void);
int g_1072cf70 = ((int (*)(int))sub_101cbae0)(0);
// END FUNCTION

// FUNCTION: 0x101cbae0 size=0x1a
namespace lifted {
extern int g_1059e878;
extern int g_1059e87c;
extern char g_1059e8bc;
}
int sub_101cbae0()
{
    lifted::g_1059e87c = 1;
    lifted::g_1059e878 = (int)&lifted::g_1059e8bc;
    return (int)&lifted::g_1059e878;
}
// END FUNCTION

// FUNCTION: 0x101cbb10 size=0x69
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000d5ee(GP *);
void __fastcall sub_10002ddd(void *);
extern int vt_104825cc;
extern char g_1059ff70[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: trigger_environmental_audio
DLL_EXPORT GP *trigger_environmental_audio()
{
	GP *p = (GP *)sub_1000db89(0x59c);
	if (p) {
		sub_1000d5ee(p);
		*((int *)p + 0x159) = -1;
		sub_10002ddd((char *)p + 0x568);
		sub_10002ddd((char *)p + 0x580);
		*(int **)p = &vt_104825cc;
	} else {
		p = 0;
	}
	p->name(g_1059ff70);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101cbba0 size=0x10
#include "CTriggerEnvAudio.h"

// TARGET: CTriggerEnvAudio::vfunc103
void CTriggerEnvAudio::vfunc103()
{
	CBaseEntity::vfunc103();
	sub_101c5080();
}
// END FUNCTION

// FUNCTION: 0x101cbbc0 size=0x32
#include "CTriggerEnvAudio.h"

struct CUnit101cbbc0Obj {
	void sub_1000b6d1(int id);
};

// TARGET: CTriggerEnvAudio::vfunc175
void CTriggerEnvAudio::vfunc175(CBaseEntity *pOther)
{
	CBaseEntity::vfunc175(pOther);
	if (pOther) {
		CUnit101cbbc0Obj *pObj = *(CUnit101cbbc0Obj **)((char *)pOther + 0xa8);
		if (pObj)
			pObj->sub_1000b6d1(m_i598);
	}
}
// END FUNCTION

// FUNCTION: 0x101cbc10 size=0x39
// TARGET: CTriggerEnvAudio::vfunc176
#include "CTriggerEnvAudio.h"

struct CUnknownObj101cbc10
{
	int sub_1000a46b();
	void sub_1000b6d1(int a);
};

void CTriggerEnvAudio::vfunc176(CBaseEntity *pOther)
{
	CBaseTrigger::vfunc176(pOther);
	if (pOther)
	{
		CUnknownObj101cbc10 *pObj = *(CUnknownObj101cbc10 **)((char *)pOther + 0xa8);
		if (pObj)
		{
			if (pObj->sub_1000a46b() == m_i598)
				pObj->sub_1000b6d1(-1);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101cbc60 size=0x6
#include "datamap.h"
#include "CSmallHullTrigger.h"
namespace lifted {
extern char g_1059e8e8;
}
datamap_t * CSmallHullTrigger::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059e8e8);
}
// END FUNCTION

// FUNCTION: 0x101cbc80 size=0x5
int sub_101cbcc0(void);
int g_1072cf40 = ((int (*)(int))sub_101cbcc0)(0);
// END FUNCTION

// FUNCTION: 0x101cbcc0 size=0x1a
namespace lifted {
extern int g_1059e8e8;
extern int g_1059e8ec;
extern char g_1072d024;
}
int sub_101cbcc0()
{
    lifted::g_1059e8ec = 1;
    lifted::g_1059e8e8 = (int)&lifted::g_1072d024;
    return (int)&lifted::g_1059e8e8;
}
// END FUNCTION

// FUNCTION: 0x101cbcf0 size=0x69
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000d5ee(GP *);
void __fastcall sub_10002ddd(void *);
extern int vt_10482a8c;
extern char g_1059ffbc[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: trigger_small_hull
DLL_EXPORT GP *trigger_small_hull()
{
	GP *p = (GP *)sub_1000db89(0x598);
	if (p) {
		sub_1000d5ee(p);
		*((int *)p + 0x159) = -1;
		sub_10002ddd((char *)p + 0x568);
		sub_10002ddd((char *)p + 0x580);
		*(int **)p = &vt_10482a8c;
	} else {
		p = 0;
	}
	p->name(g_1059ffbc);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101cbd80 size=0x10
#include "CSmallHullTrigger.h"

// TARGET: CSmallHullTrigger::vfunc103
void CSmallHullTrigger::vfunc103()
{
	CBaseEntity::vfunc103();
	sub_101c5080();
}
// END FUNCTION

// FUNCTION: 0x101cbda0 size=0x21
struct CSmallHullTriggerX
{
    void sub_10008ef4(void *pOther);
    void sub_101cbda0(void *pOther);
};

// TARGET: sub_101cbda0
void CSmallHullTriggerX::sub_101cbda0(void *pOther)
{
    sub_10008ef4(pOther);
    void *pObj = *(void **)((char *)pOther + 0x9c);
    if (pObj != 0) {
        void (__fastcall *pfn)(void *) = (void (__fastcall *)(void *))(*(void ***)pObj)[0x53c / 4];
        pfn(pObj);
    }
}
// END FUNCTION

// FUNCTION: 0x101cbde0 size=0x2f
// TARGET: CSmallHullTrigger::vfunc176
#include "CSmallHullTrigger.h"
#include "CEntityVSlots.h"

void CSmallHullTrigger::vfunc176(CBaseEntity *pOther) {
    CBaseTrigger::vfunc176(pOther);
    if (!((CEntityVSlots *)pOther)->slot116()) {
        CEntityVSlots *pObj = *(CEntityVSlots **)((char *)pOther + 0x9c);
        if (pObj) {
            pObj->slot336();
        }
    }
}
// END FUNCTION

// FUNCTION: 0x101cbe40 size=0x57
#include "CCineNPC.h"

void sub_100aa7b0(void *);
void __fastcall sub_1009df20(void *self);

struct Helper
{
	void *sub_101cbe40(unsigned int flags);
};

// TARGET: Helper::sub_101cbe40
void *Helper::sub_101cbe40(unsigned int flags)
{
	((CCineNPCSlot *)((char *)this + 0x598))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x580))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x568))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x4bc))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x4a4))->sub_10015708();
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101cbec0 size=0x57
#include "CCineNPC.h"

void sub_100aa7b0(void *);
void __fastcall sub_1009df20(void *self);

struct Helper
{
	void *sub_101cbec0(unsigned int flags);
};

// TARGET: Helper::sub_101cbec0
void *Helper::sub_101cbec0(unsigned int flags)
{
	((CCineNPCSlot *)((char *)this + 0x598))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x580))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x568))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x4bc))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x4a4))->sub_10015708();
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101cbf40 size=0x57
#include "CCineNPC.h"

void sub_100aa7b0(void *);
void __fastcall sub_1009df20(void *self);

struct Helper
{
	void *sub_101cbf40(unsigned int flags);
};

// TARGET: Helper::sub_101cbf40
void *Helper::sub_101cbf40(unsigned int flags)
{
	((CCineNPCSlot *)((char *)this + 0x598))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x580))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x568))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x4bc))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x4a4))->sub_10015708();
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101cbfc0 size=0x1e
#include "CTriggerVolume.h"

void sub_100aa7b0(void *p);

// TARGET: CTriggerVolume::vfunc5
CBaseEntity *CTriggerVolume::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101cbff0 size=0x57
#include "CCineNPC.h"

void sub_100aa7b0(void *);
void __fastcall sub_1009df20(void *self);

struct Helper
{
	void *sub_101cbff0(unsigned int flags);
};

// TARGET: Helper::sub_101cbff0
void *Helper::sub_101cbff0(unsigned int flags)
{
	((CCineNPCSlot *)((char *)this + 0x5e4))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x580))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x568))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x4bc))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x4a4))->sub_10015708();
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101cc070 size=0x4c
#include "CTriggerSave.h"
void __fastcall sub_100cd2d0(void *p);
void __fastcall sub_1009df20(void *p);
void sub_100aa7b0(void *p);
// TARGET: CTriggerSave::vfunc5
CBaseEntity *CTriggerSave::vfunc5(unsigned int flags)
{
	sub_100cd2d0((char *)this + 0x580);
	sub_100cd2d0((char *)this + 0x568);
	sub_100cd2d0((char *)this + 0x4bc);
	sub_100cd2d0((char *)this + 0x4a4);
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity *)(this);
}
// END FUNCTION

// FUNCTION: 0x101cc0e0 size=0x1e
#include "CAI_ChangeTarget.h"

void sub_100aa7b0(void *p);

// TARGET: CAI_ChangeTarget::vfunc5
CAI_ChangeTarget *CAI_ChangeTarget::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101cc110 size=0x1e
#include "CAI_ChangeHintGroup.h"

void sub_100aa7b0(void *p);

// TARGET: CAI_ChangeHintGroup::vfunc5
CBaseEntity *CAI_ChangeHintGroup::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101cc140 size=0x57
#include "CCineNPC.h"
#include "CTriggerProximity.h"

void sub_100aa7b0(void *);
void __fastcall sub_1009df20(void *self);

// TARGET: CTriggerProximity::vfunc5
CBaseEntity *CTriggerProximity::vfunc5(unsigned int flags)
{
	((CCineNPCSlot *)((char *)this + 0x5a8))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x580))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x568))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x4bc))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x4a4))->sub_10015708();
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity *)(this);
}
// END FUNCTION

// FUNCTION: 0x101cc1c0 size=0x57
#include "CCineNPC.h"

void sub_100aa7b0(void *);
void __fastcall sub_1009df20(void *self);

struct Helper
{
	void *sub_101cc1c0(unsigned int flags);
};

// TARGET: Helper::sub_101cc1c0
void *Helper::sub_101cc1c0(unsigned int flags)
{
	((CCineNPCSlot *)((char *)this + 0x598))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x580))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x568))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x4bc))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x4a4))->sub_10015708();
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101cc240 size=0x57
#include "CCineNPC.h"

void sub_100aa7b0(void *);
void __fastcall sub_1009df20(void *self);

struct Helper
{
	void *sub_101cc240(unsigned int flags);
};

// TARGET: Helper::sub_101cc240
void *Helper::sub_101cc240(unsigned int flags)
{
	((CCineNPCSlot *)((char *)this + 0x598))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x580))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x568))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x4bc))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x4a4))->sub_10015708();
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101cc2c0 size=0x62
#include "CTriggerImpact.h"

struct CUtlVector24 { void sub_10015708(); };
void sub_100aa7b0(void *p);

CTriggerImpact *CTriggerImpact::vfunc5(unsigned int flags)
{
	((CUtlVector24 *)((char *)this + 0x5bc))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x598))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x580))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x568))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x4bc))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x4a4))->sub_10015708();
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
