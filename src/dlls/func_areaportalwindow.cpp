// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 14 blocks
#include "vampire.h"

// FUNCTION: 0x1010cd30 size=0x6
#include "CFuncAreaPortalWindow.h"
namespace lifted {
extern char g_107096ac;
}
int CFuncAreaPortalWindow::vfunc80()
{
    return (int)&lifted::g_107096ac;
}
// END FUNCTION

// FUNCTION: 0x1010cd50 size=0x3
#include "CFuncAreaPortalWindow.h"
int CFuncAreaPortalWindow::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1010cd70 size=0xa
#include "SendTable.h"
SendTable g_107098c8;
// END FUNCTION

// FUNCTION: 0x1010cdf0 size=0x5
int sub_1010ce30(void);
int g_107098c4 = ((int (*)(int))sub_1010ce30)(0);
// END FUNCTION

// FUNCTION: 0x1010ce30 size=0x10c
#include "SendProp.h"

class SendTable
{
public:
	void sub_1000e8fe(SendProp *pProps, int nProps, const char *pNetTableName);
};

SendProp sub_10007bfd(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, int arg6, void *proxy);
SendProp sub_1000bf2d(const char *pVarName, int offset, SendTable *pTable, void *proxy);
SendProp sub_10006cc1(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, float fLow, float fHigh, void *proxy);
void sub_10009539();
void sub_10246300();

extern SendTable g_107098c8;
extern SendTable *g_1055282c;
extern const char *g_1056e15c;

// TARGET: sub_1010ce30
int sub_1010ce30()
{
	static SendProp props[] = {
		sub_10007bfd("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_1000bf2d("baseclass", 0, g_1055282c, (void *)sub_10009539),
		sub_10006cc1("m_flFadeDist", 0x45c, 4, 0, 4, 0.0f, -121121.121094f, (void *)sub_10246300),
		sub_10006cc1("m_flFadeStartDist", 0x458, 4, 0, 4, 0.0f, -121121.121094f, (void *)sub_10246300),
		sub_10006cc1("m_flTranslucencyLimit", 0x460, 4, 0, 4, 0.0f, -121121.121094f, (void *)sub_10246300),
		sub_10007bfd("m_iBackgroundModelIndex", 0x468, 4, 0xb, 0, 0, 0),
	};
	g_107098c8.sub_1000e8fe(props + 1, 5, g_1056e15c);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1010cfc0 size=0x6
#include "CFuncAreaPortalWindow.h"
namespace lifted {
extern char g_1056e160;
}
datamap_t * CFuncAreaPortalWindow::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1056e160);
}
// END FUNCTION

// FUNCTION: 0x1010cfe0 size=0x5
int sub_1010d020(void);
int g_107098c0 = ((int (*)(int))sub_1010d020)(0);
// END FUNCTION

// FUNCTION: 0x1010d020 size=0x1a
namespace lifted {
extern int g_1056e160;
extern int g_1056e164;
extern char g_1056e1a4;
}
int sub_1010d020()
{
    lifted::g_1056e164 = 5;
    lifted::g_1056e160 = (int)&lifted::g_1056e1a4;
    return (int)&lifted::g_1056e160;
}
// END FUNCTION

// FUNCTION: 0x1010d050 size=0x1c
#include "CAreaPortal.h"

void __fastcall sub_1010c780(void *p);
extern int vt_1045e8ac[];

// TARGET: sub_1010d050
void *__fastcall sub_1010d050(void *p)
{
	sub_1010c780(p);
	*(int **)p = vt_1045e8ac;
	*(int *)((char *)p + 0x468) = 0;
	return p;
}
// END FUNCTION

// FUNCTION: 0x1010d080 size=0x1e
#include "CFuncAreaPortalWindow.h"

void sub_100aa7b0(void *p);

// TARGET: CFuncAreaPortalWindow::vfunc5
CBaseEntity *CFuncAreaPortalWindow::vfunc5(unsigned int flags)
{
	sub_100154bf();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1010d0b0 size=0xb
namespace lifted {
extern char g_1045e8ac;
int sub_100156b8();
}
struct CUnknown1010d0b0 { int sub_1010d0b0(); };
int CUnknown1010d0b0::sub_1010d0b0()
{
    *(int *)this = (int)&lifted::g_1045e8ac;
    return lifted::sub_100156b8();
}
// END FUNCTION

// FUNCTION: 0x1010d0d0 size=0x24
#include "CFuncAreaPortalWindow.h"


// TARGET: CFuncAreaPortalWindow::vfunc103
void CFuncAreaPortalWindow::vfunc103()
{
    vfunc104();
    engine->vfunc102(*(int *)((char *)this + 0x450), 1);
}
// END FUNCTION

// FUNCTION: 0x1010d110 size=0xce
#include "CGlobalEntityList.h"
#include "CFuncAreaPortalWindow.h"

extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];

#define STRING(x) ((x) ? (x) : g_106b8540)

void CFuncAreaPortalWindow::vfunc113()
{
    int nDummy;
    CBaseEntity::vfunc113();
    CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, STRING(m_pszFadeEntity), 0, 0);
    if (pEnt) {
        const char *pszModel = *pEnt->vfunc9(&nDummy);
        vfunc105(STRING(pszModel));
        m_nFadeValue = vfunc8();
        *(unsigned int *)((char *)pEnt + 0x19c) |= 0x40;
    }
    const char *pszName = *(const char **)((char *)this + 0x20c);
    pEnt = g_106eb5d8.sub_100f7770(0, STRING(pszName), 0, 0);
    if (pEnt) {
        const char *pszModel = *pEnt->vfunc9(&nDummy);
        vfunc105(STRING(pszModel));
        *(unsigned int *)((char *)pEnt + 0x19c) |= 0x40;
    }
    sub_100b3b00();
}
// END FUNCTION

// FUNCTION: 0x1010d220 size=0x122
#include "CBaseEntity.h"
#include "CFuncAreaPortalWindow.h"
#include "CFuncAreaPortalBase.h"
#include "CCollisionProperty.h"
#include "matrix3x4_t.h"

#define CV(n) virtual void s##n();
struct CollView {
	CV(0)
	virtual Vector *s1();
	virtual Vector *s2();
	CV(3) CV(4) CV(5) CV(6) CV(7)
	virtual Vector *s8();
	virtual Vector *s9(int a);
	virtual matrix3x4_t *s10();
};

#define EV(n) virtual void e##n();
#define EV10(p) EV(p##0) EV(p##1) EV(p##2) EV(p##3) EV(p##4) EV(p##5) EV(p##6) EV(p##7) EV(p##8) EV(p##9)
struct CEngineView
{
	EV10(0) EV10(1) EV10(2) EV10(3) EV10(4) EV10(5) EV10(6) EV10(7) EV10(8) EV10(9)
	EV(100) EV(101)
	virtual void e102(int nKey, int bOpen);
};

extern Vector g_1070d9d0;
extern CEngineView *g_1070b22c;
void sub_10138130(const float *pIn, const matrix3x4_t *pXform, float *pOut);
float sub_1013c7e0(const Vector &mins, const Vector &maxs, const Vector &point);

inline void VectorITransform(const Vector &in1, const matrix3x4_t &in2, Vector &out)
{
	sub_10138130(&in1.x, &in2, &out.x);
}

bool CFuncAreaPortalWindow::vfunc241(const float *pViewOrigin)
{
	if (!((CFuncAreaPortalBase *)this)->vfunc241(pViewOrigin))
		return false;
	CCollisionProperty *pColl = (CCollisionProperty *)((char *)this + 0x270);
	CollView *pView = (CollView *)pColl;
	Vector vecLocal;
	if (!(pColl->m_usSolidFlags & 0x80) && pColl->m_nSolidType != 2 && pColl->m_nSolidType != 0 && *pView->s9(0) != g_1070d9d0)
		VectorITransform(*(const Vector *)pViewOrigin, *pView->s10(), vecLocal);
	else
		VectorSubtract(*(const Vector *)pViewOrigin, *pView->s8(), vecLocal);
	float flDistSqr = sub_1013c7e0(*pView->s1(), *pView->s2(), vecLocal);
	float flLimit = *(float *)((char *)this + 0x45c) + 10.0f;
	if (flDistSqr > flLimit * flLimit) {
		g_1070b22c->e102(*(int *)((char *)this + 0x450), 0);
		return false;
	}
	g_1070b22c->e102(*(int *)((char *)this + 0x450), 1);
	return true;
}
// END FUNCTION
