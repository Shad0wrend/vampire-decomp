// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 84 blocks
#include "vampire.h"

// FUNCTION: 0x1023a650 size=0x6
#include "datamap.h"
#include "CDecal.h"
namespace lifted {
extern char g_105c2580;
}
datamap_t *CDecal::vfunc82()
{
    return (datamap_t *)&lifted::g_105c2580;
}
// END FUNCTION

// FUNCTION: 0x1023a670 size=0x5
int sub_1023a6b0(void);
int g_10752ee4 = ((int (*)(int))sub_1023a6b0)(0);
// END FUNCTION

// FUNCTION: 0x1023a6b0 size=0x1a
namespace lifted {
extern int g_105c2580;
extern int g_105c2584;
extern char g_105c25c4;
}
int sub_1023a6b0()
{
    lifted::g_105c2584 = 3;
    lifted::g_105c2580 = (int)&lifted::g_105c25c4;
    return (int)&lifted::g_105c2580;
}
// END FUNCTION

// FUNCTION: 0x1023a6e0 size=0x4b
#include "platform.h"
#include "CConstraintAnchor.h"
#include "CBaseEntity.h"
void *sub_100aa720(unsigned int size);
extern char g_1049618c[];	// CDecal vftable
extern const char g_105c3fa4[];

// TARGET: infodecal
DLL_EXPORT CBaseEntity *infodecal()
{
	void *mem = sub_100aa720(0x454);
	CBaseEntity *p;
	if (mem) {
		((CConstraintAnchorBase *)mem)->sub_1009d980(0);
		*(void **)mem = g_1049618c;
		p = (CBaseEntity *)mem;
	} else {
		p = 0;
	}
	p->vfunc106(g_105c3fa4);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1023a750 size=0x5b
#include "CDecal.h"
#include "CBaseEntity.h"
extern struct CGlobalVarsView { char pad[0x30]; char m_b30; } *g_1070b228;
void sub_1000572c();
void sub_1000c888();
void sub_10014614(void *);
struct CDecalView
{
	void *vptr;
	char pad0004[0x1f0 - 4];
	void *m_pfnUse;
	char pad01f4[0x204 - 0x1f4];
	unsigned int m_nFlags;
	char pad0208[0x26c - 0x208];
	const char *m_pszName;
	char pad0270[0x450 - 0x270];
	int m_nTexture;
};
void CDecal::vfunc103()
{
	CDecalView *p = (CDecalView *)this;
	if (p->m_nTexture >= 0 && (!g_1070b228->m_b30 || !(p->m_nFlags & 0x800))) {
		if (p->m_pszName == 0) {
			sub_1023aa30();
			return;
		}
		((CBaseEntity *)this)->sub_100ac4e0((int)sub_1000572c, 0, 0);
		p->m_pfnUse = (void *)sub_1000c888;
		return;
	}
	sub_10014614(this);
}
// END FUNCTION

// FUNCTION: 0x1023a7d0 size=0x1de
#include "utlrbtree.h"
#include "UTIL_Trace.h"
#include "CBroadcastRecipientFilter.h"
#include "globalvars.h"
#include "engineserver.h"
#include "UTIL_BloodStream.h"
#include "CEntityVSlots.h"
#include "CRopeKeyframe.h"
#include "ConVar.h"

void __cdecl sub_101c0b10();

// Ray_t::Init (0x1004f7a0) as the header inline (VC6 declines it here by budget: out-of-line COMDAT).
inline void Ray_t::sub_1004f7a0(const float *pStart, const float *pEnd)
{
	VectorSubtract(*(const Vector *)pEnd, *(const Vector *)pStart, *(Vector *)m_Delta);
	m_IsSwept = ((Vector *)m_Delta)->LengthSqr() != 0;
	m_StartOffset[2] = 0;
	m_StartOffset[1] = 0;
	m_StartOffset[0] = 0;
	m_IsRay = true;
	m_Extents[2] = 0;
	m_Extents[1] = 0;
	m_Extents[0] = 0;
	m_Start[0] = pStart[0];
	m_Start[1] = pStart[1];
	m_Start[2] = pStart[2];
	m_b32 = 0;
	m_n34 = 0;
	m_b33 = 0;
}

namespace block_1023a7d0 {
// util.h ENTINDEX and baseentity.h CBaseEntity::entindex() (pev at +0x2e0).
inline int ENTINDEX(int pEdict) { return engine->vfunc35(pEdict); }
struct CBaseEntityS : CBaseEntity
{
	int entindex() { return ENTINDEX(m_pEdict2e0); }
};
// convar.h ConVar::GetInt / GetBool as the SDK writes them.
struct ConVarV : ConVar
{
	int GetInt()
	{
		if (m_pParent->vfunc1())
			return 0;
		ConVar *var = m_pParent;
		return var->m_nValue;
	}
	bool GetBool() { return !!GetInt(); }
};
#define r_visualizetraces (*(ConVarV *)&g_10738960)
// trace_t as the SDK declares it (cmodel.h / trace.h / gametrace.h): its Vector members give it an implicit inline
// constructor (out of line elsewhere as 0x1003ff80).
struct cplane_t
{
	Vector normal;
	float dist;
	unsigned char type;
	unsigned char signbits;
	unsigned char pad[2];
};
struct csurface_t
{
	const char *name;
	short surfaceProps;
	unsigned short flags;
};
class CBaseTrace
{
public:
	Vector startpos;
	Vector endpos;
	cplane_t plane;
	float fraction;
	int contents;
	unsigned short dispFlags;
	bool allsolid;
	bool startsolid;
};
class CGameTraceS : public CBaseTrace
{
public:
	float fractionleftsolid;
	csurface_t surface;
	int hitgroup;
	short physicsbone;
	CBaseEntityS *m_pEnt;
	int hitbox;
};
typedef CGameTraceS trace_t;
// Ray_t as the SDK declares it (Vector members, so an implicit inline constructor).
struct RayS
{
	Vector m_Start;
	Vector m_Delta;
	Vector m_Extents;
	Vector m_StartOffset;
	bool m_IsRay;
	bool m_IsSwept;
	char m_b32;
	char m_b33;
	float m_n34;
};
// util_shared.h UTIL_TraceLine with the r_visualizetraces debug line.
inline void UTIL_TraceLine(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, const void *ignore,
	int collisionGroup, trace_t *ptr)
{
	RayS ray;
	((Ray_t *)&ray)->sub_1004f7a0(&vecAbsStart.x, &vecAbsEnd.x);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4((Ray_t *)&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, (CGameTrace *)ptr);
	if (r_visualizetraces.GetBool())
		sub_10146570(&ptr->startpos, &ptr->endpos, 0xff, 0, 0, 1, -1.0f);
}
}


// TARGET: CRopeKeyframe::sub_1023a7d0
// world.cpp CDecal::TriggerDecal (the use function of an info_decal with a targetname); vtmb drops the SDK's
// m_pEnt null test and adds 0.1 as a double.
void CRopeKeyframe::sub_1023a7d0(int a, int b, int c, int d)
{
	block_1023a7d0::trace_t trace;
	int entityIndex;

	block_1023a7d0::UTIL_TraceLine(*(Vector *)((CEntityVSlots *)this)->slot220() - Vector(5.0f, 5.0f, 5.0f), *(Vector *)((CEntityVSlots *)this)->slot220() + Vector(5.0f, 5.0f, 5.0f), 0x400b, this, 0, &trace);

	entityIndex = trace.m_pEnt->entindex();

	CBroadcastRecipientFilter filter;

	g_10540528->vfunc16(filter, 0.0f, (Vector *)((CEntityVSlots *)this)->slot220(), entityIndex, *(int *)&m_b450);

	sub_100ac4e0((int)sub_101c0b10, 0, 0);
	m_flNextThink = gpGlobals->curtime + 0.1;
}
// END FUNCTION

// FUNCTION: 0x1023aa30 size=0x1d8
#include "UTIL_Trace.h"
#include "CDecal.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "engineserver.h"

void sub_10138130(const float *in1, const float (*in2)[4], float *out);	// VectorITransform
void __fastcall sub_101c0b10(CBaseEntity *pEnt);	// SUB_Remove

#define EV10(p) virtual void e##p##0(); virtual void e##p##1(); virtual void e##p##2(); virtual void e##p##3(); virtual void e##p##4(); \
	virtual void e##p##5(); virtual void e##p##6(); virtual void e##p##7(); virtual void e##p##8(); virtual void e##p##9();
struct CEngineDecalView
{
	EV10(0) EV10(1) EV10(2)
	virtual void e30(); virtual void e31(); virtual void e32(); virtual void e33(); virtual void e34();
	virtual int IndexOfEdict(int edict);
	virtual void e36(); virtual void e37(); virtual void e38(); virtual void e39();
	EV10(4) EV10(5)
	virtual void e60(); virtual void e61(); virtual void e62();
	virtual void StaticDecal(const Vector &origin, int decalIndex, int entityIndex, int modelIndex);
};

inline void VectorITransform(const Vector &in1, const float (&in2)[3][4], Vector &out)
{
	sub_10138130(&in1.x, in2, &out.x);
}

static inline bool TestBit(unsigned int value, int bit)
{
	return ((value >> bit) & 1) != 0;
}

inline int ENTINDEX(int pEdict) { return ((CEngineDecalView *)engine)->IndexOfEdict(pEdict); }

struct CDecalEntView : CBaseEntity
{
	const Vector &GetAbsOrigin() { return *((CEntityVSlots *)this)->slot217(); }
	int entindex() { return ENTINDEX(m_pEdict2e0); }
	int GetModelIndex() { return ((CEntityVSlots *)this)->slot8(); }
	const float (&EntityToWorldTransform())[3][4]
	{
		if (TestBit(m_flags268, 11))
			((CEntityVSlots *)this)->slot98();
		return *(const float (*)[3][4])((char *)this + 0x130);
	}
};

void CDecal::sub_1023aa30()
{
	CGameTrace trace;
	CDecal::CTraceFilterValidForDecal traceFilter(this, 0);
	int entityIndex, modelIndex = 0;

	Vector position = *((CEntityVSlots *)this)->slot217();
	UTIL_TraceLine_RayCall(position - Vector(5, 5, 5), position + Vector(5, 5, 5), 0x200400b, &traceFilter, &trace);

	entityIndex = (short)(int)trace.m_pEnt ? ((CDecalEntView *)trace.m_pEnt)->entindex() : 0;
	if (entityIndex)
	{
		CDecalEntView *ent = (CDecalEntView *)trace.m_pEnt;
		if (ent)
		{
			modelIndex = ent->GetModelIndex();
			VectorITransform(((CDecalEntView *)this)->GetAbsOrigin(), ent->EntityToWorldTransform(), position);
		}
	}

	((CEngineDecalView *)engine)->StaticDecal(position, m_nTexture, entityIndex, modelIndex);

	sub_101c0b10((CBaseEntity *)this);
}
// END FUNCTION

// FUNCTION: 0x1023ac90 size=0x20
#include "vampire.h"
#include "CDecal.h"
// TARGET: CDecal::CTraceFilterValidForDecal::CTraceFilterValidForDecal
CDecal::CTraceFilterValidForDecal::CTraceFilterValidForDecal(void *pPassEnt, int collisionGroup)
    : CTraceFilterSimple(pPassEnt, collisionGroup)
{
}
// END FUNCTION

// FUNCTION: 0x1023acc0 size=0xbb
#include "CBaseEntity.h"
#include "CDecal.h"
#include "CBCCSlotViews.h"

extern "C" unsigned int __cdecl strlen(const char *);
#pragma intrinsic(strlen)

class CGameRulesView	// slot 3 of the global object at 0x1070b240
{
public:
	VIEW_SLOT(0) VIEW_SLOT(1) VIEW_SLOT(2)
	virtual bool vfunc3(void *pHandleEntity);
};
extern CGameRulesView *g_1070b240;
extern const char *g_105c2648[6];
extern char g_106b8540[];
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl _strnicmp(const char *, const char *, unsigned int);

#define CLASSNAME_OF(e, out) const char *out = *(const char *volatile *)&(e)->m_classname11c; if (!out) out = g_106b8540;

bool CDecal::CTraceFilterValidForDecal::vfunc0(void *pHandleEntity, int contentsMask)
{
	CBaseEntity *pEnt;
	if (g_1070b240->vfunc3(pHandleEntity))
		pEnt = 0;
	else
		pEnt = (CBaseEntity *)((CServerUnknownSlotView *)pHandleEntity)->vfunc4();
	for (unsigned int i = 0; i < 6; i++) {
		bool bMatch;
		const char *pszName = g_105c2648[i];
		CLASSNAME_OF(pEnt, pszClass0)
		if (pszClass0 == pszName) {
			bMatch = true;
		} else {
			unsigned int len = strlen(pszName);
			int cmp;
			if (len == 0) {
				cmp = (int)pEnt->m_name26c;
			} else if (pszName[len - 1] != '*') {
				CLASSNAME_OF(pEnt, pszClass1)
				cmp = _strcmpi(pszClass1, pszName);
			} else {
				CLASSNAME_OF(pEnt, pszClass2)
				cmp = _strnicmp(pszClass2, pszName, len - 1);
			}
			bMatch = cmp == 0;
		}
		if (bMatch)
			return false;
	}
	return CTraceFilterSimple::vfunc0(pHandleEntity, contentsMask);
}
// END FUNCTION

// FUNCTION: 0x1023adb0 size=0x65
#include "CDecal.h"
#include "CBaseEntity.h"
extern "C" int _strcmpi(const char *, const char *);
extern void (__cdecl *g_109f362c)(const char *, ...);
#define SL5(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4();
#define SL10(p) SL5(p##a) SL5(p##b)
struct EngineL {
    SL10(e0) SL5(e1) virtual void e15(); 
    virtual int v16(const char *name, int a);
};
extern EngineL *g_1070b22c;

bool CDecal::sub_1023adb0(const char *szKeyName, const char *szValue)
{
    if (_strcmpi(szKeyName, "texture") == 0) {
        int idx = g_1070b22c->v16(szValue, 1);
        *(int *)((char *)this + 0x450) = idx;
        if (idx >= 0)
            return true;
        g_109f362c("Can't find decal %s\n", szValue);
        return true;
    }
    return ((CBaseEntity *)this)->sub_1009e430(szKeyName, szValue);
}
// END FUNCTION

// FUNCTION: 0x1023ae40 size=0x43
#include "platform.h"
#include "CWorld.h"
void *sub_100aa720(int size);
extern char g_10546e3c[];

// TARGET: worldspawn
DLL_EXPORT CBaseEntity *worldspawn()
{
	void *mem = sub_100aa720(0x524);
	CWorld *p;
	if (mem)
		p = ((CWorld *)mem)->sub_1023b840();
	else
		p = 0;
	p->vfunc106(g_10546e3c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1023aeb0 size=0x6
#include "CWorld.h"
#include "datamap.h"
namespace lifted {
extern char g_105c2660;
}
datamap_t * CWorld::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105c2660);
}
// END FUNCTION

// FUNCTION: 0x1023aed0 size=0x5
int sub_1023af10(void);
int g_107532e0 = ((int (*)(int))sub_1023af10)(0);
// END FUNCTION

// FUNCTION: 0x1023af10 size=0x1a
namespace lifted {
extern int g_105c2660;
extern int g_105c2664;
extern char g_105c26a4;
}
int sub_1023af10()
{
    lifted::g_105c2664 = 0x15;
    lifted::g_105c2660 = (int)&lifted::g_105c26a4;
    return (int)&lifted::g_105c2660;
}
// END FUNCTION

// FUNCTION: 0x1023af40 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10752e68;
extern char g_105c2a40[];
ServerClassReg g_10752d44("CWorld", &g_10752e68, g_105c2a40);
// END FUNCTION

// FUNCTION: 0x1023afb0 size=0x6
#include "CWorld.h"
namespace lifted {
extern char g_10752d44;
}
int CWorld::vfunc80()
{
    return (int)&lifted::g_10752d44;
}
// END FUNCTION

// FUNCTION: 0x1023afd0 size=0x3
#include "CWorld.h"
int CWorld::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1023aff0 size=0xa
#include "SendTable.h"
SendTable g_10752e68;
// END FUNCTION

// FUNCTION: 0x1023b070 size=0x5
int sub_1023b0b0(void);
int g_10752e64 = ((int (*)(int))sub_1023b0b0)(0);
// END FUNCTION

// FUNCTION: 0x1023b0b0 size=0x1a2
#include "SendProp.h"

class SendTable
{
public:
	void sub_1000e8fe(SendProp *pProps, int nProps, const char *pNetTableName);	// Init
};

SendProp sub_10246af0(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, int arg6, void *proxy);	// SendPropInt
SendProp sub_10246dc0(const char *pVarName, int offset, SendTable *pTable, void *proxy);	// SendPropDataTable
SendProp sub_10246510(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, float fLowValue, float fHighValue, int varProxy);	// SendPropFloat
SendProp sub_10246700(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, float fLowValue, float fHighValue, int varProxy);	// SendPropVector
void sub_102464d0();
void sub_10246300();
void sub_10003012();

extern SendTable g_10752e68;
extern SendTable *g_1055282c;

// TARGET: sub_1023b0b0
int sub_1023b0b0()
{
	static const char *pTableName = "DT_WORLD";
	static SendProp props[] = {
		sub_10246af0("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_10246dc0("baseclass", 0, g_1055282c, (void *)sub_102464d0),
		sub_10246510("m_flWaveHeight", 0x45c, 4, 8, 0x10, 0.0f, 8.0f, (int)sub_10246300),
		sub_10246700("m_WorldMins", 0x460, 12, -1, 2, 0.0f, -121121.125f, (int)sub_10003012),
		sub_10246700("m_WorldMaxs", 0x46c, 12, -1, 2, 0.0f, -121121.125f, (int)sub_10003012),
		sub_10246af0("m_nAreaType", 0x49c, 4, 2, 1, 0, 0),
		sub_10246af0("m_bNosferatuTolerant", 0x4a8, 1, 1, 1, 0, 0),
		sub_10246510("m_flWetnessFadeTarget", 0x518, 4, -1, 4, 0.0f, -121121.125f, (int)sub_10246300),
		sub_10246510("m_flWetnessFadeIn", 0x51c, 4, -1, 4, 0.0f, -121121.125f, (int)sub_10246300),
		sub_10246510("m_flWetnessFadeOut", 0x520, 4, -1, 4, 0.0f, -121121.125f, (int)sub_10246300),
	};
	g_10752e68.sub_1000e8fe(props + 1, 9, pTableName);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1023b300 size=0xa
#include "ConVar.h"
void sub_1023b3a0(ConVar *, const char *);
ConVar g_10752e20("debug_area_type", "0", 0, "Set this var to true to have the area act as a safe are for NPCs.", sub_1023b3a0);
// END FUNCTION

// FUNCTION: 0x1023b3a0 size=0x82
struct CPlayerLike
{
	void sub_10170750();	// stub 0x10010a73
};

struct CStateEntity
{
	char m_pad0000[0x1b1];
	char m_bChanged;
	char m_pad01b2[0x49c - 0x1b2];
	int m_nState;
};

struct CStateSource
{
	virtual void vfunc0();
	virtual bool vfunc1();
	char m_pad0004[0x2c - 4];
	int m_nLevel;
};

struct CStateHolder
{
	char m_pad0000[4];
	CStateSource *m_pSource;
};

CStateEntity *sub_1023bd00();
CPlayerLike *sub_101cd9e0(int index);

// TARGET: sub_1023b3a0
void sub_1023b3a0(CStateHolder *pHolder)
{
	CStateEntity *pEnt = sub_1023bd00();
	if (!pEnt)
		return;
	int n;
	if (pHolder->m_pSource->vfunc1())
		n = 0;
	else
		n = pHolder->m_pSource->m_nLevel;
	if (n > 2)
		n = 2;
	else
		n = n < 0 ? 0 : n;
	if (n != pEnt->m_nState)
	{
		pEnt->m_nState = n;
		for (int i = 1; i <= gpGlobals->maxClients; i++)
		{
			CPlayerLike *pPlayer = sub_101cd9e0(i);
			if (pPlayer)
				pPlayer->sub_10170750();
		}
		pEnt->m_bChanged = 1;
	}
}
// END FUNCTION

// FUNCTION: 0x1023b460 size=0xa
#include "ConVar.h"
void sub_1023b500(ConVar *, const char *);
ConVar g_10752ea0("debug_cop_wait_area", "0", 0, "Set this var to true to have the area act as a safe zone for NPCs.", sub_1023b500);
// END FUNCTION

// FUNCTION: 0x1023b500 size=0x41
struct SInner { virtual void v0(); virtual char vfunc1(); char pad[0x28]; int m_f2c; };
struct SArg { int m_f0; SInner *m_pInner; };
struct SObj { char pad[0x4a0]; bool m_b4a0; };
SObj *sub_1023bd00();

void __cdecl sub_1023b500(SArg *p)
{
    SObj *pObj = sub_1023bd00();
    if (pObj) {
        int v;
        if (p->m_pInner->vfunc1())
            v = 0;
        else
            v = p->m_pInner->m_f2c;
        pObj->m_b4a0 = v != 0;
    }
}
// END FUNCTION

// FUNCTION: 0x1023b570 size=0x26
struct CUnknown1023b570Node {
	char m_pad0000[0x49c];
	int m_n049c;
};

CUnknown1023b570Node *sub_1023bd00();

struct CUnknown1023b570 {
	char sub_1023b570();
	char m_pad0000[0x4a9];
	char m_b04a9;
};

char CUnknown1023b570::sub_1023b570()
{
	if (sub_1023bd00() != 0) {
		if (sub_1023bd00()->m_n049c == 2)
			return 1;
	}
	return m_b04a9;
}
// END FUNCTION

// FUNCTION: 0x1023b5b0 size=0x14
struct CUnknown1023b5b0 { void sub_1023b5b0(int); };
void CUnknown1023b5b0::sub_1023b5b0(int a0)
{
    *(volatile int *)((char *)this + 0x518) = a0;
    *(volatile unsigned char *)((char *)this + 0x1b1) = 1;
}
// END FUNCTION

// FUNCTION: 0x1023b5e0 size=0x5
#include "CWorld.h"
#include "CBaseEntity.h"

// TARGET: CWorld::vfunc126
// the game's 0x1023b5e0: a tail call (jmp) of CBaseEntity::vfunc126
int CWorld::vfunc126(int a0)
{
	return CBaseEntity::vfunc126(a0);
}
// END FUNCTION

// FUNCTION: 0x1023b600 size=0x5
#include "CWorld.h"
#include "CBaseEntity.h"

// TARGET: CWorld::vfunc127
// the game's 0x1023b600: a tail call (jmp) of CBaseEntity::vfunc127
int CWorld::vfunc127(int a0)
{
	return CBaseEntity::vfunc127(a0);
}
// END FUNCTION

// FUNCTION: 0x1023b620 size=0xd
#include "CBaseEntity.h"
#include "CWorld.h"
void CWorld::vfunc130(int a)
{
	volatile int *p = &a;
	*p = *p;
	CBaseEntity::vfunc130(a);
}
// END FUNCTION

// FUNCTION: 0x1023b640 size=0x12
#include "CWorld.h"

// TARGET: CWorld::vfunc73
bool CWorld::vfunc73(CBaseEntity *pOther)
{
	if (pOther->m_p9c == 0)
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x1023b670 size=0x168
#include "CWorld.h"

struct CWorldConVar
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void SetFloat(float value);
	virtual void SetString(const char *value);
};
struct CWorldCvarSystem
{
	virtual void v0(); virtual void v1();
	virtual CWorldConVar *FindVar(const char *name);
};
struct CWorldGlobals
{
	char pad[0x34];
	int m_nSounds;
};
extern CWorldCvarSystem *g_1070b234;
extern CWorldGlobals *g_1070b228;
extern "C" int _strcmpi(const char *, const char *);
extern "C" int atoi(const char *);
extern "C" double atof(const char *);
extern "C" int sscanf(const char *, const char *, ...);
void sub_1011a430();

struct CWorldWave
{
	char pad[0x1b1];
	char m_bDirty;
	char pad2[0x45c - 0x1b2];
	float m_flHeight;
	void Set(float v) { m_flHeight = v; char *p = &m_bDirty; *p = 1; }
};

// TARGET: CWorld::vfunc110
bool CWorld::vfunc110(const char *key, const char *value)
{
	if (!_strcmpi(key, "skyname"))
	{
		CWorldConVar *pVar = g_1070b234->FindVar("sv_skyname");
		if (pVar)
		{
			pVar->SetString(value);
			return true;
		}
		return true;
	}
	if (!_strcmpi(key, "sounds"))
	{
		g_1070b228->m_nSounds = atoi(value);
		return true;
	}
	if (!_strcmpi(key, "WaveHeight"))
	{
		CWorldWave *w = (CWorldWave *)this;
		w->Set((float)(atof(value) * 0.125));
		CWorldConVar *pVar = g_1070b234->FindVar("sv_wateramp");
		if (pVar)
		{
			pVar->SetFloat(w->m_flHeight);
			return true;
		}
		return true;
	}
	if (!_strcmpi(key, "newunit"))
	{
		if (atoi(value))
		{
			sub_1011a430();
			return true;
		}
		return true;
	}
	float *p;
	if (!_strcmpi(key, "world_mins"))
		p = m_vecWorldMins;
	else if (!_strcmpi(key, "world_maxs"))
		p = m_vecWorldMaxs;
	else
		return CBaseEntity::vfunc110(key, value);
	sscanf(value, "%f %f %f", p, p + 1, p + 2);
	return true;
}
// END FUNCTION

// FUNCTION: 0x1023b840 size=0x10b
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CWorld.h"
#include "CCollisionProperty.h"
#include "CServerNetworkProperty.h"
#include "CUnknown101466e0.h"
#include "ScopeTrace.h"

void sub_104121d0();
void sub_1028d770();

// TARGET: CWorld::CWorld
CWorld::CWorld() : CBaseEntity(0)
{
    m_flags268 |= 0x400;
    m_bColdWorld = 0;
    ((CServerNetworkProperty *)((char *)this + 0x2d4))->sub_101ab5c0(engine->vfunc38(0));
    *(float *)((char *)this + 0x17c) = gpGlobals->curtime + 0.05;
    sub_104121d0();
    ((CUnknown101466e0 *)((char *)this + 0x1b0))->sub_101466e0(1);
    const char *name = m_name26c;
    if (!name)
        name = g_106b8540;
    {
        ScopeTrace trace("CBaseEntity::SetSolid", name);
        ((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(1);
    }
    vfunc93(8, 0);
    m_n518 = 0;
    m_f51c = 5.0f;
    m_f520 = 10.0f;
    sub_1028d770();
}
// END FUNCTION

// FUNCTION: 0x1023b9a0 size=0x3
#include "CWorld.h"
int CWorld::vfunc131()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1023b9c0 size=0x3
#include "CWorld.h"
void CWorld::vfunc230(int a0, void *a1)
{
}
// END FUNCTION

// FUNCTION: 0x1023b9e0 size=0x3
#include "CWorld.h"
void CWorld::vfunc231(void *a0, float a1, int a2, int a3)
{
}
// END FUNCTION

// FUNCTION: 0x1023ba00 size=0x1e
#include "CWorld.h"

void sub_100aa7b0(void *p);

// TARGET: CWorld::vfunc5
CBaseEntity *CWorld::vfunc5(unsigned int flags)
{
	sub_1000fe98();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1023ba30 size=0x3c
#include "CWorld.h"
#include "CSprite.h"

void sub_1028d800();
void sub_104121f0();
void sub_1023e6b0();
void sub_10353000(void *p);

class CUnk1070ba0c {
public:
    virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
    virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
    virtual void vfunc10(); virtual void vfunc11(); virtual void vfunc12(); virtual void vfunc13(); virtual void vfunc14();
};
extern CUnk1070ba0c *g_1070ba0c;

// TARGET: CWorld::~CWorld
CWorld::~CWorld()
{
    sub_1028d800();
    sub_104121f0();
    if (g_1070ba0c)
        g_1070ba0c->vfunc14();
    sub_10353000(&g_1070ba0c);
    sub_1023e6b0();
    ((CSprite *)this)->sub_1000cb8a();
}
// END FUNCTION

// FUNCTION: 0x1023ba80 size=0xa8
#include "CWorld.h"
#include "CBroadcastRecipientFilter.h"

#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)

struct CEngineSoundX
{
	PV(0) PV(1) PV(2) PV(3) PV(4) PV(5) PV(6) PV(7) PV(8) PV(9)
	PV10(1) PV10(2) PV10(3)
	PV(40)
	virtual void vfunc41(CRecipientFilter *pFilter, int a, const float *pOrigin, int nSound);
};

struct CSoundTableEntryX
{
	int m_nSound;
	int m_unused;
};

extern CEngineSoundX *g_10540528;
extern CSoundTableEntryX g_105c230c[];

// TARGET: CWorld::vfunc241
void CWorld::vfunc241(void *pSource, int nSound, int unused1, int unused2)
{
	if (nSound >= 0) {
		int sound = g_105c230c[nSound].m_nSound;
		if (sound >= 0) {
			CBroadcastRecipientFilter filter;
			g_10540528->vfunc41(&filter, 0, (const float *)((char *)pSource + 0xc), sound);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1023bb60 size=0xa
namespace lifted {
int sub_10004836();
int sub_1001486c();
}
int sub_1023bb60()
{
    lifted::sub_1001486c();
    return lifted::sub_10004836();
}
// END FUNCTION

// FUNCTION: 0x1023bb80 size=0x1
void sub_1023bb80()
{
}
// END FUNCTION

// FUNCTION: 0x1023bba0 size=0x5e
#include "CWorld.h"
#include "engineserver.h"

struct sub_Obj106e7050 { void sub_100cdd80(); };
extern sub_Obj106e7050 g_106e7050;
void sub_1023e6b0();

inline char *sub_NullIfEmpty(char *p)
{
	if (!*p)
		return 0;
	return p;
}

// TARGET: CWorld::vfunc103
void CWorld::vfunc103()
{
	vfunc10(1);
	vfunc212(string_t(sub_NullIfEmpty(engine->vfunc19(vfunc8()))));
	sub_100b3580(0x1000000);
	g_106e7050.sub_100cdd80();
	sub_1023e6b0();
	vfunc104();
}
// END FUNCTION

// FUNCTION: 0x1023bc20 size=0xae
#include "CWorld.h"
#include "ConVar.h"

struct CCvar_1023bc20
{
	virtual void v0();
	virtual void v1();
	virtual ConVar *FindVar(const char *pszName);
};
extern CCvar_1023bc20 *g_1070b234;
extern int g_10752e9c;
extern int g_109247e0;
extern char g_10924fb8;
extern int g_109247e4;
CWorldPlayer *sub_101cd9e0(int index);

void CWorld::vfunc113()
{
	CBaseEntity::vfunc113();
	ConVar *pCheats = g_1070b234->FindVar("sv_cheats");
	int nCheats = pCheats ? pCheats->GetInt() : 0;
	g_10752e9c = nCheats;
	int n = m_n49c > 2 ? 2 : (m_n49c < 0 ? 0 : m_n49c);
	if (n != m_n49c) {
		m_n49c = n;
		for (int i = 1; i <= gpGlobals->maxClients; i++) {
			CWorldPlayer *pPlayer = sub_101cd9e0(i);
			if (pPlayer)
				pPlayer->sub_10170750();
		}
		*((char *)this + 0x1b1) = 1;
	}
	g_109247e0 = -1;
	g_10924fb8 = 0;
	g_109247e4 = -1;
}
// END FUNCTION

// FUNCTION: 0x1023bd00 size=0x6
namespace lifted {
extern int g_107532e8;
}
int sub_1023bd00()
{
    return lifted::g_107532e8;
}
// END FUNCTION

// FUNCTION: 0x1023bd20 size=0x253
void sub_101d0f10(const char *dir, const char *ext, int a, int b);

void sub_1023bd20()
{
	sub_101d0f10("sound/Surfaces", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/bottle", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/can_pop", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/can_pop_crushed", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/Cardboard", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/Carpet", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/Ceramic", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/Concrete", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/Dirt", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/Flesh", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/Grass", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/Gravel", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/Kitchen_Pan", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/Kitchen_Pot", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/Kitchen_Utensils", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/Ladder", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/Metal", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/MetalGrate", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/MetalVent", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/Metal_Barrel", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/Mud", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/Paper", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/Plater", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/Rivet", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/Sand", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/Tile", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/Tin", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/Wade", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/Water", ".wav", 0, 0);
	sub_101d0f10("sound/Surfaces/Wood", ".wav", 0, 0);
}
// END FUNCTION

// FUNCTION: 0x1023c020 size=0x33f
#include "CWeaponThrown_Grenade_Frag.h"
#include "CWorld.h"
#include "engineserver.h"
#include "engineiface.h"
#include "globalvars.h"
#include "Tier1.h"

struct CWorldConVar
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void SetInt(int value);
};
struct CWorldCvarSystem
{
	virtual void v0(); virtual void v1();
	virtual CWorldConVar *FindVar(const char *name);
};
struct CWorldRules
{
	virtual void Delete(int bFree);
	virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
	virtual void v11();
	virtual void v12();
	virtual void v13();
	virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
	virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
	virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28();
	virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33();
	virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38();
	virtual void v39(); virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
	virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48();
	virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53();
	virtual void v54(); virtual void v55(); virtual void v56();
	virtual void v57();
};
struct CWorldSound
{
	virtual void Precache(const char *name, int preload);
};
struct CWorldNameOut { const char *p; };
struct CWorldDecal { const char *name; int index; };
struct CWorldSlotsView { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual CWorldNameOut *GetName(CWorldNameOut *out); };

extern CWorldCvarSystem *g_1070b234;
extern CWorldRules *g_1070ba0c;
extern CWorldSound *g_1070b248;
extern CWorld *g_107532e8;
extern char g_1070ba2c;
extern int g_107260ac;
extern void *g_1072c464;
extern int g_1070ba24;
extern char g_1070d1b0[];
extern char g_106b8540[];
extern CWorldDecal g_105c2308[];
extern void (*g_109f362c)(const char *, ...);
extern void (*g_109f3650)(int, const char *, ...);
CWorldRules *sub_10352f70();
void *sub_100a99d0(const char *, void *, void *, void *);
void sub_1042c5d0(const char *);
void sub_104121f0(); void sub_1023bb60(); void sub_10355e00(); void sub_101af030();
void sub_1024eda0(); void sub_10230320(); void sub_1023ef40(); void sub_1028d7e0();
void sub_1034fee0(); void sub_100d1d50(); void sub_1033f750();
void sub_10050a40(); void sub_102f6690(); void sub_10321ec0(); void sub_1042d5a0();
struct CUnknown1030c560 { void sub_1030c560(); };
extern CUnknown1030c560 g_10936b68;
extern char g_105758c4[], g_10540a3c[];

inline const char *WorldString(const char *const &s)
{
	return s ? s : g_106b8540;
}

void CWorld::vfunc104()
{
	g_107532e8 = this;
	g_1070ba2c = 0;
	g_107260ac = 0;
	CWorldConVar *stepsize = g_1070b234->FindVar("sv_stepsize");
	if (stepsize)
		stepsize->SetInt(18);
	if (g_1070ba0c)
		g_1070ba0c->Delete(1);
	g_1070ba0c = sub_10352f70();
	g_1070ba0c->v13();
	void *pSoundEnt = sub_100a99d0("soundent", g_1070d1b0, g_1070d9d0, this);
	void (*pWarn)(const char *, ...) = g_109f362c;
	g_1072c464 = pSoundEnt;
	if (!pSoundEnt)
		pWarn("**COULD NOT CREATE SOUNDENT**\n");
	CWorldNameOut out;
	const char *pName = ((CWorldSlotsView *)this)->GetName(&out)->p;
	if (!pName)
		pName = g_106b8540;
	sub_1042c5d0(pName);
	sub_104121f0();
	sub_1023bb60();
	sub_10355e00();
	sub_101af030();
	sub_1024eda0();
	sub_10230320();
	sub_1023ef40();
	sub_1028d7e0();
	sub_1034fee0();
	sub_100d1d50();
	for (unsigned int i = 0; i < 0x4f; i++)
	{
		g_105c2308[i].index = engine->vfunc16(g_105c2308[i].name, 0);
		if (g_105c2308[i].index < 0)
			pWarn("Decal Network error!\n");
		if (g_105c2308[i].index != i)
			pWarn("Decal %d does not match it's precached index.  Could cause network errors.\n");
	}
	sub_1033f750();
	sub_1023bd20();
	g_1070ba0c->v11();
	sub_10050a40();
	if (m_psz454 != 0)
		g_1070b248->Precache(WorldString(m_psz454), 0);
	engine->vfunc62(0, g_105758c4);
	engine->vfunc62(1, "mmnmmommommnonmmonqnmmo");
	engine->vfunc62(2, "abcdefghijklmnopqrstuvwxyzyxwvutsrqponmlkjihgfedcba");
	engine->vfunc62(3, "mmmmmaaaaammmmmaaaaaabcdefgabcdefg");
	engine->vfunc62(4, "mamamamamama");
	engine->vfunc62(5, "jklmnopqrstuvwxyzyxwvutsrqponmlkj");
	engine->vfunc62(6, "nmonqnmomnmomomno");
	engine->vfunc62(7, "mmmaaaabcdefgmmmmaaaammmaamm");
	engine->vfunc62(8, "mmmaaammmaaammmabcdefaaaammmmabcdefmmmaaaa");
	engine->vfunc62(9, "aaaaaaaazzzzzzzz");
	engine->vfunc62(10, "mmamammmmammamamaaamammma");
	engine->vfunc62(11, "abcdefghijklmnopqrrqponmlkjihgfedcba");
	engine->vfunc62(12, "mmnnmmnnnmmnn");
	engine->vfunc62(0x3f, g_10540a3c);
	sub_102f6690();
	g_10936b68.sub_1030c560();
	g_1070ba0c->v57();
	sub_10321ec0();
	sub_1042d5a0();
	if (m_psz450 != 0)
	{
		g_109f3650(2, "Chapter title: %s\n", WorldString(m_psz450));
		CWorld *pMsg = (CWorld *)sub_100a99d0("env_message", g_1070d1b0, g_1070d9d0, 0);
		if (pMsg)
		{
			pMsg->m_psz450 = m_psz450;
			m_psz450 = 0;
		}
	}
	CWorldConVar *dark = g_1070b234->FindVar("v_dark");
	if (dark)
		dark->SetInt(m_b478 != 0);
	g_1070ba24 = m_b479 != 0;
}
// END FUNCTION

// FUNCTION: 0x1023c430 size=0xe
// TARGET: sub_1023c430
float sub_1023c430()
{
    return engine->vfunc87();
}
// END FUNCTION

// FUNCTION: 0x1023c450 size=0x20c
#include "CMeasureSection.h"
#include "Tier1.h"
#include "engineserver.h"

struct CUnknown102477e0 { int sub_102477e0(); };
struct CUnknown10247820 { char *sub_10247820(); };
struct CUnknown10247840 { char *sub_10247840(); };
struct CUnknown102478b0 { int sub_102478b0(); };
struct CUnknown102477a0 { void sub_102477a0(); };
struct CUnknown102477c0 { void sub_102477c0(); };
struct CUnknown10247770 { void sub_10247770(); };

struct CDebugGate
{
	virtual void vfunc0();
	virtual char vfunc1();
	char m_pad[0x24];
	float m_f28;
};

extern CDebugGate *g_107536f4;
extern double g_10753740;
extern double *g_109f367c;
extern float g_104454c4;

int sub_102478d0();
void sub_102478f0();
void sub_10143920(float a, float b, const char *text, int c, int d, int e, int f, float g);

void sub_1023c450()
{
	int nLine = 1;
	CMeasureSection *pSection = (CMeasureSection *)sub_102478d0();
	if (pSection != 0)
	{
		int (*pfn)(char *, int, const char *, ...) = g_109f388c;
		do
		{
			char buf[256];
			pfn(buf, 256, "%s", ((CUnknown102477e0 *)pSection)->sub_102477e0());
			float y = (float)nLine * 0.025f + 0.51;
			sub_10143920(0.01f, y, buf, 0xff, 0xff, 0xff, 0xff, 0.0f);
			pfn(buf, 256, "%5.2f\n", (double)*(__int64 *)((CUnknown10247820 *)pSection)->sub_10247820() * *g_109f367c);
			sub_10143920(0.28f, y, buf, 0xff, 0xff, 0xff, 0xff, 0.0f);
			pfn(buf, 256, "%5.2f\n", (double)*(__int64 *)((CUnknown10247840 *)pSection)->sub_10247840() * *g_109f367c);
			sub_10143920(0.34f, y, buf, 0xff, 0xff, 0xff, 0xff, 0.0f);
			nLine++;
			pSection = (CMeasureSection *)((CUnknown102478b0 *)pSection)->sub_102478b0();
		} while (pSection != 0);
	}

	bool bResetPeak = false;
	if ((g_107536f4->vfunc1() ? g_104454c4 : g_107536f4->m_f28) > 0.0 &&
	    (double)engine->vfunc87() >= g_10753740)
	{
		sub_102478f0();
		float v = g_107536f4->vfunc1() ? 0.0f : g_107536f4->m_f28;
		g_10753740 = (double)engine->vfunc87() + v;
		bResetPeak = true;
	}

	for (CMeasureSection *pReset = (CMeasureSection *)sub_102478d0(); pReset != 0;
	     pReset = (CMeasureSection *)((CUnknown102478b0 *)pReset)->sub_102478b0())
	{
		((CUnknown10247770 *)pReset)->sub_10247770();
		((CUnknown102477a0 *)pReset)->sub_102477a0();
		if (bResetPeak)
			((CUnknown102477c0 *)pReset)->sub_102477c0();
	}
}
// END FUNCTION

// FUNCTION: 0x1023c6f0 size=0x47
#include "CWorld.h"
#include "globalvars.h"
struct ConVarFlag { virtual void v0(); virtual char v1(); char pad[0x28]; int m_n2c; };
extern ConVarFlag *g_107536ac;
void sub_1023c450();
void sub_1023ea20();
void CWorld::vfunc134()
{
    if (!g_107536ac->v1() && g_107536ac->m_n2c)
        sub_1023c450();
    sub_1023ca30();
    sub_1023ea20();
    m_flNextThink = gpGlobals->curtime + 0.05;
}
// END FUNCTION

// FUNCTION: 0x1023c760 size=0x23c
#include "vampire_all.h"
#include "CWorld.h"
#include "CBasePlayer.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList g_106eb5d8;
extern char g_10538764[];
extern char g_10559bf4[];
extern char g_1055ef50[];
extern "C" void *__cdecl __RTDynamicCast(void *pObj, long nVfDelta, void *pSrcType, void *pTargetType, int bIsReference);
struct color32 { unsigned char r, g, b, a; };
CBasePlayer *__cdecl sub_101cd9e0(int n);
void __cdecl sub_101ce290(CBasePlayer *pPlayer, const color32 &color, float flFade, float flHold, int nFlags);
void __cdecl sub_10265680(int n);
__declspec(dllimport) void Warning(const char *fmt, ...);
__declspec(dllimport) char *Q_strncpy(char *pDest, const char *pSrc, int maxLen);

inline void FadeToBlack(CBasePlayer *pPlayer, float flTime, float flHold, int nFlags)
{
	color32 black;
	black.r = black.g = black.b = 0;
	black.a = 255;
	sub_101ce290(pPlayer, black, flTime, flHold, nFlags);
}

// TARGET: CWorld::sub_1023c760
void CWorld::sub_1023c760(float flFade, const char *pszLandmark, const char *pszLevel)
{
	CBasePlayer *pPlayer = sub_101cd9e0(1);
	void *pLandmark = __RTDynamicCast(g_106eb5d8.sub_100f7770(0, pszLandmark, 0, 0), 0, g_10538764, g_10559bf4, 0);
	void *pChangeLevel = __RTDynamicCast(g_106eb5d8.sub_100f7770(0, pszLevel, 0, 0), 0, g_10538764, g_1055ef50, 0);
	if (!pszLandmark && !pszLevel) {
		memset(m_szLandmark4d8, 0, sizeof(m_szLandmark4d8));
		memset(m_szLevel4b8, 0, sizeof(m_szLevel4b8));
		m_n4ac = 4;
		m_f4b4 = gpGlobals->curtime;
		float flTime = flFade > 10.0 ? 10.0 : (flFade < 0.1 ? 0.1 : flFade);
		m_f4b0 = flTime;
		FadeToBlack(pPlayer, flTime, 10.0f, 2);
		return;
	}
	if (!pLandmark) {
		Warning("FadoutLevelChange could not find teleport point: %s!\n", pszLandmark);
		return;
	}
	if (!pChangeLevel) {
		Warning("FadoutLevelChange could not find teleport point: %s!\n", pszLevel);
		return;
	}
	if (!pPlayer) {
		Warning("FadoutLevelChange could not find PLAYER!\n");
		return;
	}
	Q_strncpy(m_szLandmark4d8, pszLandmark, 0x20);
	Q_strncpy(m_szLevel4b8, pszLevel, 0x20);
	flFade = flFade > 10.0 ? 10.0 : (flFade < 0.1 ? 0.1 : flFade);
	m_f4b0 = flFade;
	FadeToBlack(pPlayer, flFade, 1.0f, 10);
	m_n4ac = 1;
	m_f4b4 = gpGlobals->curtime;
	pPlayer->sub_1015ef40();
	sub_10265680(0);
}
// END FUNCTION

// FUNCTION: 0x1023ca30 size=0x2e8
#include "CWorld.h"
#include "CBaseLandmark.h"
#include "CChangeLevel.h"
#include "CGlobalEntityList.h"
#include "CUnknown1070b22c.h"
#include "CEntityVSlots.h"
#include <string.h>

extern CGlobalEntityList g_106eb5d8;
extern CUnknown1070b22c *g_1070b22c;
extern int (*g_109f3870)(const char *s1, const char *s2, int n);
extern char *(*g_109f3890)(char *pDest, const char *pSrc, int nSize);
extern char g_10538764[];
extern char g_10559bf4[];
extern char g_1055ef50[];
extern char g_106b8540[];

class CPlayerHelper
{
public:
	void sub_1015ef60();
};

CBaseEntity *sub_101cd9e0(int index);
void sub_10265680(int a);
void sub_101cf5c0(CBaseEntity *pObject, int value, int flag);
void sub_101ce290(int a, int b, int c, int d, int e);

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

void CWorld::sub_1023ca30()
{
	switch (*(int *)((char *)this + 0x4ac))
	{
	case 1:
		if (*(float *)((char *)this + 0x4b4) + *(float *)((char *)this + 0x4b0) <= gpGlobals->curtime)
		{
			CBaseEntity *pPlayer = sub_101cd9e0(1);
			CBaseLandmark *pLandmark = (CBaseLandmark *)__RTDynamicCast(
				g_106eb5d8.sub_100f7770(0, (char *)this + 0x4d8, 0, 0), 0, g_10538764, g_10559bf4, 0);
			CChangeLevel *pChangeLevel = (CChangeLevel *)__RTDynamicCast(
				g_106eb5d8.sub_100f7770(0, (char *)this + 0x4b8, 0, 0), 0, g_10538764, g_1055ef50, 0);
			if (pPlayer && pLandmark && pChangeLevel)
			{
				((CPlayerHelper *)pPlayer)->sub_1015ef60();
				sub_10265680(1);

				Vector vAngles = *((CEntityVSlots *)pLandmark)->slot219();
				*(Vector *)((char *)pPlayer + 0x206c) = vAngles;
				((CEntityVSlots *)pPlayer)->slot64((const float *)&vAngles);
				((CEntityVSlots *)pPlayer)->slot218((Vector *)&vAngles);
				*(int *)((char *)pPlayer + 0x207c) = 1;

				sub_101cf5c0(pPlayer, (int)((CEntityVSlots *)pLandmark)->slot217(), 0);

				g_109f3890((char *)this + 0x4f8, pChangeLevel->m_szMapName, 0x20);
				pChangeLevel->sub_101c7890(pPlayer);
				*(int *)((char *)this + 0x4ac) = 2;
			}
		}
		break;

	case 2:
		{
			const char *pszWorld = STRINGR(gpGlobals->mapname);
			char *pszMap = (char *)this + 0x4f8;
			if (g_109f3870(pszMap, pszWorld, strlen(pszMap)) != 0)
			{
				CBaseEntity *pPlayer = sub_101cd9e0(1);
				if (pPlayer)
				{
					unsigned char color[4];
					color[2] = 0;
					color[1] = 0;
					color[0] = 0;
					color[3] = 0xff;
					sub_101ce290((int)pPlayer, (int)color, *(int *)((char *)this + 0x4b0), 0, 9);
					*(int *)((char *)this + 0x4ac) = 3;
					*(float *)((char *)this + 0x4b4) = gpGlobals->curtime;
				}
			}
		}
		break;

	case 3:
		if (*(float *)((char *)this + 0x4b4) + *(float *)((char *)this + 0x4b0) <= gpGlobals->curtime)
		{
			*(int *)((char *)this + 0x4ac) = 0;
			*(char *)((char *)this + 0x4f8) = 0;
			*(char *)((char *)this + 0x4d8) = 0;
		}
		break;

	case 4:
		if (*(float *)((char *)this + 0x4b0) + *(float *)((char *)this + 0x4b4) <= gpGlobals->curtime)
		{
			*(int *)((char *)this + 0x4ac) = 5;
			*(float *)((char *)this + 0x4b0) = 3.0f;
			*(float *)((char *)this + 0x4b4) = gpGlobals->curtime;
		}
		break;

	case 5:
		if (*(float *)((char *)this + 0x4b4) + *(float *)((char *)this + 0x4b0) <= gpGlobals->curtime)
		{
			*(int *)((char *)this + 0x4ac) = 0;
			g_1070b22c->vfunc59("disconnect\n");
		}
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x1023cde0 size=0xed
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
    virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct SServerUnknown
{
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual struct SWorldEntity *GetBaseEntity();	// slot 4
};

struct SEdict
{
    char m_pad[0x40];
    SServerUnknown *m_pUnk;	// 0x40
};

struct SEngine
{
    V10(a0) V10(a1) V10(a2)
    virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6(); virtual void b7();
    virtual SEdict *PEntityOfEntIndex(int index);	// slot 38
};

struct SWorldEntity
{
    char m_pad[0x47c];
    char m_b0;	// 0x47c
    char m_b1;	// 0x47d
    char m_pad2[2];
    int m_v[7];	// 0x480
};

struct SWorldInfo
{
    char m_b0;
    char m_b1;
    char m_pad[2];
    int m_v[7];
};

extern SEngine *g_1070b22c;
extern int *g_109f3680;
extern const char **g_109f3620;
extern const char g_106b8540[];
extern const char g_10543c6c[];

static inline SWorldEntity *FindBaseEntity(SEdict *pEdict)
{
    if (!pEdict)
        pEdict = g_1070b22c->PEntityOfEntIndex(0);
    if (pEdict) {
        if (pEdict->m_pUnk)
            return pEdict->m_pUnk->GetBaseEntity();
    }
    return 0;
}

static inline SWorldEntity *Instance(SEdict *pEdict)
{
    g_109f3620[*g_109f3680 * 3] = g_10543c6c;
    g_109f3620[*g_109f3680 * 3 + 1] = g_106b8540;
    g_109f3620[*g_109f3680 * 3 + 2] = g_106b8540;
    ++*g_109f3680;
    SWorldEntity *ret = FindBaseEntity(pEdict);
    --*g_109f3680;
    return ret;
}

// TARGET: sub_1023cde0
void sub_1023cde0(SWorldInfo *pOut)
{
    SWorldEntity *pWorld = Instance(g_1070b22c->PEntityOfEntIndex(0));
    pOut->m_b0 = pWorld->m_b0;
    pOut->m_b1 = pWorld->m_b1;
    pOut->m_v[0] = pWorld->m_v[0];
    pOut->m_v[1] = pWorld->m_v[1];
    pOut->m_v[2] = pWorld->m_v[2];
    pOut->m_v[3] = pWorld->m_v[3];
    pOut->m_v[4] = pWorld->m_v[4];
    pOut->m_v[5] = pWorld->m_v[5];
    pOut->m_v[6] = pWorld->m_v[6];
}
// END FUNCTION

// FUNCTION: 0x1023cf10 size=0x43
#include "platform.h"
#include "CWorldEvents.h"
void *sub_100aa720(int size);
extern char g_105c47bc[];

// TARGET: worldevents
DLL_EXPORT CBaseEntity *worldevents()
{
	void *mem = sub_100aa720(0x648);
	CWorldEvents *p;
	if (mem)
		p = ((CWorldEvents *)mem)->sub_1023d930();
	else
		p = 0;
	p->vfunc106(g_105c47bc);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1023cf80 size=0x43
#include "platform.h"
#include "CWorldEvents.h"
void *sub_100aa720(int size);
extern char g_105c47cc[];

// TARGET: events_world
DLL_EXPORT CBaseEntity *events_world()
{
	void *mem = sub_100aa720(0x648);
	CWorldEvents *p;
	if (mem)
		p = ((CWorldEvents *)mem)->sub_1023d930();
	else
		p = 0;
	p->vfunc106(g_105c47cc);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1023cff0 size=0x6
#include "CWorldEvents.h"
namespace lifted {
extern char g_105c2a50;
}
datamap_t * CWorldEvents::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105c2a50);
}
// END FUNCTION

// FUNCTION: 0x1023d010 size=0x5
int * sub_1023d050(void);
int * g_107532e4 = ((int * (*)(int))sub_1023d050)(0);
// END FUNCTION

// FUNCTION: 0x1023d050 size=0x70f
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
extern int g_105c2a50[2];
void sub_100154ce();
void sub_1000403e();
void sub_1000557e();
void sub_1001453d();
void sub_1000ab00();
void sub_10003f3a();
void sub_100136ab();
void sub_1001076c();
void sub_10003a6c();
void sub_10012f7b();

int *sub_1023d050()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 4, "InputSetSafeArea", {0, 0}, 1, 8, "SetSafeArea", 0, (void *)sub_100154ce },
        { 5, "InputSetCopWaitArea", {0, 0}, 1, 8, "SetCopWaitArea", 0, (void *)sub_1000403e },
        { 1, "InputSetCopGrace", {0, 0}, 1, 8, "SetCopGrace", 0, (void *)sub_1000557e },
        { 5, "InputSetNosferatuTolerant", {0, 0}, 1, 8, "SetNosferatuTolerant", 0, (void *)sub_1001453d },
        { 5, "InputSetNoFrenzyArea", {0, 0}, 1, 8, "SetNoFrenzyArea", 0, (void *)sub_1000ab00 },
        { 5, "InputAIEnable", {0, 0}, 1, 8, "AIEnable", 0, (void *)sub_10003f3a },
        { 1, "InputFadeGlobalWetness", {0, 0}, 1, 8, "FadeGlobalWetness", 0, (void *)sub_100136ab },
        { 0, "InputHideCutsceneInterferingEntities", {0, 0}, 1, 8, "HideCutsceneInterferingEntities", 0, (void *)sub_1001076c },
        { 0, "InputUnhideCutsceneInterferingEntities", {0, 0}, 1, 8, "UnhideCutsceneInterferingEntities", 0, (void *)sub_10003a6c },
        { 2, "InputPlayEndCredits", {0, 0}, 1, 8, "PlayEndCredits", 0, (void *)sub_10012f7b },
        { 10, "m_OnCopsOutside", {0x450, 0}, 1, 0x16, "OnCopsOutside", g_1055dc70 },
        { 10, "m_OnCopsComing", {0x468, 0}, 1, 0x16, "OnCopsComing", g_1055dc70 },
        { 10, "m_OnStartCopPursuitMode", {0x480, 0}, 1, 0x16, "OnStartCopPursuitMode", g_1055dc70 },
        { 10, "m_OnEndCopPursuitMode", {0x498, 0}, 1, 0x16, "OnEndCopPursuitMode", g_1055dc70 },
        { 10, "m_OnStartCopAlertMode", {0x4b0, 0}, 1, 0x16, "OnStartCopAlertMode", g_1055dc70 },
        { 10, "m_OnEndCopAlertMode", {0x4c8, 0}, 1, 0x16, "OnEndCopAlertMode", g_1055dc70 },
        { 10, "m_OnStartHunterPursuitMode", {0x4e0, 0}, 1, 0x16, "OnStartHunterPursuitMode", g_1055dc70 },
        { 10, "m_OnEndHunterPursuitMode", {0x4f8, 0}, 1, 0x16, "OnEndHunterPursuitMode", g_1055dc70 },
        { 10, "m_OnMasqueradeLevel1", {0x510, 0}, 1, 0x16, "OnMasqueradeLevel1", g_1055dc70 },
        { 10, "m_OnMasqueradeLevel2", {0x528, 0}, 1, 0x16, "OnMasqueradeLevel2", g_1055dc70 },
        { 10, "m_OnMasqueradeLevel3", {0x540, 0}, 1, 0x16, "OnMasqueradeLevel3", g_1055dc70 },
        { 10, "m_OnMasqueradeLevel4", {0x558, 0}, 1, 0x16, "OnMasqueradeLevel4", g_1055dc70 },
        { 10, "m_OnMasqueradeLevel5", {0x570, 0}, 1, 0x16, "OnMasqueradeLevel5", g_1055dc70 },
        { 10, "m_OnMasqueradeLevelChanged", {0x588, 0}, 1, 0x16, "OnMasqueradeLevelChanged", g_1055dc70 },
        { 10, "m_OnPlayerHasNoBlood", {0x5a0, 0}, 1, 0x16, "OnPlayerHasNoBlood", g_1055dc70 },
        { 10, "m_OnCombatMusicStart", {0x5b8, 0}, 1, 0x16, "OnCombatMusicStart", g_1055dc70 },
        { 10, "m_OnCombatMusicEnd", {0x5d0, 0}, 1, 0x16, "OnCombatMusicEnd", g_1055dc70 },
        { 10, "m_OnAlertMusicStart", {0x5e8, 0}, 1, 0x16, "OnAlertMusicStart", g_1055dc70 },
        { 10, "m_OnAlertMusicEnd", {0x600, 0}, 1, 0x16, "OnAlertMusicEnd", g_1055dc70 },
        { 10, "m_OnNormalMusicStart", {0x618, 0}, 1, 0x16, "OnNormalMusicStart", g_1055dc70 },
        { 10, "m_OnNormalMusicEnd", {0x630, 0}, 1, 0x16, "OnNormalMusicEnd", g_1055dc70 },
    };
    g_105c2a50[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_105c2a50[0] = (int)&dataDesc[1];
    return g_105c2a50;
}
// END FUNCTION

// FUNCTION: 0x1023d930 size=0x196
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CWorldEvents.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

extern "C" __declspec(dllimport) void __cdecl Error(const char *pszFormat, ...);
extern CWorldEvents *g_107532ec;

CWorldEvents::CWorldEvents() : CBaseEntity(0)
{
	{
		ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	vfunc93(0, 0);
	if (g_107532ec)
		Error("More than one worldevents entity on the map!");
	g_107532ec = this;
}
// END FUNCTION

// FUNCTION: 0x1023db40 size=0x1e
#include "CWorldEvents.h"

void sub_100aa7b0(void *p);

// TARGET: CWorldEvents::vfunc5
CBaseEntity *CWorldEvents::vfunc5(unsigned int flags)
{
	sub_10014c09();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1023db70 size=0x102
#include "CBaseEntity.h"
#include "COutputEvent.h"
#include "CWorldEvents.h"

extern char vt_10496acc[];
extern int g_107532ec;

void CWorldEvents::sub_1023db70()
{
	*(char **)this = vt_10496acc;
	g_107532ec = 0;
	((COutputEvent *)((char *)this + 0x630))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x618))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x600))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x5e8))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x5d0))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x5b8))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x5a0))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x588))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x570))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x558))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x540))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x528))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x510))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x4f8))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x4e0))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x4c8))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x4b0))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x498))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x480))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x468))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x450))->sub_100cd2d0();
	sub_1000cb8a();
}
// END FUNCTION

// FUNCTION: 0x1023dcd0 size=0x6
namespace lifted {
extern int g_107532ec;
}
int sub_1023dcd0()
{
    return lifted::g_107532ec;
}
// END FUNCTION

// FUNCTION: 0x1023dcf0 size=0xab
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CWorldEvents.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

void CWorldEvents::vfunc113()
{
	CBaseEntity::vfunc113();
	vfunc78();
	{
		ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	vfunc93(0, 0);
	sub_100b3580(0x40000);
	*(unsigned int *)((char *)this + 0x19c) = 0xe0;
}
// END FUNCTION

// FUNCTION: 0x1023ddd0 size=0x104
#include "CUnknown1023ddd0.h"
#include "inputdata_t.h"

struct S1023ddd0World
{
	char m_pad[0x1b1];
	char m_b1b1;
	char m_pad1b2[0x49c - 0x1b2];
	int m_nAreaType;
};

struct S1023ddd0Player
{
	void sub_10170750();
};

struct S107258dc
{
	virtual void v0();
	virtual char vfunc1();
	char m_pad[0x2c - 4];
	int m_n2c;
};


extern S107258dc *g_107258dc;
S1023ddd0World *sub_1023bd00();
S1023ddd0Player *sub_101cd9e0(int index);
__declspec(dllimport) void DevMsg(const char *fmt, ...);

static inline int Variant_Int(const variant_t &v)
{
	return v.fieldType == 4 ? v.iValue : 0;
}

void CUnknown1023ddd0::sub_1023ddd0(inputdata_t *inputdata)
{
	S1023ddd0World *pWorld = sub_1023bd00();
	if (!pWorld)
		return;
	int n;
	if (Variant_Int(inputdata->value) > 2)
		n = 2;
	else if (Variant_Int(inputdata->value) >= 0)
		n = Variant_Int(inputdata->value);
	else
		n = 0;
	if (!g_107258dc->vfunc1() && g_107258dc->m_n2c) {
		const char *pszName = "ERROR!!!!!";
		if (n == 0)
			pszName = "combat";
		else if (n == 1)
			pszName = "safe";
		else if (n == 2)
			pszName = "elysium";
		DevMsg("CSActs:    %6.1f - Setting World Area Type = %d %s\n", (double)gpGlobals->curtime, n, pszName);
	}
	int area;
	if (n > 2)
		area = 2;
	else if (n < 0)
		area = 0;
	else
		area = n;
	if (area != pWorld->m_nAreaType) {
		pWorld->m_nAreaType = area;
		for (int i = 1; i <= gpGlobals->maxClients; i++) {
			S1023ddd0Player *pPlayer = sub_101cd9e0(i);
			if (pPlayer)
				pPlayer->sub_10170750();
		}
		pWorld->m_b1b1 = 1;
	}
}
// END FUNCTION

// FUNCTION: 0x1023df30 size=0x83
#include "CUnknown1023df30.h"
#include "inputdata_t.h"

struct CCopOwner_t
{
	char m_pad[0x4a0];
	char m_bWaitArea;	// 0x4a0
};

class CDevCvar_t
{
public:
	virtual void v0();
	virtual char vfunc1();
	char m_pad04[0x2c - 4];
	int m_nValue;	// 0x2c
};


CCopOwner_t *sub_1023bd00();
extern CDevCvar_t *g_107258dc;
extern void (__cdecl *g_109f3630)(const char *fmt, ...);

static inline char InputBool(inputdata_t *inputdata)
{
	if (inputdata->value.fieldType == 5)
		return *(char *)&inputdata->value;
	return 0;
}

void CUnknown1023df30::sub_1023df30(inputdata_t *inputdata)
{
	CCopOwner_t *cop = sub_1023bd00();
	if (cop) {
		if (!g_107258dc->vfunc1() && g_107258dc->m_nValue) {
			const char *text;
			if (inputdata->value.fieldType == 5 && *(char *)&inputdata->value)
				text = "true";
			else
				text = "false";
			g_109f3630("CSActs:    %6.1f - Cop Wait Area = %s\n", (double)gpGlobals->curtime, text);
		}
		cop->m_bWaitArea = InputBool(inputdata);
	}
}
// END FUNCTION

// FUNCTION: 0x1023dff0 size=0x84
#include "inputdata_t.h"

__declspec(dllimport) void DevMsg(const char *pMsg, ...);


struct CCopGlobal107258dc {
	virtual void vfunc0();
	virtual char vfunc1();
	char m_pad0004[0x2c - 4];
	int m_n2c;
};
extern CCopGlobal107258dc *g_107258dc;

struct CCopTarget1023bd00 {
	char m_pad0000[0x4a4];
	float m_flGraceTimer;
};
CCopTarget1023bd00 *sub_1023bd00();

struct CUnit1023dff0 {
	void sub_1023dff0(inputdata_t *pInput);
};

// TARGET: CUnit1023dff0::sub_1023dff0
void CUnit1023dff0::sub_1023dff0(inputdata_t *pInput)
{
	CCopTarget1023bd00 *pCop = sub_1023bd00();
	if (!pCop)
		return;
	if (!g_107258dc->vfunc1() && g_107258dc->m_n2c) {
		float f = pInput->value.fieldType == 1 ? pInput->value.flValue : 0.0f;
		DevMsg("CSActs:    %6.1f - Cop Grace Timer = %f\n", gpGlobals->curtime, f);
	}
	pCop->m_flGraceTimer = pInput->value.fieldType == 1 ? pInput->value.flValue : 0.0f;
}
// END FUNCTION

// FUNCTION: 0x1023e0b0 size=0x95
#include "CUnknown1023e0b0.h"
#include "inputdata_t.h"
#include "ConVar.h"

extern ConVar *g_107258dc;
extern void (__cdecl *g_109f3630)(const char *fmt, ...);

void CUnknown1023e0b0::sub_1023e0b0(inputdata_t *pInput)
{
	CUnknown1023e0b0Target *pTarget = sub_1023bd00();
	if (pTarget) {
		if (!g_107258dc->vfunc1() && g_107258dc->m_nValue)
			g_109f3630("CSActs:    %6.1f - Nosferatu tolerant = %s\n", (double)gpGlobals->curtime, pInput->value.Bool() ? "true" : "false");
		bool &r = pTarget->m_bNosferatuTolerant;
		r = pInput->value.Bool();
		pTarget->m_bDirty = true;
	}
}
// END FUNCTION

// FUNCTION: 0x1023e180 size=0x2a
char *sub_1000aa0b();

// TARGET: sub_1023e180
void __stdcall sub_1023e180(char *pSrc)
{
    char *pObj = sub_1000aa0b();
    if (pObj != 0)
        pObj[0x4a9] = (*(int *)(pSrc + 0x18) == 5) ? pSrc[8] : (char)0;
}
// END FUNCTION

// FUNCTION: 0x1023e1c0 size=0x64
struct CTarget { void sub_10006690(float f); };
struct CParam { int pad0[2]; float value; int pad1[3]; int type; };
CTarget *sub_1000aa0b();
void __stdcall sub_1023e1c0(CParam *p)
{
    CTarget *t = sub_1000aa0b();
    if (t) {
        float v = (p->type == 1) ? p->value : 0.0f;
        t->sub_10006690((v > 1.0) ? 1.0 : ((v < 0.0) ? 0.0 : v));
    }
}
// END FUNCTION

// FUNCTION: 0x1023e250 size=0xb
void __cdecl sub_100826b0(int a);
void __stdcall sub_1023e250(int a)
{
    sub_100826b0(0);
}
// END FUNCTION

// FUNCTION: 0x1023e270 size=0x8
namespace lifted {
int sub_10009aac();
}
int __stdcall sub_1023e270(int a0)
{
    return lifted::sub_10009aac();
}
// END FUNCTION

// FUNCTION: 0x1023e290 size=0x23
void sub_10265680(char value);

struct CUnk1023e290
{
	char m_pad0000[8];
	char m_b08;
	char m_pad0009[0x18 - 9];
	int m_n18;
};

void __stdcall sub_1023e290(CUnk1023e290 *p)
{
	sub_10265680(p->m_n18 == 5 ? p->m_b08 : (char)0);
}
// END FUNCTION

// FUNCTION: 0x1023e2d0 size=0x46
#include "inputdata_t.h"
#include "engineserver.h"
char *sub_101d3730(const char *pszFormat, ...);
void __stdcall sub_1023e2d0(inputdata_t *pInput)
{
	engine->vfunc7(sub_101d3730("credits %s", pInput->value.String()));
}
// END FUNCTION

// FUNCTION: 0x1023e340 size=0x5
#include "CBaseHandle.h"
CBaseHandle g_10753230[25];
// END FUNCTION

// FUNCTION: 0x1023e390 size=0xa
#include "ConVar.h"
ConVar g_10752dd8("damage_floaters", "1", 128, "Turns damage floaters above NPC's heads on(1) and off(0).");
// END FUNCTION

// FUNCTION: 0x1023e420 size=0xa
#include "ConVar.h"
ConVar g_10752c98("damage_floaters_queue_time", ".2", 0, "Minimum amount of time between the release of a damage floater on a particular NPC.");
// END FUNCTION

// FUNCTION: 0x1023e4b0 size=0x184
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"

struct SeqNode {
    unsigned int m_hEnt;
    int m_nValue;
    SeqNode *m_pNext;
    SeqNode() { m_hEnt = 0xffffffff; }
};

struct StateObj {
    virtual void v0();
    virtual char v1();
    char m_pad04[0x24];
    float m_f28;
};


extern StateObj *g_10752c9c;
extern CGlobalEntityList *g_10566458;
extern unsigned int g_10753230[25];
extern SeqNode *g_10752ce0[25];
extern float g_10752d60[25];
extern const float g_104454c4;

// TARGET: sub_1023e4b0
void sub_1023e4b0(CBaseEntity *pEnt, int value)
{
    if (!pEnt)
        return;
    int best = 25;
    StateObj *pState = g_10752c9c;
    for (int i = 0; i < 25; i++) {
        unsigned int h = g_10753230[i];
        CGlobalEntityList_Slot *s;
        CGlobalEntityList_Ent *e = (h != 0xffffffff && (s = &g_10566458->m_Slots[h & 0x1fff])->m_Serial == (int)(h >> 13)) ? s->m_pEntity : 0;
        if ((CBaseEntity *)e == pEnt) {
            SeqNode *n = new SeqNode;
            n->m_hEnt = *pEnt->vfunc1();
            n->m_nValue = value;
            n->m_pNext = g_10752ce0[i];
            g_10752ce0[i] = n;
            return;
        }
        if (h == 0xffffffff
            || (s = &g_10566458->m_Slots[h & 0x1fff])->m_Serial != (int)(h >> 13)
            || s->m_pEntity == 0) {
            if (i < best)
                best = i;
        } else if (g_10752ce0[i] == 0) {
            char b = pState->v1();
            pState = g_10752c9c;
            float f = b ? g_104454c4 : pState->m_f28;
            if (f + g_10752d60[i] < gpGlobals->curtime) {
                g_10753230[i] = 0xffffffff;
                g_10752d60[i] = 0;
                if (i < best)
                    best = i;
            }
        }
    }
    if (best >= 0 && best < 25) {
        SeqNode *n = new SeqNode;
        n->m_hEnt = *pEnt->vfunc1();
        n->m_nValue = value;
        n->m_pNext = g_10752ce0[best];
        g_10752ce0[best] = n;
        g_10753230[best] = *pEnt->vfunc1();
    }
}
// END FUNCTION

// FUNCTION: 0x1023e6b0 size=0x47
struct N { int a; int b; N *next; };
extern N *g_10752ce0[25];
extern int g_10752d60[25];
extern int g_10753230[25];
void operator delete(void *);
void sub_1023e6b0()
{
    for (int i = 0; i < 25; i++) {
        while (g_10752ce0[i]) {
            N *p = g_10752ce0[i];
            g_10752ce0[i] = p->next;
            delete p;
        }
        g_10752d60[i] = 0;
        g_10753230[i] = -1;
    }
}
// END FUNCTION

// FUNCTION: 0x1023e720 size=0x252
#include "engineserver.h"
#include "CBaseEntity.h"
#include "CEntityMessageFilter.h"

struct CUnk10752ddc
{
	virtual void v0();
	virtual bool v1();
	int m_pad[10];
	int m_2c;
};
extern CUnk10752ddc *g_10752ddc;

void sub_1023e720(CBaseEntity *pEnt, int nValue)
{
	const char *szDigits[10] = {
		"sprites/floaters/number0.vmt",
		"sprites/floaters/number1.vmt",
		"sprites/floaters/number2.vmt",
		"sprites/floaters/number3.vmt",
		"sprites/floaters/number4.vmt",
		"sprites/floaters/number5.vmt",
		"sprites/floaters/number6.vmt",
		"sprites/floaters/number7.vmt",
		"sprites/floaters/number8.vmt",
		"sprites/floaters/number9.vmt"
	};
	if (!g_10752ddc->v1() && g_10752ddc->m_2c) {
		if (nValue > 999)
			nValue = 999;
		else if (nValue < 0)
			nValue = 0;
		int nId = (*(int (__fastcall ***)(void *))pEnt)[348](pEnt);
		int nOnes = nValue % 10;
		int nTens = (nValue / 10) % 10;
		int nHundreds = (nValue / 100) % 10;
		int c = 0;
		int b = 0;
		int a;
		if (nHundreds != 0) {
			a = engine->vfunc13(szDigits[nOnes], 0);
			b = engine->vfunc13(szDigits[nTens], 0);
			c = engine->vfunc13(szDigits[nHundreds], 0);
		} else if (nTens != 0) {
			a = engine->vfunc13(szDigits[nOnes], 0);
			b = engine->vfunc13(szDigits[nTens], 0);
		} else {
			a = engine->vfunc13(szDigits[nOnes], 0);
		}
		CEntityMessageFilter filter;
		int iEdict = pEnt->m_pEdict2e0;
		filter.sub_1019d2f0(engine->vfunc35(iEdict));
		filter.MakeReliable();
		engine->vfunc65(&filter, 0);
		engine->vfunc67(0x16);
		engine->vfunc71(a);
		engine->vfunc71(b);
		engine->vfunc71(c);
		engine->vfunc71(nId);
		engine->vfunc66();
	}
}
// END FUNCTION

// FUNCTION: 0x1023ea20 size=0xc3
struct CQueuedNode
{
	unsigned int m_hEnt;	// 0x00
	int m_nArg;	// 0x04
	CQueuedNode *m_pNext;	// 0x08
};

struct CQueueOwner	// the global object at 0x10752c9c
{
	virtual void v0();
	virtual bool vfunc1();
	char m_pad[0x28 - 4];
	float m_flDelay;	// 0x28
};

struct CQueueHandleEntry
{
	void *m_pEnt;
	unsigned int m_serial;
};

extern CQueueOwner *g_10752c9c;
extern CQueuedNode *g_10752ce0[25];
extern float g_10752d60[25];
extern char *g_10566458;
void sub_1023e720(void *pEnt, int arg);	// stub 0x10004147
void __cdecl operator delete(void *p);

void sub_1023ea20()
{
	CQueueOwner *pOwner = g_10752c9c;
	for (int i = 0; i < 25; i++) {
		if (g_10752ce0[i] != 0) {
			float delay = pOwner->vfunc1() ? 0.0f : g_10752c9c->m_flDelay;
			pOwner = g_10752c9c;
			if (delay + g_10752d60[i] < gpGlobals->curtime) {
				CQueuedNode *pNode = g_10752ce0[i];
				g_10752ce0[i] = pNode->m_pNext;
				unsigned int h = pNode->m_hEnt;
				if (h != 0xffffffff) {
					volatile CQueueHandleEntry *e = (CQueueHandleEntry *)(g_10566458 + (h & 0x1fff) * 12 + 4);
					if (e->m_serial == (h >> 13) && e->m_pEnt != 0) {
						void *pEnt;
						if (e->m_serial == (h >> 13))
							pEnt = e->m_pEnt;
						else
							pEnt = 0;
						sub_1023e720(pEnt, pNode->m_nArg);
					}
				}
				delete pNode;
				pOwner = g_10752c9c;
				g_10752d60[i] = gpGlobals->curtime;
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1023eb30 size=0xa
#include "utlvector.h"
CUtlVector<int> g_10752e88;
// END FUNCTION

// FUNCTION: 0x1023ec20 size=0xa
#include "utlvector.h"
CUtlVector<int> g_10752dc4;
// END FUNCTION

// FUNCTION: 0x1023ed10 size=0xde
#include "utlmemory.h"
#include "utlvector.h"
extern "C" void *__cdecl memmove(void *, const void *, unsigned int);
extern "C" __declspec(dllimport) void *Plat_Alloc(unsigned long size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *pMem, unsigned long size);

struct VecElem8
{
	int m_a;
	char m_b;
};

struct VecElem8Vector
{
	VecElem8 *m_pMemory;	// 0x10752e88
	int m_nAlloc;	// 0x10752e8c
	int m_nGrow;	// 0x10752e90
	int m_nSize;	// 0x10752e94
	VecElem8 *m_pElements;	// 0x10752e98

	void Grow(int num)
	{
		if (m_nGrow == -1)
			return;
		int nAllocationRequested = m_nAlloc + num;
		while (m_nAlloc < nAllocationRequested) {
			if (m_nAlloc != 0) {
				if (m_nGrow)
					m_nAlloc = m_nAlloc + m_nGrow;
				else
					m_nAlloc = m_nAlloc * 2;
			} else {
				m_nAlloc = 4;
			}
		}
		if (m_pMemory)
			m_pMemory = (VecElem8 *)Plat_Realloc(m_pMemory, m_nAlloc * 8);
		else
			m_pMemory = (VecElem8 *)Plat_Alloc(m_nAlloc << 3);
	}

	void GrowVector(int num)
	{
		if (m_nSize + num > m_nAlloc)
			Grow(m_nSize + num - m_nAlloc);
	}

	void InsertBefore(int elem, const VecElem8 &src)
	{
		GrowVector(1);
		m_nSize++;
		m_pElements = m_pMemory;
		int toMove = m_nSize - elem - 1;
		if (toMove > 0)
			memmove(&m_pMemory[elem + 1], &m_pMemory[elem], toMove * sizeof(VecElem8));
		VecElem8 *p = &m_pMemory[elem];
		if (p)
			*p = src;
	}
};

extern VecElem8Vector g_10752e88;

void sub_1023ed10(int a, char b)
{
	VecElem8 elem;
	elem.m_a = a;
	elem.m_b = b;
	g_10752e88.InsertBefore(g_10752e88.m_nSize, elem);
}
// END FUNCTION

// FUNCTION: 0x1023ee30 size=0xcb
extern "C" void *__cdecl memmove(void *, const void *, unsigned int);
extern void *(__cdecl *g_109f3634)(int);
extern void *(__cdecl *g_109f3638)(void *, int);

struct IntVec {
	int *pMemory;
	int allocationCount;
	int growSize;
	int size;
	int *pElements;
};
extern IntVec g_10752dc4;

void sub_1023ee30(int src)
{
	int num = g_10752dc4.size + 1;
	int elem = g_10752dc4.size;
	if (num > g_10752dc4.allocationCount && g_10752dc4.growSize != -1) {
		while (g_10752dc4.allocationCount < num) {
			if (g_10752dc4.allocationCount) {
				if (g_10752dc4.growSize)
					g_10752dc4.allocationCount += g_10752dc4.growSize;
				else
					g_10752dc4.allocationCount += g_10752dc4.allocationCount;
			} else {
				g_10752dc4.allocationCount = 8;
			}
		}
		if (g_10752dc4.pMemory)
			g_10752dc4.pMemory = (int *)g_109f3638(g_10752dc4.pMemory, g_10752dc4.allocationCount * 4);
		else
			g_10752dc4.pMemory = (int *)g_109f3634(g_10752dc4.allocationCount * 4);
	}
	g_10752dc4.size++;
	g_10752dc4.pElements = g_10752dc4.pMemory;
	int toMove = g_10752dc4.size - elem - 1;
	if (toMove > 0)
		memmove(g_10752dc4.pMemory + num, g_10752dc4.pMemory + elem, toMove * 4);
	int *p = g_10752dc4.pMemory + elem;
	if (p)
		*p = src;
}
// END FUNCTION

// FUNCTION: 0x1023ef40 size=0x5d
#include "utlrbtree.h"
#include "utlvector.h"
#include "engineserver.h"
#include "engineiface.h"
struct CWorldPrecacheModel_Entry { const char *m_pszName; bool m_bPreload; };
extern CUtlVector<CWorldPrecacheModel_Entry> g_10752e88;
extern CUtlVector<const char *> g_10752dc4;
void sub_1023ef40()
{
	for (int i = 0; i < g_10752e88.Count(); i++)
		engine->vfunc13(g_10752e88[i].m_pszName, g_10752e88[i].m_bPreload);
	for (int j = 0; j < g_10752dc4.Count(); j++)
		enginesound->vfunc0(g_10752dc4[j], 0);
}
// END FUNCTION

// FUNCTION: 0x1023efc0 size=0x1e
#include "CDecal.h"

void sub_100aa7b0(void *p);

// TARGET: CDecal::vfunc5
CDecal *CDecal::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
