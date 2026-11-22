// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 25 blocks
#include "vampire.h"

// FUNCTION: 0x10115be0 size=0x3
#include "CFuncMoveLinear.h"
bool CFuncMoveLinear::vfunc128()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10115c00 size=0x8b
#include "platform.h"
#include "CBaseEntity.h"

void *sub_100aa720(int size);
extern void *vt_10461bcc[];
extern char g_10570e78[];
void __fastcall sub_1000d5ee(void *pThis);
void __fastcall sub_10002ddd(void *pThis);

// TARGET: momentary_door
DLL_EXPORT CBaseEntity *momentary_door()
{
	void *mem = sub_100aa720(0x608);
	CBaseEntity *p;
	if (mem)
	{
		p = (CBaseEntity *)mem;
		sub_1000d5ee(p);
		sub_10002ddd((char *)p + 0x578);
		sub_10002ddd((char *)p + 0x590);
		sub_10002ddd((char *)p + 0x5a8);
		sub_10002ddd((char *)p + 0x5c0);
		sub_10002ddd((char *)p + 0x5d8);
		sub_10002ddd((char *)p + 0x5f0);
		*(void ***)p = vt_10461bcc;
	}
	else
		p = 0;
	p->vfunc106(g_10570e78);
	return p;
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

// FUNCTION: 0x10115ce0 size=0x5
int * sub_10115d20(void);
int * g_1070a9ec = ((int * (*)(int))sub_10115d20)(0);
// END FUNCTION

// FUNCTION: 0x10115d20 size=0x264
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
extern int g_10570868[2];
void sub_100118c9();
void sub_1000713a();
void sub_10009728();
void sub_1000bd93();
void sub_100012da();
void sub_1001361f();
void sub_1001572b();
void sub_10007180();

// TARGET: sub_10115d20
int *sub_10115d20()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 1, "m_flStartPosition", {0x570, 0}, 1, 6, "StartPosition" },
        { 1, "m_flMoveDistance", {0x574, 0}, 1, 6, "MoveDistance" },
        { 1, "m_flBlockDamage", {0x56c, 0}, 1, 6, "BlockDamage" },
        { 0x11, "m_soundStart", {0x55c, 0}, 1, 6, "startsound" },
        { 0x11, "m_soundStop", {0x560, 0}, 1, 6, "stopsound" },
        { 0x11, "m_soundLoop", {0x568, 0}, 1, 6, "loopsound" },
        { 0, "InputOpen", {0, 0}, 1, 8, "Open", 0, (void *)sub_100118c9 },
        { 0, "InputClose", {0, 0}, 1, 8, "Close", 0, (void *)sub_1000713a },
        { 1, "InputSetPosition", {0, 0}, 1, 8, "SetPosition", 0, (void *)sub_10009728 },
        { 0, "InputStartMoving", {0, 0}, 1, 8, "StartMoving", 0, (void *)sub_1000bd93 },
        { 0, "InputStopMoving", {0, 0}, 1, 8, "StopMoving", 0, (void *)sub_100012da },
        { 0, "InputToggleMovement", {0, 0}, 1, 8, "ToggleMovement", 0, (void *)sub_1001361f },
        { 1, "InputSetSpeed", {0, 0}, 1, 8, "SetSpeed", 0, (void *)sub_1001572b },
        { 10, "m_OutPosition", {0x578, 0}, 1, 0x16, "Position", g_1055dc70 },
        { 10, "m_OutOnStop", {0x590, 0}, 1, 0x16, "OnStop", g_1055dc70 },
        { 10, "m_OnReachStart", {0x5a8, 0}, 1, 0x16, "OnReachStart", g_1055dc70 },
        { 10, "m_OnReachEnd", {0x5c0, 0}, 1, 0x16, "OnReachEnd", g_1055dc70 },
        { 10, "m_OnMoveTowardsStart", {0x5d8, 0}, 1, 0x16, "OnMoveTowardsStart", g_1055dc70 },
        { 10, "m_OnMoveTowardsEnd", {0x5f0, 0}, 1, 0x16, "OnMoveTowardsEnd", g_1055dc70 },
        { 0, "CFuncMoveLinearStopSound", {0, 0}, 1, 0x20, 0, 0, (void *)sub_10007180 },
    };
    g_10570868[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_10570868[0] = (int)&dataDesc[1];
    return g_10570868;
}
// END FUNCTION

// FUNCTION: 0x10116030 size=0x2fc
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include <math.h>
#include "CFuncMoveLinear.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

// TARGET: CFuncMoveLinear::vfunc103
void CFuncMoveLinear::vfunc103()
{
	CEntityVSlots *pSlots = (CEntityVSlots *)this;
	pSlots->slot171();
	pSlots->slot93(8, 0);
	sub_100b3b00();
	{
		int buf;
		const char *pszName = *pSlots->slot9(&buf);
		if (!pszName)
			pszName = g_106b8540;
		pSlots->slot105(pszName);
	}
	if (m_flSpeed <= 0)
		m_flSpeed = 100.0f;
	if (m_fl574 <= 0) {
		Vector *pSize = pSlots->slot214();
		m_fl574 = fabs((pSize->x - 2.0f) * m_vecMovedir190.x) + fabs((pSlots->slot214()->y - 2.0f) * m_vecMovedir190.y) + fabs((pSlots->slot214()->z - 2.0f) * m_vecMovedir190.z) - m_flLip504;
	}
	m_vecPosition1 = *pSlots->slot220() - (m_vecMovedir190 * m_fl574) * m_fl570;
	m_vecPosition2 = (m_vecMovedir190 * m_fl574) + m_vecPosition1;
	m_vecFinalDest = *pSlots->slot220();
	m_pfnTouch1ec = 0;
	pSlots->slot104();
	{
		ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540, g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(1);
	}
	if (m_flags204 & 8) {
		ScopeTrace trace("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540, g_106b8540);
		CCollisionProperty *pCol = (CCollisionProperty *)((char *)this + 0x270);
		pCol->sub_100dc580(pCol->m_usSolidFlags | 4);
	}
	pSlots->slot223();
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

// FUNCTION: 0x101164c0 size=0x6f
#include "CFuncMoveLinear.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

struct IStrSink { virtual void f(const char *s, int n); };
extern IStrSink *g_1070b248;

void CFuncMoveLinear::vfunc104()
{
    if (m_str55c)
        g_1070b248->f(STRINGR_F(m_str55c), 0);
    if (m_str568)
        g_1070b248->f(STRINGR_F(m_str568), 0);
    if (m_str560)
        g_1070b248->f(STRINGR_F(m_str560), 0);
    m_field564 = 0;
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

// FUNCTION: 0x10116570 size=0x324
#include "CFuncMoveLinear.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "engineiface.h"
#include "engineserver.h"
#include "CBaseToggle.h"

extern char g_106b8540[];
extern float g_104454c4;

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

struct CMoveLinearUnit : CFuncMoveLinear
{
	int edict() { return m_pEdict2e0; }
	int entindex() { return engine->vfunc35(edict()); }
};

// TARGET: CFuncMoveLinear::sub_10116570
void CFuncMoveLinear::sub_10116570(Vector vecPosition, float flSpeed)
{
	CMoveLinearUnit *self = (CMoveLinearUnit *)this;
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	if (flSpeed != g_104454c4)
	{
		if (m_str568)
		{
			enginesound->vfunc3(&filter, self->entindex(), 3, STRINGR(m_str568), 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
		}
		if (m_str55c)
		{
			if (m_field564 == (int)m_str55c)
			{
				enginesound->vfunc7(self->entindex(), 4, STRINGR(m_str560));
			}
			else
			{
				m_field564 = (int)m_str55c;
				enginesound->vfunc3(&filter, self->entindex(), 4, STRINGR(m_str55c), 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
			}
		}
		((CBaseToggle *)this)->sub_101c1520(&vecPosition, flSpeed);
		if (*(Vector *)vfunc220() != vecPosition && vecPosition == m_vecPosition1)
		{
			m_Output5d8.sub_100cd660(m_hActivator10c.Get(), (CBaseEntity *)this, 0);
		}
		else if (*(Vector *)vfunc220() != vecPosition && vecPosition == m_vecPosition2)
		{
			m_Output5f0.sub_100cd660(m_hActivator10c.Get(), (CBaseEntity *)this, 0);
		}
		sub_100ac4e0(0, 0, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x10116970 size=0x20
#include "CPASFilter.h"

extern char g_104470dc[];

// TARGET: CPASFilter::sub_10116970
CPASFilter *CPASFilter::sub_10116970(const float *pOrigin)
{
	sub_1019ce00();
	*(void **)this = g_104470dc;
	sub_1019d280(pOrigin);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101169a0 size=0x1cc
#include "CFuncMoveLinear.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "engineiface.h"
#include "engineserver.h"

extern char g_106b8540[];
inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }
inline int EntIndexOf(int edict) { return engine->vfunc35(edict); }

// TARGET: CFuncMoveLinear::sub_101169a0
void CFuncMoveLinear::sub_101169a0()
{
	if (m_str55c && m_field564 == (int)m_str55c)
	{
		enginesound->vfunc7(EntIndexOf(m_pEdict2e0), 4, (char *)STRINGR_F(m_str55c));
	}
	if (m_str568)
	{
		enginesound->vfunc7(EntIndexOf(m_pEdict2e0), 3, (char *)STRINGR_F(m_str568));
	}
	if (m_str560 && m_field564 != (int)m_str560)
	{
		m_field564 = (int)m_str560;
		CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
		enginesound->vfunc3(&filter, EntIndexOf(m_pEdict2e0), 4, (char *)STRINGR_F(m_str560), 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
	}
	sub_100ac4e0(0, 0, 0);
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

// FUNCTION: 0x10116e80 size=0xe4
#include "Vector.h"
#include "CEntityVSlots.h"
#include "CFuncMoveLinear.h"

void CFuncMoveLinear::sub_10116e80(float flFraction)
{
	Vector vecTarget = m_vecPosition1 + (m_vecPosition2 - m_vecPosition1) * flFraction;
	if ((vecTarget - *((CEntityVSlots *)this)->slot220()).Length() > 0.001)
		sub_10116570(vecTarget, m_flSpeed);
}
// END FUNCTION

// FUNCTION: 0x10116fb0 size=0x23
#include "CUnknown100bc0f0.h"

class CUnknown10116fb0
{
public:
	char pad0[0x164];
	int m_unk164;

	void sub_10116fb0(CInputData100bc0f0 *data);
};

// TARGET: CUnknown10116fb0::sub_10116fb0
void CUnknown10116fb0::sub_10116fb0(CInputData100bc0f0 *data)
{
	if (data->m_type == 1)
		m_unk164 = data->m_value;
	else
		m_unk164 = 0;
}
// END FUNCTION

// FUNCTION: 0x10116ff0 size=0x147
#include "inputdata_t.h"
#include "CFuncMoveLinear.h"

#define EV(n) virtual void ev##n();
#define EV10(p) EV(p##0) EV(p##1) EV(p##2) EV(p##3) EV(p##4) EV(p##5) EV(p##6) EV(p##7) EV(p##8) EV(p##9)

struct MoverV {
	EV10(0) EV10(1) EV10(2) EV10(3) EV10(4) EV10(5) EV10(6) EV10(7) EV10(8) EV10(9)
	EV10(10) EV10(11) EV10(12) EV10(13) EV10(14) EV10(15) EV10(16) EV10(17) EV10(18) EV10(19)
	EV10(20)
	EV(210) EV(211) EV(212) EV(213) EV(214) EV(215) EV(216) EV(217) EV(218) EV(219)
	virtual Vector *ev220();
};

void CFuncMoveLinear::sub_10116ff0(inputdata_t &inputdata)
{
	MoverV *v = (MoverV *)this;
	if (*v->ev220() == m_vecPosition2) {
		sub_10116570(m_vecPosition1, m_flSpeed);
	} else if (*v->ev220() == m_vecPosition1 || m_vecFinalDest == m_vecPosition1 || m_vecFinalDest == m_vecPosition1) {
		sub_10116570(m_vecPosition2, m_flSpeed);
	}
}
// END FUNCTION

// FUNCTION: 0x101171a0 size=0x6d
#include "inputdata_t.h"
#include "CFuncMoveLinear.h"
#include "CEntityVSlots.h"

void CFuncMoveLinear::sub_101171a0(inputdata_t &inputdata)
{
	if (*((CEntityVSlots *)this)->slot220() != m_vecPosition2)
		sub_10116570(m_vecPosition2, m_flSpeed);
}
// END FUNCTION

// FUNCTION: 0x10117230 size=0x6d
#include "CEntityVSlots.h"

struct CEnt10117230 : CEntityVSlots {
	char m_pad0004[0x164 - 4];
	int m_n164;
	char m_pad0168[0x508 - 0x168];
	Vector m_vec508;
	void sub_1000c7c5(Vector v, int n);
	void sub_10117230(int unused);
};

// TARGET: CEnt10117230::sub_10117230
void CEnt10117230::sub_10117230(int unused)
{
	if (*slot220() != m_vec508)
		sub_1000c7c5(m_vec508, m_n164);
}
// END FUNCTION

// FUNCTION: 0x101172c0 size=0x31
struct inputdata_t { char pad[8]; float m_fl; char pad2[0xc]; int m_fieldType; };

struct S101172c0 {
	void sub_1000c068(float f);
	// TARGET: S101172c0::sub_101172c0
	void sub_101172c0(inputdata_t &in);
};

void S101172c0::sub_101172c0(inputdata_t &in)
{
	float f;
	if (in.m_fieldType == 1)
		f = in.m_fl;
	else
		f = 0.0f;
	sub_1000c068(f);
}
// END FUNCTION

// FUNCTION: 0x10117310 size=0x106
#include "CBaseEntity.h"
#include "CEntityVSlots.h"

struct CMoverUnit : CBaseEntity
{
	void sub_10117310(int unused);
	void sub_10116570(Vector vecTarget, float flSpeed);

	char m_pad03e0[0x508 - 0x3e0];
	Vector m_vecA508;
	Vector m_vecA514;
	char m_pad0520[0x540 - 0x520];
	Vector m_vecB540;
};

// TARGET: CMoverUnit::sub_10117310
void CMoverUnit::sub_10117310(int unused)
{
	if (!(*((CEntityVSlots *)this)->slot220() == m_vecB540))
	{
		sub_10116570(m_vecB540, *(float *)((char *)this + 0x164));
		return;
	}
	if (!(*((CEntityVSlots *)this)->slot220() == m_vecA508))
	{
		sub_10116570(m_vecA508, *(float *)((char *)this + 0x164));
		return;
	}
	sub_10116570(m_vecA514, *(float *)((char *)this + 0x164));
}
// END FUNCTION

// FUNCTION: 0x10117470 size=0x1b
// TARGET: sub_10117470
extern char g_1070d1b0[];
struct CUnknown100b2e30
{
	void sub_100b2e30(const char *psz);
};
struct CUnk10117470
{
	char m_pad0000[0x3fc];
	float m_fl3fc;	// 0x3fc

	void sub_10117470(int a);
};
void CUnk10117470::sub_10117470(int a)
{
	((CUnknown100b2e30 *)this)->sub_100b2e30(g_1070d1b0);
	m_fl3fc = -1.0f;
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
