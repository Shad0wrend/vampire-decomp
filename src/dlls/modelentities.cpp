// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 27 blocks
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

// FUNCTION: 0x1013de30 size=0x5
int sub_1013de70(void);
int g_1071a248 = ((int (*)(int))sub_1013de70)(0);
// END FUNCTION

// FUNCTION: 0x1013de70 size=0x1a
namespace lifted {
extern int g_10579aa8;
extern int g_10579aac;
extern char g_10579aec;
}
int sub_1013de70()
{
    lifted::g_10579aac = 5;
    lifted::g_10579aa8 = (int)&lifted::g_10579aec;
    return (int)&lifted::g_10579aa8;
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

// FUNCTION: 0x1013e3a0 size=0x23
void __fastcall sub_10003cb5(void *pSelf);
void __fastcall sub_1000f3b2(void *pSelf);

// TARGET: sub_1013e3a0
void __fastcall sub_1013e3a0(void *pSelf, int unused, int arg)
{
    char bResult = ((char (__fastcall *)(void *))(*(void ***)pSelf)[0x3c4 / 4])(pSelf);
    if (bResult != 0) {
        sub_10003cb5(pSelf);
    } else {
        sub_1000f3b2(pSelf);
    }
}
// END FUNCTION

// FUNCTION: 0x1013e3e0 size=0x8
namespace lifted {
int sub_10003cb5();
}
int __stdcall sub_1013e3e0(int a0)
{
    return lifted::sub_10003cb5();
}
// END FUNCTION

// FUNCTION: 0x1013e400 size=0x8
namespace lifted {
int sub_1000f3b2();
}
int __stdcall sub_1013e400(int a0)
{
    return lifted::sub_1000f3b2();
}
// END FUNCTION

// FUNCTION: 0x1013e420 size=0x1c
#include "CFuncBrush.h"

// TARGET: CFuncBrushVt::sub_1013e420
void CFuncBrushVt::sub_1013e420()
{
	if (slot241())
		slot77();
}
// END FUNCTION

// FUNCTION: 0x1013e450 size=0x1c
#include "CEntityVSlots.h"

// TARGET: sub_1013e450
void __fastcall sub_1013e450(CEntityVSlots *p)
{
	if (!p->slot241())
		p->slot78();
}
// END FUNCTION

// FUNCTION: 0x1013e480 size=0xf
#include "CFuncBrush.h"
int CFuncBrush::vfunc241()
{
    return ((unsigned)(~(*(int *)((char *)this + 0x19c))) >> 6) & 1;
}
// END FUNCTION

// FUNCTION: 0x1013e4a0 size=0x6c
#include "platform.h"
#include "CBaseEntity.h"

void *sub_100aa720(int size);
extern void *vt_1046aa7c[];
extern char g_10579f58[];
void __fastcall sub_10002ddd(void *pThis);

// TARGET: trigger_brush
DLL_EXPORT CBaseEntity *trigger_brush()
{
	void *mem = sub_100aa720(0x4a0);
	CBaseEntity *p;
	if (mem)
	{
		p = (CBaseEntity *)mem;
		p->sub_1009d980(0);
		sub_10002ddd((char *)p + 0x450);
		sub_10002ddd((char *)p + 0x468);
		sub_10002ddd((char *)p + 0x480);
		*(void ***)p = vt_1046aa7c;
	}
	else
		p = 0;
	p->vfunc106(g_10579f58);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1013e530 size=0x6
#include "datamap.h"
#include "CTriggerBrush.h"
namespace lifted {
extern char g_10579bc8;
}
datamap_t * CTriggerBrush::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10579bc8);
}
// END FUNCTION

// FUNCTION: 0x1013e550 size=0x5
int * sub_1013e590(void);
int * g_1071a244 = ((int * (*)(int))sub_1013e590)(0);
// END FUNCTION

// FUNCTION: 0x1013e590 size=0x1c1
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
extern int g_10579bc8[2];
void sub_10002a09();
void sub_10011ce8();

int *sub_1013e590()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 4, "m_iInputFilter", {0x498, 0}, 1, 6, "InputFilter" },
        { 4, "m_iDontMessageParent", {0x49c, 0}, 1, 6, "DontMessageParent" },
        { 10, "m_OnStartTouch", {0x450, 0}, 1, 0x16, "OnStartTouch", g_1055dc70 },
        { 10, "m_OnEndTouch", {0x468, 0}, 1, 0x16, "OnEndTouch", g_1055dc70 },
        { 10, "m_OnUse", {0x480, 0}, 1, 0x16, "OnUse", g_1055dc70 },
        { 0, "InputDisable", {0, 0}, 1, 0x8, "Disable", 0, (void *)sub_10002a09 },
        { 0, "InputEnable", {0, 0}, 1, 0x8, "Enable", 0, (void *)sub_10011ce8 },
    };
    g_10579bc8[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_10579bc8[0] = (int)&dataDesc[1];
    return g_10579bc8;
}
// END FUNCTION

// FUNCTION: 0x1013e7e0 size=0xd
#include "CUnknown1013e7e0.h"
// TARGET: CUnknown1013e7e0::sub_1013e7e0
void CUnknown1013e7e0::sub_1013e7e0(int unused)
{
	sub_100b3640(0x400000);
}
// END FUNCTION

// FUNCTION: 0x1013e800 size=0xd
#include "CUnknown1013e7e0.h"
// TARGET: CUnknown1013e7e0::sub_1013e800
void CUnknown1013e7e0::sub_1013e800(int unused)
{
	sub_100b3580(0x400000);
}
// END FUNCTION

// FUNCTION: 0x1013e820 size=0x193
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CTriggerBrush.h"
#include "CCollisionProperty.h"
#include "CFuncBrush.h"
#include "ScopeTrace.h"

struct CTriggerBrushConVar {
	virtual void vfunc0();
	virtual char vfunc1();
	char m_pad0004[0x28];
	int m_n2c;
};

struct CTriggerBrushView {
	char m_pad0000[0x26c];
	const char *m_name26c;
	CCollisionProperty m_Collision;

	void SetSolid(int val)
	{
		ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540, g_106b8540);
		m_Collision.sub_100dc480(val);
	}
	void AddSolidFlags(int flags)
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540, g_106b8540);
		m_Collision.AddSolidFlags(flags);
	}
};

extern Vector g_1070d9d0;
extern CTriggerBrushConVar *g_1072cfcc;

void CTriggerBrush::vfunc103()
{
	CFuncBrushSlots *pSlots = (CFuncBrushSlots *)this;
	const Vector *pAngles = (const Vector *)pSlots->slot221();
	if (*pAngles != g_1070d9d0)
		pSlots->slot171();
	CTriggerBrushView *v = (CTriggerBrushView *)this;
	v->SetSolid(1);
	v->AddSolidFlags(8);
	vfunc93(0, 0);
	int nLen;
	const char *pszModel = *vfunc9(&nLen);
	vfunc105(pszModel ? pszModel : g_106b8540);
	if (g_1072cfcc->vfunc1() || !g_1072cfcc->m_n2c)
		m_nEffectFlags |= 0x40;
}
// END FUNCTION

// FUNCTION: 0x1013ea30 size=0x48
#include "CTriggerBrush.h"
bool __stdcall sub_1013eb90(CBaseEntity *pOther, unsigned int filter);
void CTriggerBrush::vfunc174(CBaseEntity *pOther)
{
	if (sub_1013eb90(pOther, m_nFilter498) && !(m_nFilter498 & 8)) {
		m_Output450.sub_100cd660(pOther, this, 0);
		if (m_n49c == 0)
			CBaseEntity::vfunc174(pOther);
	}
}
// END FUNCTION

// FUNCTION: 0x1013eaa0 size=0x48
#include "CTriggerBrush.h"
bool __stdcall sub_1013eb90(CBaseEntity *pOther, unsigned int filter);
void CTriggerBrush::vfunc176(CBaseEntity *pOther)
{
	if (sub_1013eb90(pOther, m_nFilter498) && !(m_nFilter498 & 8)) {
		m_Output468.sub_100cd660(pOther, this, 0);
		if (m_n49c == 0)
			CBaseEntity::vfunc176(pOther);
	}
}
// END FUNCTION

// FUNCTION: 0x1013eb10 size=0x57
#include "CTriggerBrush.h"
struct CTriggerBrushSub480 { void sub_100cd660(CBaseEntity *a, CBaseEntity *b, int c); };
struct CTriggerBrushView { char pad[0x480]; CTriggerBrushSub480 m_Sub480; char pad2[0x18 - 1]; int m_n498; int m_n49c; };
bool __stdcall sub_1013eb90(CBaseEntity *a, int b);
// TARGET: CTriggerBrush::vfunc173
void CTriggerBrush::vfunc173(CBaseEntity *a, CBaseEntity *b, int c, int d)
{
    CTriggerBrushView *v = (CTriggerBrushView *)this;
    if (sub_1013eb90(a, v->m_n498) && !(v->m_n498 & 0x10)) {
        v->m_Sub480.sub_100cd660(a, this, 0);
        if (v->m_n49c == 0)
            CBaseEntity::vfunc173(a, b, c, d);
    }
}
// END FUNCTION

// FUNCTION: 0x1013eb90 size=0x7a
#include "CBaseEntity.h"
extern "C" int _strcmpi(const char *, const char *);
extern char g_106b8540[];
extern char g_1056eeec[];
bool __stdcall sub_1013eb90(CBaseEntity *ent, unsigned int flags)
{
    if (flags != 0) {
        if ((flags & 1) && *(int *)((char *)ent + 0xa8) != 0)
            return false;
        if ((flags & 2) && *(int *)((char *)ent + 0x2e0) != 0) {
            if (ent->sub_100b3700() & 0x2000)
                return false;
        }
        if (flags & 4) {
            const char *s = *(const char **)((char *)ent + 0x11c);
            if (!s)
                s = g_106b8540;
            if (!_strcmpi(s, g_1056eeec))
                return false;
        }
    }
    return true;
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

// FUNCTION: 0x1013ec60 size=0x41
#include "CTriggerBrush.h"
#include "COutputEvent.h"
#include "CLogicalEntity.h"

void sub_100aa7b0(void *p);

CBaseEntity *CTriggerBrush::vfunc5(unsigned int flags)
{
	((COutputEvent *)((char *)this + 0x480))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x468))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x450))->sub_100cd2d0();
	((CLogicalEntity *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
