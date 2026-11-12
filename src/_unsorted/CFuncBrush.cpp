// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10114d70 size=0xa
#include "CBaseEntity.h"
#include "CFuncBrush.h"
// TARGET: CFuncBrush::vfunc117
char CFuncBrush::vfunc117() { char c = ((CBaseEntity *)this)->CBaseEntity::vfunc117(); return (c & (char)0xfd) | 8; }
// END FUNCTION

// FUNCTION: 0x10114d90 size=0x3
#include "CFuncBrush.h"
bool CFuncBrush::vfunc128()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1013de10 size=0x6
#include "datamap.h"
#include "CFuncBrush.h"
namespace lifted {
extern char g_10579aa8;
}
datamap_t *CFuncBrush::vfunc82()
{
    return (datamap_t *)&lifted::g_10579aa8;
}
// END FUNCTION

// FUNCTION: 0x1013dea0 size=0x16d
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CFuncBrush.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

void CFuncBrush::vfunc103()
{
	CBaseEntity *pEnt = (CBaseEntity *)this;
	CCollisionProperty *pColl;
	pEnt->vfunc93(8, 0);
	{
		ScopeTrace trace("CBaseEntity::SetSolid", pEnt->m_name26c ? pEnt->m_name26c : g_106b8540);
		pColl = (CCollisionProperty *)((char *)this + 0x270);
		pColl->sub_100dc480(1);
	}
	if (*(int *)((char *)this + 0x450) == 1) {
		ScopeTrace trace("CBaseEntity::AddSolidFlags", pEnt->m_name26c ? pEnt->m_name26c : g_106b8540);
		pColl->sub_100dc580(pColl->m_usSolidFlags | 4);
	}
	int tmp;
	const char *pszModel = *pEnt->vfunc9(&tmp);
	if (!pszModel)
		pszModel = g_106b8540;
	pEnt->vfunc105(pszModel);
	if (*(int *)((char *)this + 0x454))
		sub_1013e420();
	if (!pEnt->m_name26c || !*(int *)((char *)this + 0x124))
		pEnt->sub_100b3580(0x1000000);
	pEnt->sub_100b3b00();
	((CFuncBrushSlots *)this)->slot223();
}
// END FUNCTION

// FUNCTION: 0x1013e070 size=0xe
#include "CFuncBrush.h"
namespace lifted {
int __stdcall sub_10004b92(int, int, int);
}
bool CFuncBrush::vfunc223()
{
    lifted::sub_10004b92(0, 0, 0);
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1013e090 size=0x26d
#include "CBaseEntity.h"
#include "CFuncBrush.h"
#include "engineserver.h"
#include "Vector.h"

__declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);
void sub_101434b0(int nIndex, int nLine, const char *pszText, float flDuration, int r, int g, int b, int a);

#define RV1(n) virtual void v##n();
#define RV10(p) RV1(p##0) RV1(p##1) RV1(p##2) RV1(p##3) RV1(p##4) RV1(p##5) RV1(p##6) RV1(p##7) RV1(p##8) RV1(p##9)
#define RV100(p) RV10(p##0) RV10(p##1) RV10(p##2) RV10(p##3) RV10(p##4) RV10(p##5) RV10(p##6) RV10(p##7) RV10(p##8) RV10(p##9)

struct CFuncBrushVecSlots
{
	RV100(a) RV100(b) RV10(c) RV1(d0) RV1(d1) RV1(d2) RV1(d3) RV1(d4) RV1(d5) RV1(d6)
	virtual const Vector &GetAbsOrigin();	// 217
	virtual void v218();
	virtual const Vector &GetAbsAngles();	// 219
	virtual const Vector &GetLocalOrigin();	// 220
	virtual const Vector &GetLocalAngles();	// 221
};

#define SLOTS ((CFuncBrushVecSlots *)this)

// TARGET: CFuncBrush::vfunc124
int CFuncBrush::vfunc124()
{
	int nOffset = ((CBaseEntity *)this)->CBaseEntity::vfunc124();

	if (*(unsigned char *)((char *)this + 0x224) & 1)
	{
		char tempstr[512];
		int ed;

		Q_snprintf(tempstr, sizeof(tempstr), "angles: %g %g %g",
			(double)SLOTS->GetLocalAngles()[0], (double)SLOTS->GetLocalAngles()[1], (double)SLOTS->GetLocalAngles()[2]);
		ed = *(int *)((char *)this + 0x2e0);
		sub_101434b0(engine->vfunc35(ed), nOffset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
		nOffset++;

		Q_snprintf(tempstr, sizeof(tempstr), "origin: %g %g %g",
			(double)SLOTS->GetLocalOrigin().x, (double)SLOTS->GetLocalOrigin().y, (double)SLOTS->GetLocalOrigin().z);
		ed = *(int *)((char *)this + 0x2e0);
		sub_101434b0(engine->vfunc35(ed), nOffset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
		nOffset++;

		Q_snprintf(tempstr, sizeof(tempstr), "absangles: %g %g %g",
			(double)SLOTS->GetAbsAngles()[0], (double)SLOTS->GetAbsAngles()[1], (double)SLOTS->GetAbsAngles()[2]);
		ed = *(int *)((char *)this + 0x2e0);
		sub_101434b0(engine->vfunc35(ed), nOffset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
		nOffset++;

		Q_snprintf(tempstr, sizeof(tempstr), "absorigin: %g %g %g",
			(double)SLOTS->GetAbsOrigin().x, (double)SLOTS->GetAbsOrigin().y, (double)SLOTS->GetAbsOrigin().z);
		ed = *(int *)((char *)this + 0x2e0);
		sub_101434b0(engine->vfunc35(ed), nOffset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
		nOffset++;
	}

	return nOffset;
}
// END FUNCTION

// FUNCTION: 0x1013e480 size=0xf
#include "CFuncBrush.h"
int CFuncBrush::vfunc241()
{
    return ((unsigned)(~(*(int *)((char *)this + 0x19c))) >> 6) & 1;
}
// END FUNCTION

// FUNCTION: 0x1013ec30 size=0x1e
#include "CFuncBrush.h"

void sub_100aa7b0(void *p);

// TARGET: CFuncBrush::vfunc5
CFuncBrush *CFuncBrush::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
