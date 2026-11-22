// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 40 blocks
#include "vampire.h"

// FUNCTION: 0x1010f560 size=0x6
#include "datamap.h"
#include "CWindowPane.h"
namespace lifted {
extern char g_1056f060;
}
datamap_t * CWindowPane::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1056f060);
}
// END FUNCTION

// FUNCTION: 0x1010f580 size=0x5
int sub_1010f5c0(void);
int g_10709988 = ((int (*)(int))sub_1010f5c0)(0);
// END FUNCTION

// FUNCTION: 0x1010f5c0 size=0x1a
namespace lifted {
extern int g_1056f060;
extern int g_1056f064;
extern char g_1056f0a4;
}
int sub_1010f5c0()
{
    lifted::g_1056f064 = 2;
    lifted::g_1056f060 = (int)&lifted::g_1056f0a4;
    return (int)&lifted::g_1056f060;
}
// END FUNCTION

// FUNCTION: 0x1010f5f0 size=0xb6
#include "CWindowPane.h"
#include "CCollisionProperty.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

#define WP_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define WP_V100(p) WP_V10(p##0) WP_V10(p##1) WP_V10(p##2) WP_V10(p##3) WP_V10(p##4) WP_V10(p##5) WP_V10(p##6) WP_V10(p##7) WP_V10(p##8) WP_V10(p##9)

// the vtable of the entity up to slot 104, then SetModel at 105
struct CPaneSlots
{
	WP_V100(a0) virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4();
	virtual void SetModelName(const char *pszModel);	// slot 105
};

void CWindowPane::vfunc103()
{
	vfunc104();
	const char *name = m_name26c ? m_name26c : g_106b8540;
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseEntity::SetSolid";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = g_106b8540;
	(*g_109f3680)++;
	((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(2);
	(*g_109f3680)--;
	vfunc93(6, 0);
	m_nTakeDamage = 2;
	sub_100aaa40(4);
	((CPaneSlots *)this)->SetModelName("models/gibs/brokenglass_piece.mdl");
	sub_100b3b00();
}
// END FUNCTION

// FUNCTION: 0x1010f6e0 size=0x13
#include "CWindowPane.h"

void CWindowPane::vfunc104()
{
	engine->vfunc13("models/gibs/brokenglass_piece.mdl", 0);
}
// END FUNCTION

// FUNCTION: 0x1010f710 size=0x19
#include "CBaseEntity.h"

void sub_1010f740();

// TARGET: sub_1010f710
void __fastcall sub_1010f710(void *pThis, int a, CBaseEntity *pEnt)
{
	if (pEnt && pEnt->m_field368 != 4)
		sub_1010f740();
}
// END FUNCTION

// FUNCTION: 0x1010f740 size=0x117
#include "CPASFilter.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "TestBit.h"

#define SL(n) virtual void s##n();
#define SL10(p) SL(p##0) SL(p##1) SL(p##2) SL(p##3) SL(p##4) SL(p##5) SL(p##6) SL(p##7) SL(p##8) SL(p##9)

struct S_TE
{
	SL(0) SL(1) SL(2) SL(3) SL(4) SL(5) SL(6) SL(7) SL(8) SL(9)
	SL10(1) SL(20) SL(21) SL(22)
	virtual void ShatterSurface(IRecipientFilter &filter, float delay, const Vector *pos, const QAngle *angle, const Vector *vForce, const Vector *vForcePos, float width, float height, float shardsize, int surfacetype, unsigned char frontr, unsigned char frontg, unsigned char frontb, unsigned char backr, unsigned char backg, unsigned char backb);
};

extern S_TE *g_10540528;

struct S_Ent
{
	SL(0) SL(1) SL(2) SL(3) SL(4) SL(5) SL(6) SL(7) SL(8) SL(9)
	SL10(1) SL10(2) SL10(3) SL10(4) SL10(5) SL10(6) SL10(7) SL10(8) SL10(9)
	SL10(10) SL10(11) SL10(12) SL10(13) SL10(14) SL10(15) SL10(16) SL10(17) SL10(18) SL10(19)
	SL10(20) SL10(21)
	virtual const Vector &GetAbsOrigin();
	virtual const QAngle &GetAbsAngles();
	char pad[0x268 - 4];
	unsigned int m_flags268;
	char pad2[0x3bc - 0x26c];
	Vector m_vecAbsVelocity;

	const Vector &GetAbsVelocity()
	{
		if (TestBit(m_flags268, 12))
			((CBaseEntity *)this)->sub_100b1d10();
		return m_vecAbsVelocity;
	}
	void sub_1010f740();
};

void sub_101cd940(S_Ent *);

void S_Ent::sub_1010f740()
{
	GetAbsVelocity();
	CPASFilter filter(GetAbsOrigin());
	g_10540528->ShatterSurface(filter, 0.0, &GetAbsOrigin(), &GetAbsAngles(), &GetAbsVelocity(), &GetAbsOrigin(), 12.0, 12.0, 4.0, 0, 255, 255, 255, 255, 255, 255);
	sub_101cd940(this);
}
// END FUNCTION

// FUNCTION: 0x1010f8b0 size=0xfb
#include "CGib.h"
#include "CEntityVSlots.h"
#include "Vector.h"
#include "QAngle.h"

extern "C" int rand(void);
extern "C" __declspec(dllimport) void Msg(const char *, ...);
CBaseEntity *sub_10136580(const char *pszClassname);

inline QAngle RandomAngle()
{
	Vector random;
	random.x = (float)rand() * 0.003051851f - 50.0f;
	random.y = (float)rand() * 0.003051851f - 50.0f;
	random.z = (float)rand() * 0.003051851f - 50.0f;
	return QAngle(random[0], random[1], random[2]);
}

inline void SetLocalAngularVelocity(CGib *p, const QAngle &ang)
{
	p->sub_100b2f50(&ang.x);
}

CGib *sub_1010f8b0(const float *pOrigin, const float *pAngles)
{
	CGib *pPane = (CGib *)sub_10136580("window_pane");
	if (!pPane) {
		Msg("NULL Ent in CreateWindowPane!\n");
		return 0;
	}
	if (pPane->m_pEdict2e0) {
		CEntityVSlots *pSlots = (CEntityVSlots *)pPane;
		pSlots->slot62(pOrigin);
		pSlots->slot64(pAngles);
		pSlots->slot103();
		pPane->m_pfnTouch = (void (CBaseEntity::*)(CBaseEntity *))&CGib::sub_10012337;
		SetLocalAngularVelocity(pPane, RandomAngle());
		pPane->m_nBody = enginerandom->vfunc2(0, 2);
	}
	return pPane;
}
// END FUNCTION

// FUNCTION: 0x1010f9f0 size=0x6b
#include "platform.h"
#include "CBreakableSurface.h"

// TARGET: func_breakable_surf
DLL_EXPORT CBaseEntity *func_breakable_surf()
{
    CBreakableSurface *p = new CBreakableSurface;
    p->vfunc106("func_breakable_surf");
    return p;
}
// END FUNCTION

// FUNCTION: 0x1010fa80 size=0x6
#include "datamap.h"
#include "CBreakableSurface.h"
namespace lifted {
extern char g_1056f0fc;
}
datamap_t * CBreakableSurface::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1056f0fc);
}
// END FUNCTION

// FUNCTION: 0x1010faa0 size=0x5
int sub_1010fae0(void);
int g_107099a4 = ((int (*)(int))sub_1010fae0)(0);
// END FUNCTION

// FUNCTION: 0x1010fae0 size=0x1a
namespace lifted {
extern int g_1056f0fc;
extern int g_1056f100;
extern char g_1056f144;
}
int sub_1010fae0()
{
    lifted::g_1056f100 = 0x13;
    lifted::g_1056f0fc = (int)&lifted::g_1056f144;
    return (int)&lifted::g_1056f0fc;
}
// END FUNCTION

// FUNCTION: 0x1010fb10 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_1070996c;
extern char g_1056f488[];
ServerClassReg g_1070998c("CBreakableSurface", &g_1070996c, g_1056f488);
// END FUNCTION

// FUNCTION: 0x1010fb80 size=0x6
#include "CBreakableSurface.h"
namespace lifted {
extern char g_1070998c;
}
int CBreakableSurface::vfunc80()
{
    return (int)&lifted::g_1070998c;
}
// END FUNCTION

// FUNCTION: 0x1010fba0 size=0x3
#include "CBreakableSurface.h"
int CBreakableSurface::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1010fbc0 size=0xa
#include "SendTable.h"
SendTable g_1070996c;
// END FUNCTION

// FUNCTION: 0x1010fc40 size=0x5
int sub_1010fc80(void);
int g_10709968 = ((int (*)(int))sub_1010fc80)(0);
// END FUNCTION

// FUNCTION: 0x1010fc80 size=0x192
#include "SendProp.h"

class SendTable
{
public:
	void sub_1000e8fe(SendProp *pProps, int nProps, const char *pNetTableName);	// Init
};

SendProp sub_10007bfd(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, int arg6, void *proxy);	// SendPropInt
SendProp sub_1000bf2d(const char *pVarName, int offset, SendTable *pTable, void *proxy);	// SendPropDataTable
SendProp sub_10246510(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, float fLow, float fHigh, void *proxy);	// SendPropFloat
SendProp sub_10246700(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, float fLow, float fHigh, void *proxy);	// SendPropVector
void sub_10009539();
void sub_10246300();
void sub_10003012();

extern SendTable g_1070996c;
extern SendTable *g_1055282c;

// TARGET: sub_1010fc80
int sub_1010fc80()
{
	static const char *pTableName = "DT_BreakableSurface";
	static SendProp props[] = {
		sub_10007bfd("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_1000bf2d("baseclass", 0, g_1055282c, (void *)sub_10009539),
		sub_10007bfd("m_nNumWide", 0x49c, 4, 8, 1, 0, 0),
		sub_10007bfd("m_nNumHigh", 0x4a0, 4, 8, 1, 0, 0),
		sub_10246510("m_flPanelWidth", 0x4a4, 4, 0, 4, 0.0f, -121121.125f, (void *)sub_10246300),
		sub_10246510("m_flPanelHeight", 0x4a8, 4, 0, 4, 0.0f, -121121.125f, (void *)sub_10246300),
		sub_10246700("m_vNormal", 0x4ac, 0xc, -1, 4, 0.0f, -121121.125f, (void *)sub_10003012),
		sub_10246700("m_vCorner", 0x4b8, 0xc, -1, 2, 0.0f, -121121.125f, (void *)sub_10003012),
		sub_10007bfd("m_bIsBroken", 0x4c4, 1, 1, 1, 0, 0),
		sub_10007bfd("m_nSurfaceType", 0x4c8, 4, 2, 1, 0, 0),
	};
	g_1070996c.sub_1000e8fe(props + 1, 9, pTableName);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1010fec0 size=0x18
#include "CBreakableSurface.h"
#include "CBreakable.h"

void sub_101d0ec0(const char *psz);

void CBreakableSurface::vfunc104()
{
    sub_101d0ec0("window_pane");
    CBreakable::vfunc104();
}
// END FUNCTION

// FUNCTION: 0x1010fef0 size=0x3a
#include "CBreakableSurface.h"

extern int *g_1070b228;
void sub_100154ec();

// TARGET: ?vfunc130@CBreakableSurface@@UAEXH@Z
void CBreakableSurface::vfunc130(int a)
{
    CBaseEntity::vfunc130(a);
    if (m_b4c4) {
        sub_100ac4e0((int)sub_100154ec, 0, 0);
        *(int *)((char *)this + 0x17c) = g_1070b228[3];
    }
}
// END FUNCTION

// FUNCTION: 0x1010ff40 size=0x3eb
#include "CBreakableSurface.h"
#include "CEntityMessageFilter.h"
#include "QAngle.h"
void sub_10139610(const QAngle &a, Vector *f, Vector *r, Vector *u);
void sub_10139970(const Vector &v, QAngle &a);
void sub_1000bb4a();
extern Vector g_1070d1b0;

inline CEntityMessageFilter::CEntityMessageFilter(CBaseEntity *pEntity) { AddAllPlayers(); int edict = pEntity->m_pEdict2e0; sub_1019d2f0(engine->vfunc35(edict)); }

inline void MessageBegin(CRecipientFilter &filter, int type) { engine->vfunc65(&filter, type); }
inline void WRITE_BYTE(int v) { engine->vfunc67(v); }
inline void MessageEnd() { engine->vfunc66(); }

// TARGET: CBreakableSurface::sub_1010ff40
void CBreakableSurface::sub_1010ff40()
{
    if (!m_b4c4)
        return;
    for (int i = 0; i < m_nCols49c; i++) {
        for (int j = 0; j < m_nRows4a0; j++) {
            if (m_aflPanes[i][j] == -1.0f) {
                m_aflPanes[i][j] = -1.0f;
                CEntityMessageFilter filter(this);
                filter.MakeReliable();
                MessageBegin(filter, 0);
                WRITE_BYTE(0);
                WRITE_BYTE(i);
                WRITE_BYTE(j);
                MessageEnd();
                Vector vecIn = m_vecAxis * -1.0f;
                QAngle ang;
                sub_10139970(vecIn, ang);
                Vector right, up;
                sub_10139610(ang, 0, &right, &up);
                Vector pos = m_vecCorner + (right * (float)i) * m_flWidth + (up * (float)j) * m_flHeight;
                sub_10113050(&pos, (const float *)&ang, &g_1070d1b0, &g_1070d1b0, m_flWidth, m_flHeight, 4);
            }
        }
    }
    CEntityMessageFilter filter(this);
    filter.MakeReliable();
    engine->vfunc65(&filter, 0);
    engine->vfunc67(3);
    engine->vfunc66();
    sub_100ac4e0((int)sub_1000bb4a, 0, 0);
    m_flNextThink = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x10110430 size=0x68
extern "C" __declspec(dllimport) void __cdecl Plat_Free(void *);
extern int vt_10447108[];

struct TFilterX {
	int *vptr;
	int pad;
	void *p;
	int count;
	int grow;
	int size;
	void *elems;
	TFilterX *sub_10110430(unsigned char flags);
};

TFilterX *TFilterX::sub_10110430(unsigned char flags)
{
	size = 0;
	if (grow != -1) {
		if (p) {
			Plat_Free(p);
			p = 0;
		}
		count = 0;
	}
	void *e = p;
	int g = grow;
	elems = e;
	if (g != -1) {
		if (e) {
			Plat_Free(e);
			p = 0;
		}
		count = 0;
	}
	vptr = vt_10447108;
	if (flags & 1)
		delete this;
	return this;
}
// END FUNCTION

// FUNCTION: 0x101104c0 size=0x50b
#include "CBreakableSurface.h"
#include "CCollisionProperty.h"
#include "CEntityMessageFilter.h"
#include "CEntityVSlots.h"
#include <math.h>
#define MINF(a, b) ((a) < (b) ? (a) : (b))
#define MAXF(a, b) ((a) > (b) ? (a) : (b))

// TARGET: CBreakableSurface::sub_101104c0
void CBreakableSurface::sub_101104c0(CBaseEntity *pOther)
{
    CEntityVSlots *pEnt = (CEntityVSlots *)pOther;
    if (m_nSurfaceType4c8 == 1) {
        Vector vel;
        pEnt->slot199(&vel, 0);
        if (FastSqrt(vel.y * vel.y + vel.x * vel.x + vel.z * vel.z) < 500.0f)
            return;
    }

    float y1, y2, x2, x1;
    Vector hit1;
    Vector hit2;
    CCollisionProperty *pCol = (CCollisionProperty *)((char *)pOther + 0x270);
    pCol->sub_100dcd90(&pCol->m_vecMins.x, &pCol->m_vecMaxs.x, &hit2.x, &hit1.x);

    float t = DotProduct(hit1 - m_vecCorner, m_vecAxis);
    Vector p = hit1 + m_vecAxis * t;
    sub_101128d0(p, &x1, &y1);
    t = DotProduct(hit2 - m_vecCorner, m_vecAxis);
    p = hit2 + m_vecAxis * t;
    sub_101128d0(p, &x2, &y2);

    int c0 = (int)floor(MAXF(0.0f, MINF(x1, x2)));
    int c1 = (int)ceil(MINF((float)m_nCols49c, MAXF(x1, x2)));
    int r0 = (int)floor(MAXF(0.0f, MINF(y1, y2)));
    int r1 = (int)ceil(MINF((float)m_nRows4a0, MAXF(y1, y2)));

    Vector force;
    pEnt->slot199(&force, 0);
    force *= 5.0f;

    for (int r = r0; r < r1; r++) {
        if (enginerandom->vfunc2(0, 1))
            sub_101132a0(c0 - 1, r, &force, pEnt->slot220());
        for (int c = c0; c < c1; c++)
            sub_101132a0(c, r, &force, pEnt->slot220());
        if (enginerandom->vfunc2(0, 1))
            sub_101132a0(c1 + 1, r, &force, pEnt->slot220());
    }

    CEntityMessageFilter filter;
    int edict = m_pEdict2e0;
    filter.sub_1019d2f0(engine->vfunc35(edict));
    filter.MakeReliable();
    engine->vfunc65(&filter, 0);
    engine->vfunc67(3);
    engine->vfunc66();
}
// END FUNCTION

// FUNCTION: 0x10110b20 size=0x1fd
#include "CBreakableSurface.h"
#include "CTakeDamageInfo.h"
#include "CEntityVSlots.h"
#include "UTIL_Trace.h"

void __cdecl sub_10146570(Vector*,Vector*,int,int,int,int,int);

int CBreakableSurface::vfunc142(CTakeDamageInfo *pInfo)
{
	int nFlags = pInfo->m_pVDmg00 ? (pInfo->m_nFlags38 | *(int *)((char *)pInfo->m_pVDmg00 + 0x10)) : pInfo->m_nFlags38;
	if (!(nFlags & 0x40))
		return 0;
	CBaseEntity *pInflictor = (CBaseEntity *)pInfo->m_pInflictor;
	if (!pInflictor)
		return 0;
	Vector vecDir = *((CEntityVSlots *)pInflictor)->slot217() - ((CEntityVSlots *)this)->slot192();
	vecDir.NormalizeInPlace();
	CGameTrace trace;
	UTIL_TraceLine(*((CEntityVSlots *)pInflictor)->slot217(), ((CEntityVSlots *)this)->slot192(), 0, pInflictor, 0, &trace);
	CTakeDamageInfo info = *pInfo;
	((CEntityVSlots *)this)->slot141(&info, vecDir, &trace);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10110da0 size=0xb29
#include "CVDmg_t.h"
#include "CTakeDamageInfo.h"
#include "CBreakableSurface.h"
#include "CEntityMessageFilter.h"
#include "engineserver.h"
#include "engineiface.h"
#include <stdlib.h>

#define VD10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CBSurfSlots {
	VD10(a0) VD10(a1) VD10(a2) VD10(a3) VD10(a4) VD10(a5) VD10(a6)
	VD10(a7) VD10(a8) VD10(a9) VD10(b0) VD10(b1) VD10(b2) VD10(b3)
	virtual bool Slot140(CBaseEntity *pAttacker);
	VD10(c0) VD10(c1) VD10(c2) VD10(c3) VD10(c4) VD10(c5) VD10(c6)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
	virtual const Vector &Slot217();
};

struct SDmgView {
	CVDmg_t *m_pVDmg;
	char m_pad04[0x2c - 4];
	CBaseEntity *m_pEnt2c;
	float m_fl30;
	float m_fl34;
	unsigned int m_nFlags38;

	CBaseEntity *GetAttacker() const { return m_pEnt2c; }
	float GetDamage() { return m_pVDmg ? (float)m_pVDmg->sub_101faa70() : m_fl30; }
	unsigned int GetDamageType() const { unsigned int b = m_nFlags38; if (m_pVDmg) b |= m_pVDmg->m_field10; return b; }
};
struct STraceView {
	Vector startpos;
	Vector endpos;
};
void sub_10139970(const Vector &vecIn, Vector &vecAngles);
void sub_10139610(const Vector &angles, Vector *pForward, Vector *pRight, Vector *pUp);

// the entity's edict, read through an inline accessor (CBaseEntity::edict())
template <class T> __forceinline T EdictOf(T e) { return e; }

inline const Vector *VP(const Vector &v) { return &v; }
inline void SetOutInt(COutputEvent &o, int value, CBaseEntity *pActivator, CBaseEntity *pCaller)
{
	((CVariantCopy *)&o)->sub_1000b320(4, &value);
	o.sub_100cd300(*(CVariantCopy *)&o, pActivator, pCaller, 0);
}

// TARGET: CBreakableSurface::vfunc141
void CBreakableSurface::vfunc141(class CVDmg_t *pInfoIn, const Vector *pVecDir, struct CGameTrace *pTrace)
{
#define pInfoIn ((CTakeDamageInfo *)pInfoIn)
#define pTrace ((CGameTrace *)pTrace)
	SDmgView *pInfo = (SDmgView *)pInfoIn;
	const STraceView *ptr = (const STraceView *)pTrace;

	if (!((CBSurfSlots *)this)->Slot140(pInfo->GetAttacker()))
		return;

	unsigned int bits;
	if (pInfo->m_pVDmg) {
		int idx = engine->vfunc35(EdictOf(m_pEdict2e0));
		pInfo->m_pVDmg->sub_101fb200(idx, pInfoIn->sub_101c29b0());
		int f = pInfo->m_pVDmg->m_field10;
		bits = pInfo->GetDamageType() | f;
	} else {
		bits = pInfo->GetDamageType();
	}

	m_iHealth -= pInfo->GetDamage();
	SetOutInt(m_OnHealthChanged, m_iHealth, pInfo->GetAttacker(), this);

	if (m_iHealth > 0)
		return;

	if (!m_b4c4) {
		sub_10111ba0((int)pInfo->GetAttacker(), VP(ptr->endpos - ptr->startpos));
	} else {
		m_OnBreak.sub_100cd660(pInfo->GetAttacker(), this, 0);
	}

	if (bits & 0x4000086) {
		float flWidth, flHeight;
		sub_101128d0(ptr->endpos, &flWidth, &flHeight);
		int nWidth = flWidth;
		int nHeight = flHeight;

		sub_101132a0(nWidth, nHeight, VP(*pVecDir * 500.0f), &ptr->endpos);
		if (m_nSurfaceType4c8 == 0) {
			float flWRem = flWidth - nWidth;
			float flHRem = flHeight - nHeight;

			if (flWRem > 0.8 && nWidth != m_nCols49c - 1)
				sub_101132a0(nWidth + 1, nHeight, VP(*pVecDir * 500.0f), &ptr->endpos);
			else if (flWRem < 0.2 && nWidth != 0)
				sub_101132a0(nWidth - 1, nHeight, VP(*pVecDir * 500.0f), &ptr->endpos);
			if (flHRem > 0.8 && nHeight != m_nRows4a0 - 1)
				sub_101132a0(nWidth, nHeight + 1, VP(*pVecDir * 500.0f), &ptr->endpos);
			else if (flHRem < 0.2 && nHeight != 0)
				sub_101132a0(nWidth, nHeight - 1, VP(*pVecDir * 500.0f), &ptr->endpos);

			if (enginerandom->vfunc2(0, 1) == 0) {
				sub_101132a0(nWidth, nHeight + 1, VP(*pVecDir * 1000.0f), &ptr->endpos);
				if (enginerandom->vfunc2(0, 1) == 0)
					sub_101132a0(nWidth, nHeight + 2, VP(*pVecDir * 1000.0f), &ptr->endpos);
			}
		}
	} else if (bits & 0x40) {
		if (m_nSurfaceType4c8 == 1) {
			float flWidth, flHeight;
			if (pInfo->GetAttacker())
				sub_101128d0(((CBSurfSlots *)pInfo->GetAttacker())->Slot217(), &flWidth, &flHeight);
			else
				sub_101128d0(ptr->endpos, &flWidth, &flHeight);
			int nWidth = flWidth;
			int nHeight = flHeight;

			for (int width = nWidth - 4; width < nWidth + 4; width++) {
				for (int height = nHeight - 4; height < nHeight + 4; height++) {
					if (abs(nWidth - width) + abs(nHeight - height) < enginerandom->vfunc2(2, 5))
						sub_101132a0(width, height, VP(*pVecDir * 500.0f), &ptr->endpos);
				}
			}
		} else {
			Vector vForceDir;
			if (DotProduct(m_vecAxis, *pVecDir) > 0)
				vForceDir = m_vecAxis * 3000.0f;
			else
				vForceDir = m_vecAxis * -3000.0f;

			int nTotal = m_nCols49c * m_nRows4a0;
			int nBroken = m_nPanes4cc;
			if (nBroken >= nTotal)
				return;

			if (nBroken < nTotal * 0.1) {
				Vector vAngles;
				sub_10139970(m_vecAxis * -1, vAngles);
				sub_10113050(&m_vecCorner, &vAngles.x, &vForceDir, &ptr->endpos, m_nCols49c * m_flWidth, m_nRows4a0 * m_flHeight, 7);
			} else {
				Vector vAngles;
				sub_10139970(m_vecAxis * -1, vAngles);
				Vector vWidthDir, vHeightDir;
				sub_10139610(vAngles, 0, &vWidthDir, &vHeightDir);

				for (int width = 0; width < m_nCols49c; width++) {
					int nHCount = 0;
					for (int height = 0; height < m_nRows4a0; height++) {
						if (!sub_101123b0(width, height)) {
							nHCount++;
						} else if (nHCount > 0) {
							Vector vBreakPos = m_vecCorner + (width * vWidthDir * m_flWidth) + ((height - nHCount) * vHeightDir * m_flHeight);
							sub_10113050(&vBreakPos, &vAngles.x, &vForceDir, &ptr->endpos, m_flWidth, nHCount * m_flHeight, 7);
							nHCount = 0;
						}
					}
					if (nHCount) {
						Vector vBreakPos = m_vecCorner + (width * vWidthDir * m_flWidth) + ((height - nHCount) * vHeightDir * m_flHeight);
						sub_10113050(&vBreakPos, &vAngles.x, &vForceDir, &ptr->endpos, m_flWidth, nHCount * m_flHeight, 7);
					}
				}
			}
			sub_10112a10();
		}
	}

	CEntityMessageFilter filter;
	filter.sub_1019d2f0(engine->vfunc35(EdictOf(m_pEdict2e0)));
	filter.MakeReliable();
	engine->vfunc65(&filter, 0);
	engine->vfunc67(3);
	engine->vfunc66();
#undef pTrace
#undef pInfoIn
}
// END FUNCTION

// FUNCTION: 0x10111ba0 size=0x645
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBreakableSurface.h"
#include "CBreakable.h"
#include "CEntityVSlots.h"
#include "CEntityMessageFilter.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
#include "QAngle.h"
#include <math.h>

void sub_10139610(const QAngle &a, Vector *f, Vector *r, Vector *u);
void sub_10139970(const Vector &v, QAngle &a);

inline CEntityMessageFilter::CEntityMessageFilter(CBaseEntity *pEntity) { AddAllPlayers(); int edict = pEntity->m_pEdict2e0; sub_1019d2f0(engine->vfunc35(edict)); }

inline void MessageBegin(CRecipientFilter &filter, int type) { engine->vfunc65(&filter, type); }
inline void WRITE_BYTE(int v) { engine->vfunc67(v); }
inline void MessageEnd() { engine->vfunc66(); }

// this big function inlines what VC6 would otherwise keep out of line: forced copies of VectorSubtract (for
// operator-) and VectorLength (for Length())
__forceinline void SurfVectorSubtract(const Vector &a, const Vector &b, Vector &c)
{
	c.x = a.x - b.x;
	c.y = a.y - b.y;
	c.z = a.z - b.z;
}

__forceinline Vector SurfSub(const Vector &a, const Vector &b)
{
	Vector res;
	SurfVectorSubtract(a, b, res);
	return res;
}

__forceinline vec_t SurfLength(const Vector &v)
{
	return (vec_t)FastSqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}

// TARGET: ?sub_10111ba0@CBreakableSurface@@QAEXHPBVVector@@@Z
void CBreakableSurface::sub_10111ba0(int a, const Vector *pVec)
{
	if (m_b4c4)
		return;
	m_b4c4 = 1;
	m_OnBreak.sub_100cd660((void *)a, this, 0);

	Vector vWidth = SurfSub(m_vLLVertex, m_vLRVertex);
	Vector vHeight = SurfSub(m_vLLVertex, m_vULVertex);
	CrossProduct(vWidth, vHeight, m_vecAxis);
	VectorNormalize(m_vecAxis);

	float flDir = -1;
	float flDot = DotProduct(m_vecAxis, *pVec);
	if (flDot < 0)
	{
		VectorAdd(m_vecAxis, m_vLLVertex, m_vLLVertex);
		VectorAdd(m_vecAxis, m_vLRVertex, m_vLRVertex);
		m_vULVertex += m_vecAxis;
		m_vURVertex += m_vecAxis;
		m_vecAxis *= -1;
		flDir = 1;
	}

	QAngle vAngles;
	sub_10139970(m_vecAxis * -1, vAngles);
	Vector vWidthDir, vHeightDir;
	sub_10139610(vAngles, 0, &vWidthDir, &vHeightDir);

	float flWDist = DotProduct(vWidthDir, vWidth);
	if (fabs(flWDist) < 0.5)
	{
		Vector vSaveHeight = vHeight;
		vHeight = vWidth * flDir;
		vWidth = vSaveHeight * flDir;
	}

	bool bLeft = (DotProduct(vWidthDir, vWidth) < 0.0f);
	bool bLower = (DotProduct(vHeightDir, vHeight) < 0.0f);
	if (bLeft)
	{
		m_vecCorner = bLower ? m_vLLVertex : m_vULVertex;
	}
	else
	{
		m_vecCorner = bLower ? m_vLRVertex : m_vURVertex;
	}

	float flWidth = SurfLength(vWidth);
	float flHeight = SurfLength(vHeight);
	m_nCols49c = flWidth / 12;
	m_nRows4a0 = flHeight / 12;

	if (m_nCols49c > 16) m_nCols49c = 16;
	if (m_nRows4a0 > 16) m_nRows4a0 = 16;

	m_flWidth = flWidth / m_nCols49c;
	m_flHeight = flHeight / m_nRows4a0;

	for (int w = 0; w < 16; w++)
	{
		for (int h = 0; h < 16; h++)
		{
			m_aflPanes[w][h] = 1.0f;
		}
	}

	CEntityMessageFilter filter(this);
	filter.MakeReliable();
	MessageBegin(filter, 0);
	WRITE_BYTE(2);
	WRITE_BYTE(m_nCols49c);
	WRITE_BYTE(m_nRows4a0);
	MessageEnd();

	((CBreakable *)this)->sub_1010e620();
	((CEntityVSlots *)this)->slot225();

	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->AddSolidFlags(8);
	}
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->AddSolidFlags(4);
	}
	sub_100b3b00();

	m_pfnTouch = (void (CBaseEntity::*)(CBaseEntity *))sub_101104c0;
}
// END FUNCTION

// FUNCTION: 0x10112390 size=0x3
void __stdcall sub_10112390(int a0, int a1, int a2, int a3)
{
}
// END FUNCTION

// FUNCTION: 0x101123b0 size=0x4f
#include "CBreakableSurface.h"
bool CBreakableSurface::sub_101123b0(int nCol, int nRow)
{
	if (nCol >= 0 && nCol < m_nCols49c && nRow >= 0 && nRow < m_nRows4a0)
		return m_aflPanes[nCol][nRow] == -1.0f;
	return true;
}
// END FUNCTION

// FUNCTION: 0x10112420 size=0x36
struct CUnknown10112420
{
	char m_pad0000[0x4d0];
	float m_fl4d0[256];

	float sub_10112420(int a, int b);
};

// TARGET: CUnknown10112420::sub_10112420
float CUnknown10112420::sub_10112420(int a, int b)
{
	float *pValue = &m_fl4d0[a * 16 + b];
	if (*pValue < 0.0f)
	{
		return 0.0f;
	}
	return *pValue;
}
// END FUNCTION

// FUNCTION: 0x10112470 size=0x17e
struct SSmoothGrid
{
	char m_pad0000[0x49c];
	int m_nWidth;	// 0x49c
	int m_nHeight;	// 0x4a0

	float sub_10112470(int x, int y);
	float sub_10112420(int x, int y);	// stub 0x100017b7
};

float SSmoothGrid::sub_10112470(int x, int y)
{
	int maxY = m_nHeight - 1;
	float flSum;
	if (y == maxY)
		flSum = 1.01f;
	else
		flSum = sub_10112420(x, y + 1) + 0.01f;
	if (y == 0)
		flSum += 1.25;
	else
		flSum += sub_10112420(x, y - 1) * 1.25;
	if (x == 0)
		flSum += 1.0;
	else
		flSum += sub_10112420(x - 1, y);
	int width = m_nWidth;
	if (x == width - 1)
		flSum += 1.0;
	else
		flSum += sub_10112420(x + 1, y);
	if (y == 0 || x == 0)
		flSum += 1.0;
	else
		flSum += sub_10112420(x - 1, y - 1);
	if (y == 0 || x == width - 1)
		flSum += 1.0;
	else
		flSum += sub_10112420(x + 1, y - 1);
	if (y == maxY || x == width - 1)
		flSum += 0.25;
	else
		flSum += sub_10112420(x + 1, y + 1) * 0.25;
	if (y == maxY || x == 0)
		return flSum + 0.25;
	return flSum + sub_10112420(x - 1, y + 1) * 0.25;
}
// END FUNCTION

// FUNCTION: 0x10112650 size=0x1f9
#include "CBreakableSurface.h"
#include "CEntityMessageFilter.h"

extern Vector g_1070d1b0;
#define WINDOW_MAX_SUPPORT			6.75
#define WINDOW_BREAK_SUPPORT		0.20

struct SSmoothGrid
{
	float sub_10112470(int nCol, int nRow);
};

namespace block_10112650 {
#pragma auto_inline(off)
struct CSupportU
{
	char m_pad0000[0x49c];
	int m_nWidth;	// 0x49c
	int m_nHeight;	// 0x4a0
	char m_pad04a4[0x4d0 - 0x4a4];
	float m_fl4d0[256];

	float sub_10112420(int a, int b);
	float sub_10112470(int x, int y);
};
float CSupportU::sub_10112420(int a, int b)
{
	float *pValue = &m_fl4d0[a * 16 + b];
	if (*pValue < 0.0f)
	{
		return 0.0f;
	}
	return *pValue;
}
float CSupportU::sub_10112470(int x, int y)
{
	int maxY = m_nHeight - 1;
	float flSum;
	if (y == maxY)
		flSum = 1.01f;
	else
		flSum = sub_10112420(x, y + 1) + 0.01f;
	if (y == 0)
		flSum += 1.25;
	else
		flSum += sub_10112420(x, y - 1) * 1.25;
	if (x == 0)
		flSum += 1.0;
	else
		flSum += sub_10112420(x - 1, y);
	int width = m_nWidth;
	if (x == width - 1)
		flSum += 1.0;
	else
		flSum += sub_10112420(x + 1, y);
	if (y == 0 || x == 0)
		flSum += 1.0;
	else
		flSum += sub_10112420(x - 1, y - 1);
	if (y == 0 || x == width - 1)
		flSum += 1.0;
	else
		flSum += sub_10112420(x + 1, y - 1);
	if (y == maxY || x == width - 1)
		flSum += 0.25;
	else
		flSum += sub_10112420(x + 1, y + 1) * 0.25;
	if (y == maxY || x == 0)
		return flSum + 0.25;
	return flSum + sub_10112420(x - 1, y + 1) * 0.25;
}
#pragma auto_inline(on)
struct CBreakableSurfaceUnit : CBreakableSurface
{
	bool sub_101123b0(int nCol, int nRow);
	int edict() { return m_pEdict2e0; }
};
bool CBreakableSurfaceUnit::sub_101123b0(int nCol, int nRow)
{
	if (nCol >= 0 && nCol < m_nCols49c && nRow >= 0 && nRow < m_nRows4a0)
		return m_aflPanes[nCol][nRow] == -1.0f;
	return true;
}
}
using namespace block_10112650;

// TARGET: ?sub_10112650@CBreakableSurface@@QAEXXZ
void CBreakableSurface::sub_10112650()
{
	if (m_nSurfaceType4c8 == 1)
		return;

	int w;
	float flSupport[16][16];
	for (w = 0; w < m_nCols49c; w++)
	{
		int h;
		for (h = 0; h < m_nRows4a0; h++)
		{
			if (!((CBreakableSurfaceUnit *)this)->sub_101123b0(w, h))
				flSupport[w][h] = ((CSupportU *)this)->sub_10112470(w, h);
		}
	}

	float flBreakValue = WINDOW_BREAK_SUPPORT*(m_nFragility/100.0);
	bool  bNeedUpdate  = false;
	for (w=0;w<m_nCols49c;w++)
	{
		for (int h=0;h<m_nRows4a0;h++)
		{
			if (!((CBreakableSurfaceUnit *)this)->sub_101123b0(w,h))
			{
				m_aflPanes[w][h] = flSupport[w][h]/WINDOW_MAX_SUPPORT;
				if (m_aflPanes[w][h] < flBreakValue)
				{
					if (enginerandom->vfunc2(0,1))
					{
						sub_10112d50(w,h);
					}
					else
					{
						sub_101132a0(w,h,&g_1070d1b0,&g_1070d1b0);
					}
					m_flNextThink = gpGlobals->curtime;
					bNeedUpdate   = true;
				}
			}
		}
	}

	if (bNeedUpdate)
	{
		CEntityMessageFilter filter;
		filter.sub_1019d2f0(engine->vfunc35(((CBreakableSurfaceUnit *)this)->edict()));
		filter.MakeReliable();
		engine->vfunc65(&filter, 0);
		engine->vfunc67(3);
		engine->vfunc66();
	}
}
// END FUNCTION

// FUNCTION: 0x101128d0 size=0xf7
#include "CBreakableSurface.h"
void sub_10003d4b(Vector *, Vector *);
void sub_10002310(Vector *, Vector *, Vector *, Vector *);

static inline float DotX(const Vector &a, const Vector &b)
{
	return (b.x * a.x + a.y * b.y + a.z * b.z);
}

void CBreakableSurface::sub_101128d0(const Vector &vecPos, float *pX, float *pY)
{
	Vector vecDelta = vecPos - m_vecCorner;
	Vector vecAng = -1.0f * m_vecAxis;
	Vector vecDir;
	Vector vecUp;
	Vector vecTmp;
	sub_10003d4b(&vecAng, &vecTmp);
	sub_10002310(&vecTmp, 0, &vecDir, &vecUp);
	*pX = DotX(vecDelta, vecDir) / m_flWidth;
	*pY = DotProduct(vecDelta, vecUp) / m_flHeight;
}
// END FUNCTION

// FUNCTION: 0x10112a10 size=0x124
#include "CBreakableSurface.h"
#include "CEntityMessageFilter.h"


void CBreakableSurface::sub_10112a10()
{
	int i, j;
	for (i = 0; i < m_nCols49c; i++) {
		for (j = 0; j < m_nRows4a0; j++)
			m_aflPanes[i][j] = -1.0f;
	}
	CEntityMessageFilter filter;
	int edict = m_pEdict2e0;
	filter.sub_1019d2f0(engine->vfunc35(edict));
	filter.sub_1019cf50();
	engine->vfunc65(&filter, 0);
	engine->vfunc67(1);
	engine->vfunc66();
	m_nPanes4cc = m_nCols49c * m_nRows4a0;
}
// END FUNCTION

// FUNCTION: 0x10112b90 size=0x15c
#include "CBreakableSurface.h"
#include "CEntityMessageFilter.h"
void sub_10112650();

// TARGET: CBreakableSurface::sub_10112b90
void CBreakableSurface::sub_10112b90(int nCol, int nRow)
{
	if (nCol < 0 || nCol >= m_nCols49c)
		return;
	if (nRow < 0 || nRow >= m_nRows4a0)
		return;
	m_nPanes4cc++;
	m_aflPanes[nCol][nRow] = -1.0f;
	CEntityMessageFilter filter;
	int edict = m_pEdict2e0;
	filter.sub_1019d2f0(engine->vfunc35(edict));
	filter.MakeReliable();
	engine->vfunc65(&filter, 0);
	engine->vfunc67(0);
	engine->vfunc67(nCol);
	engine->vfunc67(nRow);
	engine->vfunc66();
	sub_100ac4e0((int)::sub_10112650, 0, 0);
	m_flNextThink = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x10112d50 size=0x25b
#include "QAngle.h"
#include "CBreakableSurface.h"
#include <stdlib.h>
void sub_10139970(const Vector &, QAngle &);
void sub_10139610(const QAngle &, Vector *, Vector *, Vector *);
CBaseEntity *sub_1010f8b0(const Vector *pPos, const QAngle *pAngles);
extern Vector g_1070d1b0;

namespace block_10112d50 {
struct CBreakableSurfaceUnit : CBreakableSurface {
    bool sub_101123b0(int nCol, int nRow);
};
bool CBreakableSurfaceUnit::sub_101123b0(int nCol, int nRow)
{
    if (nCol >= 0 && nCol < m_nCols49c && nRow >= 0 && nRow < m_nRows4a0)
        return m_aflPanes[nCol][nRow] == -1.0f;
    return true;
}
}
using namespace block_10112d50;

void CBreakableSurface::sub_10112d50(int nCol, int nRow)
{
    if (nCol < 0 || nCol >= m_nCols49c || nRow < 0 || nRow >= m_nRows4a0)
        return;
    if (((CBreakableSurfaceUnit *)this)->sub_101123b0(nCol, nRow))
        return;
    sub_10112b90(nCol, nRow);
    QAngle ang;
    {
        Vector dir = m_vecAxis * -1.0f;
        sub_10139970(dir, ang);
    }
    Vector right, up;
    sub_10139610(ang, 0, &right, &up);
    Vector pos = right * (float)nCol * m_flWidth + m_vecCorner + up * (float)nRow * m_flHeight;
    sub_10113050(&pos, (const float *)&ang, &g_1070d1b0, &g_1070d1b0, 12.0f, 12.0f, 4);
    CBaseEntity *pEnt = sub_1010f8b0(&pos, &ang);
    if (pEnt)
    {
        Vector random;
        random.x = rand() * 0.0073244423f - 120.0f;
        random.y = rand() * 0.0073244423f - 120.0f;
        random.z = rand() * 0.0073244423f - 120.0f;
        QAngle vecForce(random.x, random.y, random.z);
        pEnt->sub_100b2f50((const float *)&vecForce);
    }
}
// END FUNCTION

// FUNCTION: 0x10113050 size=0x1cb
#include "CBreakableSurface.h"
#include "CPASFilter.h"

#define SV1(p) virtual void p();
#define SV10(p) SV1(p##0) SV1(p##1) SV1(p##2) SV1(p##3) SV1(p##4) SV1(p##5) SV1(p##6) SV1(p##7) SV1(p##8) SV1(p##9)

struct STempEntsShatterView	// slot 23 of the temp entity system: ShatterSurface
{
	SV10(sa) SV10(sb) SV1(sc0) SV1(sc1) SV1(sc2)
	virtual void ShatterSurface(CRecipientFilter *pFilter, float flDelay, const Vector *pPos, const float *pAngles,
	                            const Vector *pForce, const Vector *pForcePos, float flWidth, float flHeight,
	                            float flShardSize, int nSurfaceType, int nFrontR, int nFrontG, int nFrontB,
	                            int nBackR, int nBackG, int nBackB);
};
extern STempEntsShatterView *g_10540528;

void CBreakableSurface::sub_10113050(const Vector *pPos, const float *pAngles, const Vector *pForce, const Vector *pForcePos, float flWidth, float flHeight, int unused)
{
	Vector vAdjustedBreakPos = *pPos;
	Vector vAdjustedForce = *pForce;
	int front_r, front_g, front_b, back_r, back_g, back_b;
	if (m_nSurfaceType4c8 == 1) {
		vAdjustedBreakPos -= m_vecAxis * 8.0f;
		vAdjustedForce = *pForce * -0.75f;
		front_r = 0x59;
		front_g = 0x78;
		front_b = 0x53;
		back_r = 0x63;
		back_g = 0x4c;
		back_b = 0x15;
	} else {
		front_b = front_g = front_r = 0xff;
		back_b = back_g = back_r = 0xff;
	}
	CPASFilter filter(vAdjustedBreakPos);
	g_10540528->ShatterSurface(&filter, 0.0f, &vAdjustedBreakPos, pAngles, &vAdjustedForce, pForcePos, flWidth, flHeight, 4.0f,
	                           m_nSurfaceType4c8, front_r, front_g, front_b, back_r, back_g, back_b);
}
// END FUNCTION

// FUNCTION: 0x101132a0 size=0x1ce
#include "QAngle.h"
#include "CBreakableSurface.h"
void sub_10139970(const Vector &, QAngle &);
void sub_10139610(const QAngle &, Vector *, Vector *, Vector *);

namespace block_101132a0 {
struct CBreakableSurfaceUnit : CBreakableSurface {
    bool sub_101123b0(int nCol, int nRow);
};
bool CBreakableSurfaceUnit::sub_101123b0(int nCol, int nRow)
{
    if (nCol >= 0 && nCol < m_nCols49c && nRow >= 0 && nRow < m_nRows4a0)
        return m_aflPanes[nCol][nRow] == -1.0f;
    return true;
}
}
using namespace block_101132a0;

void CBreakableSurface::sub_101132a0(int nCol, int nRow, const Vector *pForce, const Vector *pForcePos)
{
    if (nCol < 0 || nCol >= m_nCols49c || nRow < 0 || nRow >= m_nRows4a0)
        return;
    if (((CBreakableSurfaceUnit *)this)->sub_101123b0(nCol, nRow))
        return;
    sub_10112b90(nCol, nRow);
    QAngle ang;
    {
        Vector dir = m_vecAxis * -1.0f;
        sub_10139970(dir, ang);
    }
    Vector right, up;
    sub_10139610(ang, 0, &right, &up);
    {
        Vector pos = right * (float)nCol * m_flWidth + m_vecCorner + up * (float)nRow * m_flHeight;
        sub_10113050(&pos, (const float *)&ang, pForce, pForcePos, m_flWidth, m_flHeight, 4);
    }
}
// END FUNCTION

// FUNCTION: 0x101134f0 size=0x72
#include "CBreakableSurface.h"

extern void (*g_109f362c)(const char *fmt, ...);
void sub_101cd940(CBaseEntity *pEntity);

void CBreakableSurface::vfunc103()
{
	CBreakable::vfunc103();
	if (m_nFaceCheck == 1) {
		g_109f362c("Rejecting func_breakablesurf.  Has multiple faces that aren't NODRAW.\n");
		sub_101cd940(this);
	} else if (m_nFaceCheck == 2) {
		g_109f362c("Rejecting func_breakablesurf.  Drawn face isn't a quad.\n");
		sub_101cd940(this);
	} else {
		sub_100aaa40(4);
		m_b4c4 = 0;
		m_nMaterial = 0;
	}
	sub_100b3580(0x20000000);
	sub_100a9470(1);
}
// END FUNCTION

// FUNCTION: 0x10113590 size=0x1e
#include "CWindowPane.h"

void sub_100aa7b0(void *p);

// TARGET: CWindowPane::vfunc5
CBaseEntity *CWindowPane::vfunc5(unsigned int flags)
{
	sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101135c0 size=0x36
#include "CBreakableSurface.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBaseEntity *CBreakableSurface::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x484))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x46c))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
