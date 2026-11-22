// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 35 blocks
#include "vampire.h"

// FUNCTION: 0x1042e040 size=0x1d
#include "CSprite.h"

// TARGET: CSprite::sub_1042e040
unsigned int CSprite::sub_1042e040()
{
	unsigned int flags = 0;
	if (m_flags204 & 0x8000)
		flags = 0x80000000;
	return (CBaseEntity::vfunc117() & ~2) | flags;
}
// END FUNCTION

// FUNCTION: 0x1042e070 size=0x55
#include "platform.h"
#include "CConstraintAnchor.h"

void *sub_100aa720(unsigned int size);
extern int vt_10516cf4;
extern char g_106af348[];

#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();

struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};

// TARGET: env_glow
DLL_EXPORT GP *env_glow()
{
	GP *p = (GP *)sub_100aa720(0x494);
	if (p) {
		((CConstraintAnchorBase *)p)->sub_1009d980(0);
		*(int *)((char *)p + 0x450) = -1;
		*(int **)p = &vt_10516cf4;
	} else {
		p = 0;
	}
	p->name(g_106af348);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1042e0f0 size=0x6
#include "datamap.h"
#include "CSprite.h"
namespace lifted {
extern char g_106aeaf8;
}
datamap_t * CSprite::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_106aeaf8);
}
// END FUNCTION

// FUNCTION: 0x1042e110 size=0x5
int sub_1042e150(void);
int g_109f0284 = ((int (*)(int))sub_1042e150)(0);
// END FUNCTION

// FUNCTION: 0x1042e150 size=0x1a
namespace lifted {
extern int g_106aeaf8;
extern int g_106aeafc;
extern char g_106aeb3c;
}
int sub_1042e150()
{
    lifted::g_106aeafc = 0x12;
    lifted::g_106aeaf8 = (int)&lifted::g_106aeb3c;
    return (int)&lifted::g_106aeaf8;
}
// END FUNCTION

// FUNCTION: 0x1042e180 size=0x6
#include "CSprite.h"
namespace lifted {
extern char g_106af03c;
}
int CSprite::vfunc79()
{
    return (int)&lifted::g_106af03c;
}
// END FUNCTION

// FUNCTION: 0x1042e1a0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_109f028c;
extern char g_106af054[];
ServerClassReg g_109f02a8("CSprite", &g_109f028c, g_106af054);
// END FUNCTION

// FUNCTION: 0x1042e210 size=0x6
#include "CSprite.h"
namespace lifted {
extern char g_109f02a8;
}
int CSprite::vfunc80()
{
    return (int)&lifted::g_109f02a8;
}
// END FUNCTION

// FUNCTION: 0x1042e230 size=0x3
#include "CSprite.h"
int CSprite::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1042e250 size=0xa
#include "SendTable.h"
SendTable g_109f028c;
// END FUNCTION

// FUNCTION: 0x1042e2d0 size=0x5
int sub_1042e310(void);
int g_109f0288 = ((int (*)(int))sub_1042e310)(0);
// END FUNCTION

// FUNCTION: 0x1042e310 size=0x198
#include "SendTable.h"
#include "SendProp.h"

SendProp sub_10246af0(const char *pName, int offset, int sizeofVar, int nBits, int flags, void *pProxy, int nExtra);
SendProp sub_10246dc0(const char *pName, int offset, SendTable *pTable, void *pProxy);
SendProp sub_101ab220(const char *pName, int offset, int sizeofVar);
SendProp sub_10246510(const char *pName, int offset, int sizeofVar, int nBits, int flags, float fLowValue, float fHighValue, void *pProxy);
void sub_10246300();
void sub_10009539();

extern SendTable *g_1055282c;
extern float g_10516cec;
extern const char *g_106af060;
extern SendTable g_109f028c;

int sub_1042e310()
{
	static SendProp g_SendProps[] = {
		sub_10246af0("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_10246dc0("baseclass", 0, g_1055282c, (void *)sub_10009539),
		sub_101ab220("m_hAttachedToEntity", 0x450, 4),
		sub_10246af0("m_nAttachment", 0x454, 4, 8, 0, 0, 0),
		sub_10246510("m_flScaleTime", 0x470, 4, 0, 4, 0.0f, -121121.121121f, (void *)sub_10246300),
		sub_10246510("m_flSpriteScale", 0x46c, 4, 8, 0x10, 0.0f, g_10516cec, (void *)sub_10246300),
		sub_10246510("m_flSpriteFramerate", 0x458, 4, 8, 0x10, 0.0f, 60.0f, (void *)sub_10246300),
		sub_10246510("m_flFrame", 0x45c, 4, 0x14, 8, 0.0f, 256.0f, (void *)sub_10246300),
		sub_10246510("m_flBrightnessTime", 0x468, 4, 0, 4, 0.0f, -121121.121121f, (void *)sub_10246300),
		sub_10246af0("m_nBrightness", 0x464, 4, 8, 1, 0, 0),
	};
	g_109f028c.sub_10247240(g_SendProps + 1, sizeof(g_SendProps) / sizeof(SendProp) - 1, g_106af060);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1042e550 size=0x251
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlmemory.h"
#include "CSprite.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
#include "engineserver.h"
#include "Ray_t.h"
#include "Vector.h"

class CUnknown1042eee0
{
public:
	void sub_1042eee0(int a, int b);
};

class CUnknown1042ef10
{
public:
	void sub_1042ef10(float a, int b);
};

extern void (*g_109f3650)(int nLevel, const char *pMsg, ...);
extern float g_10516cec;
const char *sub_100ab4f0();

#define clamp(val, min, max) (((val) > (max)) ? (max) : (((val) < (min)) ? (min) : (val)))

static __forceinline const char *EntityName(CBaseEntity *pEnt)
{
	return pEnt ? (*(const char **)((char *)pEnt + 0x26c) ? *(const char **)((char *)pEnt + 0x26c) : g_106b8540) : g_105387dc;
}

void CSprite::sub_1042e550()
{
	{
		ScopeTrace trace("CBaseEntity::SetSolid", EntityName(this));
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}

	CEntityVSlots *pSlots = (CEntityVSlots *)this;
	pSlots->slot93(0, 0);
	m_flFrame = 0.0f;
	pSlots->slot104();

	const char *pszModel;
	{
		int nDummy;
		pszModel = *pSlots->slot9(&nDummy);
	}
	if (!pszModel)
		pszModel = g_106b8540;
	pSlots->slot105(pszModel);

	m_flMaxFrame = (float)engine->vfunc26(pSlots->slot8()) - 1.0f;

	if (*(const char **)((char *)this + 0x26c) && !(*(unsigned char *)((char *)this + 0x204) & 1))
		sub_1042ef40();
	else
		sub_1042ef70();

	if (pSlots->slot221()->y != g_104454c4 && pSlots->slot221()->z == g_104454c4)
	{
		Vector angles = *pSlots->slot221();
		angles.z = angles.y;
		angles.y = 0;
		pSlots->slot64(angles.Base());
	}

	float scale = m_flSpriteScale;
	if (scale < g_104454c4 || scale > g_10516cec)
	{
		g_109f3650(1, "LEVEL DESIGN ERROR: Sprite %s with bad scale %.f [0..%.f]\n",
				   sub_100ab4f0(), m_flSpriteScale, g_10516cec);
		scale = clamp(m_flSpriteScale, 0, g_10516cec);
	}

	((CUnknown1042eee0 *)this)->sub_1042eee0(*(unsigned char *)((char *)this + 0x1a3), 0);
	((CUnknown1042ef10 *)this)->sub_1042ef10(scale, 0);
}
// END FUNCTION

// FUNCTION: 0x1042e850 size=0x43
#include "CSprite.h"
#include "engineserver.h"
extern void (*g_109f3628)(const char *fmt, ...);
void sub_101cf4a0(CSprite *p, const char *name);
// TARGET: CSprite::vfunc105
void CSprite::vfunc105(const char *name)
{
    int idx = engine->vfunc20(name);
    if (engine->vfunc21(idx) != 2)
        g_109f3628("Setting CSprite to non-sprite model %s\n", name);
    sub_101cf4a0(this, name);
}
// END FUNCTION

// FUNCTION: 0x1042e8c0 size=0xe5
#include "CEHandleGet.h"
#include "CUnknown1042e8c0.h"

void CUnknown1042e8c0::sub_1042e8c0()
{
	int dummy;
	if (*vfunc9(&dummy) != 0) {
		const char *pName = *vfunc9(&dummy);
		if (!pName)
			pName = "";
		sub_100adfd0(pName);
	}
	if (EHandle_Get(*(unsigned int *)((char *)this + 0x37c)) != 0) {
		CBaseEntity *pEnt = (CBaseEntity *)EHandle_Get(*(unsigned int *)((char *)this + 0x37c));
		int attachment = m_nAttachment;
		if (pEnt != 0) {
			m_hAttachedTo = pEnt;
			m_nAttachment = attachment;
			sub_1009ee80(pEnt);
			vfunc93(0xb, 0);
		}
	} else {
		m_hAttachedTo = (CBaseEntity *)0;
		m_nAttachment = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1042e9f0 size=0x37
#include "CSprite.h"
#include "string_t.h"

#define CSV_ROW(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct castable_string_t : public string_t
{
	castable_string_t(const char *pszFrom) { pszValue = *pszFrom ? pszFrom : 0; }
};

struct CSpriteSlotView
{
	CSV_ROW(r0)
	CSV_ROW(r1)
	CSV_ROW(r2)
	CSV_ROW(r3)
	CSV_ROW(r4)
	CSV_ROW(r5)
	virtual void r60();
	virtual void r61();
	virtual void vfunc62(const float *b);
	virtual void r63();
	virtual void r64();
	virtual void r65();
	virtual void r66();
	virtual void r67();
	virtual void r68();
	virtual void r69();
	CSV_ROW(r7)
	CSV_ROW(r8)
	CSV_ROW(r9)
	CSV_ROW(r10)
	CSV_ROW(r11)
	CSV_ROW(r12)
	CSV_ROW(r13)
	CSV_ROW(r14)
	CSV_ROW(r15)
	CSV_ROW(r16)
	CSV_ROW(r17)
	CSV_ROW(r18)
	CSV_ROW(r19)
	CSV_ROW(r20)
	virtual void r210();
	virtual void r211();
	virtual void vfunc212(string_t name);
};

void CSprite::sub_1042e9f0(int a, int b)
{
	CSpriteSlotView *v = (CSpriteSlotView *)this;
	v->vfunc212(castable_string_t((const char *)a));
	v->vfunc62((const float *)b);
	vfunc103();
}
// END FUNCTION

// FUNCTION: 0x1042ea40 size=0xf9
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CSprite.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

CBaseEntity *sub_10002e32(const char *name);
void sub_10011432(CBaseEntity *p, const void *a, const void *b);
extern char g_1070d1b0[];
extern char g_10538764[];
extern char g_106af32c[];
extern "C" void *__RTDynamicCast(void *, long, void *, void *, int);
__declspec(dllimport) void Warning(const char *fmt, ...);

CSprite *sub_1042ea40(const char *pSpriteName, const Vector &origin, bool animate)
{
	CSprite *pSprite = (CSprite *)__RTDynamicCast(sub_10002e32("env_sprite"), 0, g_10538764, g_106af32c, 0);
	if (!pSprite)
		Warning("classname %s used to create wrong class type\n");
	pSprite->sub_1042e9f0((int)pSpriteName, (int)&origin);
	{
		ScopeTrace trace("CBaseEntity::SetSolid", pSprite ? (pSprite->m_name26c ? pSprite->m_name26c : g_106b8540) : g_105387dc);
		((CCollisionProperty *)((char *)pSprite + 0x270))->sub_100dc480(0);
	}
	sub_10011432(pSprite, g_1070d1b0, g_1070d1b0);
	pSprite->vfunc93(9, 0);
	if (animate)
		pSprite->sub_1042ef70();
	return pSprite;
}
// END FUNCTION

// FUNCTION: 0x1042eb80 size=0xdb
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CSprite.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

CSprite *sub_10002b03(const char *pClassname, int a, int b);
extern float g_1070d1b0[3];

CSprite *sub_1042eb80(int a, int b, int c, int d, bool animate)
{
	CSprite *pSprite = sub_10002b03("env_sprite", a, b);
	pSprite->sub_1042e9f0(c, d);
	{
		ScopeTrace trace("CBaseEntity::SetSolid", pSprite ? (pSprite->m_name26c ? pSprite->m_name26c : g_106b8540) : g_105387dc);
		((CCollisionProperty *)((char *)pSprite + 0x270))->sub_100dc480(0);
	}
	pSprite->sub_100adf10(g_1070d1b0, g_1070d1b0);
	pSprite->vfunc93(9, 0);
	if (animate)
		pSprite->sub_1042ef70();
	return pSprite;
}
// END FUNCTION

// FUNCTION: 0x1042eca0 size=0x3f
#include "vampire.h"
#include "CUnknown1042e8c0.h"


// TARGET: CUnknown1042e8c0::sub_1042eca0
void CUnknown1042e8c0::sub_1042eca0()
{
    float flScale = *(float *)((char *)this + 0x458);
    sub_1042ee50((gpGlobals->curtime - *(float *)((char *)this + 0x474)) * flScale);
    *(float *)((char *)this + 0x17c) = gpGlobals->curtime;
    *(float *)((char *)this + 0x474) = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x1042ecf0 size=0x36
#include "CUnknown1042e8c0.h"
void CUnknown1042e8c0::sub_1042ecf0()
{
	if (gpGlobals->curtime > m_flDieTime)
	{
		sub_100ae150();
		return;
	}
	sub_1042eca0();
	m_flNextThink = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x1042ed40 size=0x4d
#include "CBaseEntity.h"
#include "globalvars.h"
void sub_1042edb0();
struct CUnit1042ed40 : CBaseEntity {
    void sub_1042ed40(int a, float b);
};
void CUnit1042ed40::sub_1042ed40(int a, float b)
{
    *(int *)((char *)this + 0x164) = a;
    *(int *)((char *)this + 0x210) = (int)b;
    sub_100ac4e0((int)sub_1042edb0, 0, 0);
    m_flNextThink = gpGlobals->curtime;
    *(float *)((char *)this + 0x474) = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x1042edb0 size=0x7c
#include "CBaseEntity.h"


struct FadeEntView {
	char m_pad0000[0x164];
	float m_f164;
	char m_pad0168[0x17c - 0x168];
	float m_flNextThink;
	char m_pad0180[0x1a3 - 0x180];
	unsigned char m_nAlpha;
	char m_pad01a4[0x210 - 0x1a4];
	int m_iHealth;
	char m_pad0214[0x46c - 0x214];
	float m_f46c;
	char m_pad0470[4];
	float m_f474;
};

void __fastcall sub_1042edb0(FadeEntView *pThis)
{
	float dt = gpGlobals->curtime - pThis->m_f474;
	pThis->m_f46c = dt * pThis->m_f164 + pThis->m_f46c;
	int n = (int)(pThis->m_iHealth * dt);
	if (n > pThis->m_nAlpha) {
		pThis->m_nAlpha = 0;
		((CBaseEntity *)pThis)->sub_100ae150();
		return;
	}
	pThis->m_nAlpha -= n;
	pThis->m_flNextThink = gpGlobals->curtime;
	pThis->m_f474 = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x1042ee50 size=0x66
#include "CUnknown1042e8c0.h"
#include <math.h>

// TARGET: CUnknown1042e8c0::sub_1042ee50
void CUnknown1042e8c0::sub_1042ee50(float frames)
{
	m_flFrame += frames;
	if (m_flFrame > m_flMaxFrame) {
		if (m_flags204 & 2)
			sub_1042ef40();
		else if (m_flMaxFrame > 0)
			m_flFrame = fmod(m_flFrame, m_flMaxFrame);
	}
}
// END FUNCTION

// FUNCTION: 0x1042eee0 size=0x17
struct CUnknown1042eee0 { int sub_1042eee0(int, int); };
int CUnknown1042eee0::sub_1042eee0(int a0, int a1)
{
    *(int *)((char *)this + 0x464) = a0;
    *(int *)((char *)this + 0x468) = a1;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x1042ef10 size=0x17
struct CUnknown1042ef10 { int sub_1042ef10(int, int); };
int CUnknown1042ef10::sub_1042ef10(int a0, int a1)
{
    *(int *)((char *)this + 0x46c) = a0;
    *(int *)((char *)this + 0x470) = a1;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x1042ef40 size=0x19
void __fastcall sub_1042ef40(char *pThis)
{
	*(int *)(pThis + 0x17c) = 0;
	*(unsigned int *)(pThis + 0x19c) |= 0x40;
}
// END FUNCTION

// FUNCTION: 0x1042ef70 size=0x81
#include "CBaseEntity.h"
#include "CSprite.h"
void sub_10011757();

void CSprite::sub_1042ef70()
{
    m_nEffectFlags &= ~0x40;
    if ((m_flSpriteFramerate != 0.0f && m_flMaxFrame > 1.0) || (*(unsigned char *)((char *)this + 0x204) & 2)) {
        sub_100ac4e0((void *)sub_10011757, 0, 0);
        *(float *)((char *)this + 0x17c) = gpGlobals->curtime;
        m_flLastTime = gpGlobals->curtime;
    }
    m_flFrame = 0;
    ((CBaseEntity *)this)->sub_1009d1e0();
}
// END FUNCTION

// FUNCTION: 0x1042f030 size=0x3f
#include "vampire.h"
#include "CSprite.h"

// TARGET: CSprite::vfunc173
void CSprite::vfunc173(CBaseEntity *a, CBaseEntity *b, int nUseType, int d)
{
    int bOff = *(int *)((char *)this + 0x19c) != 0x40;
    if (sub_100a98f0(nUseType, bOff))
    {
        if (bOff)
        {
            sub_1042ef40();
            return;
        }
        sub_1042ef70();
    }
}
// END FUNCTION

// FUNCTION: 0x1042f080 size=0x8
namespace lifted {
int sub_10010dde();
}
int __stdcall sub_1042f080(int a0)
{
    return lifted::sub_10010dde();
}
// END FUNCTION

// FUNCTION: 0x1042f0a0 size=0x8
namespace lifted {
int sub_1000c3ce();
}
int __stdcall sub_1042f0a0(int a0)
{
    return lifted::sub_1000c3ce();
}
// END FUNCTION

// FUNCTION: 0x1042f0c0 size=0x19
void __fastcall sub_1042ef40(char *pThis);
void __fastcall sub_1042ef70(char *pThis);

struct CUnk1042f0c0
{
	char m_pad0000[0x19c];
	int m_n19c;

	void sub_1042f0c0(int a);
};

// TARGET: sub_1042f0c0
void CUnk1042f0c0::sub_1042f0c0(int a)
{
	if (m_n19c != 0x40) {
		sub_1042ef40((char *)this);
		return;
	}
	sub_1042ef70((char *)this);
}
// END FUNCTION

// FUNCTION: 0x1042f0f0 size=0x5
struct CUnk1042f0c0 { void sub_1042f0c0(int); };
struct CWrap1042f0f0 { void sub_1042f0f0(int); };
// TARGET: sub_1042f0f0
// the game's 0x1042f0f0: a tail call (jmp) of CUnk1042f0c0::sub_1042f0c0
void CWrap1042f0f0::sub_1042f0f0(int a0)
{
	((CUnk1042f0c0 *)this)->CUnk1042f0c0::sub_1042f0c0(a0);
}
// END FUNCTION

// FUNCTION: 0x1042f110 size=0x8
namespace lifted {
int sub_1000c3ce();
}
int __stdcall sub_1042f110(int a0)
{
    return lifted::sub_1000c3ce();
}
// END FUNCTION

// FUNCTION: 0x1042f130 size=0x8
namespace lifted {
int sub_10010dde();
}
int __stdcall sub_1042f130(int a0)
{
    return lifted::sub_10010dde();
}
// END FUNCTION

// FUNCTION: 0x1042f150 size=0x1e
#include "CSprite.h"

void sub_100aa7b0(void *p);

// TARGET: CSprite::vfunc5
CBaseEntity *CSprite::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
