// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10115be0 size=0x3
#include "CFuncMoveLinear.h"
bool CFuncMoveLinear::vfunc128()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10115cc0 size=0x6
#include "datamap.h"
#include "CFuncMoveLinear.h"
namespace lifted {
extern char g_10570868;
}
datamap_t *CFuncMoveLinear::vfunc82()
{
    return (datamap_t *)&lifted::g_10570868;
}
// END FUNCTION

// FUNCTION: 0x101163f0 size=0x92
#include "CFuncMoveLinear.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;

bool CFuncMoveLinear::vfunc223()
{
	const char *name;
	if (this)
		name = *(const char **)((char *)this + 0x26c) ? *(const char **)((char *)this + 0x26c) : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseEntity::IsSolidFlagSet";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	unsigned char bit = (*((unsigned char *)this + 0x2b4) >> 2) & 1;
	(*g_109f3680)--;
	if (!bit)
		sub_100a6150(0, 0, 0);
	return true;
}
// END FUNCTION

// FUNCTION: 0x10116550 size=0x8
#include "CBaseEntity.h"
#include "CFuncMoveLinear.h"
// TARGET: CFuncMoveLinear::sub_10116550
unsigned char CFuncMoveLinear::sub_10116550()
{
    unsigned char b;
    b = ((CBaseEntity *)this)->CBaseEntity::vfunc117();
    b &= 0xfd;
    return b;
}
// END FUNCTION

// FUNCTION: 0x10116bf0 size=0xed
#include "CFuncMoveLinear.h"

struct COutputX { void sub_10010794(CFuncMoveLinear *a, CFuncMoveLinear *b, int c); };
__declspec(dllimport) void Warning(const char *, ...);
extern struct { char pad[0xc]; float curtime; } *g_1070b228;
void sub_10007180();

typedef Vector *(__fastcall *Slot220)(CFuncMoveLinear *);
#define SLOT220(p) ((*(Slot220 **)(p))[220](p))

void CFuncMoveLinear::sub_10116bf0()
{
    ((COutputX *)((char *)this + 0x590))->sub_10010794(this, this, 0);
    sub_100ac4e0((int)sub_10007180, 0, 0);
    *(float *)((char *)this + 0x17c) = g_1070b228->curtime + 0.1;
    sub_10013912();
    Vector *p = SLOT220(this);
    if (*p == m_vecPosition2) {
        ((COutputX *)((char *)this + 0x5c0))->sub_10010794(this, this, 0);
        return;
    }
    p = SLOT220(this);
    if (*p == m_vecPosition1) {
        ((COutputX *)((char *)this + 0x5a8))->sub_10010794(this, this, 0);
        return;
    }
    Warning("%s done moving, at invalid position?\n", sub_100ab4f0());
}
// END FUNCTION

// FUNCTION: 0x10116d20 size=0x107
#include "CFuncMoveLinear.h"

#define SV1(n) virtual void n();
#define SV10(p) SV1(p##0) SV1(p##1) SV1(p##2) SV1(p##3) SV1(p##4) SV1(p##5) SV1(p##6) SV1(p##7) SV1(p##8) SV1(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)

struct CMoveLinearSlotView
{
	SV100(a) SV100(b) SV10(c0) SV10(c1)
	virtual float *vfunc220();
};

void CFuncMoveLinear::vfunc173(void *pActivator, void *pCaller, int useType, float flValue)
{
	if (useType != 2)
		return;
	if (flValue > 1.0)
		flValue = 1.0f;
	Vector vecMove = m_vecPosition1 + flValue * (m_vecPosition2 - m_vecPosition1);
	Vector vecDelta = vecMove - *(Vector *)((CMoveLinearSlotView *)this)->vfunc220();
	float flSpeed = vecDelta.Length() * 10.0f;
	sub_10116570(vecMove, flSpeed);
}
// END FUNCTION

// FUNCTION: 0x101174a0 size=0x40
#include "CFuncMoveLinear.h"
#include "CBaseEntity.h"
#include "CUnknown101c26d0.h"
// TARGET: CFuncMoveLinear::vfunc178
void CFuncMoveLinear::vfunc178(CBaseEntity *pOther)
{
	if (m_flBlockDamage56c != 0.0f) {
		CUnknown101c26d0 info;
		pOther->sub_100a1250(info.sub_101c26d0(this, this, m_flBlockDamage56c, 1, 0, 0, -1));
	}
}
// END FUNCTION

// FUNCTION: 0x101174f0 size=0x1c4
#include "CFuncMoveLinear.h"
#include "CEntityVSlots.h"

__declspec(dllimport) int Q_snprintf(char *, int, const char *, ...);
void sub_101434b0(int entindex, int line, const char *text, int duration, int r, int g, int b, int a);

int CFuncMoveLinear::vfunc124()
{
	int text_offset = sub_100a02b0();
	if (m_bDebugOverlays224 & 1) {
		char tempstr[512];
		float flTravelDist = (m_vecPosition1 - m_vecPosition2).Length();
		float flCurDist = (m_vecPosition1 - *((CEntityVSlots *)this)->slot220()).Length();
		float flRatio = 1.0f / flTravelDist;
		Q_snprintf(tempstr, sizeof(tempstr), "Current Pos: %3.3f", flRatio * flCurDist);
		int nEdict = m_pEdict2e0;
		sub_101434b0(engine->vfunc35(nEdict), text_offset, tempstr, 0, 255, 255, 255, 255);
		text_offset++;
		double flTargetDist = (m_vecPosition1 - m_vecFinalDest).Length();
		Q_snprintf(tempstr, sizeof(tempstr), "Target Pos: %3.3f", flRatio * flTargetDist);
		nEdict = m_pEdict2e0;
		sub_101434b0(engine->vfunc35(nEdict), text_offset, tempstr, 0, 255, 255, 255, 255);
		text_offset++;
	}
	return text_offset;
}
// END FUNCTION

// FUNCTION: 0x10117740 size=0x78
#include "CFuncMoveLinear.h"
void sub_100aa7b0(void *p);

CFuncMoveLinear *CFuncMoveLinear::vfunc5(unsigned int flags)
{
	m_Output5f0.sub_100cd2d0();
	m_Output5d8.sub_100cd2d0();
	m_Output5c0.sub_100cd2d0();
	m_Output5a8.sub_100cd2d0();
	m_Output590.sub_100cd2d0();
	m_Output578.sub_100cd2d0();
	m_Output4bc.sub_100cd2d0();
	m_Output4a4.sub_100cd2d0();
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
