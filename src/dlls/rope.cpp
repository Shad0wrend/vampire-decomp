// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 43 blocks
#include "vampire.h"

// FUNCTION: 0x1019d7d0 size=0x6
#include "CRopeKeyframe.h"
namespace lifted {
extern char g_1072b984;
}
int CRopeKeyframe::vfunc80()
{
    return (int)&lifted::g_1072b984;
}
// END FUNCTION

// FUNCTION: 0x1019d7f0 size=0x3
#include "CRopeKeyframe.h"
int CRopeKeyframe::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1019d810 size=0xa
#include "SendTable.h"
SendTable g_1072b968;
// END FUNCTION

// FUNCTION: 0x1019d890 size=0x5
int sub_1019d8d0(void);
int g_1072b964 = ((int (*)(int))sub_1019d8d0)(0);
// END FUNCTION

// FUNCTION: 0x1019d8d0 size=0x247
#include "SendTable.h"

extern SendTable g_1072b968;
extern const char *g_10592254;
SendProp sub_10246af0(const char *pName, int nOffset, int nSize, int nBits, int nFlags, int nExtra, void *pProxy);
SendProp sub_101ab220(const char *pName, int nOffset, int nSize);
SendProp sub_10246510(const char *pName, int nOffset, int nSize, int nBits, int nFlags, int nLow, int nHigh, void *pProxy);
SendProp sub_10246700(const char *pName, int nOffset, int nSize, int nBits, int nFlags, int nLow, int nHigh, void *pProxy);
void sub_10246300();
void sub_10003012();

int sub_1019d8d0()
{
	static SendProp s_Props[] = {
		sub_10246af0("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_101ab220("m_hStartPoint", 0x490, 4),
		sub_101ab220("m_hEndPoint", 0x494, 4),
		sub_10246af0("m_iStartAttachment", 0x498, 2, 5, 0, 0, 0),
		sub_10246af0("m_iEndAttachment", 0x49a, 2, 5, 0, 0, 0),
		sub_10246af0("m_Slack", 0x45c, 4, 0xc, 0, 0, 0),
		sub_10246af0("m_RopeLength", 0x474, 4, 0xe, 0, 0, 0),
		sub_10246af0("m_fLockedPoints", 0x478, 4, 4, 1, 0, 0),
		sub_10246af0("m_RopeFlags", 0x454, 4, 8, 1, 0, 0),
		sub_10246af0("m_nSegments", 0x468, 4, 4, 1, 0, 0),
		sub_10246af0("m_iRopeMaterialModel", 0x46c, 4, 0x10, 1, 0, 0),
		sub_10246af0("m_Subdiv", 0x470, 4, 4, 1, 0, 0),
		sub_10246510("m_TextureScale", 0x464, 4, 10, 0, 0x3dcccccd, 0x41200000, (void *)sub_10246300),
		sub_10246510("m_Width", 0x460, 4, 0, 4, 0, (int)0xc7ec9090, (void *)sub_10246300),
		sub_10246510("m_flScrollSpeed", 0x484, 4, 0, 4, 0, (int)0xc7ec9090, (void *)sub_10246300),
		sub_10246700("m_vecAbsOrigin", 0x404, 0xc, -1, 2, 0, (int)0xc7ec9090, (void *)sub_10003012),
	};
	g_1072b968.sub_10247240(&s_Props[1], 15, g_10592254);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1019dbf0 size=0x6
#include "CRopeKeyframe.h"
namespace lifted {
extern char g_10592258;
}
datamap_t * CRopeKeyframe::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10592258);
}
// END FUNCTION

// FUNCTION: 0x1019dc10 size=0x5
int sub_1019dc50(void);
int g_1072b960 = ((int (*)(int))sub_1019dc50)(0);
// END FUNCTION

// FUNCTION: 0x1019dc50 size=0x1a
namespace lifted {
extern int g_10592258;
extern int g_1059225c;
extern char g_1059229c;
}
int sub_1019dc50()
{
    lifted::g_1059225c = 0x14;
    lifted::g_10592258 = (int)&lifted::g_1059229c;
    return (int)&lifted::g_10592258;
}
// END FUNCTION

// FUNCTION: 0x1019dc80 size=0xb5
// The header models the start / end point handles as plain dwords; rope.h has CNetworkHandles, whose
// constructors store -1. Injected: the class ends with the two handles, the header's rest goes to a tail view.
#define sub_1019dc80() sub_1019dc80(); CRopeKeyframe()
#define m_padRope048e m_padRope048e[2]; EHANDLE m_hStart490, m_hEnd494; public: virtual datamap_t *vfunc82(); virtual int vfunc81(); virtual int vfunc80(); virtual int vfunc117(); }; struct CRopeKeyframeHeaderTail : CBaseEntity { char m_tail048e
#include "CRopeKeyframe.h"
#undef m_padRope048e
#undef sub_1019dc80

// The SDK members the header does not name yet (rope.h CNetworkVars).
struct CRopeKeyframeFields
{
	char m_pad0000[0x464];
	float m_TextureScale;	// 0x464
	char m_pad0468[0x470 - 0x468];
	int m_Subdiv;	// 0x470
	char m_pad0474[0x484 - 0x474];
	float m_flScrollSpeed;	// 0x484
	char m_pad0488[0x498 - 0x488];
	short m_iStartAttachment;	// 0x498
	short m_iEndAttachment;	// 0x49a
};
#define F ((CRopeKeyframeFields *)this)

// TARGET: CRopeKeyframe::CRopeKeyframe
CRopeKeyframe::CRopeKeyframe() : CBaseEntity(0)
{
	m_flags268 |= 0x80;
	m_nTakeDamage = 2;
	F->m_iStartAttachment = F->m_iEndAttachment = 0;
	m_n45c = 0;
	m_flWidth = 2.0f;
	F->m_TextureScale = 4.0f;
	m_nSegments = 5;
	m_n474 = 20;
	m_n478 = 3;
	F->m_flScrollSpeed = 0;
	m_nRopeFlags = 0x48;
	m_flRemoveTime480 = 0;
	m_nMaterialIndex = -1;
	F->m_Subdiv = 2;
	m_bCreatedFromMapFile = 1;
	m_b450 = 0;
}
// END FUNCTION

// FUNCTION: 0x1019dd70 size=0x8
#include "CRopeKeyframe.h"
// TARGET: CRopeKeyframe::sub_1019dd70
unsigned char CRopeKeyframe::sub_1019dd70()
{
    unsigned char b;
    b = ((CBaseEntity *)this)->CBaseEntity::vfunc117();
    b &= 0xfd;
    return b;
}
// END FUNCTION

// FUNCTION: 0x1019dd90 size=0x1e
#include "CRopeKeyframe.h"

void sub_100aa7b0(void *p);

// TARGET: CRopeKeyframe::vfunc5
CBaseEntity *CRopeKeyframe::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1019ddc0 size=0x42
#include "CRopeKeyframe.h"
void CRopeKeyframe::sub_1019ddc0(CBaseEntity *pEnt, int iAttachment)
{
	*(EHANDLE *)&m_hStartPoint = pEnt;
	m_iStartAttachment = iAttachment;
}
// END FUNCTION

// FUNCTION: 0x1019de30 size=0x42
#include "CRopeKeyframe.h"
void CRopeKeyframe::sub_1019de30(CBaseEntity *pEnt, int iAttachment)
{
	*(EHANDLE *)&m_hEndPoint = pEnt;
	m_iEndAttachment = iAttachment;
}
// END FUNCTION

// FUNCTION: 0x1019dea0 size=0x2c
struct CUnit1019dea0 {
    char pad[0x1b1];
    char m_b1b1;
    char pad2[0x454 - 0x1b2];
    unsigned int m_flags454;
    void sub_1019dea0(bool on);
};

// TARGET: sub_1019dea0
void CUnit1019dea0::sub_1019dea0(bool on)
{
    unsigned int flags = m_flags454;
    if (on) {
        flags = flags | 0x80;
    } else {
        flags = flags & 0xffffff7f;
    }
    if (flags != m_flags454) {
        m_flags454 = flags;
        m_b1b1 = 1;
    }
}
// END FUNCTION

// FUNCTION: 0x1019dee0 size=0x96
#include "CRopeKeyframe.h"

CBaseEntity *sub_10136580(const char *pszClassname);

// TARGET: CRopeKeyframe::sub_1019dee0
CRopeKeyframe *CRopeKeyframe::sub_1019dee0(CBaseEntity *pStartEnt, CBaseEntity *pEndEnt, int iStartAttachment, int iEndAttachment, int ropeWidth, const char *pszMaterial, int numSegments)
{
	CRopeKeyframe *pRet = (CRopeKeyframe *)sub_10136580("keyframe_rope");
	if (!pRet)
		return 0;
	pRet->sub_1019ddc0(pStartEnt, iStartAttachment);
	pRet->sub_1019de30(pEndEnt, iEndAttachment);
	pRet->m_nRopeFlags &= ~0x40;
	pRet->m_bCreatedFromMapFile = 0;
	pRet->sub_1019e310();
	pRet->sub_1019f640(pszMaterial);
	pRet->m_flWidth = (float)ropeWidth;
	if (numSegments > 10)
		numSegments = 10;
	else if (numSegments < 2)
		numSegments = 2;
	pRet->m_nSegments = numSegments;
	return pRet;
}
// END FUNCTION

// FUNCTION: 0x1019dfb0 size=0xa5
#include "CRopeKeyframe.h"

CBaseEntity *sub_10136580(const char *pszClassname);

CRopeKeyframe *CRopeKeyframe::sub_1019dfb0(CBaseEntity *pStartEnt, int iStartAttachment, int nSlack, int ropeWidth, const char *pszMaterial, int numSegments)
{
	CRopeKeyframe *pRet = (CRopeKeyframe *)sub_10136580("keyframe_rope");
	if (!pRet)
		return 0;
	pRet->sub_1019ddc0(pStartEnt, iStartAttachment);
	pRet->sub_1019de30(0, 0);
	pRet->m_bCreatedFromMapFile = 0;
	pRet->m_n478 = 1;
	pRet->m_nRopeFlags &= ~0x40;
	pRet->sub_1019e310();
	pRet->sub_1019f640(pszMaterial);
	pRet->m_n474 = nSlack;
	pRet->m_flWidth = (float)ropeWidth;
	pRet->m_nSegments = (numSegments > 10) ? 10 : ((numSegments < 2) ? 2 : numSegments);
	return pRet;
}
// END FUNCTION

// FUNCTION: 0x1019e090 size=0x24
#include "CBaseFire.h"

void CBaseFire::sub_1019e090(char on)
{
	if (on)
		*(unsigned int *)((char *)this + 0x478) |= 4;
	else
		*(unsigned int *)((char *)this + 0x478) &= ~4;
}
// END FUNCTION

// FUNCTION: 0x1019e0d0 size=0x24
class CUnknown1019e0d0
{
public:
	char pad0[0x478];
	unsigned int m_flags478;

	void sub_1019e0d0(char on);
};

// TARGET: CUnknown1019e0d0::sub_1019e0d0
void CUnknown1019e0d0::sub_1019e0d0(char on)
{
	if (on)
		m_flags478 |= 8;
	else
		m_flags478 &= ~8;
}
// END FUNCTION

// FUNCTION: 0x1019e110 size=0x186
#include "CRopeKeyframe.h"
#include "CBaseAnimating.h"
#include "Vector.h"

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct SEnt {
	S10(a0) S10(a1) S10(a2) S10(a3) S10(a4) S10(a5) S10(a6) S10(a7) S10(a8) S10(a9)
	S10(b0) S10(b1) S10(b2)
	virtual void n0(); virtual void n1(); virtual void n2(); virtual void n3(); virtual void n4(); virtual void n5(); virtual void n6();
	virtual CBaseAnimating *vfunc137();
	S10(c0) S10(c1) S10(c2) S10(c3) S10(c4) S10(c5) S10(c6)
	virtual void q0(); virtual void q1(); virtual void q2(); virtual void q3(); virtual void q4(); virtual void q5(); virtual void q6(); virtual void q7(); virtual void q8();
	virtual const Vector &vfunc217();
};

void sub_1042db40(const Vector &a, const Vector &b, int n, float slack, float *pOut1, float *pOut2);

bool CRopeKeyframe::sub_1019e110(float slack)
{
	SEnt *ents[2] = { (SEnt *)((EHANDLE *)&m_hStartPoint)->Get(), (SEnt *)((EHANDLE *)&m_hEndPoint)->Get() };
	if (!ents[0] || !ents[1])
		return false;

	float m[3];
	Vector v1 = ents[0]->vfunc217();
	if (ents[0]->vfunc137())
		ents[0]->vfunc137()->sub_10092ef0(m_iStartAttachment, &v1.x, m);
	Vector v2 = ents[1]->vfunc217();
	if (ents[1]->vfunc137())
		ents[1]->vfunc137()->sub_10092ef0(m_iEndAttachment, &v2.x, m);

	float flLen, flSlack;
	sub_1042db40(v1, v2, 10, slack, &flLen, &flSlack);
	int a = (int)flLen;
	if (a != m_n474) {
		*((unsigned char *)this + 0x1b1) = 1;
		m_n474 = a;
	}
	int b = (int)flSlack;
	if (b != m_n45c) {
		*((unsigned char *)this + 0x1b1) = 1;
		m_n45c = b;
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x1019e310 size=0xdc
#include "CRopeKeyframe.h"
#include "CUnknown101466e0.h"

struct EntInfo { CBaseEntity *m_pEntity; int m_serial; int m_unused; };
struct EntInfoList { int m_unused; EntInfo m_entries[1]; };
extern EntInfoList *g_10566458;

static inline CBaseEntity *ResolveHandle(unsigned int h)
{
	EntInfo *e;
	return (h != 0xffffffff && (e = &g_10566458->m_entries[h & 0x1fff], e->m_serial == (int)(h >> 13))) ? e->m_pEntity : 0;
}

void sub_10012247();

void CRopeKeyframe::sub_1019e310()
{
	sub_100b3b00();
	sub_1019e5d0();
	int nSegments = *(int *)((char *)this + 0x468);
	if (nSegments > 10)
		nSegments = 10;
	else if (nSegments < 2)
		nSegments = 2;
	*(int *)((char *)this + 0x468) = nSegments;
	sub_1019e8b0(1);
	*((char *)this + 0x48c) = ResolveHandle(*(unsigned int *)((char *)this + 0x490)) != 0;
	*((char *)this + 0x48d) = ResolveHandle(*(unsigned int *)((char *)this + 0x494)) != 0;
	((CUnknown101466e0 *)((char *)this + 0x1b0))->sub_101466e0(1);
	*((char *)this + 0x1b1) = 1;
	sub_100ac4e0((int)sub_10012247, 0, 0);
	*(float *)((char *)this + 0x17c) = 0.1f;
}
// END FUNCTION

// FUNCTION: 0x1019e430 size=0xdc
#include "CRopeKeyframe.h"
#include "IVEngineServer.h"
#include "CGlobalEntityList.h"

extern IVEngineServer *g_1070b22c;
extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];

// TARGET: CRopeKeyframe::vfunc113
void CRopeKeyframe::vfunc113()
{
	sub_100a0bc0();
	if (m_bCreatedFromMapFile) {
		if (m_nMaterialIndex == -1)
			m_nMaterialIndex = g_1070b22c->vfunc13("cable/cable.vmt", 0);
		CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, m_pszName458 ? m_pszName458 : g_106b8540, 0, 0);
		if (pEnt && pEnt->m_pEdict2e0) {
			sub_100b3b00();
			pEnt->sub_100b3b00();
			sub_1019de30(pEnt, 0);
			if (*(unsigned char *)((char *)this + 0x204) & 1)
				m_nRopeFlags |= 1;
		} else {
			if (m_n478 & 2)
				m_nRopeFlags &= 0xfffffff7;
		}
		sub_1019ddc0(this, 0);
		sub_1019e310();
	}
}
// END FUNCTION

// FUNCTION: 0x1019e550 size=0x22
#include "CRopeKeyframe.h"
struct CUnknown100b5190 { char sub_100b5190(); };	// a CBaseEntity test (stub 0x10014da8)

// TARGET: CRopeKeyframe::vfunc77
void CRopeKeyframe::vfunc77()
{
	if (!((CUnknown100b5190 *)this)->sub_100b5190())
		m_nRopeFlags &= ~0x8u;
	CBaseEntity::vfunc77();
}
// END FUNCTION

// FUNCTION: 0x1019e590 size=0x22
#include "CRopeKeyframe.h"
struct CUnknown100b5190 { char sub_100b5190(); };	// a CBaseEntity test (stub 0x10014da8)

// TARGET: CRopeKeyframe::vfunc78
void CRopeKeyframe::vfunc78()
{
	if (((CUnknown100b5190 *)this)->sub_100b5190())
		m_nRopeFlags |= 8;
	CBaseEntity::vfunc78();
}
// END FUNCTION

// FUNCTION: 0x1019e5d0 size=0xf7
#include "CRopeKeyframe.h"
#include "CEHandleGet.h"
#include "CEntityVSlots.h"

static inline float LengthG(const Vector &v)
{
	float s = v.z * v.z;
	s += v.x * v.x;
	s += v.y * v.y;
	return FastSqrt(s);
}

void CRopeKeyframe::sub_1019e5d0()
{
	if (EHandle_Get(m_hEndPoint))
	{
		CEntityVSlots *pStart = (CEntityVSlots *)EHandle_Get(m_hStartPoint);
		CEntityVSlots *pEnd = (CEntityVSlots *)EHandle_Get(m_hEndPoint);
		Vector *pEndPos = pEnd->slot217();
		Vector *pStartPos = pStart->slot217();
		m_n474 = (int)LengthG(*pStartPos - *pEndPos);
	}
	else
		m_n474 = 0;
}
// END FUNCTION

// FUNCTION: 0x1019e710 size=0x15
#include "globalvars.h"

// TARGET: sub_1019e710
void __fastcall sub_1019e710(void *self)
{
	*(float *)((char *)self + 0x480) = gpGlobals->curtime + 1.0;
}
// END FUNCTION

// FUNCTION: 0x1019e740 size=0x6b
#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)

struct AnimPart
{
	char sub_10092ef0(int attachment, float *origin, float *angles);
};

struct EntVt
{
	S100(a) S10(b0) S10(b1) S10(b2)
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4();
	virtual void c5(); virtual void c6();
	virtual AnimPart *GetBaseAnimating();
	S10(d0) S10(d1) S10(d2) S10(d3) S10(d4) S10(d5) S10(d6)
	virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4();
	virtual void e5(); virtual void e6(); virtual void e7(); virtual void e8();
	virtual float *GetAbsOrigin();
};

// TARGET: sub_1019e740
bool __stdcall sub_1019e740(EntVt *pEnt, int attachment, float *pOut)
{
	if (!pEnt)
		return false;
	if (attachment > 0)
	{
		AnimPart *pAnim = pEnt->GetBaseAnimating();
		float angles[3];
		if (!pAnim || !pAnim->sub_10092ef0(attachment, pOut, angles))
			return false;
	}
	else
	{
		float *p = pEnt->GetAbsOrigin();
		pOut[0] = p[0];
		pOut[1] = p[1];
		pOut[2] = p[2];
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x1019e7d0 size=0xa6
#include "QAngle.h"
#include "CBaseEntity.h"
#include "CRopeKeyframe.h"

struct RopeAnimView {
	bool sub_10092ef0(int iAttachment, Vector &origin, QAngle &angles);
};

#define V1(n) virtual void v##n();
#define V10(n) V1(n##0) V1(n##1) V1(n##2) V1(n##3) V1(n##4) V1(n##5) V1(n##6) V1(n##7) V1(n##8) V1(n##9)

namespace block_1019e7d0 {
struct EntVt {
	V10(0) V10(1) V10(2) V10(3) V10(4) V10(5) V10(6) V10(7) V10(8) V10(9)
	V10(10) V10(11) V10(12)
	V1(130) V1(131) V1(132) V1(133) V1(134) V1(135) V1(136)
	virtual RopeAnimView *GetBaseAnimating();
	V1(138) V1(139)
	V10(14) V10(15) V10(16) V10(17) V10(18) V10(19) V10(20)
	V1(210) V1(211) V1(212) V1(213) V1(214) V1(215) V1(216)
	virtual const Vector &GetAbsOrigin();
};
bool __stdcall sub_1019e740(EntVt *pEnt, int iAttachment, float *pOut)
{
	if (!pEnt)
		return false;
	if (iAttachment > 0) {
		RopeAnimView *pAnim = pEnt->GetBaseAnimating();
		QAngle angles;
		if (pAnim && pAnim->sub_10092ef0(iAttachment, *(Vector *)pOut, angles))
			return true;
		return false;
	}
	*(Vector *)pOut = pEnt->GetAbsOrigin();
	return true;
}
}
using namespace block_1019e7d0;
struct CRopeEndView { bool sub_1019e740(EntVt *pEnt, int iAttachment, float *pOut); };

// TARGET: CRopeKeyframe::sub_1019e7d0
bool CRopeKeyframe::sub_1019e7d0(int bEndPoint, float *pOut)
{
	if (bEndPoint == 0)
		return ((CRopeEndView *)this)->sub_1019e740((EntVt *)((EHANDLE *)&m_hStartPoint)->Get(), m_iStartAttachment, pOut);
	else
		return ((CRopeEndView *)this)->sub_1019e740((EntVt *)((EHANDLE *)&m_hEndPoint)->Get(), m_iEndAttachment, pOut);
}
// END FUNCTION

// FUNCTION: 0x1019e8b0 size=0x269
#include "utlmemory.h"
#include "CRopeKeyframe.h"
#include "CCollisionProperty.h"

void __cdecl sub_101cf390(int pThis, int pMins, int pMaxs);

#define VT10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define VT7(p)  virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6();

struct COriginVt
{
	VT10(a) VT10(b) VT10(c) VT10(d) VT10(e) VT10(f) VT10(g) VT10(h) VT10(i) VT10(j)
	VT10(k) VT10(l) VT10(m) VT10(n) VT10(o) VT10(p) VT10(q) VT10(r) VT10(s) VT10(t)
	VT10(u) VT7(v)
	virtual float *GetAbsOrigin();
};

void CRopeKeyframe::sub_1019e8b0(bool a)
{
	Vector vecEnd, vecStart;
	Vector vecMins, vecMaxs;

	if ( sub_1019e7d0(0, vecStart.Base()) )
	{
		if ( sub_1019e7d0(1, vecEnd.Base()) )
		{
			VectorMin( vecStart, vecEnd, vecMins );
			VectorMax( vecStart, vecEnd, vecMaxs );
			vecMins -= *(Vector *)((COriginVt *)this)->GetAbsOrigin();
			vecMaxs -= *(Vector *)((COriginVt *)this)->GetAbsOrigin();
		}
		else
		{
			vecMaxs = vecStart - *(Vector *)((COriginVt *)this)->GetAbsOrigin();
			vecMins = vecMaxs;
		}
	}
	else
	{
		vecMaxs.Init();
		vecMins.Init();
	}

	CCollisionProperty *pCollision = (CCollisionProperty *)((char *)this + 0x270);
	if ( *(Vector *)pCollision->vfunc1() == vecMins &&
	     *(Vector *)pCollision->vfunc2() == vecMaxs )
	{
		if ( a )
			sub_100b3b00();
	}
	else
	{
		sub_101cf390( (int)this, (int)vecMins.Base(), (int)vecMaxs.Base() );
	}
}
// END FUNCTION

// FUNCTION: 0x1019ebc0 size=0x161
#include "CRopeKeyframe.h"
#include "CEntityMessageFilter.h"
#include "CUnknown1070b22c.h"
#include "CEHandleGet.h"
extern CUnknown1070b22c *g_1070b22c;
extern "C" void *__cdecl __RTDynamicCast(void *pObject, long nVfDelta, void *pSrcType, void *pTargetType, int bIsReference);
extern char g_10538764[];
extern char g_1059290c[];
static __inline int ENTINDEX(int pEdict)
{
	return g_1070b22c->vfunc35(pEdict);
}
// TARGET: CRopeKeyframe::sub_1019ebc0
void CRopeKeyframe::sub_1019ebc0(int a, int b, CRopeKeyframe *pStop, int x, int y, int z)
{
	CEntityMessageFilter filter;
	filter.sub_1019d2f0(ENTINDEX(m_pEdict2e0));
	filter.sub_1019cf50();
	g_1070b22c->vfunc65(&filter, 0);
	g_1070b22c->vfunc72(x);
	g_1070b22c->vfunc72(y);
	g_1070b22c->vfunc72(z);
	g_1070b22c->vfunc66();
	CRopeKeyframe *pNext = (CRopeKeyframe *)__RTDynamicCast(EHandle_Get(m_hEndPoint), 0, g_10538764, g_1059290c, 0);
	if (pNext && pNext != pStop)
		pNext->sub_1000a84e(a, b, pStop, x, y, z);
}
// END FUNCTION

// FUNCTION: 0x1019ed90 size=0x63
#include "CRopeKeyframe.h"
struct RopeArg { int a, b; Vector v; int pad; int type; };
extern Vector g_1070d1b0;
void CRopeKeyframe::sub_1019ed90(RopeArg *p)
{
    Vector v;
    if (p->type == 3 || p->type == 14)
        v = p->v;
    else
        v = g_1070d1b0;
    sub_1000a84e(p->a, p->b, this, ((int *)&v)[0], ((int *)&v)[1], ((int *)&v)[2]);
}
// END FUNCTION

// FUNCTION: 0x1019ee20 size=0x8
namespace lifted {
int sub_10005371();
}
int __stdcall sub_1019ee20(int a0)
{
    return lifted::sub_10005371();
}
// END FUNCTION

// FUNCTION: 0x1019ee40 size=0x113
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CRopeKeyframe.h"
#include "ScopeTrace.h"

extern "C" int _strcmpi(const char *, const char *);
extern "C" void *__RTDynamicCast(void *inptr, long VfDelta, void *SrcType, void *TargetType, int isReference);
extern char g_10543c6c[];
extern char g_10538764[];
extern char g_1059290c[];


struct EdictUnknownView { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual CBaseEntity *vfunc4(); };
struct EdictView { char pad[0x40]; EdictUnknownView *m_pUnk; char pad44[0x4c - 0x44]; char m_bFree; };

bool CRopeKeyframe::sub_1019ee40()
{
    sub_1019f1f0(false);
    for (int i = 1; i < gpGlobals->m_nEdicts; i++) {
        EdictView *pEdict = (EdictView *)engine->vfunc38(i);
        if (pEdict && !pEdict->m_bFree) {
            CBaseEntity *pEnt;
            {
                ScopeTrace trace(g_10543c6c, g_106b8540);
                pEnt = pEdict->m_pUnk ? pEdict->m_pUnk->vfunc4() : 0;
            }
            CRopeKeyframe *pRope = (CRopeKeyframe *)__RTDynamicCast(pEnt, 0, g_10538764, g_1059290c, 0);
            if (pRope) {
                const char *a = m_name26c ? m_name26c : g_106b8540;
                const char *b = pRope->m_pszName458 ? pRope->m_pszName458 : g_106b8540;
                if (_strcmpi(b, a) == 0)
                    pRope->sub_1019f1f0(true);
            }
        }
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x1019efb0 size=0x198
#include "CRopeKeyframe.h"
#include "CEHandleGet.h"
#include "CEntityVSlots.h"
#include "CGlobalEntityList.h"

void sub_101cd940(CBaseEntity *pEntity);

void CRopeKeyframe::sub_1019efb0()
{
	if (m_flRemoveTime480 != 0.0f && m_flRemoveTime480 < gpGlobals->curtime) {
		sub_101cd940(this);
		return;
	}
	sub_1019e8b0(0);
	m_flNextThink = gpGlobals->curtime + 0.2f;
	CBaseEntity *pEnts[2];
	pEnts[0] = (CBaseEntity *)EHandle_Get(m_hStartPoint);
	pEnts[1] = (CBaseEntity *)EHandle_Get(m_hEndPoint);
	if ((m_nRopeFlags & 1) && pEnts[0] && pEnts[0]->m_pEdict2e0 && pEnts[1] && pEnts[1]->m_pEdict2e0) {
		const Vector *pEnd = ((CEntityVSlots *)pEnts[1])->slot217();
		const Vector *pStart = ((CEntityVSlots *)pEnts[0])->slot217();
		float dx = pStart->x - pEnd->x;
		float dy = pStart->y - pEnd->y;
		float dz = pStart->z - pEnd->z;
		float flDist = FastSqrt(dx * dx + (dy * dy + dz * dz));
		int nSlack = (int)flDist + m_n45c;
		if (nSlack != m_n474) {
			m_n474 = nSlack;
			m_bChanged1b1 = 1;
		}
	}
	bool *pValid[2] = { &m_bStartPointValid, &m_bEndPointValid };
	for (int i = 0; i < 2; i++) {
		bool bValid = pEnts[i] != 0;
		if (*pValid[i] != bValid) {
			*pValid[i] = bValid;
			m_bChanged1b1 = 1;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1019f1c0 size=0x13
#include "CRopeKeyframe.h"

int CRopeKeyframe::vfunc142(struct CTakeDamageInfo *a)
{
	if (m_nRopeFlags & 0x10)
		sub_1019ee40();
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1019f1f0 size=0x27
// TARGET: CRopeKeyframe::sub_1019f1f0
#include "CRopeKeyframe.h"

void CRopeKeyframe::sub_1019f1f0(int nBit)
{
	int *pFlags = &m_n478;
	*pFlags = *pFlags & ~(1 << nBit);
	*((char *)this + 0x1b1) = 1;
}
// END FUNCTION

// FUNCTION: 0x1019f230 size=0x1a
struct CUnk1019f230
{
	char m_pad0000[0x1b1];
	char m_bChanged1b1;	// 0x1b1
	char m_pad01b2[0x454 - 0x1b2];
	unsigned int m_n454;	// 0x454

	void sub_1019f230();
};

// TARGET: CUnk1019f230::sub_1019f230
void CUnk1019f230::sub_1019f230()
{
	unsigned int f = m_n454;
	if ((f & 4) == 0)
	{
		*(volatile unsigned int *)&m_n454 = f | 4;
		*(volatile char *)&m_bChanged1b1 = 1;
	}
}
// END FUNCTION

// FUNCTION: 0x1019f260 size=0x32
#include "CHL2_Player.h"
#include "MvsnSec0.h"
struct CFlagHolder_1019f260;
struct CFlagVar_1019f260 {
    unsigned int m_Value;
    void NetworkStateChanged();
    void Set(const unsigned int &v) { m_Value = v; NetworkStateChanged(); }
};
struct CFlagHolder_1019f260 {
    char pad[0x1b1];
    bool m_b1b1;
    char pad2[0x454 - 0x1b2];
    CFlagVar_1019f260 m_flags454;
    void sub_1019f260(bool bClear);
};
inline void CFlagVar_1019f260::NetworkStateChanged()
{
    CFlagHolder_1019f260 *p = (CFlagHolder_1019f260 *)((char *)this - 0x454);
    p->m_b1b1 = true;
}
// TARGET: CFlagHolder_1019f260::sub_1019f260
void CFlagHolder_1019f260::sub_1019f260(bool bClear)
{
    unsigned int want = 0;
    if (!bClear)
        want = 0x20;
    if ((m_flags454.m_Value & 0x20) != want)
    {
        m_flags454.m_Value |= want;
        bool *pb = &m_b1b1;
        *pb = true;
    }
}
// END FUNCTION

// FUNCTION: 0x1019f2b0 size=0x1c6
#include "CRopeKeyframe.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl atoi(const char *);

bool CRopeKeyframe::vfunc110(const char *szKeyName, const char *szValue)
{
	if (_strcmpi(szKeyName, "Breakable") == 0) {
		if (atoi(szValue) == 1)
			m_nRopeFlags |= 0x10;
	} else if (_strcmpi(szKeyName, "Collide") == 0) {
		if (atoi(szValue) == 1)
			m_nRopeFlags |= 4;
	} else if (_strcmpi(szKeyName, "Barbed") == 0) {
		if (atoi(szValue) == 1)
			m_nRopeFlags |= 2;
	} else if (_strcmpi(szKeyName, "Dangling") == 0) {
		if (atoi(szValue) == 1)
			m_n478 &= ~2;
		return true;
	} else if (_strcmpi(szKeyName, "Type") == 0) {
		int iType = atoi(szValue);
		if (iType == 0)
			m_nSegments = 10;
		else if (iType == 1)
			m_nSegments = 4;
		else
			m_nSegments = 2;
	} else if (_strcmpi(szKeyName, "RopeShader") == 0) {
		int iShader = atoi(szValue);
		if (iShader == 0)
			sub_1019f640("cable/cable.vmt");
		else if (iShader == 1)
			sub_1019f640("cable/rope.vmt");
		else
			sub_1019f640("cable/chain.vmt");
	}
	return CBaseEntity::vfunc110(szKeyName, szValue);
}
// END FUNCTION

// FUNCTION: 0x1019f500 size=0x23
#include "CUnknown100bc0f0.h"

class CUnknown1019f500
{
public:
	char pad0[0x484];
	int m_unk484;

	void sub_1019f500(CInputData100bc0f0 *data);
};

// TARGET: CUnknown1019f500::sub_1019f500
void CUnknown1019f500::sub_1019f500(CInputData100bc0f0 *data)
{
	if (data->m_type == 1)
		m_unk484 = data->m_value;
	else
		m_unk484 = 0;
}
// END FUNCTION

// FUNCTION: 0x1019f540 size=0x13
#include "CRopeKeyframe.h"
void __fastcall sub_1000350d(CRopeKeyframe *self);

// TARGET: CRopeKeyframe::vfunc103
void CRopeKeyframe::vfunc103()
{
	sub_1000350d(this);
	vfunc104();
}
// END FUNCTION

// FUNCTION: 0x1019f570 size=0x95
#include "CRopeKeyframe.h"

extern char *(__cdecl *g_109f384c)(const char *, const char *);
extern int (__cdecl *g_109f388c)(char *, int, const char *, ...);
extern char g_106b8540[];
int *sub_10002095(int *pTmp, const char *pStr);

void CRopeKeyframe::vfunc104()
{
	int tmp;
	char szBuf[260];
	const char *name = *(const char **)((char *)this + 0x488);
	if (!name)
		name = g_106b8540;
	if (!g_109f384c(name, ".vmt")) {
		name = *(const char **)((char *)this + 0x488);
		if (!name)
			name = g_106b8540;
		g_109f388c(szBuf, sizeof(szBuf), "%s.vmt", name);
		*(int *)((char *)this + 0x488) = *sub_10002095(&tmp, szBuf);
	}
	name = *(const char **)((char *)this + 0x488);
	if (!name)
		name = g_106b8540;
	*(int *)((char *)this + 0x46c) = engine->vfunc13(name, 0);
}
// END FUNCTION

// FUNCTION: 0x1019f640 size=0x40
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CRopeKeyframe.h"
#include "string_t.h"
struct CRopeKeyframeView1019f640
{
    char m_pad0[0x488];
    string_t m_iszMaterial;
};
string_t sub_1042bff0(const char *pszName);
inline const char *STRINGR(const string_t &s) { return s.pszValue ? s.pszValue : g_106b8540; }

// TARGET: CRopeKeyframe::sub_1019f640
void CRopeKeyframe::sub_1019f640(const char *pszMaterial)
{
    CRopeKeyframeView1019f640 *p = (CRopeKeyframeView1019f640 *)this;
    p->m_iszMaterial = sub_1042bff0(pszMaterial);
    m_nMaterialIndex = engine->vfunc13(STRINGR(p->m_iszMaterial), 0);
}
// END FUNCTION

// FUNCTION: 0x1019f690 size=0x1a
#include "CRopeKeyframe.h"

char CRopeKeyframe::vfunc86(int a, int b, int c, int d, int e)
{
	if (!m_b450)
	{
		m_b450 = 1;
		return 1;
	}
	return sub_100ab020(a, b, c, d, e);
}
// END FUNCTION
