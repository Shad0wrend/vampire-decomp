// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1003d3d0 size=0x85
#include "CBaseEntity.h"

struct ScopeEntry {
	const char *fn;
	const char *name;
	const char *extra;
};
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;

bool CBaseEntity::vfunc207()
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = "";
	} else {
		name = "NULL ENTITY";
	}
	g_109f3620[*g_109f3680].fn = "CBaseEntity::IsCurrentlyTouching";
	g_109f3620[*g_109f3680].name = name;
	g_109f3620[*g_109f3680].extra = "";
	(*g_109f3680)++;
	if (sub_1003cb00(1)) {
		(*g_109f3680)--;
		return true;
	}
	(*g_109f3680)--;
	return false;
}
// END FUNCTION

// FUNCTION: 0x1009a660 size=0x6
#include "CBaseEntity.h"
namespace lifted {
extern char g_106cfe10;
}
int CBaseEntity::vfunc80()
{
    return (int)&lifted::g_106cfe10;
}
// END FUNCTION

// FUNCTION: 0x1009a680 size=0x3
#include "CBaseEntity.h"
int CBaseEntity::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1009ac80 size=0xb4
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern "C" __declspec(dllimport) char *Q_strncpy(char *dest, const char *src, int maxLen);

void CBaseEntity::vfunc11(const char *name)
{
    const char *n = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::DebugSetEntityName";
    g_109f3620[*g_109f3680].b = n;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    if (name) {
        Q_strncpy((char *)this + 4, name, 0x1f);
        if (vfunc85())
            Q_strncpy(vfunc85(), name, 0x1f);
    }
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1009ad70 size=0x78
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

char * __fastcall sub_1009ad70(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::DebugGetEntityName";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return self + 4;
}
// END FUNCTION

// FUNCTION: 0x1009ae10 size=0xb7
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
extern char *(__cdecl *g_109f3890)(char *, const char *, int);

void CBaseEntity::vfunc13(const char *classname)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (name == 0)
			name = g_106b8540;
	} else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseEntity::DebugSetClassName";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	if (classname) {
		char *(__cdecl *copy)(char *, const char *, int) = g_109f3890;
		copy((char *)this + 0x24, classname, 0x1f);
		if (vfunc85())
			copy(vfunc85() + 0x20, classname, 0x1f);
	}
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1009af00 size=0x4
#include "CBaseEntity.h"
char * CBaseEntity::vfunc14()
{
    return (char *)this + 0x24;
}
// END FUNCTION

// FUNCTION: 0x1009af40 size=0xc0
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CCollisionProperty.h"

extern void (__cdecl *g_109f3630)(const char *fmt, ...);

void CBaseEntity::sub_1009af40(const float *pExtents)
{
	ScopeTrace trace("CBaseEntity::SetAttackExtents", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CCollisionProperty *pCollision = (CCollisionProperty *)((char *)this + 0x270);
	if (!pCollision) {
		g_109f3630("WARNING: Trying to set attack extents for %s which has no collision property.\n", sub_100ab4f0());
		return;
	}
	pCollision->sub_100dc220((int)pExtents);
	float *pDest = (float *)((char *)this + 0x50);
	pDest[0] = pExtents[0];
	pDest[1] = pExtents[1];
	pDest[2] = pExtents[2];
}
// END FUNCTION

// FUNCTION: 0x1009b030 size=0x1e
#include "CBaseEntity.h"

struct V3 {
	float x, y, z;
};

float *CBaseEntity::sub_1009b030(float *out)
{
	*(V3 *)out = *(V3 *)((char *)this + 0x50);
	return out;
}
// END FUNCTION

// FUNCTION: 0x1009b2c0 size=0x83
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseEntity::sub_1009b2c0(int a, int b)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::TraceMessage";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_1009b1d0(a, b);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1009b380 size=0x83
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseEntity::vfunc17(int a, int b)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::TraceMessage";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_1009b1d0(a, b);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1009b500 size=0x7e
#include "CBaseEntity.h"
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseEntity::sub_1009b500(const char *msg)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::TraceMessageBare";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    sub_1009b440(msg);
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1009b5a0 size=0x7e
#include "CBaseEntity.h"
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseEntity::sub_1009b5a0(const char *msg)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::TraceMessageBare";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    sub_1009b440(msg);
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1009c980 size=0x6ad
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "Vector.h"
#include "ScopeTrace.h"
extern char g_106cff50;
extern char g_106cff51;
extern int g_10552810;
extern int g_10552814;

struct CEntityDumpView
{
	char m_pad0000[0x4c];
	unsigned int m_edt;	// 0x4c
	char m_pad0050[0xc0 - 0x50];
	const char *m_iszVSoundGroup;	// 0xc0
	char m_pad00c4[0x11c - 0xc4];
	const char *m_iClassname;	// 0x11c
	const char *m_iGlobalname;	// 0x120
	const char *m_iParent;	// 0x124
	const char *m_iDialog;	// 0x128
	char m_bBlocked;	// 0x12c
	char m_pad012d[3];
	int m_rgflCoordinateFrame[12];	// 0x130
	int m_flStartFrameLocalTime;	// 0x160
	int m_flSpeed;	// 0x164
	int m_nRenderFX;	// 0x168
	int m_nRenderMode;	// 0x16c
	char m_pad0170[4];
	int m_flAnimTime;	// 0x174
	int m_flLastThink;	// 0x178
	int m_flNextThink;	// 0x17c
	int m_flNextThinkSR;	// 0x180
	Vector m_vecViewOffset;	// 0x184
	Vector m_vecMoveDir;	// 0x190
	int m_fEffects;	// 0x19c
	CBaseEntityColor32 m_clrRender;	// 0x1a0
	char m_pad01a4[0x1f8 - 0x1a4];
	CBaseEntity *m_pLink;	// 0x1f8
	int m_takedamage;	// 0x1fc
	int m_lifeState;	// 0x200
	int m_spawnflags;	// 0x204
	int m_iMaxHealth;	// 0x208
	const char *m_target;	// 0x20c
	int m_iHealth;	// 0x210
	char m_pad0214[0x224 - 0x214];
	unsigned int m_debugOverlays;	// 0x224
	char m_pad0228[0x254 - 0x228];
	EHANDLE m_pParent;	// 0x254
	char m_pad0258[0x25c - 0x258];
	EHANDLE m_pMoveParent;	// 0x25c
	EHANDLE m_pMoveChild;	// 0x260
	EHANDLE m_pMovePeer;	// 0x264
	int m_iEFlags;	// 0x268
	const char *m_iName;	// 0x26c
	char m_pad0270[0x35c - 0x270];
	int m_MoveType;	// 0x35c
	int m_MoveCollide;	// 0x360
	char m_pad0364[4];
	int m_CollisionGroup;	// 0x368
	int m_pPhysicsObject;	// 0x36c
	char m_pad0370[4];
	const char *m_iszUseScript;	// 0x374
	int m_pPythonObject;	// 0x378
	EHANDLE m_hAimEnt;	// 0x37c
	char m_pad0380[0x3b0 - 0x380];
	Vector m_vecBaseVelocity;	// 0x3b0
	char m_pad03bc[0x3c8 - 0x3bc];
	Vector m_vecAngVelocity;	// 0x3c8
	Vector m_vecVelocity;	// 0x3d4
	int m_nWaterLevel;	// 0x3e0
	int m_nWaterType;	// 0x3e4
	char m_pad03e8[4];
	int m_flGravity;	// 0x3ec
	int m_flFriction;	// 0x3f0
	int m_flLocalTime;	// 0x3f4
	char m_pad03f8[4];
	int m_flMoveDoneTime;	// 0x3fc

	bool IsEdt(int n) { return ((m_edt >> n) & 1) != 0; }
};

void CBaseEntity::vfunc31(int pDump)
{
	ScopeTrace st("CBaseEntity::Dump", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CEntityDumpView *v = (CEntityDumpView *)this;
	if (v->IsEdt(0))
		sub_1009b640(pDump, (int)"m_edtDerivedType", (int)"ENV_PARTICLE");
	if (v->IsEdt(1))
		sub_1009b640(pDump, (int)"m_edtDerivedType", (int)"PROP_RAGDOLL");
	if (v->IsEdt(2))
		sub_1009b640(pDump, (int)"m_edtDerivedType", (int)"PHYSICS_PROP");
	if (v->IsEdt(3))
		sub_1009b640(pDump, (int)"m_edtDerivedType", (int)"PHYSICS_BRUSH");
	if (v->IsEdt(4))
		sub_1009b640(pDump, (int)"m_edtDerivedType", (int)"SIMPLE_PHYSICS_PROP");
	if (v->IsEdt(5))
		sub_1009b640(pDump, (int)"m_edtDerivedType", (int)"NPC");
	if (v->IsEdt(6))
		sub_1009b640(pDump, (int)"m_edtDerivedType", (int)"NPC_TROIKA");
	if (v->IsEdt(11))
		sub_1009b640(pDump, (int)"m_edtDerivedType", (int)"PLAYER");
	if (v->IsEdt(12))
		sub_1009b640(pDump, (int)"m_edtDerivedType", (int)"CINE_NPC");
	sub_1009b8a0(pDump, (int)"m_bInDebugSelect", g_106cff50);
	sub_1009b980(pDump, "m_nDebugPlayer", g_10552810);
	sub_1009b8a0(pDump, (int)"m_bDebugPause", g_106cff51);
	sub_1009b980(pDump, "m_nDebugSteps", g_10552814);
	sub_1009b700(pDump, (int)"m_iClassname", v->m_iClassname);
	sub_1009b700(pDump, (int)"m_iGlobalname", v->m_iGlobalname);
	sub_1009b700(pDump, (int)"m_iParent", v->m_iParent);
	sub_1009b980(pDump, "m_iEFlags", v->m_iEFlags);
	sub_1009c000(pDump, "m_pParent", v->m_pParent);
	sub_1009b700(pDump, (int)"m_iDialog", v->m_iDialog);
	sub_1009b980(pDump, "m_nWaterLevel", v->m_nWaterLevel);
	sub_1009b980(pDump, "m_nWaterType", v->m_nWaterType);
	sub_1009b8a0(pDump, (int)"m_bBlocked", v->m_bBlocked);
	sub_1009c5f0(pDump, "m_rgflCoordinateFrame[0]", &v->m_rgflCoordinateFrame[0], 4);
	sub_1009c5f0(pDump, "m_rgflCoordinateFrame[1]", &v->m_rgflCoordinateFrame[4], 4);
	sub_1009c5f0(pDump, "m_rgflCoordinateFrame[2]", &v->m_rgflCoordinateFrame[8], 4);
	sub_1009c110(pDump, (int)"m_pMoveParent", v->m_pMoveParent.Get());
	sub_1009c110(pDump, (int)"m_pMoveChild", v->m_pMoveChild.Get());
	sub_1009c110(pDump, (int)"m_pMovePeer", v->m_pMovePeer.Get());
	sub_1009ba60(pDump, "m_flLocalTime", v->m_flLocalTime);
	sub_1009ba60(pDump, "m_flStartFrameLocalTime", v->m_flStartFrameLocalTime);
	sub_1009ba60(pDump, "m_flMoveDoneTime", v->m_flMoveDoneTime);
	sub_1009ba60(pDump, "m_flGravity", v->m_flGravity);
	sub_1009ba60(pDump, "m_flFriction", v->m_flFriction);
	sub_1009ba60(pDump, "m_flSpeed", v->m_flSpeed);
	sub_1009b980(pDump, "m_nRenderFX", v->m_nRenderFX);
	sub_1009b980(pDump, "m_nRenderMode", v->m_nRenderMode);
	sub_1009bd10(pDump, "m_vecAngVelocity", v->m_vecAngVelocity);
	sub_1009ba60(pDump, "m_flAnimTime", v->m_flAnimTime);
	sub_1009ba60(pDump, "m_flLastThink", v->m_flLastThink);
	sub_1009ba60(pDump, "m_flNextThink", v->m_flNextThink);
	sub_1009ba60(pDump, "m_flNextThinkSR", v->m_flNextThinkSR);
	sub_1009be00(pDump, "m_vecViewOffset", v->m_vecViewOffset);
	sub_1009be00(pDump, "m_vecBaseVelocity", v->m_vecBaseVelocity);
	sub_1009be00(pDump, "m_vecMoveDir", v->m_vecMoveDir);
	sub_1009be00(pDump, "m_vecVelocity", v->m_vecVelocity);
	sub_1009b980(pDump, "m_fEffects", v->m_fEffects);
	sub_1009bef0(pDump, (int)"m_clrRender", v->m_clrRender);
	sub_1009c110(pDump, (int)"m_pLink", v->m_pLink);
	sub_1009b980(pDump, "m_takedamage", v->m_takedamage);
	sub_1009b980(pDump, "m_lifeState", v->m_lifeState);
	sub_1009b980(pDump, "m_spawnflags", v->m_spawnflags);
	sub_1009b980(pDump, "m_iMaxHealth", v->m_iMaxHealth);
	sub_1009b700(pDump, (int)"m_target", v->m_target);
	sub_1009b980(pDump, "m_iHealth", v->m_iHealth);
	sub_1009bb40(pDump, (int)"m_debugOverlays", v->m_debugOverlays);
	sub_1009b700(pDump, (int)"m_iName", v->m_iName);
	sub_1009b980(pDump, "m_MoveType", v->m_MoveType);
	sub_1009b980(pDump, "m_MoveCollide", v->m_MoveCollide);
	sub_1009b980(pDump, "m_CollisionGroup", v->m_CollisionGroup);
	sub_1009bc30(pDump, "m_pPhysicsObject", v->m_pPhysicsObject);
	sub_1009b700(pDump, (int)"m_iszUseScript", v->m_iszUseScript);
	sub_1009b700(pDump, (int)"m_iszVSoundGroup", v->m_iszVSoundGroup);
	sub_1009bc30(pDump, "m_pPythonObject", v->m_pPythonObject);
	sub_1009c000(pDump, "m_hAimEnt", v->m_hAimEnt);
}
// END FUNCTION

// FUNCTION: 0x1009d2a0 size=0xaa
#include "CBaseEntity.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseEntity::vfunc66()
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::Hide";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (*((char *)this + 0xf4)) {
		volatile unsigned int *pFlags = (unsigned int *)((char *)this + 0xf8);
		unsigned int flags = *pFlags;
		flags |= 0x40;
		*pFlags = flags;
		sub_1009d1e0();
		(*g_109f3680)--;
		return;
	}
	volatile unsigned int *pFlags = (unsigned int *)((char *)this + 0x19c);
	unsigned int flags = *pFlags;
	flags |= 0x40;
	*pFlags = flags;
	sub_1009d1e0();
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1009d380 size=0xa2
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseEntity::vfunc67()
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::Unhide";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    if (*((char *)this + 0xf4)) {
        *(unsigned int *)((char *)this + 0xf8) &= 0xffffffbf;
        (*g_109f3680)--;
        return;
    }
    *(unsigned int *)((char *)this + 0x19c) &= 0xffffffbf;
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1009d460 size=0x122
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CBaseEntity.h"
#include "CBaseCombatCharacter.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"

extern CUnknown1073dc28 g_1073dc28;
extern char g_10555390[];

// The fields of the entity this slot reads (CBaseEntity.h still has them as padding).
struct EntSoundFields
{
    void *m_pVTable;
    char m_pad0004[0x98];
    CBaseCombatCharacter *m_pOwner;	// 0x9c
    int m_n00a0;
    char m_pad00a4[0xac - 0xa4];
    int m_n00ac;
    char m_pad00b0[0xb4 - 0xb0];
    int m_nGroup;	// 0xb4
    int m_nGroupFemale;	// 0xb8
    int m_nTableIdx;	// 0xbc
    const char *m_pszName;	// 0xc0
};

void CBaseEntity::vfunc71()
{
    ScopeTrace trace(g_10555390, this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    EntSoundFields *f = (EntSoundFields *)this;
    if (f->m_pOwner) {
        if (f->m_n00ac != 0)
            f->m_nTableIdx = 3;
        else if (vfunc70())
            f->m_nTableIdx = 2;
        else if (f->m_pOwner->sub_10336920())
            f->m_nTableIdx = 1;
        else
            f->m_nTableIdx = 0;
    } else if (f->m_n00a0 != 0)
        f->m_nTableIdx = 0;
    f->m_nGroup = g_1073dc28.sub_101f55a0(this, f->m_pszName ? f->m_pszName : g_106b8540, 0);
    f->m_nGroupFemale = g_1073dc28.sub_101f55a0(this, f->m_pszName ? f->m_pszName : g_106b8540, 1);
}
// END FUNCTION

// FUNCTION: 0x1009d820 size=0x1f
#include "CBaseEntity.h"

struct CUnkStatDefault3 {
	char *sub_101d5f10(void *p);
};

extern CUnkStatDefault3 g_10738d10;

// TARGET: CBaseEntity::vfunc70
bool CBaseEntity::vfunc70()
{
	if (m_p9c)
	{
		char *p = g_10738d10.sub_101d5f10(m_p9c);
		return *(bool *)(p + 0x8e);
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1009def0 size=0x1e
void __fastcall sub_1009df20(void *self);
void sub_100aa7b0(void *p);

// TARGET: sub_1009def0
void *__fastcall sub_1009def0(void *pThis, int edx_unused, unsigned int flags)
{
	sub_1009df20(pThis);
	if (flags & 1)
		sub_100aa7b0(pThis);
	return pThis;
}
// END FUNCTION

// FUNCTION: 0x1009df20 size=0x175
#include "utlrbtree.h"
// CBaseEntity.h declares no destructor; declare it in this unit only (next to vfunc226)
#define vfunc226(a) vfunc226(a); ~CBaseEntity()
#include "ScopeTrace.h"
#include "utlvector.h"
#include "CBaseEntity.h"
#include "utlmemory.h"

struct SDtorV230 { void sub_100b46a0(); };
struct SDtorV1d0 { void sub_100b4950(); void sub_100b4970(); CUtlMemory<int> m_mem; int m_size; int m_pEl; };
struct SDtorV1b8 { void sub_100b47e0(); void sub_100b4910(); CUtlMemory<int> m_mem; int m_size; int m_pEl; };
struct SDtorN { void sub_100cd2d0(); };
struct SDtorCol { void sub_100dc200(); };
struct SDtorNet { void sub_101ab550(); };
struct SDtorRef { const unsigned int *sub_10006393(); };
struct SDtorHArg { unsigned int m_v; SDtorHArg(SDtorRef *p) { m_v = *p->sub_10006393(); } };
struct SDtorList { void sub_100f9f90(SDtorHArg h); };
extern char g_10735d38;
extern char g_106b8540[];
extern SDtorList g_106eb5d8;
extern void *vt_10450a10[];
void sub_1003d8f0(CBaseEntity *p);
void sub_10196850(void *p);

CBaseEntity::~CBaseEntity()
{
	{
		ScopeTrace scope("CBaseEntity::~CBaseEntity", m_name26c ? m_name26c : g_106b8540);
		CBaseEntity::vfunc225();
		g_10735d38 = 0;
		sub_1003d8f0(this);
		g_10735d38 = 1;
		g_106eb5d8.sub_100f9f90((SDtorRef *)this);
		if (m_p378)
			sub_10196850(m_p378);
	}
	((SDtorNet *)((char *)this + 0x2d4))->sub_101ab550();
	((SDtorCol *)((char *)this + 0x270))->sub_100dc200();
	SDtorV230 *v230 = (SDtorV230 *)((char *)this + 0x230);
	v230->sub_100b46a0();
	((CUtlMemory<int> *)v230)->Purge();
	SDtorV1d0 *v1d0 = (SDtorV1d0 *)((char *)this + 0x1d0);
	v1d0->sub_100b4950();
	v1d0->sub_100b4970();
	v1d0->m_pEl = (int)v1d0->m_mem.m_pMemory;
	v1d0->m_mem.Purge();
	SDtorV1b8 *v1b8 = (SDtorV1b8 *)((char *)this + 0x1b8);
	v1b8->sub_100b47e0();
	v1b8->sub_100b4910();
	v1b8->m_pEl = (int)v1b8->m_mem.m_pMemory;
	v1b8->m_mem.Purge();
	((SDtorN *)((char *)this + 0x74))->sub_100cd2d0();
	((SDtorN *)((char *)this + 0x5c))->sub_100cd2d0();
	*(void ***)this = vt_10450a10;
}
// END FUNCTION

// FUNCTION: 0x1009e100 size=0x6
#include "CBaseEntity.h"
namespace lifted {
extern char g_10552d34;
}
int CBaseEntity::vfunc79()
{
    return (int)&lifted::g_10552d34;
}
// END FUNCTION

// FUNCTION: 0x1009e120 size=0x105
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CUnknown1070b22c.h"
struct CEngX { U22C_SLOTS10(a0) U22C_SLOTS10(b0) U22C_SLOTS10(c0) virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual int vfunc35(int edict, int a); };
extern CEngX *g_1070b22c;
struct CUnkSink { void sub_10003198(const char **p, CBaseEntity *e); void sub_10014d08(void *p, CBaseEntity *e, int v); };
extern CUnkSink g_106eb5d8;
void sub_10014614(CBaseEntity *e);
struct CPart { void sub_100015eb(int a); };
void CBaseEntity::vfunc106(const char *classname)
{
	ScopeTrace trace("CBaseEntity::PostConstructor", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (classname && *classname) {
		vfunc122(classname);
		if (m_flags268 & 0x200) {
			g_106eb5d8.sub_10003198(&classname, this);
			return;
		}
		if (!(m_flags268 & 0x400))
			((CPart *)((char *)this + 0x2d4))->sub_100015eb(0);
		if (m_pEdict2e0) {
			g_106eb5d8.sub_10014d08((char *)&classname + 4, this, g_1070b22c->vfunc35(m_pEdict2e0, -1));
			return;
		}
	} else {
		sub_10014614(this);
	}
}
// END FUNCTION

// FUNCTION: 0x1009e280 size=0xd1
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CEntityMapData.h"
#include "ScopeTrace.h"

// TARGET: CBaseEntity::vfunc107
void CBaseEntity::vfunc107(CEntityMapData *pMapData)
{
	ScopeTrace trace("CBaseEntity::ParseMapData", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	char szValue[256];
	char szKey[256];
	if (pMapData->sub_10136e80(szKey, szValue))
	{
		do
		{
			vfunc110(szKey, szValue);
		} while (pMapData->sub_10136ee0(szKey, szValue));
	}
}
// END FUNCTION

// FUNCTION: 0x1009ebb0 size=0xbe
#include "CBaseEntity.h"
struct TraceEntry { const char *a, *b, *c; };
extern int *g_109f3680;
extern TraceEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
extern int (*g_109f388c)(char *, int, const char *, ...);
struct ScopeTrace {
    ScopeTrace(const char *a, const char *b, const char *c) {
        g_109f3620[*g_109f3680].a = a;
        g_109f3620[*g_109f3680].b = b;
        g_109f3620[*g_109f3680].c = c;
        ++*g_109f3680;
    }
    ~ScopeTrace() { --*g_109f3680; }
};

bool CBaseEntity::vfunc109(const char *key, float value)
{
    char buf[256];
    const char *ent;
    if (this) {
        ent = m_name26c;
        if (!ent) ent = g_106b8540;
    } else {
        ent = g_105387dc;
    }
    ScopeTrace trace("CBaseEntity::KeyValue", ent, g_106b8540);
    g_109f388c(buf, 256, "%f", (double)value);
    return vfunc110(key, buf);
}
// END FUNCTION

// FUNCTION: 0x1009eca0 size=0xd4
#include "CBaseEntity.h"
struct TraceEntry { const char *a, *b, *c; };
extern int *g_109f3680;
extern TraceEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
extern int (*g_109f388c)(char *, int, const char *, ...);
struct ScopeTrace {
    ScopeTrace(const char *a, const char *b, const char *c) {
        g_109f3620[*g_109f3680].a = a;
        g_109f3620[*g_109f3680].b = b;
        g_109f3620[*g_109f3680].c = c;
        ++*g_109f3680;
    }
    ~ScopeTrace() { --*g_109f3680; }
};

// TARGET: CBaseEntity::vfunc108
bool CBaseEntity::vfunc108(const char *key, float x, float y, float z)
{
    char buf[256];
    const char *ent;
    if (this) {
        ent = m_name26c;
        if (!ent) ent = g_106b8540;
    } else {
        ent = g_105387dc;
    }
    ScopeTrace trace("CBaseEntity::KeyValue", ent, g_106b8540);
    g_109f388c(buf, 256, "%f %f %f", (double)x, (double)y, (double)z);
    return vfunc110(key, buf);
}
// END FUNCTION

// FUNCTION: 0x1009f120 size=0xa2
#include "CBaseEntity.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }


struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
const char **sub_10002095(const char **out, const char *s);

void CBaseEntity::vfunc122(const char *classname)
{
	const char *name = this ? (STRINGR_F(m_name26c)) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::SetClassname";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	m_classname11c = *sub_10002095(&classname, classname);
	const char *arg = STRINGR_F(m_classname11c);
	vfunc13(arg);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1009f2c0 size=0x86
#include "CBaseEntity.h"
#include "ScopeTrace.h"

Vector CBaseEntity::vfunc197(const Vector &posSrc, char a, char b)
{
	ScopeTrace scope("CBaseEntity::BodyTarget", this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY");
	return vfunc192();
}
// END FUNCTION

// FUNCTION: 0x1009faf0 size=0x6f
#include "CBaseEntity.h"
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseEntity::vfunc125()
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::DrawMuzzleOverlay";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100a0130 size=0x123
#include "CBaseEntity.h"
#include "ScopeTrace.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

void sub_101434b0(int a, int b, const char *pszText, int c, int r, int g, int bl, int al);
struct CBaseEntityUnit : CBaseEntity
{
	void sub_1009fe40();
	void sub_1009f4e0();
	void sub_1009f850();
	void sub_1009fb80();
};
static inline int ENTINDEX_X(int pEdict) { return engine->vfunc35(pEdict); }
struct EntV : CBaseEntity { int entindex() { return ENTINDEX_X(m_pEdict2e0); } };
// TARGET: CBaseEntity::vfunc123
void CBaseEntity::vfunc123()
{
	ScopeTrace trace("CBaseEntity::DrawDebugGeometryOverlays", this ? (STRINGR_F(m_name26c)) : g_105387dc);
	((CBaseEntityUnit *)this)->sub_1009fe40();
	vfunc124();
	if (m_bDebugOverlays224 & 2) {
		sub_101434b0(((EntV *)this)->entindex(), 0, sub_1000b5cd(), 0, 0xff, 0xff, 0xff, 0xff);
	}
	if (m_bDebugOverlays224 & 4)
		((CBaseEntityUnit *)this)->sub_1009f4e0();
	if (m_bDebugOverlays224 & 0x20)
		((CBaseEntityUnit *)this)->sub_1009f850();
	if (m_bDebugOverlays224 & 8)
		((CBaseEntityUnit *)this)->sub_1009fb80();
	if (m_bDebugOverlays224 & 0x40)
		sub_1009fa60();
	if (m_bDebugOverlays224 & 0x80)
		vfunc125();
}
// END FUNCTION

// FUNCTION: 0x100a02b0 size=0x115
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

extern "C" __declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);
void sub_101434b0(int entIndex, int line, const char *pszText, int duration, int r, int g, int b, int a);

int CBaseEntity::vfunc124()
{
	ScopeTrace trace("CBaseEntity::DrawDebugTextOverlays", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	int nText = 1;
	if (m_pad0224[0] & 1) {
		char szBuf[0x200];
		int pEdict = m_pEdict2e0;
		int nIndex = engine->vfunc35(pEdict);
		Q_snprintf(szBuf, sizeof(szBuf), "(%d) Name: %s (%s)", nIndex, sub_100ab4f0(), sub_1009f200());
		pEdict = m_pEdict2e0;
		sub_101434b0(engine->vfunc35(pEdict), 1, szBuf, 0, 255, 255, 255, 255);
		nText = 2;
	}
	return nText;
}
// END FUNCTION

// FUNCTION: 0x100a0bc0 size=0x102
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CGlobalEntityList.h"
#include "ScopeTrace.h"
extern CGlobalEntityList g_106eb5d8;

inline const char *STRINGR(const char *const &s)
{
	return s ? s : g_106b8540;
}

void CBaseEntity::vfunc113()
{
    ScopeTrace trace("CBaseEntity::Activate", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    const char *damageFilter = *(const char **)((char *)this + 0x21c);
    if (damageFilter) {
        CBaseEntity *pFilter = g_106eb5d8.sub_100f7770(0, damageFilter, 0, 0);
        if (pFilter)
            m_hDamageFilter = *pFilter->vfunc1();
        else
            m_hDamageFilter = 0xffffffff;
    }
    const char *useFilter = *(const char **)((char *)this + 0x214);
    if (useFilter) {
        CBaseEntity *pFilter = g_106eb5d8.sub_100f7770(0, useFilter, 0, 0);
        if (pFilter)
            m_hUseFilter = *pFilter->vfunc1();
        else
            m_hUseFilter = 0xffffffff;
    }
    if (*(const char **)((char *)this + 0x1e4))
        sub_100b4280(STRINGR(*(const char *const *)((char *)this + 0x1e4)));
}
// END FUNCTION

// FUNCTION: 0x100a0d20 size=0xd7
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int CBaseEntity::vfunc143(float flHealth, int bitsDamageType)
{
	const char *ent;
	if (this)
		ent = m_name26c ? m_name26c : g_106b8540;
	else
		ent = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::TakeHealth";
	g_109f3620[*g_109f3680].b = ent;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	if (m_pEdict2e0 && m_nTakeDamage >= 2 && m_iHealth < m_iMaxHealth) {
		int maxHealth = m_iMaxHealth;
		m_iHealth = (int)(m_iHealth + flHealth);
		if (m_iHealth > maxHealth)
			m_iHealth = maxHealth;
		--*g_109f3680;
		return 1;
	}
	--*g_109f3680;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100a0e40 size=0x33b
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"
#include "CEntityVSlots.h"
#include "CTakeDamageInfo.h"
#include "CVDmg_t.h"

extern Vector g_1070ba40;

struct CTakeDamageInfoView : CTakeDamageInfo
{
	float GetDamage() const { return m_pVDmg00 ? (float)m_pVDmg00->sub_101faa70() : m_flDamage; }
};

struct CSolidFlagEntity : CBaseEntity
{
	bool IsSolidFlagSet8()
	{
		ScopeTrace trace("CBaseEntity::IsSolidFlagSet", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc, g_106b8540);
		return (m_b2b4 >> 3) & 1;
	}
};

int CBaseEntity::vfunc142(CTakeDamageInfo *pInfo)
{
	ScopeTrace trace("CBaseEntity::OnTakeDamage", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (!m_pEdict2e0 || !m_nTakeDamage)
		return 0;
	CTakeDamageInfoView *info = (CTakeDamageInfoView *)pInfo;
	CEntityVSlots *pAttacker = (CEntityVSlots *)info->m_pAttacker;
	g_1070ba40 = *pAttacker->slot217() - ((CEntityVSlots *)this)->slot192();
	VectorNormalize(g_1070ba40);
	if (vfunc94() == 7 && !((info->m_pVDmg00 ? (*(unsigned int *)((char *)info->m_pVDmg00 + 0x10) | info->m_nFlags38) : info->m_nFlags38) & 8)) {
		((CEntityVSlots *)this)->slot227(info);
	} else if (info->m_pAttacker && (vfunc94() == 3 || vfunc94() == 4) && !((CSolidFlagEntity *)info->m_pInflictor)->IsSolidFlagSet8()) {
		Vector vecDir;
		vecDir = ((CEntityVSlots *)this)->slot192();
		Vector vecOther;
		vecOther = ((CEntityVSlots *)info->m_pAttacker)->slot192();
		vecDir.x -= vecOther.x;
		vecDir.y -= vecOther.y;
		vecDir.z -= vecOther.z;
		VectorNormalize(vecDir);
		float flForce = 73728.0 / (((CEntityVSlots *)this)->slot214()->z * ((CEntityVSlots *)this)->slot214()->y * ((CEntityVSlots *)this)->slot214()->x) * info->GetDamage() * 5.0;
		if (flForce > 1000.0)
			flForce = 1000.0f;
		*(Vector *)m_vel3d4 = *(Vector *)m_vel3d4 + vecDir * flForce;
	}
	if (m_nTakeDamage != 1) {
		m_iHealth = (int)(m_iHealth - (info->m_pVDmg00 ? (float)info->m_pVDmg00->sub_101faa70() : info->m_flDamage));
		if (m_iHealth <= 0) {
			((CEntityVSlots *)this)->slot144(info);
			return 0;
		}
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x100a1360 size=0xcb
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"

struct CDamageModifier
{
    bool sub_100deb30();
    float sub_100deab0();
};

struct CModifierNode
{
    CDamageModifier *m_pModifier;
    int m_nPrev;
    int m_nNext;
};

#define MOD_NODE(self, i) ((*(CModifierNode **)((char *)(self) + 0x230))[i])

float CBaseEntity::vfunc203()
{
    ScopeTrace trace("CBaseEntity::GetAttackDamageScale", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    float flScale = 1.0f;
    for (int i = *(int *)((char *)this + 0x23c); i != -1; i = MOD_NODE(this, i).m_nNext) {
        if (!MOD_NODE(this, i).m_pModifier->sub_100deb30())
            flScale *= MOD_NODE(this, i).m_pModifier->sub_100deab0();
    }
    return flScale;
}
// END FUNCTION

// FUNCTION: 0x100a1470 size=0xcb
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

struct CDamageModifier
{
	bool sub_100deb30();	// is active
	float sub_100deab0();	// the scale
};

struct CDamageModifierNode
{
	CDamageModifier *m_pModifier;
	int m_pad4;
	int m_iNext;
};

float CBaseEntity::vfunc204()
{
	ScopeTrace trace("CBaseEntity::GetReceivedDamageScale", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	float flScale = 1.0f;
	CDamageModifierNode **ppNodes = (CDamageModifierNode **)((char *)this + 0x230);
	for (int i = *(int *)((char *)this + 0x23c); i != -1; i = (*ppNodes)[i].m_iNext) {
		if ((*ppNodes)[i].m_pModifier->sub_100deb30())
			flScale *= (*ppNodes)[i].m_pModifier->sub_100deab0();
	}
	return flScale;
}
// END FUNCTION

// FUNCTION: 0x100a1580 size=0x35a
#include "vampire_all.h"
#include "CBaseEntity.h"
#include "CBaseEntity_ext.h"
#include "CTakeDamageInfo.h"
#include "CTraceFilterWorldOnly.h"
#include "CUnknown1003ff80.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738960.h"
#include "Ray_t.h"
#include "CGameTrace.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"
#include "ConVar.h"

class CUnknown1004f860 { public: void *sub_1004f860(); };
class CVDmg_t { public: int sub_101faa70(); };

struct CPhysObjView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void ApplyForceCenter(const Vector *pForce);
	virtual void ApplyForceOffset(const Vector *pForce, const Vector *pPos);
};
extern ConVar g_106b8650;	// phys_pushscale
void sub_10146570(const Vector *, const Vector *, int, int, int, int, float);

inline unsigned int DmgFlags(CTakeDamageInfo *p)
{
	return p->m_pVDmg00 ? (*(unsigned int *)((char *)p->m_pVDmg00 + 0x10) | p->m_nFlags38) : p->m_nFlags38;
}

// TARGET: CBaseEntity::vfunc227
int CBaseEntity::vfunc227(CTakeDamageInfo *pInfo)
{
	ScopeTrace st("CBaseEntity::VPhysicsTakeDamage", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	float flDamage;
	if (pInfo->m_pVDmg00)
		flDamage = (float)pInfo->m_pVDmg00->sub_101faa70();
	else
		flDamage = pInfo->m_flDamage;
	flDamage *= 100.0f;
	if (pInfo->m_pAttacker)
	{
		CGameTrace tr;
		((CUnknown1003ff80 *)&tr)->sub_1003ff80();
		CTraceFilterWorldOnly filter;
		CBaseEntity *pAttacker = (CBaseEntity *)pInfo->m_pAttacker;
		Vector *pThisOrg = ((CEntityVSlots *)this)->slot217();
		Vector *pAttOrg = ((CEntityVSlots *)pAttacker)->slot217();
		Ray_t ray;
		((CUnknown1004f860 *)&ray)->sub_1004f860();
		ray.sub_1004f7a0(&pAttOrg->x, &pThisOrg->x);
		g_1070b254->vfunc4(&ray, 1, (CTraceFilterNoCharacterCollide *)&filter, &tr);
		if (g_10738960.sub_1005f190())
			sub_10146570((Vector *)tr.m_startpos, (Vector *)tr.m_endpos, 0xff, 0, 0, 1, -1.0f);
		if (tr.m_fraction != 1.0f)
		{
			if (m_obj36c)
			{
				if (tr.m_pEnt == this || (DmgFlags(pInfo) & 0x2000000))
				{
					if (DmgFlags(pInfo) & 0x2000000)
						flDamage *= 100.0f;
					float flScale = g_106b8650.GetFloat();
					Vector vecForce = ((Vector *)tr.m_planeNormal)->sub_100a19c0(-flDamage);
					Vector vecScaled = vecForce * flScale;
					((CPhysObjView *)m_obj36c)->ApplyForceOffset(&vecScaled, (Vector *)tr.m_endpos);
				}
			}
		}
		else if (!(DmgFlags(pInfo) & 0x4000002))
		{
			CPhysObjView *pPhys = (CPhysObjView *)m_obj36c;
			if (pPhys)
			{
				Vector *pAtt = ((CEntityVSlots *)pInfo->m_pAttacker)->slot217();
				Vector *pOrg = ((CEntityVSlots *)this)->slot217();
				Vector vecDir = *pOrg - *pAtt;
				VectorNormalize(vecDir);
				float flScale = g_106b8650.GetFloat();
				vecDir = vecDir * flDamage * flScale;
				pPhys->ApplyForceCenter(&vecDir);
			}
		}
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x100a1a70 size=0x94
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
void sub_101cd940(CBaseEntity *pThis);

// TARGET: CBaseEntity::vfunc144
void CBaseEntity::vfunc144(void *pInfo)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (name == 0)
            name = g_106b8540;
    } else
        name = "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::Event_Killed";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    m_nTakeDamage = 0;
    m_field200 = 2;
    sub_101cd940(this);
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100a1b40 size=0xb1
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"
int sub_1043e780(const char *, const char *);

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

bool CBaseEntity::vfunc160(const char *name)
{
    ScopeTrace trace("CBaseEntity::HasTarget", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    if (name && m_target20c)
        return sub_1043e780(name, STRINGR(m_target20c)) == 0;
    return false;
}
// END FUNCTION

// FUNCTION: 0x100a1c30 size=0xb1
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"
int sub_1043e780(const char *, const char *);

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

bool CBaseEntity::vfunc161(const char *name)
{
    ScopeTrace trace("CBaseEntity::HasLinkedDoor", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    if (name && m_target20c)
        return sub_1043e780(name, STRINGR(m_target20c)) == 0;
    return false;
}
// END FUNCTION

// FUNCTION: 0x100a1d20 size=0x9b
#include "CUnknown100a1d20.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct CEntListX {
	void *sub_100f7770(void *pStart, const char *pszName, void *pActivator, void *pCaller);
};
extern CEntListX g_106eb5d8;

struct CScopeTrace {
	CScopeTrace(const char *fn, const char *name)
	{
		g_109f3620[*g_109f3680].a = fn;
		g_109f3620[*g_109f3680].b = name;
		g_109f3620[*g_109f3680].c = g_106b8540;
		(*g_109f3680)++;
	}
	~CScopeTrace() { (*g_109f3680)--; }
};

void *CUnknown100a1d20::sub_100a1d20()
{
	CScopeTrace trace("CBaseEntity::GetNextTarget", this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY");
	if (!m_target20c)
		return 0;
	return g_106eb5d8.sub_100f7770(0, m_target20c, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x100a2290 size=0x6
#include "CBaseEntity.h"
#include "datamap.h"
namespace lifted {
extern char g_10552e18;
}
datamap_t * CBaseEntity::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10552e18);
}
// END FUNCTION

// FUNCTION: 0x100a47d0 size=0x106
#include "CBaseEntity.h"
#include "ScopeTrace.h"
#include "CUnknown102ca630.h"
#include "CUnknown10099b00.h"
extern char g_106b8540[];
inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

struct CEntV180 {
	virtual void s0(); virtual const CBaseHandle &GetRefEHandle(); virtual void s2(); virtual void s3(); virtual void s4();
	virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
	virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14();
	virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19();
	virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24();
	virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29();
	virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34();
	virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39();
	virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44();
	virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49();
	virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54();
	virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59();
	virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64();
	virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void s69();
	virtual void s70(); virtual void s71(); virtual void s72(); virtual void s73(); virtual void s74();
	virtual void s75(); virtual void s76(); virtual void s77(); virtual void s78(); virtual void s79();
	virtual void s80(); virtual void s81(); virtual void s82(); virtual void s83(); virtual void s84();
	virtual void s85(); virtual void s86(); virtual void s87(); virtual void s88(); virtual void s89();
	virtual void s90(); virtual void s91(); virtual void s92(); virtual void s93(); virtual void s94();
	virtual void s95(); virtual void s96(); virtual void s97(); virtual void s98(); virtual void s99();
	virtual void s100(); virtual void s101(); virtual void s102(); virtual void s103(); virtual void s104();
	virtual void s105(); virtual void s106(); virtual void s107(); virtual void s108(); virtual void s109();
	virtual void s110(); virtual void s111(); virtual void s112(); virtual void s113(); virtual void s114();
	virtual void s115(); virtual void s116(); virtual void s117(); virtual void s118(); virtual void s119();
	virtual void s120(); virtual void s121(); virtual void s122(); virtual void s123(); virtual void s124();
	virtual void s125(); virtual void s126(); virtual void s127(); virtual void s128(); virtual void s129();
	virtual void s130(); virtual void s131(); virtual void s132(); virtual void s133(); virtual void s134();
	virtual void s135(); virtual void s136(); virtual void s137(); virtual void s138(); virtual void s139();
	virtual void s140(); virtual void s141(); virtual void s142(); virtual void s143(); virtual void s144();
	virtual void s145(); virtual void s146(); virtual void s147(); virtual void s148(); virtual void s149();
	virtual void s150(); virtual void s151(); virtual void s152(); virtual void s153(); virtual void s154();
	virtual void s155(); virtual void s156(); virtual void s157(); virtual void s158(); virtual void s159();
	virtual void s160(); virtual void s161(); virtual void s162(); virtual void s163(); virtual void s164();
	virtual void s165(); virtual void s166(); virtual void s167(); virtual void s168(); virtual void s169();
	virtual void s170(); virtual void s171(); virtual void s172(); virtual void s173(); virtual void s174();
	virtual void s175(); virtual void s176(); virtual void s177(); virtual void s178(); virtual void s179();
	virtual void s180(); virtual void s181(); virtual void s182(); virtual void s183(); virtual void s184();
	virtual void s185(); virtual void s186(); virtual void s187(); virtual void s188(); virtual void s189();
	virtual void s190(); virtual void s191(); virtual void s192(); virtual void s193(); virtual void s194();
	virtual void s195(); virtual void s196(); virtual void s197(); virtual void s198(); virtual void s199();
	virtual void s200(); virtual void s201(); virtual void s202(); virtual void s203(); virtual void s204();
	virtual void s205(); virtual void s206(); virtual void s207();
	virtual void SetGroundEntity(CBaseEntity *p);
	virtual void s209(); virtual void s210(); virtual void s211(); virtual void s212(); virtual void s213(); virtual void s214();
	virtual void s215(); virtual void s216(); virtual void s217(); virtual void s218(); virtual void s219();
	virtual void s220(); virtual void s221(); virtual void s222(); virtual void s223(); virtual void s224();
	virtual void VPhysicsDestroyObject();
};
struct string_tX { const char *pszValue; };
struct CEntListX { void sub_1000900c(CBaseHandle h); };
struct CGlobalStateX { void sub_1000f051(string_tX name, int state); };
struct CUnkC { void sub_10014a60(CBaseEntity *e); };
extern CEntListX g_106eb5d8;
extern CGlobalStateX g_106be530;
extern CUnkC g_106cfee0;
extern CUnknown102ca630 *g_109253f8;
extern char g_10735d39;
extern char g_105387dc[];
void sub_1012c840(CBaseEntity *e);
void sub_10009ec1(CBaseEntity *e);

void CBaseEntity::vfunc180()
{
	ScopeTrace trace("CBaseEntity::UpdateOnRemove", this ? STRINGR(m_name26c) : g_105387dc);
	g_10735d39 = 1;
	g_106eb5d8.sub_1000900c(((CEntV180 *)this)->GetRefEHandle());
	if (g_109253f8)
		g_109253f8->sub_102ca630(this);
	if (m_pEdict2e0) {
		sub_100b3580(0x4000000);
		sub_100b3700();
	}
	string_tX &gn = *(string_tX *)((char *)this + 0x120);
	if (gn.pszValue)
		g_106be530.sub_1000f051(gn, 2);
	((CEntV180 *)this)->VPhysicsDestroyObject();
	sub_1012c840(this);
	sub_10009ec1(this);
	g_106cfee0.sub_10014a60(this);
	((CEntV180 *)this)->SetGroundEntity(0);
}
// END FUNCTION

// FUNCTION: 0x100a49d0 size=0xde
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct HandleEntry { void *ent; unsigned int serial; int pad; };
struct HandleList { int pad; HandleEntry e[1]; };
extern HandleList *g_10566458;

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SL100(p) SL10(p##0) SL10(p##1) SL10(p##2) SL10(p##3) SL10(p##4) SL10(p##5) SL10(p##6) SL10(p##7) SL10(p##8) SL10(p##9)

struct TouchSlots
{
	SL100(a) SL10(b0) SL10(b1) SL10(b2) SL10(b3) SL10(b4) SL10(b5) SL10(b6)
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3();
	virtual void StartTouch(CBaseEntity *pOther);	// slot 174
};

struct TouchHandle
{
	unsigned int m_Index;
	TouchSlots *Get() const
	{
		if (m_Index == 0xffffffff)
			return 0;
		HandleEntry *e = &g_10566458->e[m_Index & 0x1fff];
		return e->serial == (m_Index >> 13) ? (TouchSlots *)e->ent : 0;
	}
};

// TARGET: CBaseEntity::vfunc174
void CBaseEntity::vfunc174(CBaseEntity *pOther)
{
	const char *ent;
	if (this)
		ent = m_name26c ? m_name26c : g_106b8540;
	else
		ent = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::StartTouch";
	g_109f3620[*g_109f3680].b = ent;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	if (((TouchHandle *)&m_hTouch254)->Get() != 0)
		((TouchHandle *)&m_hTouch254)->Get()->StartTouch(pOther);
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100a4af0 size=0xed
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct HandleEntry { void *ent; unsigned int serial; int pad; };
struct HandleList { int pad; HandleEntry e[1]; };
extern HandleList *g_10566458;

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SL100(p) SL10(p##0) SL10(p##1) SL10(p##2) SL10(p##3) SL10(p##4) SL10(p##5) SL10(p##6) SL10(p##7) SL10(p##8) SL10(p##9)

struct TouchSlots
{
	SL100(a) SL10(b0) SL10(b1) SL10(b2) SL10(b3) SL10(b4) SL10(b5) SL10(b6)
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3();
	virtual void c4();
	virtual void Touch(CBaseEntity *pOther);	// slot 175
};

struct TouchHandle
{
	unsigned int m_Index;
	TouchSlots *Get() const
	{
		if (m_Index == 0xffffffff)
			return 0;
		HandleEntry *e = &g_10566458->e[m_Index & 0x1fff];
		return e->serial == (m_Index >> 13) ? (TouchSlots *)e->ent : 0;
	}
};

// TARGET: CBaseEntity::vfunc175
void CBaseEntity::vfunc175(CBaseEntity *pOther)
{
	const char *ent;
	if (this)
		ent = m_name26c ? m_name26c : g_106b8540;
	else
		ent = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::Touch";
	g_109f3620[*g_109f3680].b = ent;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	if (m_pfnTouch)
		(this->*m_pfnTouch)(pOther);
	if (((TouchHandle *)&m_hTouch254)->Get() != 0)
		((TouchHandle *)&m_hTouch254)->Get()->Touch(pOther);
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100a4c20 size=0xde
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct HandleEntry { void *ent; unsigned int serial; int pad; };
struct HandleList { int pad; HandleEntry e[1]; };
extern HandleList *g_10566458;

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SL100(p) SL10(p##0) SL10(p##1) SL10(p##2) SL10(p##3) SL10(p##4) SL10(p##5) SL10(p##6) SL10(p##7) SL10(p##8) SL10(p##9)

struct TouchSlots
{
	SL100(a) SL10(b0) SL10(b1) SL10(b2) SL10(b3) SL10(b4) SL10(b5) SL10(b6)
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5();
	virtual void EndTouch(CBaseEntity *pOther);	// slot 176
};

struct TouchHandle
{
	unsigned int m_Index;
	TouchSlots *Get() const
	{
		if (m_Index == 0xffffffff)
			return 0;
		HandleEntry *e = &g_10566458->e[m_Index & 0x1fff];
		return e->serial == (m_Index >> 13) ? (TouchSlots *)e->ent : 0;
	}
};

void CBaseEntity::vfunc176(CBaseEntity *pOther)
{
	const char *ent;
	if (this)
		ent = m_name26c ? m_name26c : g_106b8540;
	else
		ent = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::EndTouch";
	g_109f3620[*g_109f3680].b = ent;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	if (((TouchHandle *)&m_hTouch254)->Get() != 0)
		((TouchHandle *)&m_hTouch254)->Get()->EndTouch(pOther);
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100a4d40 size=0xed
#include "CBaseEntity.h"
struct TraceEntry { const char *a, *b, *c; };
extern int *g_109f3680;
extern TraceEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
struct ScopeTrace {
    ScopeTrace(const char *a, const char *b, const char *c) {
        g_109f3620[*g_109f3680].a = a;
        g_109f3620[*g_109f3680].b = b;
        g_109f3620[*g_109f3680].c = c;
        ++*g_109f3680;
    }
    ~ScopeTrace() { --*g_109f3680; }
};
struct EntInfo { CBaseEntity *ent; int serial; int pad; };
extern char *g_10566458;
typedef void (__fastcall *SlotFn)(CBaseEntity *, void **, CBaseEntity *);

void CBaseEntity::vfunc178(CBaseEntity *pOther)
{
    const char *ent;
    if (this) {
        ent = m_name26c;
        if (!ent) ent = g_106b8540;
    } else {
        ent = g_105387dc;
    }
    ScopeTrace trace("CBaseEntity::Blocked", ent, g_106b8540);
    if (m_pfnBlocked)
        (this->*m_pfnBlocked)(pOther);
    unsigned int h = m_hTouch254;
    if (h != 0xffffffff) {
        EntInfo *e = (EntInfo *)(g_10566458 + 4) + (h & 0x1fff);
        if (e->serial == (h >> 13) && e->ent) {
            unsigned int h2 = *(volatile unsigned int *)&m_hTouch254;
            CBaseEntity *pTouch;
            if (h2 != 0xffffffff) {
                EntInfo *e2 = (EntInfo *)(g_10566458 + 4) + (h2 & 0x1fff);
                if (e2->serial == (h2 >> 13))
                    pTouch = e2->ent;
                else
                    pTouch = 0;
            } else
                pTouch = 0;
            void **vt = *(void ***)pTouch;
            ((SlotFn)vt[178])(pTouch, vt, pOther);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x100a4e70 size=0x118
#include "CBaseEntity.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CEHandleGet.h"

struct ScopeEntry_t { const char *m_pszName; const char *m_pszEnt; const char *m_pszExtra; };
extern ScopeEntry_t *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct EntSlots173_t
{
    SL10(a00) SL10(a01) SL10(a02) SL10(a03) SL10(a04) SL10(a05) SL10(a06) SL10(a07) SL10(a08) SL10(a09)
    SL10(a10) SL10(a11) SL10(a12) SL10(a13) SL10(a14) SL10(a15) SL10(a16)
    virtual void b0(); virtual void b1(); virtual void b2();
    virtual void vfunc173(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, int value);
};

void CBaseEntity::vfunc173(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, int value)
{
    const char *pszName;
    if (this) {
        pszName = m_name26c;
        if (!pszName)
            pszName = g_106b8540;
    } else {
        pszName = "NULL ENTITY";
    }
    g_109f3620[*g_109f3680].m_pszName = "CBaseEntity::Use";
    g_109f3620[*g_109f3680].m_pszEnt = pszName;
    g_109f3620[*g_109f3680].m_pszExtra = g_106b8540;
    (*g_109f3680)++;
    void (CBaseEntity::*pfnUse)(CBaseEntity *, CBaseEntity *, int, int) = *(void (CBaseEntity::**)(CBaseEntity *, CBaseEntity *, int, int))((char *)this + 0x1f0);
    if (pfnUse) {
        (this->*pfnUse)(pActivator, pCaller, useType, value);
        (*g_109f3680)--;
        return;
    }
    unsigned int h = m_hTouch254;
    if (h != 0xffffffff) {
        CGlobalEntityList_Slot *e = &g_10566458->m_Slots[h & 0x1fff];
        if (e->m_Serial == (int)(h >> 13) && e->m_pEntity != 0)
            ((EntSlots173_t *)EHandle_Get(m_hTouch254))->vfunc173(pActivator, pCaller, useType, value);
    }
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100a4fe0 size=0x3b
#include "CBaseEntity.h"
struct CBaseEntityUnit5c {
    void sub_10010794(CBaseEntity *pOther, CBaseEntity *pThis, int flags);
};

struct IHandleEntityView {
    virtual void vfunc0();
    virtual unsigned int *vfunc1();
};

// TARGET: CBaseEntity::vfunc39
void CBaseEntity::vfunc39(CBaseEntity *pOther)
{
    ((CBaseEntityUnit5c *)((char *)this + 0x5c))->sub_10010794(pOther, this, 0);
    if (pOther != 0) {
        unsigned int *p = pOther->vfunc1();
        *(int *)((char *)this + 0x8c) = *p;
        return;
    }
    *(int *)((char *)this + 0x8c) = -1;
}
// END FUNCTION

// FUNCTION: 0x100a5030 size=0x21
#include "CBaseEntity.h"
struct COutputEventCall_100a5030
{
    void sub_100cd660(int a, int b, int c);
};

// TARGET: CBaseEntity::vfunc42
void CBaseEntity::vfunc42(void *arg)
{
    ((COutputEventCall_100a5030 *)((char *)this + 0x74))->sub_100cd660((int)arg, (int)this, 0);
    *(int *)((char *)this + 0x8c) = -1;
}
// END FUNCTION

// FUNCTION: 0x100a5070 size=0x1be
#include "CBaseEntity.h"
#include "CTraceFilterNoCharacterCollide.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "Ray_t.h"
#include "CGameTrace.h"
#include "CTraceFilterSimple.h"
#include "CUnknown1070b254.h"

extern CUnknown1070b254 *g_1070b254;

bool CBaseEntity::vfunc45(void *pPassEnt, Vector vecStart, Vector vecEnd, unsigned int fMask)
{
	bool bPassed = false;
	ScopeTrace trace("CBaseEntity::PassesFindEntityFOVTrace", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	Ray_t ray;
	ray.Init(vecStart, vecEnd);
	CTraceFilterSimple filter(pPassEnt, 0);
	CGameTrace tr;
	g_1070b254->vfunc4(&ray, fMask, (CTraceFilterNoCharacterCollide *)&filter, &tr);
	if (tr.m_pEnt == this || (tr.m_pEnt == 0 && tr.m_fraction == 1.0))
		bPassed = true;
	return bPassed;
}
// END FUNCTION

// FUNCTION: 0x100a65a0 size=0x71
#include "CBaseEntity.h"
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseEntity::vfunc228(int a, int b)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::VPhysicsShadowCollision";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100a6640 size=0x152
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
struct CollisionEventView
{
	void *pObjects[2];
	int surfaceProps[2];
	char m_pad10[4];
	float deltaCollisionTime;
	float collisionSpeed;
	char m_pad1c[0x68 - 0x1c];
	CBaseEntity *pEntities[2];
};
struct SurfaceDataView { char m_pad[0x70]; short m_gameMaterial; };
struct PhysPropsView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual SurfaceDataView *GetSurfaceData(int index);
};
extern PhysPropsView *g_10723944;
int sub_101cd9e0(int a);
void sub_10031d50(CBaseEntity *pEntity, void *pObject, int channel, int surfaceProps, int surfacePropsHit, float volume, float speed);
void sub_10032180(void *pEvent, int index);
void sub_10032380(void *pEvent, SurfaceDataView *pSurfaceData);

// TARGET: CBaseEntity::vfunc230
void CBaseEntity::vfunc230(int index, void *pEventArg)
{
	ScopeTrace trace("CBaseEntity::VPhysicsCollision", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (this) {
		CollisionEventView *pEvent = (CollisionEventView *)pEventArg;
		int otherIndex = !index;
		CBaseEntity *pHit = pEvent->pEntities[otherIndex];
		if (!(pEvent->deltaCollisionTime < 0.5) || pHit != this) {
			SurfaceDataView *pOtherData = g_10723944->GetSurfaceData(pEvent->surfaceProps[otherIndex]);
			SurfaceDataView *pData = g_10723944->GetSurfaceData(pEvent->surfaceProps[index]);
			if (pOtherData->m_gameMaterial != 0x58 && pData->m_gameMaterial != 0x58) {
				if (sub_101cd9e0(1)) {
					if (pHit == this)
						sub_10031d50(this, pEvent->pObjects[index], 4, pEvent->surfaceProps[index], pEvent->surfaceProps[otherIndex], pEvent->deltaCollisionTime, pEvent->collisionSpeed);
					else
						sub_10031d50(this, pEvent->pObjects[index], 6, pEvent->surfaceProps[index], pEvent->surfaceProps[otherIndex], pEvent->deltaCollisionTime, pEvent->collisionSpeed);
					sub_10032180(pEvent, index);
					sub_10032380(pEvent, pOtherData);
				}
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100a6800 size=0xc0
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

struct SurfaceData
{
	char m_pad0000[0x70];
	short m_nMaterial;	// 0x70
};

class IPhysicsSurfaceProps
{
public:
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual SurfaceData *GetSurfaceData(int surfaceProps);	// slot 5
};
extern IPhysicsSurfaceProps *g_10723944;
void sub_100093fe(CBaseEntity *pEnt, void *pObject, float energy, int surfaceProps);

void CBaseEntity::vfunc231(void *pObject, float energy, int surfaceProps, int surfacePropsHit)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::VPhysicsFriction";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	SurfaceData *pHit = g_10723944->GetSurfaceData(surfacePropsHit);
	SurfaceData *pSurf = g_10723944->GetSurfaceData(surfaceProps);
	if (pHit->m_nMaterial != 0x58 && pSurf->m_nMaterial != 0x58)
		sub_100093fe(this, pObject, energy, surfaceProps);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100b11d0 size=0xc1
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
void sub_100f8e20(CBaseEntity *pEnt);

void CBaseEntity::vfunc6(bool check)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (name == 0)
			name = g_106b8540;
	} else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = "CBaseEntity::SetCheckUntouch";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	if (check) {
		++*(int *)((char *)this + 0x1ac);
		if (!(*((unsigned char *)this + 0x26b) & 1)) {
			m_flags268 |= 0x1000000;
			sub_100f8e20(this);
		}
	} else {
		m_flags268 &= 0xfeffffff;
	}
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100b12e0 size=0x7e
#include "CBaseEntity.h"
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseEntity::sub_100b12e0(char value)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::SetSentLastFrame";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    *((char *)this + 0x380) = value;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100b1420 size=0xb1
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseEntity::vfunc208(CBaseEntity *pEnt)
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::SetGroundEntity";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    if (pEnt) {
        *(unsigned int *)((char *)this + 0x384) = *pEnt->vfunc1();
        sub_100b3580(1);
    } else {
        *(unsigned int *)((char *)this + 0x384) = 0xffffffff;
        sub_100b3640(1);
    }
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100b1510 size=0xa8
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CEHandleGet.h"

CBaseEntity *__fastcall sub_100b1510(CBaseEntity *pThis)
{
	ScopeTrace trace("CBaseEntity::GetGroundEntity", pThis ? (pThis->m_name26c ? pThis->m_name26c : g_106b8540) : g_105387dc);
	return (CBaseEntity *)EHandle_Get(*(unsigned int *)((char *)pThis + 0x384));
}
// END FUNCTION

// FUNCTION: 0x100b15f0 size=0x7e
#include "CBaseEntity.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_10558a94[];
extern char g_105387dc[];
extern char g_106b8540[];
void CBaseEntity::vfunc212(string_t set)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_10558a94;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    *(int *)((char *)this + 0x388) = *(int *)&set;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100b1690 size=0x81
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"

const char **CBaseEntity::vfunc9(int *pOut)
{
	ScopeTrace trace("CBaseEntity::GetModelName", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	*pOut = *(int *)&m_ModelName;
	return (const char **)pOut;
}
// END FUNCTION

// FUNCTION: 0x100b1750 size=0x7e
#include "CBaseEntity.h"
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseEntity::sub_100b1750(int index)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::SetModelIndex";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    *(int *)((char *)this + 0x1a4) = index;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100b17f0 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_100b17f0(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::GetModelIndex";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    int r = *(int *)(self + 0x1a4);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x100b1890 size=0x92
#include "CBaseEntity.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseEntity::vfunc213(const float *size)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::SetSize";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	float *dst = (float *)((char *)this + 0x38c);
	dst[0] = size[0];
	dst[1] = size[1];
	dst[2] = size[2];
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100b1960 size=0x7b
#include "CBaseEntity.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_10558b14[];
extern char g_105387dc[];
extern char g_106b8540[];
float *CBaseEntity::vfunc214()
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_10558b14;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
    return (float *)((char *)this + 0x38c);
}
// END FUNCTION

// FUNCTION: 0x100b1ac0 size=0x1c8
#include "CGlobalEntityList.h"
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
#include "ScopeTrace.h"
#include "TestBit.h"

extern CGlobalEntityList *g_10566458;
extern Vector g_1070d9d0;
void sub_10139b90(const float *pAngles, float *pMatrix);
void sub_10138760(const float *pVec, int nColumn, float *pMatrix);
void sub_10138df0(const float *pA, const float *pB, float *pOut);
void sub_10138600(const float *pSrc, float *pDst);
void sub_10138720(const float *pMatrix, int nColumn, float *pVecOut);
void sub_10137ed0(const float *pMatrix, float *pAnglesOut);

struct CCalcAbsView
{
	char m_pad0000[0x130];
	float m_Frame[12];	// 0x130
	char m_pad0160[0x25c - 0x160];
	unsigned int m_hMoveParent;	// 0x25c
	char m_pad0260[0x268 - 0x260];
	unsigned int m_iEFlags;	// 0x268
	char m_pad026c[0x404 - 0x26c];
	Vector m_vecAbsOrigin;	// 0x404
	Vector m_angAbsRotation;	// 0x410
	Vector m_vecOrigin;	// 0x41c
	Vector m_angRotation;	// 0x428
};

void CBaseEntity::vfunc98()
{
	ScopeTrace trace("CBaseEntity::CalcAbsolutePosition", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CCalcAbsView *v = (CCalcAbsView *)this;
	if (TestBit(v->m_iEFlags, 11)) {
		v->m_iEFlags &= ~0x800;
		sub_10139b90(&v->m_angRotation.x, v->m_Frame);
		sub_10138760(&v->m_vecOrigin.x, 3, v->m_Frame);
		CBaseEntity *pMoveParent = g_10566458->sub_100290c0(&v->m_hMoveParent);
		if (!pMoveParent) {
			v->m_vecAbsOrigin = v->m_vecOrigin;
			v->m_angAbsRotation = v->m_angRotation;
			return;
		}
		float tmpMatrix[12];
		float scratchSpace[12];
		sub_10138df0(sub_100b2150(scratchSpace), v->m_Frame, tmpMatrix);
		sub_10138600(tmpMatrix, v->m_Frame);
		sub_10138720(v->m_Frame, 3, &v->m_vecAbsOrigin.x);
		if (v->m_angRotation == g_1070d9d0)
			v->m_angAbsRotation = *(Vector *)((CEntityVSlots *)pMoveParent)->slot219();
		else
			sub_10137ed0(v->m_Frame, &v->m_angAbsRotation.x);
		m_bChanged1b1 = 1;
	}
}
// END FUNCTION

// FUNCTION: 0x100b2300 size=0x194
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CEHandleGet.h"
#include "ScopeTrace.h"

void sub_10138760(const float *pVec, int column, float *pMatrix);
void sub_10138130(const float *pIn, const float *pMatrix, float *pOut);

inline void VectorITransform(const Vector &in1, const float *in2, Vector &out)
{
	sub_10138130(&in1.x, in2, &out.x);
}

struct CEntAbsView {
	char m_pad0000[0x130];
	float m_matCoordinateFrame[12];	// 0x130
	char m_pad0160[0x25c - 0x160];
	unsigned int m_hMoveParent;	// 0x25c
	char m_pad0260[0x268 - 0x260];
	unsigned int m_flags268;
	char m_pad026c[0x404 - 0x26c];
	Vector m_vecAbsOrigin;	// 0x404
	char m_pad0410[0x41c - 0x410];
	Vector m_vecOrigin;	// 0x41c
};

void CBaseEntity::vfunc216(const Vector &absOrigin)
{
	ScopeTrace trace("CBaseEntity::SetAbsOrigin", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CEntAbsView *v = (CEntAbsView *)this;
	vfunc98();
	sub_100b5340(0x10800, 0);
	sub_100b52a0();
	v->m_flags268 &= ~0x800;
	v->m_vecAbsOrigin = absOrigin;
	sub_10138760(&absOrigin.x, 3, v->m_matCoordinateFrame);
	Vector vecNewOrigin;
	if (!EHandle_Get(v->m_hMoveParent)) {
		vecNewOrigin = absOrigin;
	} else {
		float tempMat[12];
		VectorITransform(absOrigin, sub_100b2150(tempMat), vecNewOrigin);
	}
	if (v->m_vecOrigin != vecNewOrigin) {
		v->m_vecOrigin = vecNewOrigin;
		*((char *)this + 0x1b1) = 1;
	}
}
// END FUNCTION

// FUNCTION: 0x100b2510 size=0x1d3
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "TestBit.h"
#include "matrix3x4_t.h"

void sub_10139b90(const float *pAngles, matrix3x4_t &mat);
void sub_10138760(const float *pVec, int nColumn, matrix3x4_t &mat);
void sub_10138630(const matrix3x4_t &in, matrix3x4_t &out);
void sub_10138df0(const matrix3x4_t &a, const matrix3x4_t &b, matrix3x4_t &out);
void sub_10137ed0(const matrix3x4_t &mat, float *pAngles);

struct SAbsAnglesView	// the transform members of an entity
{
	char m_pad0000[0x130];
	matrix3x4_t m_matFrame;	// 0x130
	char m_pad0160[0x1b1 - 0x160];
	char m_bChanged1b1;	// 0x1b1
	char m_pad01b2[0x25c - 0x1b2];
	EHANDLE m_hMoveParent;	// 0x25c
	char m_pad0260[8];
	unsigned int m_fEFlags268;	// 0x268
	char m_pad026c[0x404 - 0x26c];
	Vector m_vecAbsOrigin;	// 0x404
	float m_angAbsRotation[3];	// 0x410
	char m_pad041c[0x428 - 0x41c];
	float m_angRotation[3];	// 0x428
};

void CBaseEntity::vfunc218(const float *absAngles)
{
	ScopeTrace trace("CBaseEntity::SetAbsAngles", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	SAbsAnglesView *p = (SAbsAnglesView *)this;
	((CBaseEntity *)this)->vfunc98();
	sub_100b5340(0x800, 0x3000);
	p->m_fEFlags268 &= ~0x800;
	p->m_angAbsRotation[0] = absAngles[0];
	p->m_angAbsRotation[1] = absAngles[1];
	p->m_angAbsRotation[2] = absAngles[2];
	sub_10139b90(absAngles, p->m_matFrame);
	sub_10138760(&p->m_vecAbsOrigin.x, 3, p->m_matFrame);
	float angNew[3];
	SAbsAnglesView *pParent = (SAbsAnglesView *)p->m_hMoveParent.Get();
	if (!pParent) {
		angNew[0] = absAngles[0];
		angNew[1] = absAngles[1];
		angNew[2] = absAngles[2];
	} else {
		if (TestBit(pParent->m_fEFlags268, 11))
			((CBaseEntity *)pParent)->vfunc98();
		matrix3x4_t matInv, matLocal;
		sub_10138630(pParent->m_matFrame, matInv);
		sub_10138df0(matInv, p->m_matFrame, matLocal);
		sub_10137ed0(matLocal, angNew);
	}
	if (angNew[0] != p->m_angRotation[0] || angNew[1] != p->m_angRotation[1] || angNew[2] != p->m_angRotation[2]) {
		p->m_angRotation[0] = angNew[0];
		p->m_angRotation[1] = angNew[1];
		p->m_angRotation[2] = angNew[2];
		p->m_bChanged1b1 = 1;
	}
}
// END FUNCTION

// FUNCTION: 0x100b2be0 size=0xdd
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"

struct EntView100b2be0 {
	char pad0[0x1b1];
	char m_b1b1;
	char pad1[0x41c - 0x1b2];
	float m_org[3];
};

void CBaseEntity::vfunc62(const float *pOrigin)
{
	ScopeTrace trace("CBaseEntity::SetOrigin", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	EntView100b2be0 *p = (EntView100b2be0 *)this;
	if (pOrigin[0] != p->m_org[0] || pOrigin[1] != p->m_org[1] || pOrigin[2] != p->m_org[2]) {
		sub_100b5340(0x10800, 0);
		sub_100b52a0();
		p->m_org[0] = pOrigin[0];
		p->m_org[1] = pOrigin[1];
		p->m_org[2] = pOrigin[2];
		p->m_b1b1 = 1;
	}
}
// END FUNCTION

// FUNCTION: 0x100b2d00 size=0xe7
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"

struct CBaseEntityUnit : CBaseEntity {
	void sub_1000f05b(int a, int b);
	void sub_10004ade();
	void sub_1000e881();
};

void CBaseEntity::vfunc64(const float *angles)
{
	ScopeTrace trace("CBaseEntity::SetAngles", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	float *cur = (float *)((char *)this + 0x428);
	if (angles[0] != cur[0] || angles[1] != cur[1] || angles[2] != cur[2]) {
		((CBaseEntityUnit *)this)->sub_1000f05b(0x800, 0x3000);
		((CBaseEntityUnit *)this)->sub_10004ade();
		((CBaseEntityUnit *)this)->sub_1000e881();
		cur[0] = angles[0];
		cur[1] = angles[1];
		cur[2] = angles[2];
		*((char *)this + 0x1b1) = 1;
	}
}
// END FUNCTION

// FUNCTION: 0x100b3070 size=0x7b
#include "CBaseEntity.h"
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

float *CBaseEntity::vfunc220()
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::GetOrigin";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
    return (float *)((char *)this + 0x41c);
}
// END FUNCTION

// FUNCTION: 0x100b3110 size=0x7b
#include "CBaseEntity.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_10558d80[];
extern char g_105387dc[];
extern char g_106b8540[];
float *CBaseEntity::vfunc221()
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_10558d80;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
    return (float *)((char *)this + 0x428);
}
// END FUNCTION

// FUNCTION: 0x100b31b0 size=0x93
#include "CBaseEntity.h"
struct ScopeEntry {
	const char *fn;
	const char *name;
	const char *extra;
};
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;

static inline bool TestBit(unsigned int value, int bit)
{
	return ((value >> bit) & 1) != 0;
}

float *CBaseEntity::vfunc217()
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = "";
	} else {
		name = "NULL ENTITY";
	}
	g_109f3620[*g_109f3680].fn = "CBaseEntity::GetAbsOrigin";
	g_109f3620[*g_109f3680].name = name;
	g_109f3620[*g_109f3680].extra = "";
	(*g_109f3680)++;
	if (TestBit(m_flags268, 11))
		vfunc98();
	(*g_109f3680)--;
	return (float *)((char *)this + 0x404);
}
// END FUNCTION

// FUNCTION: 0x100b3280 size=0x93
#include "CBaseEntity.h"
struct ScopeEntry {
	const char *fn;
	const char *name;
	const char *extra;
};
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;

static inline bool TestBit(unsigned int value, int bit)
{
	return ((value >> bit) & 1) != 0;
}

float *CBaseEntity::vfunc219()
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = "";
	} else {
		name = "NULL ENTITY";
	}
	g_109f3620[*g_109f3680].fn = "CBaseEntity::GetAbsAngles";
	g_109f3620[*g_109f3680].name = name;
	g_109f3620[*g_109f3680].extra = "";
	(*g_109f3680)++;
	if (TestBit(m_flags268, 11))
		vfunc98();
	(*g_109f3680)--;
	return (float *)((char *)this + 0x410);
}
// END FUNCTION

// FUNCTION: 0x100b3d10 size=0x79
#include "CBaseEntity.h"
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

int CBaseEntity::sub_100b3d10()
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::GetEdict";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    int edict = *(int *)((char *)this + 0x2e0);
    --*g_109f3680;
    return edict;
}
// END FUNCTION

// FUNCTION: 0x100b4320 size=0x6
#include "CBaseEntity.h"
int CBaseEntity::vfunc117()
{
    return 2;
}
// END FUNCTION

// FUNCTION: 0x100b4b40 size=0x55
#include "CBaseEntity.h"
#include "CEntitySoundOriginView.h"

// TARGET: CBaseEntity::vfunc193
Vector CBaseEntity::vfunc193()
{
	return *(const Vector *)((CEntitySoundOriginView *)this)->GetAbsOrigin() + m_vecViewOffset;
}
// END FUNCTION

// FUNCTION: 0x100b4bc0 size=0x8
#include "CBaseEntity.h"

float *CBaseEntity::vfunc194()
{
	return vfunc219();
}
// END FUNCTION

// FUNCTION: 0x100b4be0 size=0x8
#include "CBaseEntity.h"

// TARGET: CBaseEntity::vfunc195
float *CBaseEntity::vfunc195()
{
	return vfunc221();
}
// END FUNCTION

// FUNCTION: 0x100b4c00 size=0x14
#include "CBaseEntity.h"

Vector CBaseEntity::vfunc196()
{
	return vfunc193();
}
// END FUNCTION

// FUNCTION: 0x100b4c30 size=0x13c
#include "CCollisionProperty.h"
#include "TempVector.h"

extern float g_1070d9d0;
extern float g_1070d9d4;
extern float g_1070d9d8;

void sub_10137fe0(const float *pIn, float *pMatrix, float *pOut);

inline void VectorTransform(const Vector &in1, float *pMatrix, Vector &out)
{
	sub_10137fe0(&in1.x, pMatrix, &out.x);
}

struct CollView {
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3();
	virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7();
	virtual Vector *GetOrigin();
};

float * __fastcall sub_100b4c30(CBaseEntity *pThis)
{
	CCollisionProperty *pCol = (CCollisionProperty *)((char *)pThis + 0x270);
	Vector &vecResult = AllocTempVector();
	Vector &vecCenter = AllocTempVector();
	vecCenter.x = (pCol->m_vecMaxs.x - pCol->m_vecMins.x) * 0.5f + pCol->m_vecMins.x;
	vecCenter.y = (pCol->m_vecMaxs.y - pCol->m_vecMins.y) * 0.5f + pCol->m_vecMins.y;
	vecCenter.z = (pCol->m_vecMaxs.z - pCol->m_vecMins.z) * 0.5f + pCol->m_vecMins.z;
	float *pAngles;
	if (!(pCol->m_usSolidFlags & 0x80) && pCol->m_nSolidType != 2 && pCol->m_nSolidType != 0
		&& ((pAngles = pCol->vfunc9(0)), (g_1070d9d0 != pAngles[0] || g_1070d9d4 != pAngles[1] || g_1070d9d8 != pAngles[2]))) {
		VectorTransform(vecCenter, pCol->vfunc10(), vecResult);
		return &vecResult.x;
	}
	VectorAdd(*((CollView *)pCol)->GetOrigin(), vecCenter, vecResult);
	return &vecResult.x;
}
// END FUNCTION

// FUNCTION: 0x100b4dc0 size=0xe
#include "CBaseEntity.h"
// TARGET: CBaseEntity::vfunc158
bool CBaseEntity::vfunc158()
{
	return m_field200 == 0;
}
// END FUNCTION

// FUNCTION: 0x100b4de0 size=0x1e
// TARGET: CBaseEntity::vfunc91
#include "CBaseEntity.h"

char CBaseEntity::vfunc91(void *pPassEnt, int contentsMask)
{
	char result = 1;
	if (m_field368 == 1 && !(contentsMask & 0x4000000))
		result = 0;
	return result;
}
// END FUNCTION

// FUNCTION: 0x100b4ea0 size=0x3f
#include "CBaseEntity.h"
#include "CUnknown1070b244.h"

extern CUnknown1070b244 *g_1070b244;

// TARGET: CBaseEntity::vfunc154
int CBaseEntity::vfunc154(int a, int b)
{
	if (m_n16c == 4)
		return -1;
	if (m_n16c != 0 && b == 0x47)
		return 0x34;
	return g_1070b244->vfunc2(0, 4);
}
// END FUNCTION

// FUNCTION: 0x100b4ef0 size=0x7
#include "CBaseEntity.h"
int CBaseEntity::vfunc83()
{
    return *(int *)((char *)this + 0x268);
}
// END FUNCTION

// FUNCTION: 0x100b4f10 size=0xd
#include "CBaseEntity.h"
void CBaseEntity::vfunc84(int flags)
{
	m_flags268 = flags;
}
// END FUNCTION

// FUNCTION: 0x100b5040 size=0x2f
#include "CBaseEntity.h"
// TARGET: CBaseEntity::vfunc225
void sub_1002ee60(CBaseEntity *pEnt);
void sub_10004705(int pObject, CBaseEntity *pEnt);

void CBaseEntity::vfunc225()
{
	if (m_obj36c != 0) {
		sub_1002ee60(this);
		sub_10004705(m_obj36c, this);
		m_obj36c = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100b5080 size=0x3
// TARGET: sub_100b5080
bool __cdecl sub_100b5080() { return false; }
// END FUNCTION

// FUNCTION: 0x100b50a0 size=0x4c
#include "CBaseEntity.h"
#define R10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CEntSlot211View
{
	R10(a) R10(b) R10(c) R10(d) R10(e) R10(f) R10(g) R10(h) R10(i) R10(j)
	R10(k) R10(l) R10(m) R10(n) R10(o) R10(p) R10(q) R10(r) R10(s) R10(t)
	R10(u)
	virtual void v0();
	virtual unsigned int GetFlags211();
};

bool CBaseEntity::vfunc164()
{
	if (((CEntSlot211View *)this)->GetFlags211() & 0x10)
		return false;
	if (vfunc92() == 1 || vfunc92() == 6 || vfunc92() == 2)
		return true;
	return sub_100b5110();
}
// END FUNCTION
