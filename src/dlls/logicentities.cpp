// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 138 blocks
#include "vampire.h"

// FUNCTION: 0x10130ef0 size=0x6
#include "datamap.h"
#include "CLogicCompare.h"

extern datamap_t g_10575cd8;

// TARGET: CLogicCompareInteger::vfunc82
datamap_t *CLogicCompareInteger::vfunc82()
{
	return &g_10575cd8;
}
// END FUNCTION

// FUNCTION: 0x10130f10 size=0x5
int * sub_10130f50(void);
int * g_1070c61c = ((int * (*)(int))sub_10130f50)(0);
// END FUNCTION

// FUNCTION: 0x10130f50 size=0x268
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
void sub_1000b84d();
void sub_10014515();
extern int g_10575cd8[2];
int *sub_10130f50()
{
    static typedescription_t dataDesc[] = {
        { 0 },
        { 0xa, "m_OnEqual", {0x450, 0}, 1, 0x16, "OnEqual", g_1055dc70 },
        { 0xa, "m_OnNotEqual", {0x468, 0}, 1, 0x16, "OnNotEqual", g_1055dc70 },
        { 4, "m_iIntegerValue", {0x480, 0}, 1, 6, "IntegerValue", 0, 0 },
        { 4, "m_iShouldCompareToValue", {0x484, 0}, 1, 6, "ShouldComparetoValue", 0, 0 },
        { 0x12, "m_AllIntCompares", {0x488, 0}, 1, 2, 0, 0, 0 },
        { 0x12, "InputValue", {0, 0}, 1, 8, "InputValue", 0, (void *)sub_10014515 },
        { 0x12, "InputCompareValues", {0, 0}, 1, 8, "CompareValues", 0, (void *)sub_1000b84d },
    };
    g_10575cd8[1] = 7;
    g_10575cd8[0] = (int)&dataDesc[1];
    return g_10575cd8;
}
// END FUNCTION

// FUNCTION: 0x10131260 size=0x67
#include "CUnknown10131260.h"
#include "CEventQueue.h"

extern CEventQueue g_106e7050;

void CUnknown10131260::sub_10131260(inputdata_t &data)
{
	if (data.value.sub_100d05d0(4)) {
		m_list488.sub_100cdba0(*(CVariantCopy *)&data.value, data.nOutputID);
		if (!m_nRecompareQueued) {
			g_106e7050.sub_100ce040(this, "ForceRecompare", 0, (CBaseEntity *)data.pActivator, this, data.nOutputID);
			m_nRecompareQueued = 1;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101312f0 size=0x7e
struct CUnk101312f0Node {
    int m_value;
    char pad04[0xc];
    int m_type;	// 0x10: 4 is an integer
    char pad14[4];
    CUnk101312f0Node *m_pNext;	// 0x18

    int Int() const { return m_type == 4 ? m_value : 0; }
};
struct CUnk101312f0Output {
    char pad[0x18];
    void sub_100cd660(int value, void *pOwner, int delay);
};
struct CUnk101312f0 {
    char pad0000[0x450];
    CUnk101312f0Output m_OnA;	// 0x450
    CUnk101312f0Output m_OnB;	// 0x468
    int m_nCurrent;	// 0x480
    int m_nFlag;	// 0x484
    CUnk101312f0Node *m_pList;	// 0x488
    int m_n48c;	// 0x48c
    void sub_101312f0(int *pArg);
};

void CUnk101312f0::sub_101312f0(int *pArg)
{
    CUnk101312f0Node *pNode = m_pList;
    int nCurrent = m_nCurrent;
    m_n48c = 0;
    if (m_nFlag == 0) {
        if (!pNode) {
            m_OnA.sub_100cd660(*pArg, this, 0);
            return;
        }
        nCurrent = pNode->Int();
    }
    for (; pNode; pNode = pNode->m_pNext) {
        if (pNode->Int() != nCurrent) {
            m_OnB.sub_100cd660(*pArg, this, 0);
            return;
        }
    }
    m_OnA.sub_100cd660(*pArg, this, 0);
}
// END FUNCTION

// FUNCTION: 0x10131390 size=0x72
#include "platform.h"
void *sub_1000db89(int);
extern int vt_104475c4;
extern int vt_10465fb4;
extern char g_10578570[];
struct SubItem { void sub_10002ddd(); };
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
	void sub_100090fc(int a);
};
// TARGET: logic_timer
DLL_EXPORT GP *logic_timer()
{
	GP *p = (GP *)sub_1000db89(0x4b0);
	if (p) {
		p->sub_100090fc(0);
		*(int **)p = &vt_104475c4;
		((SubItem *)((char *)p + 0x450))->sub_10002ddd();
		((SubItem *)((char *)p + 0x468))->sub_10002ddd();
		((SubItem *)((char *)p + 0x480))->sub_10002ddd();
		*(int **)p = &vt_10465fb4;
	} else {
		p = 0;
	}
	p->name(g_10578570);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10131430 size=0x6
#include "datamap.h"
#include "CTimerEntity.h"
namespace lifted {
extern char g_10575e50;
}
datamap_t *CTimerEntity::vfunc82()
{
    return (datamap_t *)&lifted::g_10575e50;
}
// END FUNCTION

// FUNCTION: 0x10131450 size=0x5
int * sub_10131490(void);
int * g_1070c5f4 = ((int * (*)(int))sub_10131490)(0);
// END FUNCTION

// FUNCTION: 0x10131490 size=0x116
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
extern int g_10575e50[2];
void sub_10001cfd();
void sub_10012297();
void sub_10011469();
void sub_1000b5b9();
void sub_1000ce91();

int *sub_10131490()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 4, "m_iDisabled", {0x498, 0}, 1, 6, "StartDisabled" },
        { 1, "m_flRefireTime", {0x49c, 0}, 1, 6, "RefireTime" },
        { 5, "m_bUpDownState", {0x4a0, 0}, 1, 2 },
        { 1, "InputRefireTime", {0, 0}, 1, 8, "RefireTime", 0, (void *)sub_10001cfd },
        { 0, "InputFireTimer", {0, 0}, 1, 8, "FireTimer", 0, (void *)sub_10012297 },
        { 0, "InputEnable", {0, 0}, 1, 8, "Enable", 0, (void *)sub_10011469 },
        { 0, "InputDisable", {0, 0}, 1, 8, "Disable", 0, (void *)sub_1000b5b9 },
        { 0, "InputToggle", {0, 0}, 1, 8, "Toggle", 0, (void *)sub_1000ce91 },
        { 4, "m_iUseRandomTime", {0x4a4, 0}, 1, 0xe, "UseRandomTime" },
        { 1, "m_flLowerRandomBound", {0x4a8, 0}, 1, 0xe, "LowerRandomBound" },
        { 1, "m_flUpperRandomBound", {0x4ac, 0}, 1, 0xe, "UpperRandomBound" },
        { 10, "m_OnTimer", {0x450, 0}, 1, 0x16, "OnTimer", g_1055dc70 },
        { 10, "m_OnTimerHigh", {0x468, 0}, 1, 0x16, "OnTimerHigh", g_1055dc70 },
        { 10, "m_OnTimerLow", {0x480, 0}, 1, 0x16, "OnTimerLow", g_1055dc70 },
    };
    g_10575e50[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_10575e50[0] = (int)&dataDesc[1];
    return g_10575e50;
}
// END FUNCTION

// FUNCTION: 0x10131600 size=0x55
#include "CTimerEntity.h"
extern float g_10465b1c;

// TARGET: CTimerEntity::vfunc103
void CTimerEntity::vfunc103()
{
	if (m_n4a4 == 0 && m_fInterval < g_10465b1c)
		m_fInterval = g_10465b1c;
	if (m_n498 == 0 && (m_fInterval > 0.0f || m_n4a4 != 0))
		sub_10131750();
	else
		sub_10131770();
}
// END FUNCTION

// FUNCTION: 0x10131680 size=0x23
struct CTimerEntityCallee {
    void sub_10010794(void *a, void *b, int c);
};
void __fastcall sub_10001226(void *pSelf);

// TARGET: sub_10131680
void __fastcall sub_10131680(void *pSelf)
{
    if (*((unsigned char *)pSelf + 0x204) & 2) {
        ((CTimerEntityCallee *)((char *)pSelf + 0x450))->sub_10010794(pSelf, pSelf, 0);
    }
    sub_10001226(pSelf);
}
// END FUNCTION

// FUNCTION: 0x101316c0 size=0x5
#include "CTimerEntity.h"
struct CToggleRelayUnit { void sub_101317d0(); };
// TARGET: CTimerEntity::vfunc134
// the game's 0x101316c0: a tail call (jmp) of CToggleRelayUnit::sub_101317d0
void CTimerEntity::vfunc134()
{
	((CToggleRelayUnit *)this)->CToggleRelayUnit::sub_101317d0();
}
// END FUNCTION

// FUNCTION: 0x101316e0 size=0x4c
#include "CTimerEntity.h"
#include "globalvars.h"
#include "engineiface.h"
void CTimerEntity::sub_101316e0()
{
	if (m_n498 == 0) {
		if (m_n4a4 != 0)
			m_fInterval = enginerandom->vfunc1(m_fLowerRandomBound, m_fUpperRandomBound);
		m_flNextThink17c = m_fInterval + gpGlobals->curtime;
	}
}
// END FUNCTION

// FUNCTION: 0x10131750 size=0xf
namespace lifted {
int sub_1000c1b2();
}
struct CUnknown10131750 { int sub_10131750(); };
int CUnknown10131750::sub_10131750()
{
    *(int *)((char *)this + 0x498) = 0;
    return lifted::sub_1000c1b2();
}
// END FUNCTION

// FUNCTION: 0x10131770 size=0x15
struct CUnknown10131770 { void sub_10131770(); };
void CUnknown10131770::sub_10131770()
{
    *(int *)((char *)this + 0x498) = 1;
    *(int *)((char *)this + 0x17c) = 0;
}
// END FUNCTION

// FUNCTION: 0x101317a0 size=0x14
struct CUnit101317a0
{
	char m_pad0000[0x498];
	int m_n498;

	void sub_10131750();
	void sub_10131770();
	void sub_101317a0();
};

// TARGET: CUnit101317a0::sub_101317a0
void CUnit101317a0::sub_101317a0()
{
	if (m_n498)
		sub_10131750();
	else
		sub_10131770();
}
// END FUNCTION

// FUNCTION: 0x101317d0 size=0x64
struct COutputX {
    char m_pad[0x18];
    void sub_100cd660(void *pActivator, void *pCaller, float flDelay);
};
struct CToggleRelayUnit {
    char m_pad0000[0x204];
    unsigned int m_spawnflags;	// 0x204
    char m_pad0208[0x450 - 0x208];
    COutputX m_OnTrigger;	// 0x450
    COutputX m_OnTurnOn;	// 0x468
    COutputX m_OnTurnOff;	// 0x480
    int m_nDisabled;	// 0x498
    char m_pad049c[4];
    char m_bToggleState;	// 0x4a0
    void sub_101316e0();
    void sub_101317d0();
};

// TARGET: CToggleRelayUnit::sub_101317d0
void CToggleRelayUnit::sub_101317d0()
{
    if (m_nDisabled)
        return;
    if (m_spawnflags & 1) {
        if (m_bToggleState)
            m_OnTurnOn.sub_100cd660(this, this, 0);
        else
            m_OnTurnOff.sub_100cd660(this, this, 0);
        m_bToggleState = !m_bToggleState;
        sub_101316e0();
    } else {
        m_OnTrigger.sub_100cd660(this, this, 0);
        sub_101316e0();
    }
}
// END FUNCTION

// FUNCTION: 0x10131860 size=0x8
namespace lifted {
int sub_1001385e();
}
int __stdcall sub_10131860(int a0)
{
    return lifted::sub_1001385e();
}
// END FUNCTION

// FUNCTION: 0x10131880 size=0x8
namespace lifted {
int sub_1000ce28();
}
int __stdcall sub_10131880(int a0)
{
    return lifted::sub_1000ce28();
}
// END FUNCTION

// FUNCTION: 0x101318a0 size=0x8
void sub_10002441();
void __stdcall sub_101318a0(int) { sub_10002441(); }
// END FUNCTION

// FUNCTION: 0x101318c0 size=0x8
namespace lifted {
int sub_10009a0c();
}
int __stdcall sub_101318c0(int a0)
{
    return lifted::sub_10009a0c();
}
// END FUNCTION

// FUNCTION: 0x101318e0 size=0x4a
#include "CTimerEntity.h"

extern float g_104454c4;

void CTimerEntity::sub_101318e0(inputdata_t *pInput)
{
	float f = pInput->value.fieldType == 1 ? pInput->value.flValue : g_104454c4;
	if (f < 0.01f)
		f = 0.01f;
	if (f != m_fInterval) {
		m_fInterval = f;
		sub_101316e0();
	}
}
// END FUNCTION

// FUNCTION: 0x10131950 size=0x6b
#include "platform.h"
#include "CBaseEntity.h"

extern void *vt_104475c4[];
extern void *vt_10466444[];
extern char g_105785e8[];
void *sub_100aa720(int size);

struct CLogicLineList {
	void sub_100cd2a0();
};

struct CLogicLineView : CBaseEntity {
	char m_padView[0x450 - 0x3e0];
	CLogicLineList m_list450;
	char m_pad454[0x46c - 0x454];
	int m_h46c;
	int m_h470;
};

DLL_EXPORT CBaseEntity *logic_lineto()
{
	CLogicLineView *p = (CLogicLineView *)sub_100aa720(0x474);
	CBaseEntity *e;
	if (p) {
		p->sub_1009d980(0);
		*(void ***)p = vt_104475c4;
		p->m_list450.sub_100cd2a0();
		p->m_h46c = -1;
		p->m_h470 = -1;
		e = p;
	} else
		e = 0;
	if (e)
		*(void ***)e = vt_10466444;
	e->vfunc106(g_105785e8);
	return e;
}
// END FUNCTION

// FUNCTION: 0x101319e0 size=0x6
#include "datamap.h"
#include "CLogicLineToEntity.h"
namespace lifted {
extern char g_105760fc;
}
datamap_t * CLogicLineToEntity::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105760fc);
}
// END FUNCTION

// FUNCTION: 0x10131a00 size=0x5
int * sub_10131a40(void);
int * g_1070c5ec = ((int * (*)(int))sub_10131a40)(0);
// END FUNCTION

// FUNCTION: 0x10131a40 size=0x52
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
extern int g_105760fc[2];

int *sub_10131a40()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 2, "m_SourceName", {0x468, 0}, 1, 6, "source" },
        { 10, "m_Line", {0x450, 0}, 1, 0x16, "Line", g_1055dc70 },
    };
    g_105760fc[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_105760fc[0] = (int)&dataDesc[1];
    return g_105760fc;
}
// END FUNCTION

// FUNCTION: 0x10131ac0 size=0x151
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CLogicLineToEntity.h"
#include "CGlobalEntityList.h"
#include "CEHandleGet.h"

extern CGlobalEntityList g_106eb5d8;
__declspec(dllimport) void Warning(const char *pszFormat, ...);

// TARGET: CLogicLineToEntity::vfunc113
void CLogicLineToEntity::vfunc113()
{
	CBaseEntity::vfunc113();
	const char *pszTarget = *(const char **)((char *)this + 0x20c);
	if (pszTarget) {
		CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, pszTarget, 0, 0);
		unsigned int *phTarget = &m_hTarget;
		if (pEnt)
			*phTarget = *pEnt->vfunc1();
		else
			*phTarget = 0xffffffff;
		if (!g_10566458->sub_100290c0(phTarget) || !g_10566458->sub_100290c0(phTarget)->m_pEdict2e0) {
			Warning("logic_lineto - Target not found or target with no origin!\n");
			m_hTarget = *vfunc1();
		}
	} else {
		m_hTarget = *vfunc1();
	}
	if (m_pszSource) {
		CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, m_pszSource, 0, 0);
		if (pEnt)
			m_hSource = *pEnt->vfunc1();
		else
			m_hSource = 0xffffffff;
		if (EHandle_Get(m_hSource) && ((CBaseEntity *)EHandle_Get(m_hSource))->m_pEdict2e0)
			return;
		Warning("logic_lineto - Source not found or source with no origin!\n");
	}
	m_hSource = *vfunc1();
}
// END FUNCTION

// FUNCTION: 0x10131c80 size=0x15
#include "CLogicLineToEntity.h"

void CLogicLineToEntity::vfunc103()
{
	m_flNextThink = gpGlobals->curtime + 0.01;
}
// END FUNCTION

// FUNCTION: 0x10131cb0 size=0x153
#include "CLogicLineToEntity.h"
#include "CEHandleGet.h"
#include "CEntityVSlots.h"

extern Vector g_1070d1b0;

// TARGET: CLogicLineToEntity::vfunc134
void CLogicLineToEntity::vfunc134()
{
	CEntityVSlots *pTarget = (CEntityVSlots *)EHandle_Get(m_hTarget);
	CEntityVSlots *pSource = (CEntityVSlots *)EHandle_Get(m_hSource);

	if (pTarget && pSource && ((CBaseEntity *)pTarget)->m_pEdict2e0 && ((CBaseEntity *)pSource)->m_pEdict2e0) {
		Vector *pSourceOrigin = pSource->slot217();
		Vector *pTargetOrigin = pTarget->slot217();
		m_Output.SetVector3D(*pTargetOrigin - *pSourceOrigin);
		m_Output.sub_100cd300(*(CVariantCopy *)&m_Output, this, this, 0.0f);
		m_flNextThink = gpGlobals->curtime + 0.01;
	} else {
		m_Output.SetVector3D(g_1070d1b0);
		m_Output.sub_100cd300(*(CVariantCopy *)&m_Output, this, this, 0.0f);
		m_flNextThink = gpGlobals->curtime + 10.0f;
	}
}
// END FUNCTION

// FUNCTION: 0x10131e70 size=0x5c
#include "platform.h"
#include "CMathRemap.h"

// TARGET: math_remap
DLL_EXPORT CBaseEntity *math_remap()
{
	CMathRemap *p = new CMathRemap;
	p->vfunc106("math_remap");
	return p;
}
// END FUNCTION

// FUNCTION: 0x10131ef0 size=0x6
#include "datamap.h"
#include "CMathRemap.h"
namespace lifted {
extern char g_1057619c;
}
datamap_t * CMathRemap::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1057619c);
}
// END FUNCTION

// FUNCTION: 0x10131f10 size=0x5
int * sub_10131f50(void);
int * g_1070c610 = ((int * (*)(int))sub_10131f50)(0);
// END FUNCTION

// FUNCTION: 0x10131f50 size=0x1a6
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
extern int g_1057619c[2];
void sub_1000c158();

int *sub_10131f50()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 1, "InputValue", {0, 0}, 1, 8, "InValue", 0, (void *)sub_1000c158 },
        { 10, "m_OutValue", {0x460, 0}, 1, 0x16, "OutValue", g_1055dc70 },
        { 1, "m_flInMin", {0x450, 0}, 1, 6, "in1", 0, 0 },
        { 1, "m_flInMax", {0x454, 0}, 1, 6, "in2", 0, 0 },
        { 1, "m_flOut1", {0x458, 0}, 1, 6, "out1", 0, 0 },
        { 1, "m_flOut2", {0x45c, 0}, 1, 6, "out2", 0, 0 },
    };
    g_1057619c[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1057619c[0] = (int)&dataDesc[1];
    return g_1057619c;
}
// END FUNCTION

// FUNCTION: 0x10132170 size=0x55
#include "CMathRemap.h"
void CMathRemap::vfunc103()
{
    if (m_flInMin == m_flInMax) {
        m_flInMin = 0;
        m_flInMax = 1.0f;
    }
    if (m_flInMin > m_flInMax) {
        float t = m_flInMin;
        m_flInMin = m_flInMax;
        m_flInMax = t;
    }
}
// END FUNCTION

// FUNCTION: 0x101321f0 size=0xcc
#include "CMathRemap.h"
#include "inputdata_t.h"

struct CMathRemapView {
	char m_pad[0x450];
	float m_flInMin;
	float m_flInMax;
	float InMin() const { return m_flInMin; }
	float InMax() const { return m_flInMax; }
};

// TARGET: CMathRemap::sub_101321f0
void CMathRemap::sub_101321f0(inputdata_t &inputdata)
{
	CMathRemapView *p = (CMathRemapView *)this;
	float flIn = (inputdata.value.fieldType == 1) ? inputdata.value.flValue : 0.0f;
	float flClamped = (flIn > p->InMax()) ? p->InMax() : ((flIn < p->InMin()) ? p->InMin() : flIn);
	if (flClamped != flIn && (m_flags204 & 1))
		return;
	void *pActivator = inputdata.pActivator;
	float flRemapped = ((flIn - m_flInMin) * (m_flOutMax - m_flOutMin)) / (m_flInMax - m_flInMin) + m_flOutMin;
	((variant_t *)&m_OutValue)->sub_100d0390(1, &flRemapped);
	m_OutValue.sub_100cd300(*(CVariantCopy *)&m_OutValue, pActivator, this, 0.0f);
}
// END FUNCTION

// FUNCTION: 0x10132300 size=0x5c
#include "platform.h"
#include "CMathColorBlend.h"

// TARGET: math_colorblend
DLL_EXPORT CBaseEntity *math_colorblend()
{
	CMathColorBlend *p = new CMathColorBlend;
	p->vfunc106("math_colorblend");
	return p;
}
// END FUNCTION

// FUNCTION: 0x10132380 size=0x6
#include "datamap.h"
#include "CMathColorBlend.h"
namespace lifted {
extern char g_105762ec;
}
datamap_t * CMathColorBlend::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105762ec);
}
// END FUNCTION

// FUNCTION: 0x101323a0 size=0x5
int * sub_101323e0(void);
int * g_1070c608 = ((int * (*)(int))sub_101323e0)(0);
// END FUNCTION

// FUNCTION: 0x101323e0 size=0x1af
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
void sub_1000ac86();
extern int g_105762ec[2];
int *sub_101323e0()
{
    static typedescription_t dataDesc[] = {
        { 0 },
        { 1, "InputValue", {0, 0}, 1, 8, "InValue", 0, (void *)sub_1000ac86 },
        { 0xa, "m_OutValue", {0x460, 0}, 1, 0x16, "OutColor", g_1055dc70 },
        { 1, "m_flInMin", {0x450, 0}, 1, 6, "inmin", 0, 0 },
        { 1, "m_flInMax", {0x454, 0}, 1, 6, "inmax", 0, 0 },
        { 8, "m_OutColor1", {0x458, 0}, 1, 6, "colormin", 0, 0 },
        { 8, "m_OutColor2", {0x45c, 0}, 1, 6, "colormax", 0, 0 },
    };
    g_105762ec[1] = 6;
    g_105762ec[0] = (int)&dataDesc[1];
    return g_105762ec;
}
// END FUNCTION

// FUNCTION: 0x10132600 size=0x55
#include "CMathColorBlend.h"
void CMathColorBlend::vfunc103()
{
    if (m_flInMin == m_flInMax) {
        m_flInMin = 0;
        m_flInMax = 1.0f;
    }
    if (m_flInMin > m_flInMax) {
        float t = m_flInMin;
        m_flInMin = m_flInMax;
        m_flInMax = t;
    }
}
// END FUNCTION

// FUNCTION: 0x10132680 size=0x190
#include "CMathColorBlend.h"
#include "inputdata_t.h"

static inline void NavFireColor(COutputEvent &out, CMathColorBlendColor32 val, void *pActivator, CBaseEntity *pCaller)
{
	((CVariantCopy *)&out)->sub_1000b320(8, &val);
	out.sub_100cd300(*(CVariantCopy *)&out, pActivator, pCaller, 0.0f);
}

// TARGET: CMathColorBlend::sub_10132680
void CMathColorBlend::sub_10132680(inputdata_t &inputdata)
{
	float flValue;
	if (inputdata.value.fieldType == 1)
		flValue = inputdata.value.flValue;
	else
		flValue = 0;
	float flClamped;
	if (m_flInMax < flValue)
		flClamped = m_flInMax;
	else if (m_flInMin > flValue)
		flClamped = m_flInMin;
	else
		flClamped = flValue;
	if (flClamped != flValue && (m_flags204 & 1))
		return;
	CMathColorBlendColor32 col;
	col.r = (unsigned char)((float)(m_OutMax.r - m_OutMin.r) * (flClamped - m_flInMin) / (m_flInMax - m_flInMin) + m_OutMin.r);
	col.g = (unsigned char)((float)(m_OutMax.g - m_OutMin.g) * (flClamped - m_flInMin) / (m_flInMax - m_flInMin) + m_OutMin.g);
	col.b = (unsigned char)((float)(m_OutMax.b - m_OutMin.b) * (flClamped - m_flInMin) / (m_flInMax - m_flInMin) + m_OutMin.b);
	col.a = (unsigned char)((float)(m_OutMax.a - m_OutMin.a) * (flClamped - m_flInMin) / (m_flInMax - m_flInMin) + m_OutMin.a);
	NavFireColor(m_OutValue, col, inputdata.pActivator, this);
}
// END FUNCTION

// FUNCTION: 0x10132880 size=0x6
#include "datamap.h"
#include "CEnvGlobal.h"
namespace lifted {
extern char g_1057643c;
}
datamap_t * CEnvGlobal::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1057643c);
}
// END FUNCTION

// FUNCTION: 0x101328a0 size=0x5
int sub_101328e0(void);
int g_1070c5f0 = ((int (*)(int))sub_101328e0)(0);
// END FUNCTION

// FUNCTION: 0x101328e0 size=0x1a
namespace lifted {
extern int g_1057643c;
extern int g_10576440;
extern char g_10576484;
}
int sub_101328e0()
{
    lifted::g_10576440 = 6;
    lifted::g_1057643c = (int)&lifted::g_10576484;
    return (int)&lifted::g_1057643c;
}
// END FUNCTION

// FUNCTION: 0x10132910 size=0x4b
#include "platform.h"
#include "CEnvGlobal.h"

void *sub_100aa720(unsigned int size);
inline void *operator new(unsigned int, void *p) { return p; }
extern const char g_105787a0[];

// TARGET: env_global
DLL_EXPORT CEnvGlobal *env_global()
{
	void *mem = sub_100aa720(0x45c);
	CEnvGlobal *p = mem ? ::new(mem) CEnvGlobal : 0;
	p->vfunc106(g_105787a0);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10132980 size=0x54
#include "CEnvGlobal.h"
#include "CUnknown10057680.h"
#include "globalvars.h"
extern CUnknown10057680 g_106be530;
void sub_101cd940(CBaseEntity *);
void CEnvGlobal::vfunc103()
{
	if (!m_pszGlobalName) {
		sub_101cd940(this);
		return;
	}
	if (m_flags204 & 1) {
		if (!g_106be530.sub_100576a0(m_pszGlobalName))
			g_106be530.sub_10057740(m_pszGlobalName, gpGlobals->mapname, m_nInitialState);
	}
}
// END FUNCTION

// FUNCTION: 0x10132a00 size=0x48
#include "CEnvGlobal.h"
#include "CUnknown10057680.h"
#include "globalvars.h"
extern CUnknown10057680 g_106be530;
// TARGET: CEnvGlobal::sub_10132a00
void CEnvGlobal::sub_10132a00(int unused)
{
	const char *pszName = m_pszGlobalName;
	if (g_106be530.sub_100576a0(pszName))
		g_106be530.sub_100577d0(m_pszGlobalName, 1);
	else
		g_106be530.sub_10057740(m_pszGlobalName, gpGlobals->mapname, 1);
}
// END FUNCTION

// FUNCTION: 0x10132a70 size=0x48
#include "CEnvGlobal.h"
#include "CUnknown10057680.h"
#include "globalvars.h"
extern CUnknown10057680 g_106be530;
// TARGET: CEnvGlobal::sub_10132a70
void CEnvGlobal::sub_10132a70(int unused)
{
	const char *pszName = m_pszGlobalName;
	if (g_106be530.sub_100576a0(pszName))
		g_106be530.sub_100577d0(m_pszGlobalName, 0);
	else
		g_106be530.sub_10057740(m_pszGlobalName, gpGlobals->mapname, 0);
}
// END FUNCTION

// FUNCTION: 0x10132ae0 size=0x48
#include "CEnvGlobal.h"
#include "CUnknown10057680.h"
#include "globalvars.h"
extern CUnknown10057680 g_106be530;
// TARGET: CEnvGlobal::sub_10132ae0
void CEnvGlobal::sub_10132ae0(int unused)
{
	const char *pszName = m_pszGlobalName;
	if (g_106be530.sub_100576a0(pszName))
		g_106be530.sub_100577d0(m_pszGlobalName, 2);
	else
		g_106be530.sub_10057740(m_pszGlobalName, gpGlobals->mapname, 2);
}
// END FUNCTION

// FUNCTION: 0x10132b50 size=0x6d
struct CGlobals1070b228 { char pad[0x24]; int m_n24; };
extern CGlobals1070b228 *g_1070b228;

struct CMgr106be530 {
	int sub_100020bd(int h);
	int sub_10005d8f(int h);
	void sub_1000f051(int h, int a);
	void sub_10009066(int h, int t, int a);
};
extern CMgr106be530 g_106be530;

struct CUnit10132b50 {
	char m_pad0000[0x450];
	int m_h450;
	void sub_10132b50(int unused);
};

// TARGET: CUnit10132b50::sub_10132b50
void CUnit10132b50::sub_10132b50(int unused)
{
	int a;
	int r = g_106be530.sub_100020bd(m_h450);
	if (r == 1)
		a = 0;
	else if (r == 0)
		a = 1;
	else
		return;
	int h = m_h450;
	if (g_106be530.sub_10005d8f(h))
		g_106be530.sub_1000f051(m_h450, a);
	else
		g_106be530.sub_10009066(m_h450, g_1070b228->m_n24, a);
}
// END FUNCTION

// FUNCTION: 0x10132be0 size=0x11e
#include "CEnvGlobal.h"
#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct EngineText {
	S10(a) S10(b) S10(c)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4();
	virtual int entIndex(int edict);
};
struct GlobalState {
	int sub_10057820(const char *name);
};
extern EngineText *g_1070b22c;
extern GlobalState g_106be530;
extern char g_106b8540[];
extern "C" __declspec(dllimport) int Q_snprintf(char *buf, int n, const char *fmt, ...);
extern "C" __declspec(dllimport) char *Q_strncpy(char *dst, const char *src, int n);
void sub_101434b0(int ent, int line, const char *text, int a, int r, int g, int b, int al);

// TARGET: CEnvGlobal::vfunc124
int CEnvGlobal::vfunc124()
{
	int line = CBaseEntity::vfunc124();
	char buf[512];
	if (*(unsigned char *)((char *)this + 0x224) & 1) {
		const char *name = *(const char **)((char *)this + 0x450);
		Q_snprintf(buf, 512, "State: %s", name ? name : g_106b8540);
		int edict = *(int *)((char *)this + 0x2e0);
		sub_101434b0(g_1070b22c->entIndex(edict), line, buf, 0, 255, 255, 255, 255);
		line++;
		switch (g_106be530.sub_10057820(*(const char **)((char *)this + 0x450))) {
		case 0:
			Q_strncpy(buf, "Value: OFF", 512);
			break;
		case 1:
			Q_strncpy(buf, "Value: ON", 512);
			break;
		case 2:
			Q_strncpy(buf, "Value: DEAD", 512);
			break;
		}
		int edict2 = *(int *)((char *)this + 0x2e0);
		sub_101434b0(g_1070b22c->entIndex(edict2), line, buf, 0, 255, 255, 255, 255);
		line++;
	}
	return line;
}
// END FUNCTION

// FUNCTION: 0x10132d50 size=0x6
#include "datamap.h"
#include "CMultiSource.h"
namespace lifted {
extern char g_1057658c;
}
datamap_t * CMultiSource::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1057658c);
}
// END FUNCTION

// FUNCTION: 0x10132d70 size=0x5
int * sub_10132db0(void);
int * g_1070c5e0 = ((int * (*)(int))sub_10132db0)(0);
// END FUNCTION

// FUNCTION: 0x10132db0 size=0x52
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
extern int g_1057658c[2];
void sub_100120bc();

int *sub_10132db0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 12, "m_rgEntities", {0x450, 0}, 0x20, 2 },
        { 4, "m_rgTriggered", {0x4d0, 0}, 0x20, 2 },
        { 4, "m_iTotal", {0x568, 0}, 1, 2 },
        { 2, "m_globalstate", {0x56c, 0}, 1, 6, "globalstate" },
        { 0, "CMultiSourceRegister", {0, 0}, 1, 0x20, 0, 0, (void *)sub_100120bc },
        { 10, "m_OnTrigger", {0x550, 0}, 1, 0x16, "OnTrigger", g_1055dc70 },
    };
    g_1057658c[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1057658c[0] = (int)&dataDesc[1];
    return g_1057658c;
}
// END FUNCTION

// FUNCTION: 0x10132e30 size=0x6e
#include "platform.h"
#include "CBaseEntity.h"

extern void *vt_104475c4[];
extern void *vt_10467684[];
extern char g_10578808[];
void *sub_100aa720(int size);

struct COutputCtor {
	void sub_100cd2a0();
};

struct CMultiSourceView : CBaseEntity {
	char m_padView[0x450 - 0x3e0];
	int m_hSource[0x20];
	char m_pad4d0[0x550 - 0x4d0];
	COutputCtor m_out550;
};

DLL_EXPORT CBaseEntity *multisource()
{
	CMultiSourceView *p = (CMultiSourceView *)sub_100aa720(0x570);
	CBaseEntity *e;
	if (p) {
		p->sub_1009d980(0);
		*(void ***)p = vt_104475c4;
		for (int i = 0; i < 0x20; i++)
			p->m_hSource[i] = -1;
		p->m_out550.sub_100cd2a0();
		*(void ***)p = vt_10467684;
		e = p;
	} else
		e = 0;
	e->vfunc106(g_10578808);
	return e;
}
// END FUNCTION

// FUNCTION: 0x10132ec0 size=0x8
#include "CMultiSource.h"
namespace lifted {
int sub_1000f7e5();
}
int CMultiSource::vfunc117()
{
    return (lifted::sub_1000f7e5()) | 0x80;
}
// END FUNCTION

// FUNCTION: 0x10132ee0 size=0x8d
#include "CMultiSource.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

bool CMultiSource::vfunc110(const char *szKeyName, const char *szValue)
{
	if (!_strcmpi(szKeyName, "style")
		|| !_strcmpi(szKeyName, "height")
		|| !_strcmpi(szKeyName, "killtarget")
		|| !_strcmpi(szKeyName, "value1")
		|| !_strcmpi(szKeyName, "value2")
		|| !_strcmpi(szKeyName, "value3"))
		return true;
	return sub_1009e430(szKeyName, szValue);
}
// END FUNCTION

// FUNCTION: 0x10132fa0 size=0x32
// TARGET: CMultiSource::vfunc103
#include "CMultiSource.h"

extern double g_104493d0;
void sub_100120bc();

void CMultiSource::vfunc103()
{
    unsigned int flags = m_flags204 | 1;
    float t = gpGlobals->curtime + g_104493d0;
    m_flags204 = flags;
    m_flNextThink = t;
    sub_100ac4e0((int)sub_100120bc, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x10132ff0 size=0x11d
#include "CMultiSource.h"
#include "CGlobalEntityList.h"
#include "COutputEvent.h"
extern CGlobalEntityList *g_10566458;
extern "C" __declspec(dllimport) void __cdecl Warning(const char *, ...);
extern "C" __declspec(dllimport) void __cdecl DevMsg(int, const char *, ...);
extern char g_10578878[];
extern char g_10578864[];
extern char g_10578838[];
extern char g_106b8540[];
#define MV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct SMSView
{
	MV10(a0) MV10(a1) MV10(a2) MV10(a3) MV10(a4) MV10(a5) MV10(a6) MV10(a7) MV10(a8) MV10(a9)
	MV10(b0) MV10(b1) MV10(b2) MV10(b3)
	virtual void s140(); virtual void s141(); virtual void s142(); virtual void s143(); virtual void s144(); virtual void s145(); virtual void s146();
	virtual bool vfunc147(CBaseEntity *pActivator);
};
struct SMSNetworkable { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual const char *vfunc5(); };
struct SMSUnknown { virtual void v0(); virtual void v1(); virtual void v2(); virtual SMSNetworkable *vfunc3(); };
struct SMSEdict { char m_pad[0x40]; SMSUnknown *m_pUnk; };
struct SMSHandle
{
	unsigned int m_h;
	CGlobalEntityList_Ent *Get()
	{
		if (m_h != 0xffffffff) {
			CGlobalEntityList_Slot *s = &g_10566458->m_Slots[m_h & 0x1fff];
			if (s->m_Serial == (int)(m_h >> 13))
				return s->m_pEntity;
		}
		return 0;
	}
};
void CMultiSource::vfunc173(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, int value)
{
	int i = 0;
	int nTotal = *(int *)((char *)this + 0x568);
	if (nTotal > 0) {
		SMSHandle *p = (SMSHandle *)((char *)this + 0x450);
		do {
			SMSHandle *pCur = p;
			i++;
			p++;
			if (pCur->Get() == (CGlobalEntityList_Ent *)pCaller)
				break;
		} while (i < nTotal);
	}
	if (i > nTotal) {
		SMSEdict *pEdict = (SMSEdict *)*(int *)((char *)pCaller + 0x2e0);
		const char *pszClass;
		if (pEdict) {
			if (!pEdict->m_pUnk)
				pszClass = g_106b8540;
			else
				pszClass = pEdict->m_pUnk->vfunc3()->vfunc5();
		} else {
			pszClass = g_10578864;
		}
		Warning(g_10578878, pszClass);
		return;
	}
	*(unsigned int *)((char *)this + 0x4cc + i * 4) ^= 1;
	if (((SMSView *)this)->vfunc147(pActivator)) {
		DevMsg(2, g_10578838, sub_100ab4f0(), *(int *)((char *)this + 0x568));
		((COutputEvent *)((char *)this + 0x550))->sub_100cd660(pActivator, this, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x10133160 size=0x54
#include "CMultiSource.h"
#include "CUnknown10057680.h"
extern CUnknown10057680 g_106be530;

// TARGET: CMultiSource::vfunc147
bool CMultiSource::vfunc147(CBaseEntity *pActivator)
{
	int i = 0;
	if (!(m_flags204 & 1)) {
		int n = m_nMembers;
		if (n > 0) {
			int *p = m_aMemberTriggered;
			do {
				if (!*p)
					break;
				i++;
				p++;
			} while (i < n);
		}
		if (i == n) {
			if (m_pszGlobalState) {
				i = g_106be530.sub_10057820(m_pszGlobalState);
				if (i != 1)
					goto fail;
			}
			return 1;
		}
	}
fail:
	// WORKAROUND: i read on the failing path keeps the global state name in eax, as the game's code has it (the
	// SDK body, and a plain `return 0`, load it into ecx); the result is false (the old unsigned char form returned
	// `i & 0xffffff00` for the same reason)
	return *(bool *)&i && 0;
}
// END FUNCTION

// FUNCTION: 0x101331e0 size=0x117
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "CMultiSource.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

#define S1(n) virtual void s##n();
#define S10(p) S1(p##0) S1(p##1) S1(p##2) S1(p##3) S1(p##4) S1(p##5) S1(p##6) S1(p##7) S1(p##8) S1(p##9)
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)
struct MultiMgrView
{
	S100(a)
	S10(b0) S10(b1) S10(b2) S10(b3) S10(b4) S10(b5)
	virtual bool slot160(const char *szTarget);
};
static inline const char *GetEntityName1331e0(CBaseEntity *p) { return p->m_name26c; }

extern CGlobalEntityList g_106eb5d8;
extern "C" void *__cdecl memset(void *, int, unsigned int);
void sub_101c0b60();

void CMultiSource::sub_101331e0()
{
	CBaseEntity *pTarget = 0;
	m_nMembers = 0;
	memset(m_rgEntities, 0, sizeof(m_rgEntities));
	sub_100ac4e0((int)sub_101c0b60, 0, 0);
	pTarget = g_106eb5d8.sub_100f7930(0, STRINGR_F(m_name26c));
	while (pTarget && m_nMembers < 32) {
		if (pTarget)
			m_rgEntities[m_nMembers++] = pTarget;
		pTarget = g_106eb5d8.sub_100f7930(pTarget, STRINGR_F(m_name26c));
	}
	pTarget = g_106eb5d8.sub_100f7380(0, "multi_manager");
	while (pTarget && m_nMembers < 32) {
		if (pTarget && ((MultiMgrView *)pTarget)->slot160(GetEntityName1331e0(this)))
			m_rgEntities[m_nMembers++] = pTarget;
		pTarget = g_106eb5d8.sub_100f7380(pTarget, "multi_manager");
	}
	m_flags204 &= ~1;
}
// END FUNCTION

// FUNCTION: 0x10133350 size=0x72
#include "platform.h"
void *sub_1000db89(int);
extern int vt_104475c4;
extern int vt_10467b14;
extern char g_105788d0[];
struct SubItem { void sub_10002ddd(); };
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
	void sub_100090fc(int a);
};
// TARGET: math_counter
DLL_EXPORT GP *math_counter()
{
	GP *p = (GP *)sub_1000db89(0x4a4);
	if (p) {
		p->sub_100090fc(0);
		*(int **)p = &vt_104475c4;
		((SubItem *)((char *)p + 0x45c))->sub_10002ddd();
		((SubItem *)((char *)p + 0x474))->sub_10002ddd();
		((SubItem *)((char *)p + 0x48c))->sub_10002ddd();
		*(int **)p = &vt_10467b14;
	} else {
		p = 0;
	}
	p->name(g_105788d0);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101333f0 size=0x6
#include "datamap.h"
#include "CMathCounter.h"
namespace lifted {
extern char g_105766dc;
}
datamap_t *CMathCounter::vfunc82()
{
    return (datamap_t *)&lifted::g_105766dc;
}
// END FUNCTION

// FUNCTION: 0x10133410 size=0x5
int * sub_10133450(void);
int * g_1070c604 = ((int * (*)(int))sub_10133450)(0);
// END FUNCTION

// FUNCTION: 0x10133450 size=0x116
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
extern int g_105766dc[2];
void sub_100064c9();
void sub_10010870();
void sub_10008d96();
void sub_100110f4();
void sub_100121de();

int *sub_10133450()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 5, "m_bHitMax", {0x459, 0}, 1, 2 },
        { 5, "m_bHitMin", {0x458, 0}, 1, 2 },
        { 1, "m_flMin", {0x450, 0}, 1, 6, "min" },
        { 1, "m_flMax", {0x454, 0}, 1, 6, "max" },
        { 1, "InputAdd", {0, 0}, 1, 8, "Add", 0, (void *)sub_100064c9 },
        { 1, "InputDivide", {0, 0}, 1, 8, "Divide", 0, (void *)sub_10010870 },
        { 1, "InputMultiply", {0, 0}, 1, 8, "Multiply", 0, (void *)sub_10008d96 },
        { 1, "InputSetValue", {0, 0}, 1, 8, "SetValue", 0, (void *)sub_100110f4 },
        { 1, "InputSubtract", {0, 0}, 1, 8, "Subtract", 0, (void *)sub_100121de },
        { 10, "m_OutValue", {0x45c, 0}, 1, 0x16, "OutValue", g_1055dc70 },
        { 10, "m_OnHitMin", {0x474, 0}, 1, 0x16, "OnHitMin", g_1055dc70 },
        { 10, "m_OnHitMax", {0x48c, 0}, 1, 0x16, "OnHitMax", g_1055dc70 },
    };
    g_105766dc[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_105766dc[0] = (int)&dataDesc[1];
    return g_105766dc;
}
// END FUNCTION

// FUNCTION: 0x101335c0 size=0x5e
#include "CMathCounter.h"
#include <stdlib.h>

extern "C" int __cdecl _strcmpi(const char *, const char *);

bool CMathCounter::vfunc110(const char *pszKey, const char *pszValue)
{
	if (!_strcmpi(pszKey, "startvalue")) {
		float f = (float)atoi(pszValue);
		m_OutValue.sub_100d0390(1, &f);
		return true;
	}
	return sub_1009e430(pszKey, pszValue);
}
// END FUNCTION

// FUNCTION: 0x10133640 size=0xcc
#include "CMathCounter.h"

#define clamp(val, min, max) (((val) > (max)) ? (max) : (((val) < (min)) ? (min) : (val)))

struct CMathOutValueView : variant_t
{
	float Get() const { return flValue; }
	void Init(float value) { sub_100d0390(1, &value); }
};

// TARGET: CMathCounter::vfunc103
void CMathCounter::vfunc103()
{
	if (m_flMin > m_flMax)
	{
		float flTemp = m_flMax;
		m_flMax = m_flMin;
		m_flMin = flTemp;
	}
	if ((m_flMin != 0) || (m_flMax != 0))
	{
		CMathOutValueView &out = (CMathOutValueView &)m_OutValue;
		float flStartValue = clamp(out.Get(), m_flMin, m_flMax);
		out.Init(flStartValue);
	}
}
// END FUNCTION

// FUNCTION: 0x10133750 size=0x3f
#include "CVariantCopy.h"

struct CInputData10133750
{
    int m_pActivator;
    int m_pCaller;
    CVariantCopy m_Value;
};

struct CUnknownTimer10133750
{
    void sub_10133750(CInputData10133750 *pInput);
    void sub_10133950(int pTarget, float flValue);
    void Apply(CInputData10133750 *pInput, float flBase);
    char m_pad0000[0x45c];
    float m_fl45c;
};

inline float VariantFloat(const CVariantCopy &v)
{
    if (v.m_fieldType == 1)
        return v.flVal;
    return 0.0f;
}

inline void CUnknownTimer10133750::Apply(CInputData10133750 *pInput, float flBase)
{
    sub_10133950(pInput->m_pActivator, VariantFloat(pInput->m_Value) + flBase);
}

// TARGET: CUnknownTimer10133750::sub_10133750
void CUnknownTimer10133750::sub_10133750(CInputData10133750 *pInput)
{
    Apply(pInput, m_fl45c);
}
// END FUNCTION

// FUNCTION: 0x101337a0 size=0x91
#include "CUnknown101337a0.h"

extern "C" __declspec(dllimport) void DevMsg(int level, const char *pMsg, ...);

inline float VariantFloat(const variant_t &v)
{
	return v.fieldType == 1 ? v.flValue : 0.0f;
}

// TARGET: CUnknown101337a0::sub_101337a0
void CUnknown101337a0::sub_101337a0(inputdata_t &data)
{
	inputdata_t &in = data;
	if (VariantFloat(in.value) != 0.0f) {
		float flNew = m_flValue;
		flNew /= VariantFloat(in.value);
		sub_10133950(in.pActivator, flNew);
	} else {
		DevMsg(1, "LEVEL DESIGN ERROR: Divide by zero in math_value\n");
		float flNew = m_flValue;
		sub_10133950(in.pActivator, flNew);
	}
}
// END FUNCTION

// FUNCTION: 0x10133870 size=0x3f
extern float g_104454c4;

struct CArg10133870
{
	int m_n0000;
	int m_n0004;
	float m_f0008;
	char m_pad000c[0xc];
	int m_n0018;
};

struct CUnknownSelf10133870
{
	char m_pad0000[0x45c];
	float m_f045c;
	void sub_10133950(int a, float f);
	void sub_10133870(CArg10133870 *p);
};

// TARGET: CUnknownSelf10133870::sub_10133870
void CUnknownSelf10133870::sub_10133870(CArg10133870 *p)
{
	float flScale = m_f045c;
	float f;
	if (p->m_n0018 == 1)
		f = p->m_f0008;
	else
		f = g_104454c4;
	sub_10133950(p->m_n0000, f * flScale);
}
// END FUNCTION

// FUNCTION: 0x101338c0 size=0x35
#include "CMathCounter.h"
#include "inputdata_t.h"
inline float VariantFloat(const variant_t &v)
{
	if (v.fieldType == 1)
		return v.flValue;
	return 0;
}

void CMathCounter::sub_101338c0(inputdata_t &inputdata)
{
	sub_10133950(inputdata.pActivator, VariantFloat(inputdata.value));
}
// END FUNCTION

// FUNCTION: 0x10133910 size=0x30
#include "CMathCounter.h"
extern float g_104454c4;
void CMathCounter::sub_10133910(inputdata_t &inputdata)
{
	float flCur = m_OutValue.flValue;
	float flIn = inputdata.value.fieldType == 1 ? inputdata.value.flValue : g_104454c4;
	sub_10133950(inputdata.pActivator, flCur - flIn);
}
// END FUNCTION

// FUNCTION: 0x10133950 size=0x117
#include "CMathCounter.h"
#include "COutputFloat.h"

struct CMathCounterView {
	char m_pad0[0x450];
	float m_flMin;
	float m_flMax;
	bool m_bHitMin;
	bool m_bHitMax;
	char m_pad45a[2];
	COutputFloat m_OutValueF;
	COutputEvent m_OnHitMin;
	COutputEvent m_OnHitMax;
	void sub_10133950(void *pActivator, float flNewValue);
};

void CMathCounterView::sub_10133950(void *pActivator, float flNewValue)
{
	if (m_flMin != 0.0f || m_flMax != 0.0f) {
		if (flNewValue >= m_flMax) {
			if (!m_bHitMax) {
				m_bHitMax = true;
				m_OnHitMax.sub_100cd660(pActivator, this, 0.0f);
			}
		} else if (flNewValue <= m_flMin) {
			if (!m_bHitMin) {
				m_bHitMin = true;
				m_OnHitMin.sub_100cd660(pActivator, this, 0.0f);
			}
		} else {
			m_bHitMin = false;
			m_bHitMax = false;
		}
		flNewValue = ((flNewValue) > (m_flMax)) ? (m_flMax) : (((flNewValue) < (m_flMin)) ? (m_flMin) : (flNewValue));
	}
	m_OutValueF.Set(flNewValue, pActivator, this);
}
// END FUNCTION

// FUNCTION: 0x10133ac0 size=0x78
#include "platform.h"
void *sub_1000db89(int);
extern int vt_104475c4;
extern int vt_10467fa4;
extern char g_10578974[];
struct SubItem { char m_pad[0x18]; void sub_10002ddd(); };
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
	void sub_100090fc(int a);
};
// TARGET: logic_case
DLL_EXPORT GP *logic_case()
{
	GP *p = (GP *)sub_1000db89(0x628);
	if (p) {
		p->sub_100090fc(0);
		*(int **)p = &vt_104475c4;
		SubItem *pItems = (SubItem *)((char *)p + 0x490);
		for (int i = 0; i < 16; i++)
			pItems[i].sub_10002ddd();
		((SubItem *)((char *)p + 0x610))->sub_10002ddd();
		*(int **)p = &vt_10467fa4;
	} else {
		p = 0;
	}
	p->name(g_10578974);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10133b60 size=0x6
#include "datamap.h"
#include "CLogicCase.h"
namespace lifted {
extern char g_10576934;
}
datamap_t *CLogicCase::vfunc82()
{
    return (datamap_t *)&lifted::g_10576934;
}
// END FUNCTION

// FUNCTION: 0x10133b80 size=0x5
int * sub_10133bc0(void);
int * g_1070c5d8 = ((int * (*)(int))sub_10133bc0)(0);
// END FUNCTION

// FUNCTION: 0x10133bc0 size=0x5bb
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
extern int g_10576934[2];
void sub_1000bd20();
void sub_10008c3d();

int *sub_10133bc0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 2, "m_nCase[0]", {0x450, 0}, 1, 6, "Case01" },
        { 2, "m_nCase[1]", {0x454, 0}, 1, 6, "Case02" },
        { 2, "m_nCase[2]", {0x458, 0}, 1, 6, "Case03" },
        { 2, "m_nCase[3]", {0x45c, 0}, 1, 6, "Case04" },
        { 2, "m_nCase[4]", {0x460, 0}, 1, 6, "Case05" },
        { 2, "m_nCase[5]", {0x464, 0}, 1, 6, "Case06" },
        { 2, "m_nCase[6]", {0x468, 0}, 1, 6, "Case07" },
        { 2, "m_nCase[7]", {0x46c, 0}, 1, 6, "Case08" },
        { 2, "m_nCase[8]", {0x470, 0}, 1, 6, "Case09" },
        { 2, "m_nCase[9]", {0x474, 0}, 1, 6, "Case10" },
        { 2, "m_nCase[10]", {0x478, 0}, 1, 6, "Case11" },
        { 2, "m_nCase[11]", {0x47c, 0}, 1, 6, "Case12" },
        { 2, "m_nCase[12]", {0x480, 0}, 1, 6, "Case13" },
        { 2, "m_nCase[13]", {0x484, 0}, 1, 6, "Case14" },
        { 2, "m_nCase[14]", {0x488, 0}, 1, 6, "Case15" },
        { 2, "m_nCase[15]", {0x48c, 0}, 1, 6, "Case16" },
        { 2, "InputValue", {0, 0}, 1, 8, "InValue", 0, (void *)sub_1000bd20 },
        { 0, "InputPickRandom", {0, 0}, 1, 8, "PickRandom", 0, (void *)sub_10008c3d },
        { 10, "m_OnCase[0]", {0x490, 0}, 1, 0x16, "OnCase01", g_1055dc70 },
        { 10, "m_OnCase[1]", {0x4a8, 0}, 1, 0x16, "OnCase02", g_1055dc70 },
        { 10, "m_OnCase[2]", {0x4c0, 0}, 1, 0x16, "OnCase03", g_1055dc70 },
        { 10, "m_OnCase[3]", {0x4d8, 0}, 1, 0x16, "OnCase04", g_1055dc70 },
        { 10, "m_OnCase[4]", {0x4f0, 0}, 1, 0x16, "OnCase05", g_1055dc70 },
        { 10, "m_OnCase[5]", {0x508, 0}, 1, 0x16, "OnCase06", g_1055dc70 },
        { 10, "m_OnCase[6]", {0x520, 0}, 1, 0x16, "OnCase07", g_1055dc70 },
        { 10, "m_OnCase[7]", {0x538, 0}, 1, 0x16, "OnCase08", g_1055dc70 },
        { 10, "m_OnCase[8]", {0x550, 0}, 1, 0x16, "OnCase09", g_1055dc70 },
        { 10, "m_OnCase[9]", {0x568, 0}, 1, 0x16, "OnCase10", g_1055dc70 },
        { 10, "m_OnCase[10]", {0x580, 0}, 1, 0x16, "OnCase11", g_1055dc70 },
        { 10, "m_OnCase[11]", {0x598, 0}, 1, 0x16, "OnCase12", g_1055dc70 },
        { 10, "m_OnCase[12]", {0x5b0, 0}, 1, 0x16, "OnCase13", g_1055dc70 },
        { 10, "m_OnCase[13]", {0x5c8, 0}, 1, 0x16, "OnCase14", g_1055dc70 },
        { 10, "m_OnCase[14]", {0x5e0, 0}, 1, 0x16, "OnCase15", g_1055dc70 },
        { 10, "m_OnCase[15]", {0x5f8, 0}, 1, 0x16, "OnCase16", g_1055dc70 },
        { 10, "m_OnDefault", {0x610, 0}, 1, 0x16, "OnDefault", g_1055dc70 },
    };
    g_10576934[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_10576934[0] = (int)&dataDesc[1];
    return g_10576934;
}
// END FUNCTION

// FUNCTION: 0x101342f0 size=0x1
#include "CLogicCase.h"
void CLogicCase::vfunc103()
{
}
// END FUNCTION

// FUNCTION: 0x10134310 size=0xc2
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CLogicCase.h"
#include "ScopeTrace.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

void CLogicCase::sub_10134310(inputdata_t *pInput)
{
    variant_t &value = pInput->value;
    const char *pszValue;
    if (value.fieldType == 2)
        pszValue = value.iszValue ? value.iszValue : g_106b8540;
    else
        pszValue = value.sub_10008805();
    for (int i = 0; i < 16; i++) {
        if (m_nCase[i] && !_strcmpi(m_nCase[i], pszValue)) {
            m_OnCase[i].sub_100cd660(pInput->pActivator, this, 0.0f);
            return;
        }
    }
    void *pActivator = pInput->pActivator;
    CVariantCopy copy(*(CVariantCopy *)&value);
    ((CVariantCopy *)&m_OnDefault)->sub_1000b320(0x12, &copy);
    m_OnDefault.sub_100cd300(*(CVariantCopy *)&m_OnDefault, pActivator, this, 0.0f);
}
// END FUNCTION

// FUNCTION: 0x10134420 size=0x9a
#include "CUnknown101346e0.h"
#include "COutputEvent.h"
#include "inputdata_t.h"

extern "C" void *__cdecl memset(void *, int, unsigned int);
#pragma intrinsic(memset)

struct CListNode100cd940;
int __fastcall sub_100cd940(CListNode100cd940 *pOutput);

struct CRandomStream
{
	virtual void v0();
	virtual void v1();
	virtual int RandomInt(int lo, int hi);
};

extern CRandomStream *g_1070b244;
extern void (__cdecl *g_109f3650)(int level, const char *fmt, ...);

void CUnknown101346e0::sub_10134420(inputdata_t *pInput)
{
	int anValid[16];
	memset(anValid, 0, sizeof(anValid));
	int nValid = 0;
	for (int i = 0; i < 16; i++) {
		if (sub_100cd940((CListNode100cd940 *)((char *)this + 0x490 + i * 0x18)) > 0)
			anValid[nValid++] = i;
	}
	if (nValid > 0) {
		int nWhich = anValid[g_1070b244->RandomInt(0, nValid - 1)];
		if (nWhich < 16)
			((COutputEvent *)((char *)this + 0x490 + nWhich * 0x18))->sub_100cd660(pInput->pActivator, this, 0);
	} else {
		g_109f3650(1, "Firing PickRandom input on logic_case %s with no cases set up\n", sub_100ab4f0());
	}
}
// END FUNCTION

// FUNCTION: 0x101344f0 size=0x78
#include "platform.h"
#include "CBaseEntity.h"

extern void *vt_104475c4[];
extern void *vt_10468434[];
extern char g_10578bb8[];
void *sub_100aa720(int size);

struct COutputSlot {
	char m_data[0x18];
	void sub_100cd2a0();
};

struct CCaseToggleView : CBaseEntity {
	char m_padView[0x490 - 0x3e0];
	COutputSlot m_out[16];
	COutputSlot m_out610;
};

DLL_EXPORT CBaseEntity *logic_case_toggle()
{
	CCaseToggleView *p = (CCaseToggleView *)sub_100aa720(0x62c);
	CBaseEntity *e;
	if (p) {
		p->sub_1009d980(0);
		*(void ***)p = vt_104475c4;
		for (int i = 0; i < 16; i++)
			p->m_out[i].sub_100cd2a0();
		p->m_out610.sub_100cd2a0();
		*(void ***)p = vt_10468434;
		e = p;
	} else
		e = 0;
	e->vfunc106(g_10578bb8);
	return e;
}
// END FUNCTION

// FUNCTION: 0x10134590 size=0x6
#include "datamap.h"
#include "CLogicCaseToggle.h"
namespace lifted {
extern char g_10576f80;
}
datamap_t *CLogicCaseToggle::vfunc82()
{
    return (datamap_t *)&lifted::g_10576f80;
}
// END FUNCTION

// FUNCTION: 0x101345b0 size=0x5
int sub_101345f0(void);
int g_1070c5e4 = ((int (*)(int))sub_101345f0)(0);
// END FUNCTION

// FUNCTION: 0x101345f0 size=0x1a
namespace lifted {
extern int g_10576f80;
extern int g_10576f84;
extern char g_10576fc4;
}
int sub_101345f0()
{
    lifted::g_10576f84 = 3;
    lifted::g_10576f80 = (int)&lifted::g_10576fc4;
    return (int)&lifted::g_10576f80;
}
// END FUNCTION

// FUNCTION: 0x10134620 size=0x8a
#include "CLogicCaseToggle.h"
extern void (__cdecl *g_109f3630)(const char *, ...);

void CLogicCaseToggle::vfunc103()
{
	if (m_current < 0) {
		g_109f3630("Invalid initial value (%d) for %s.  Must be from 1 to %d.  Clamping to 1.\n", m_current, sub_100ab4f0(), 16);
		m_current = 0;
	} else if (m_current >= 16) {
		g_109f3630("Invalid initial value (%d) for %s.  Must be from 1 to %d.  Clamping to 16.\n", m_current, sub_100ab4f0(), 16);
		m_current = 15;
	} else {
		m_current--;
	}
	sub_101346e0(-1);
}
// END FUNCTION

// FUNCTION: 0x101346e0 size=0x7f
#include "CUnknown101346e0.h"

int CUnknown101346e0::sub_101346e0(int steps)
{
    while (steps > 0) {
        m_current++;
        if (m_current < 0 || m_current >= 16)
            m_current = 0;
        if (m_slots[m_current] != 0)
            steps--;
    }
    while (steps < 0) {
        m_current--;
        if (m_current < 0 || m_current >= 16)
            m_current = 15;
        if (m_slots[m_current] != 0)
            steps++;
    }
    return m_current;
}
// END FUNCTION

// FUNCTION: 0x10134780 size=0xd2
#include "CUnknown101346e0.h"
#include "COutputEvent.h"
#include "inputdata_t.h"
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern char g_106b8540[];
// TARGET: CUnknown101346e0::sub_10134780
void CUnknown101346e0::sub_10134780(inputdata_t *pInput)
{
	variant_t *pValue = &pInput->value;
	const char *pszValue;
	if (pValue->fieldType == 2)
		pszValue = pValue->iszValue ? pValue->iszValue : g_106b8540;
	else
		pszValue = pValue->sub_10008805();
	COutputEvent *pOutputs = (COutputEvent *)((char *)this + 0x490);
	for (int i = 0; i < 16; i++) {
		if (m_slots[i] && !_strcmpi((const char *)m_slots[i], pszValue)) {
			m_current = i;
			pOutputs[i].sub_100cd660(pInput->pActivator, this, 0);
			return;
		}
	}
	m_current = -1;
	void *pActivator = pInput->pActivator;
	CVariantCopy value(*(CVariantCopy *)pValue);
	COutputEvent *pExtra = (COutputEvent *)((char *)this + 0x610);
	((CVariantCopy *)pExtra)->sub_1000b320(0x12, &value);
	pExtra->sub_100cd300(*(CVariantCopy *)pExtra, pActivator, this, 0);
}
// END FUNCTION

// FUNCTION: 0x101348a0 size=0xaf
#include "CLogicCaseToggle.h"
#include "COutputEvent.h"
#include "inputdata_t.h"
__declspec(dllimport) void DevMsg(const char *, ...);
// TARGET: CLogicCaseToggle::sub_101348a0
void CLogicCaseToggle::sub_101348a0(inputdata_t *pInput)
{
	variant_t *pValue = &pInput->value;
	int nDelta;
	if (pValue->fieldType == 4)
		nDelta = pValue->iValue;
	else
		nDelta = 0;
	if (nDelta == 0)
		DevMsg("WARNING: logic_case_toggle (%s) called Input ValueDelta with 0 delta.\n", sub_100ab4f0());
	sub_101346e0(nDelta);
	COutputEvent *pOutputs = (COutputEvent *)((char *)this + 0x490);
	if (m_current >= 0 && m_current < 16) {
		pOutputs[m_current].sub_100cd660(pInput->pActivator, this, 0);
	} else {
		void *pActivator = pInput->pActivator;
		CVariantCopy value(*(CVariantCopy *)pValue);
		COutputEvent *pExtra = (COutputEvent *)((char *)this + 0x610);
		((CVariantCopy *)pExtra)->sub_1000b320(0x12, &value);
		pExtra->sub_100cd300(*(CVariantCopy *)pExtra, pActivator, this, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x10134980 size=0x7d
#include "platform.h"
#include "CBaseEntity.h"

void *sub_100aa720(int size);
extern void *vt_104475c4[];
extern void *vt_104688c4[];
extern char g_10578d0c[];
void __fastcall sub_10002ddd(void *pThis);

// TARGET: logic_compare
DLL_EXPORT CBaseEntity *logic_compare()
{
	void *mem = sub_100aa720(0x4b8);
	CBaseEntity *p;
	if (mem)
	{
		p = (CBaseEntity *)mem;
		p->sub_1009d980(0);
		*(void ***)p = vt_104475c4;
		sub_10002ddd((char *)p + 0x458);
		sub_10002ddd((char *)p + 0x470);
		sub_10002ddd((char *)p + 0x488);
		sub_10002ddd((char *)p + 0x4a0);
		*(void ***)p = vt_104688c4;
	}
	else
		p = 0;
	p->vfunc106(g_10578d0c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10134a20 size=0x6
#include "CLogicCompare.h"
namespace lifted {
extern char g_10577048;
}
datamap_t *CLogicCompare::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10577048);
}
// END FUNCTION

// FUNCTION: 0x10134a40 size=0x5
int * sub_10134a80(void);
int * g_1070c5d0 = ((int * (*)(int))sub_10134a80)(0);
// END FUNCTION

// FUNCTION: 0x10134a80 size=0x160
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
extern int g_10577048[2];
void sub_100079fa();
void sub_10003cec();
void sub_100109ce();
void sub_10004575();

int *sub_10134a80()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 1, "m_flCompareValue", {0x454, 0}, 1, 6, "CompareValue" },
        { 1, "m_flInValue", {0x450, 0}, 1, 6, "InitialValue" },
        { 1, "InputSetValue", {0, 0}, 1, 8, "SetValue", 0, (void *)sub_100079fa },
        { 1, "InputSetValueCompare", {0, 0}, 1, 8, "SetValueCompare", 0, (void *)sub_10003cec },
        { 1, "InputSetCompareValue", {0, 0}, 1, 8, "SetCompareValue", 0, (void *)sub_100109ce },
        { 0, "InputCompare", {0, 0}, 1, 8, "Compare", 0, (void *)sub_10004575 },
        { 0xa, "m_OnEqualTo", {0x470, 0}, 1, 0x16, "OnEqualTo", g_1055dc70 },
        { 0xa, "m_OnNotEqualTo", {0x488, 0}, 1, 0x16, "OnNotEqualTo", g_1055dc70 },
        { 0xa, "m_OnGreaterThan", {0x4a0, 0}, 1, 0x16, "OnGreaterThan", g_1055dc70 },
        { 0xa, "m_OnLessThan", {0x458, 0}, 1, 0x16, "OnLessThan", g_1055dc70 },
    };
    g_10577048[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_10577048[0] = (int)&dataDesc[1];
    return g_10577048;
}
// END FUNCTION

// FUNCTION: 0x10134c40 size=0x23
#include "CUnknown100bc0f0.h"

class CUnknown10134c40
{
public:
	char pad0[0x450];
	int m_unk450;

	void sub_10134c40(CInputData100bc0f0 *data);
};

// TARGET: CUnknown10134c40::sub_10134c40
void CUnknown10134c40::sub_10134c40(CInputData100bc0f0 *data)
{
	if (data->m_type == 1)
		m_unk450 = data->m_value;
	else
		m_unk450 = 0;
}
// END FUNCTION

// FUNCTION: 0x10134c80 size=0x2f
#include "CMathCounter.h"
#include "inputdata_t.h"
// TARGET: CMathCounter::sub_10134c80
void CMathCounter::sub_10134c80(inputdata_t &inputdata)
{
	float v = (inputdata.value.fieldType == 1) ? inputdata.value.flValue : 0.0f;
	m_flMin = v;
	sub_10134d30(inputdata.pActivator, v);
}
// END FUNCTION

// FUNCTION: 0x10134cc0 size=0x23
#include "CUnknown100bc0f0.h"

class CUnknown10134cc0
{
public:
	char pad0[0x454];
	int m_unk454;

	void sub_10134cc0(CInputData100bc0f0 *data);
};

// TARGET: CUnknown10134cc0::sub_10134cc0
void CUnknown10134cc0::sub_10134cc0(CInputData100bc0f0 *data)
{
	if (data->m_type == 1)
		m_unk454 = data->m_value;
	else
		m_unk454 = 0;
}
// END FUNCTION

// FUNCTION: 0x10134d00 size=0x16
namespace lifted {
struct C100061b3 { int sub_100061b3(int, int); };
}
struct CUnknown10134d00 { int sub_10134d00(int); };
int CUnknown10134d00::sub_10134d00(int a0)
{
    return ((lifted::C100061b3 *)this)->sub_100061b3(*(int *)((char *)a0), *(int *)((char *)this + 0x450));
}
// END FUNCTION

// FUNCTION: 0x10134d30 size=0xc0
#include "CMathCounter.h"
#include "COutputEvent.h"

struct MathCounterView10134d30 {
	char pad0[0x458];
	COutputEvent m_out458;
	COutputEvent m_out470;
	COutputEvent m_out488;
	COutputEvent m_out4a0;
};

inline void SetFloatValue(CVariantCopy *pVariant, float flValue)
{
	pVariant->sub_1000b320(1, &flValue);
}

void CMathCounter::sub_10134d30(void *pActivator, float flNewValue)
{
	MathCounterView10134d30 *v = (MathCounterView10134d30 *)this;
	if (flNewValue == m_flMax) {
		SetFloatValue((CVariantCopy *)&v->m_out470, flNewValue);
		v->m_out470.sub_100cd300(*(CVariantCopy *)&v->m_out470, pActivator, this, 0.0f);
	} else {
		SetFloatValue((CVariantCopy *)&v->m_out488, flNewValue);
		v->m_out488.sub_100cd300(*(CVariantCopy *)&v->m_out488, pActivator, this, 0.0f);
		if (flNewValue > m_flMax) {
			SetFloatValue((CVariantCopy *)&v->m_out4a0, flNewValue);
			v->m_out4a0.sub_100cd300(*(CVariantCopy *)&v->m_out4a0, pActivator, this, 0.0f);
		} else {
			SetFloatValue((CVariantCopy *)&v->m_out458, flNewValue);
			v->m_out458.sub_100cd300(*(CVariantCopy *)&v->m_out458, pActivator, this, 0.0f);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10134e20 size=0x67
#include "platform.h"
#include "CLogicBranch.h"

// TARGET: logic_branch
DLL_EXPORT CBaseEntity *logic_branch()
{
    CLogicBranch *p = new CLogicBranch;
    p->vfunc106("logic_branch");
    return p;
}
// END FUNCTION

// FUNCTION: 0x10134eb0 size=0x6
#include "datamap.h"
#include "CLogicBranch.h"
namespace lifted {
extern char g_10577244;
}
datamap_t *CLogicBranch::vfunc82()
{
    return (datamap_t *)&lifted::g_10577244;
}
// END FUNCTION

// FUNCTION: 0x10134ed0 size=0x5
int * sub_10134f10(void);
int * g_1070c600 = ((int * (*)(int))sub_10134f10)(0);
// END FUNCTION

// FUNCTION: 0x10134f10 size=0xb0
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
extern int g_10577244[2];
void sub_100130c0();
void sub_1000fe48();

int *sub_10134f10()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 5, "m_bInValue", {0x450, 0}, 1, 6, "InitialValue" },
        { 5, "m_bInValue", {0x450, 0}, 1, 0xe, "SetValue" },
        { 5, "InputSetValueTest", {0, 0}, 1, 8, "SetValueTest", 0, (void *)sub_100130c0 },
        { 0, "InputTest", {0, 0}, 1, 8, "Test", 0, (void *)sub_1000fe48 },
        { 10, "m_OnTrue", {0x454, 0}, 1, 0x16, "OnTrue", g_1055dc70 },
        { 10, "m_OnFalse", {0x46c, 0}, 1, 0x16, "OnFalse", g_1055dc70 },
    };
    g_10577244[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_10577244[0] = (int)&dataDesc[1];
    return g_10577244;
}
// END FUNCTION

// FUNCTION: 0x10134ff0 size=0x33
struct CParamView {
	int m_n0;
	int m_n4;
	bool m_b8;
	char pad0[0x18 - 9];
	int m_n18;
	bool Bool() const { return (m_n18 == 5) ? m_b8 : false; }
};

struct CLogicBranchView {
	char m_pad0000[0x450];
	bool m_b450;
	void sub_10135070(int a, bool b);
	void sub_10134ff0(CParamView *p);
};

// TARGET: CLogicBranchView::sub_10134ff0
void CLogicBranchView::sub_10134ff0(CParamView *p)
{
	m_b450 = p->Bool();
	sub_10135070(p->m_n0, m_b450);
}
// END FUNCTION

// FUNCTION: 0x10135040 size=0x16
namespace lifted { struct C10135070 { int sub_10005a2e(int, bool); }; }
struct CUnknown10135040 { int sub_10135040(int *p); };
int CUnknown10135040::sub_10135040(int *p)
{
    return ((lifted::C10135070 *)this)->sub_10005a2e(*p, *(bool *)((char *)this + 0x450));
}
// END FUNCTION

// FUNCTION: 0x10135070 size=0x31
struct CUnknown10135070Sub
{
    void sub_10010794(int a, void *pOwner, int b);
};

struct CUnknown10135070
{
    char pad_0000[0x454];
    void sub_10135070(int a, char flag);
};

void CUnknown10135070::sub_10135070(int a, char flag)
{
    if (flag) {
        ((CUnknown10135070Sub *)((char *)this + 0x454))->sub_10010794(a, this, 0);
    } else {
        ((CUnknown10135070Sub *)((char *)this + 0x46c))->sub_10010794(a, this, 0);
    }
}
// END FUNCTION

// FUNCTION: 0x101350c0 size=0x67
#include "platform.h"
#include "CLogicPythonCheck.h"

// TARGET: logic_pythoncheck
DLL_EXPORT CBaseEntity *logic_pythoncheck()
{
    CLogicPythonCheck *p = new CLogicPythonCheck;
    p->vfunc106("logic_pythoncheck");
    return p;
}
// END FUNCTION

// FUNCTION: 0x10135150 size=0x6
#include "datamap.h"
#include "CLogicPythonCheck.h"
namespace lifted {
extern char g_10577394;
}
datamap_t *CLogicPythonCheck::vfunc82()
{
    return (datamap_t *)&lifted::g_10577394;
}
// END FUNCTION

// FUNCTION: 0x10135170 size=0x5
int * sub_101351b0(void);
int * g_1070c5fc = ((int * (*)(int))sub_101351b0)(0);
// END FUNCTION

// FUNCTION: 0x101351b0 size=0xb0
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
extern int g_10577394[2];
void sub_10009129();

int *sub_101351b0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 2, "m_sPythonScript", {0x450, 0}, 1, 6, "python_script" },
        { 0, "InputTest", {0, 0}, 1, 8, "Test", 0, (void *)sub_10009129 },
        { 10, "m_OnTrue", {0x454, 0}, 1, 0x16, "OnTrue", g_1055dc70 },
        { 10, "m_OnFalse", {0x46c, 0}, 1, 0x16, "OnFalse", g_1055dc70 },
    };
    g_10577394[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_10577394[0] = (int)&dataDesc[1];
    return g_10577394;
}
// END FUNCTION

// FUNCTION: 0x10135290 size=0x132
#include "CLogicPythonCheck.h"

struct PyTypeObject;
struct PyObject {
    int ob_refcnt;
    PyTypeObject *ob_type;
};
struct PyTypeObject {
    char pad[0x18];
    void (__cdecl *tp_dealloc)(PyObject *);
};

extern "C" __declspec(dllimport) PyObject *__cdecl PyImport_AddModule(const char *);
extern "C" __declspec(dllimport) PyObject *__cdecl PyModule_GetDict(PyObject *);
extern "C" __declspec(dllimport) PyObject *__cdecl PyRun_String(const char *, int, PyObject *, PyObject *);
extern "C" __declspec(dllimport) void __cdecl PyErr_Print();
extern "C" __declspec(dllimport) void __cdecl PyErr_Clear();
extern "C" __declspec(dllimport) int __cdecl Py_FlushLine();
extern "C" __declspec(dllimport) void __cdecl Py_FlushConsoleOutput();
extern "C" __declspec(dllimport) long __cdecl PyInt_AsLong(PyObject *);
extern "C" __declspec(dllimport) PyTypeObject PyInt_Type;
extern "C" __declspec(dllimport) void __cdecl Msg(const char *, ...);

struct SConsoleVarView {
    virtual void v0();
    virtual char IsOff();
    char pad[0x2c - 4];
    int m_nValue;
};

extern SConsoleVarView *g_107318bc;
extern char g_106b8540[];
extern "C" unsigned int __cdecl strlen(const char *);

static inline const char *StrRef(const char *const &r)
{
    return r ? r : g_106b8540;
}

bool CLogicPythonCheck::sub_10135290()
{
    int result = 0;
    PyObject *pMain = PyImport_AddModule("__main__");
    if (m_pszCode != 0 && strlen(StrRef(m_pszCode)) != 0 && pMain != 0) {
        PyObject *pDict = PyModule_GetDict(pMain);
        PyObject *pRes;
        const char *code = StrRef(m_pszCode);
        if (code != 0) {
            if (!g_107318bc->IsOff() && g_107318bc->m_nValue != 0)
                Msg("RUNNING PYTHON AT TIME %f:\n%s\n\n", (double)gpGlobals->curtime, code);
        }
        pRes = PyRun_String(StrRef(m_pszCode), 0x102, pDict, pDict);
        if (pRes == 0) {
            PyErr_Print();
        } else {
            if (pRes->ob_type == &PyInt_Type)
                result = PyInt_AsLong(pRes);
            if (--pRes->ob_refcnt == 0)
                pRes->ob_type->tp_dealloc(pRes);
            if (Py_FlushLine())
                PyErr_Clear();
        }
        Py_FlushConsoleOutput();
        return result != 0;
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x10135420 size=0x3b
struct CUnknownHelper10135420 {
    void sub_10010794(int a, void *owner, int b);
};

struct CUnknown10135420 {
    char m_pad0000[0x454];
    CUnknownHelper10135420 m_helper454;
    char m_pad0455[0x46c - 0x455];
    CUnknownHelper10135420 m_helper46c;
    bool sub_100065ff();
    void sub_10135420(int *pArg);
};

// TARGET: sub_10135420
void CUnknown10135420::sub_10135420(int *pArg)
{
    if (sub_100065ff()) {
        m_helper454.sub_10010794(*pArg, this, 0);
    } else {
        m_helper46c.sub_10010794(*pArg, this, 0);
    }
}
// END FUNCTION

// FUNCTION: 0x10135470 size=0x71
#include "platform.h"
#include "CLogicNPCCondition.h"

DLL_EXPORT CBaseEntity *logic_npc_condition()
{
	CLogicNPCCondition *p = new CLogicNPCCondition;
	p->vfunc106("logic_npc_condition");
	return p;
}
// END FUNCTION

// FUNCTION: 0x10135510 size=0x6
#include "datamap.h"
#include "CLogicNPCCondition.h"
namespace lifted {
extern char g_1057748c;
}
datamap_t *CLogicNPCCondition::vfunc82()
{
    return (datamap_t *)&lifted::g_1057748c;
}
// END FUNCTION

// FUNCTION: 0x10135530 size=0x5
int * sub_10135570(void);
int * g_1070c5cc = ((int * (*)(int))sub_10135570)(0);
// END FUNCTION

// FUNCTION: 0x10135570 size=0xb0
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
extern int g_1057748c[2];
void sub_100060fa();

int *sub_10135570()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 2, "m_sCondition", {0x450, 0}, 1, 6, "condition" },
        { 2, "m_sTargetNPC", {0x454, 0}, 1, 6, "target_npc" },
        { 0, "InputTest", {0, 0}, 1, 8, "Test", 0, (void *)sub_100060fa },
        { 10, "m_OnTrue", {0x458, 0}, 1, 0x16, "OnTrue", g_1055dc70 },
        { 10, "m_OnFalse", {0x470, 0}, 1, 0x16, "OnFalse", g_1055dc70 },
    };
    g_1057748c[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1057748c[0] = (int)&dataDesc[1];
    return g_1057748c;
}
// END FUNCTION

// FUNCTION: 0x10135650 size=0x98
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CLogicNPCCondition.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

int sub_102c8cc0(const char *pszName);
char *sub_101d3730(const char *pszFormat, ...);
void sub_10143d80(const Vector &origin, float flSize, int r, int g, int b, int noDepthTest, float flDuration);
void sub_10143710(const Vector &origin, const char *pszText, int bViewCheck, float flDuration);

void CLogicNPCCondition::vfunc113()
{
    sub_10135720();
    m_nCondition = sub_102c8cc0(m_name450 ? m_name450 : g_106b8540);
    if (m_nCondition <= 0) {
        char *pszText = sub_101d3730("%s has invalid condition %s!\n", sub_1000b5cd(), m_name450 ? m_name450 : g_106b8540);
        sub_10143d80(*((CEntityVSlots *)this)->slot220(), 10.0f, 200, 50, 50, 0, 9999.0f);
        sub_10143710(*((CEntityVSlots *)this)->slot220(), pszText, 0, 9999.0f);
    }
}
// END FUNCTION

// FUNCTION: 0x10135720 size=0xd5
#include "CBaseEntity.h"
#include "CLogicNPCCondition.h"

struct EntInfo { CBaseEntity *m_pEntity; int m_serial; int m_unused; };
struct EntInfoList { int m_unused; EntInfo m_entries[1]; };
extern EntInfoList *g_10566458;
extern char g_106b8540[];

struct FoundEntity { char pad[0x94]; CBaseEntity *m_p94; };
struct CEntFinder {
	FoundEntity *sub_1000b9b0(int pStart, const char *name, CLogicNPCCondition *pSearcher, CBaseEntity *pActivator);
};
extern CEntFinder g_106eb5d8;

struct CHandleSet {
	unsigned int m_value;
	void Set(CBaseEntity *pEnt)
	{
		if (pEnt)
			m_value = *pEnt->vfunc1();
		else
			m_value = 0xffffffff;
	}
};

CBaseEntity *CLogicNPCCondition::sub_10135720()
{
	unsigned int h = m_hEntity488;
	EntInfo *e;
	if (h == 0xffffffff || (e = &g_10566458->m_entries[h & 0x1fff], e->m_serial != (int)(h >> 13)) || e->m_pEntity == 0) {
		unsigned int ha = m_hActivator10c.m_Index;
		CBaseEntity *pActivator;
		if (ha != 0xffffffff && (e = &g_10566458->m_entries[ha & 0x1fff], e->m_serial == (int)(ha >> 13)))
			pActivator = e->m_pEntity;
		else
			pActivator = 0;
		FoundEntity *pFound = g_106eb5d8.sub_1000b9b0(0, m_name454 ? m_name454 : g_106b8540, this, pActivator);
		((CHandleSet *)&m_hEntity488)->Set(!pFound ? 0 : pFound->m_p94);
	}
	h = m_hEntity488;
	if (h != 0xffffffff) {
		e = &g_10566458->m_entries[h & 0x1fff];
		if (e->m_serial == (int)(h >> 13))
			return e->m_pEntity;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10135840 size=0x7c
#include "CBaseEntity.h"
#include "CLogicNPCCondition.h"
#include "CAI_BaseNPC.h"

extern void (*g_109f364c)(const char *fmt, ...);
extern char g_106b8540[];

// TARGET: CLogicNPCCondition::sub_10135840
bool CLogicNPCCondition::sub_10135840()
{
	if (m_nCondition <= 0)
	{
		g_109f364c("%s has invalid condition %s!\n", sub_1000b5cd(), m_name450 ? m_name450 : g_106b8540);
		return false;
	}
	CBaseEntity *pNPC = sub_10135720();
	if (!pNPC)
	{
		g_109f364c("%s was unable to find target NPC: %s\n", sub_1000b5cd(), m_name454 ? m_name454 : g_106b8540);
		return false;
	}
	return ((CAI_BaseNPC *)pNPC)->sub_10269aa0(m_nCondition);
}
// END FUNCTION

// FUNCTION: 0x101358e0 size=0x3b
struct CUnknownHelper101358e0 {
    void sub_10010794(int a, void *owner, int b);
};

struct CUnknown101358e0 {
    char m_pad0000[0x458];
    CUnknownHelper101358e0 m_helper454;
    char m_pad0459[0x470 - 0x459];
    CUnknownHelper101358e0 m_helper46c;
    bool sub_1000d0b7();
    void sub_101358e0(int *pArg);
};

// TARGET: sub_101358e0
void CUnknown101358e0::sub_101358e0(int *pArg)
{
    if (sub_1000d0b7()) {
        m_helper454.sub_10010794(*pArg, this, 0);
    } else {
        m_helper46c.sub_10010794(*pArg, this, 0);
    }
}
// END FUNCTION

// FUNCTION: 0x10135930 size=0x67
#include "platform.h"
#include "CLogicSquadCondition.h"

// TARGET: logic_squad_condition
DLL_EXPORT CBaseEntity *logic_squad_condition()
{
    CLogicSquadCondition *p = new CLogicSquadCondition;
    p->vfunc106("logic_squad_condition");
    return p;
}
// END FUNCTION

// FUNCTION: 0x101359c0 size=0x6
#include "datamap.h"
#include "CLogicSquadCondition.h"
namespace lifted {
extern char g_105775b0;
}
datamap_t *CLogicSquadCondition::vfunc82()
{
    return (datamap_t *)&lifted::g_105775b0;
}
// END FUNCTION

// FUNCTION: 0x101359e0 size=0x5
int * sub_10135a20(void);
int * g_1070c614 = ((int * (*)(int))sub_10135a20)(0);
// END FUNCTION

// FUNCTION: 0x10135a20 size=0xb0
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
extern int g_105775b0[2];
void sub_1000cf59();

int *sub_10135a20()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 2, "m_sCondition", {0x450, 0}, 1, 6, "condition" },
        { 2, "m_sSquadName", {0x454, 0}, 1, 6, "squad_name" },
        { 0, "InputTest", {0, 0}, 1, 8, "Test", 0, (void *)sub_1000cf59 },
        { 10, "m_OnTrue", {0x458, 0}, 1, 0x16, "OnTrue", g_1055dc70 },
        { 10, "m_OnFalse", {0x470, 0}, 1, 0x16, "OnFalse", g_1055dc70 },
    };
    g_105775b0[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_105775b0[0] = (int)&dataDesc[1];
    return g_105775b0;
}
// END FUNCTION

// FUNCTION: 0x10135b00 size=0x98
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CLogicSquadCondition.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

int sub_102c8cc0(const char *pszName);
char *sub_101d3730(const char *pszFormat, ...);
void sub_10143d80(const Vector &origin, float flSize, int r, int g, int b, int noDepthTest, float flDuration);
void sub_10143710(const Vector &origin, const char *pszText, int bViewCheck, float flDuration);

// TARGET: CLogicSquadCondition::vfunc113
void CLogicSquadCondition::vfunc113()
{
    sub_10135bd0();
    m_nCondition = sub_102c8cc0(m_name450 ? m_name450 : g_106b8540);
    if (m_nCondition <= 0) {
        char *pszText = sub_101d3730("%s has invalid condition %s!\n", sub_1000b5cd(), m_name450 ? m_name450 : g_106b8540);
        sub_10143d80(*((CEntityVSlots *)this)->slot220(), 10.0f, 200, 50, 50, 0, 9999.0f);
        sub_10143710(*((CEntityVSlots *)this)->slot220(), pszText, 0, 9999.0f);
    }
}
// END FUNCTION

// FUNCTION: 0x10135bd0 size=0x2a
int sub_10008ee5(int p);

struct CUnit10135bd0 {
    int sub_10135bd0();
};

int CUnit10135bd0::sub_10135bd0()
{
    if (*(int *)((char *)this + 0x488) == 0) {
        *(int *)((char *)this + 0x488) = sub_10008ee5(*(int *)((char *)this + 0x454));
    }
    return *(int *)((char *)this + 0x488);
}
// END FUNCTION

// FUNCTION: 0x10135c10 size=0xb7
#include "CLogicSquadCondition.h"
#include "CAI_BaseNPC.h"

__declspec(dllimport) void __cdecl DevWarning(const char *fmt, ...);
extern char g_106b8540[];

// TARGET: CLogicSquadCondition::sub_10135c10
bool CLogicSquadCondition::sub_10135c10()
{
	if (m_nCondition <= 0) {
		const char *pszName = m_name450;
		if (!pszName)
			pszName = g_106b8540;
		DevWarning("%s has invalid condition %s!\n", sub_1000b5cd(), pszName);
		return false;
	}
	CUnknown103160c0 *pSquad = sub_10135bd0();
	if (!pSquad) {
		const char *pszName = m_name454;
		if (!pszName)
			pszName = g_106b8540;
		DevWarning("%s was unable to find squad: %s\n", sub_1000b5cd(), pszName);
		return false;
	}
	for (int i = 0; i < pSquad->sub_103160a0(); i++) {
		CAI_BaseNPC *pMember = (CAI_BaseNPC *)pSquad->sub_103160c0(i);
		if (pMember && pMember->sub_10269aa0(m_nCondition))
			return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10135d00 size=0x3b
struct CUnknownHelper10135d00 {
    void sub_10010794(int a, void *owner, int b);
};

struct CUnknown10135d00 {
    char m_pad0000[0x458];
    CUnknownHelper10135d00 m_helper454;
    char m_pad0459[0x470 - 0x459];
    CUnknownHelper10135d00 m_helper46c;
    bool sub_1000c293();
    void sub_10135d00(int *pArg);
};

// TARGET: sub_10135d00
void CUnknown10135d00::sub_10135d00(int *pArg)
{
    if (sub_1000c293()) {
        m_helper454.sub_10010794(*pArg, this, 0);
    } else {
        m_helper46c.sub_10010794(*pArg, this, 0);
    }
}
// END FUNCTION

// FUNCTION: 0x10135d50 size=0x41
#include "CLogicCompare.h"
#include "COutputEvent.h"

struct CListHolder100cdb50;
void __fastcall sub_100cdb50(CListHolder100cdb50 *p);
void sub_100aa7b0(void *p);

CBaseEntity *CLogicCompareInteger::vfunc5(unsigned int flags)
{
	sub_100cdb50((CListHolder100cdb50 *)((char *)this + 0x488));
	((COutputEvent *)((char *)this + 0x468))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x450))->sub_100cd2d0();
	((CLogicalEntity *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity *)(this);
}
// END FUNCTION

// FUNCTION: 0x10135dc0 size=0x41
#include "CTimerEntity.h"
#include "COutputEvent.h"
#include "CLogicalEntity.h"

void sub_100aa7b0(void *p);

CTimerEntity *CTimerEntity::vfunc5(unsigned int flags)
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

// FUNCTION: 0x10135e30 size=0x2b
#include "CLogicLineToEntity.h"

struct CGargoyleMemberUnit {
	void sub_10015708();
};

struct CGargoyleBaseUnit {
	void sub_1000cb8a();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CLogicLineToEntity::vfunc5
CBaseEntity *CLogicLineToEntity::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x450))->sub_10015708();
	((CGargoyleBaseUnit *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10135e70 size=0x2b
#include "CMathRemap.h"

struct CGargoyleMemberUnit {
	void sub_10015708();
};

struct CGargoyleBaseUnit {
	void sub_1000cb8a();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CMathRemap::vfunc5
CBaseEntity *CMathRemap::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x460))->sub_10015708();
	((CGargoyleBaseUnit *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10135eb0 size=0x2b
#include "CMathColorBlend.h"

struct CGargoyleMemberUnit {
	void sub_10015708();
};

struct CGargoyleBaseUnit {
	void sub_1000cb8a();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CMathColorBlend::vfunc5
CBaseEntity *CMathColorBlend::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x460))->sub_10015708();
	((CGargoyleBaseUnit *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10135ef0 size=0x1e
#include "CEnvGlobal.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvGlobal::vfunc5
CBaseEntity *CEnvGlobal::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10135f20 size=0x2b
#include "CMultiSource.h"

struct CGargoyleMemberUnit {
	void sub_10015708();
};

struct CGargoyleBaseUnit {
	void sub_1000cb8a();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CMultiSource::vfunc5
CBaseEntity *CMultiSource::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x550))->sub_10015708();
	((CGargoyleBaseUnit *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10135f60 size=0x41
#include "CMathCounter.h"
#include "COutputEvent.h"

void sub_100aa7b0(void *p);

CBaseEntity *CMathCounter::vfunc5(unsigned int flags)
{
	((COutputEvent *)((char *)this + 0x48c))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x474))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x45c))->sub_100cd2d0();
	((CLogicalEntity *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity *)(this);
}
// END FUNCTION

// FUNCTION: 0x10135fd0 size=0x47
#include "CLogicCase.h"
#include "COutputEvent.h"
#include "CLogicalEntity.h"

struct CaseToggleView
{
	char pad[0x490];
	COutputEvent m_OnCase[16];
	COutputEvent m_OnDefault;
	~CaseToggleView() {}
};

void sub_100aa7b0(void *p);

// TARGET: CLogicCase::vfunc5
CBaseEntity *CLogicCase::vfunc5(unsigned int flags)
{
	((CaseToggleView *)this)->~CaseToggleView();
	((CLogicalEntity *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10136040 size=0x47
#include "CLogicCaseToggle.h"
#include "COutputEvent.h"
#include "CLogicalEntity.h"

struct CaseToggleView
{
	char pad[0x490];
	COutputEvent m_OnCase[16];
	COutputEvent m_OnDefault;
	~CaseToggleView() {}
};

void sub_100aa7b0(void *p);

// TARGET: CLogicCaseToggle::vfunc5
CLogicCaseToggle *CLogicCaseToggle::vfunc5(unsigned int flags)
{
	((CaseToggleView *)this)->~CaseToggleView();
	((CLogicalEntity *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101360b0 size=0x4c
#include "CLogicCompare.h"
void __fastcall sub_100cd2d0(void *p);
void __fastcall sub_1009df20(void *p);
void sub_100aa7b0(void *p);
// TARGET: CLogicCompare::vfunc5
CBaseEntity *CLogicCompare::vfunc5(unsigned int flags)
{
	sub_100cd2d0((char *)this + 0x4a0);
	sub_100cd2d0((char *)this + 0x488);
	sub_100cd2d0((char *)this + 0x470);
	sub_100cd2d0((char *)this + 0x458);
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity *)(this);
}
// END FUNCTION

// FUNCTION: 0x10136120 size=0x36
#include "CLogicBranch.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBaseEntity *CLogicBranch::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x46c))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x454))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
