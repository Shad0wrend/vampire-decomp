// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 37 blocks
#include "vampire.h"

// FUNCTION: 0x1004fbf0 size=0xd
// TARGET: CBaseToggle::vfunc109
#include "CBaseToggle.h"

bool CBaseToggle::vfunc109(const char *a, float b)
{
    return ((CBaseEntity *)this)->CBaseEntity::vfunc109(a, b);
}
// END FUNCTION

// FUNCTION: 0x1004fc10 size=0x7
#include "CBaseToggle.h"

float CBaseToggle::vfunc152()
{
	return *(float *)((char *)this + 0x500);
}
// END FUNCTION

// FUNCTION: 0x101c0970 size=0x6
#include "datamap.h"
#include "CBaseDMStart.h"
namespace lifted {
extern char g_1059b680;
}
datamap_t *CBaseDMStart::vfunc82()
{
    return (datamap_t *)&lifted::g_1059b680;
}
// END FUNCTION

// FUNCTION: 0x101c0990 size=0x5
int sub_101c09d0(void);
int g_1072c7ec = ((int (*)(int))sub_101c09d0)(0);
// END FUNCTION

// FUNCTION: 0x101c09d0 size=0x1a
namespace lifted {
extern int g_1059b680;
extern int g_1059b684;
extern char g_1059b6c4;
}
int sub_101c09d0()
{
    lifted::g_1059b684 = 1;
    lifted::g_1059b680 = (int)&lifted::g_1059b6c4;
    return (int)&lifted::g_1059b680;
}
// END FUNCTION

// FUNCTION: 0x101c0a00 size=0x4b
#include "platform.h"
#include "CConstraintAnchor.h"
#include "CBaseEntity.h"
void *sub_100aa720(unsigned int size);
extern char g_1047c2d4[];	// CBaseDMStart vftable
extern const char g_1059c388[];

// TARGET: info_player_deathmatch
DLL_EXPORT CBaseEntity *info_player_deathmatch()
{
	void *mem = sub_100aa720(0x454);
	CBaseEntity *p;
	if (mem) {
		((CConstraintAnchorBase *)mem)->sub_1009d980(0);
		*(void **)mem = g_1047c2d4;
		p = (CBaseEntity *)mem;
	} else {
		p = 0;
	}
	p->vfunc106(g_1059c388);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101c0a70 size=0x4b
#include "platform.h"
#include "CConstraintAnchor.h"
#include "CBaseEntity.h"
void *sub_100aa720(unsigned int size);
extern char g_1044b584[];	// CPointEntity vftable
extern const char g_1057c024[];

// TARGET: info_player_start
DLL_EXPORT CBaseEntity *info_player_start()
{
	void *mem = sub_100aa720(0x450);
	CBaseEntity *p;
	if (mem) {
		((CConstraintAnchorBase *)mem)->sub_1009d980(0);
		*(void **)mem = g_1044b584;
		p = (CBaseEntity *)mem;
	} else {
		p = 0;
	}
	p->vfunc106(g_1057c024);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101c0ae0 size=0x17
#include "CBaseDMStart.h"

bool __cdecl sub_101cf930(const char *pszMaster, CBaseEntity *pActivator);

// TARGET: CBaseDMStart::vfunc147
bool CBaseDMStart::vfunc147(CBaseEntity *pActivator)
{
	return sub_101cf930((const char *)m_field450, pActivator);
}
// END FUNCTION

// FUNCTION: 0x101c0b10 size=0x32
#include "CBaseEntity.h"

extern void (*g_109f3658)(int level, const char *pszFormat, ...);
void sub_101cd940(CBaseEntity *pEnt);

// TARGET: sub_101c0b10
void __fastcall sub_101c0b10(CBaseEntity *pEnt)
{
    if (pEnt->m_iHealth > 0) {
        pEnt->m_iHealth = 0;
        g_109f3658(2, "SUB_Remove called on entity with health > 0\n");
    }
    sub_101cd940(pEnt);
}
// END FUNCTION

// FUNCTION: 0x101c0b60 size=0x1
void sub_101c0b60()
{
}
// END FUNCTION

// FUNCTION: 0x101c0b80 size=0xa3
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList g_106eb5d8;
extern unsigned int g_1070ba38;
extern "C" __declspec(dllimport) void DevMsg(int level, const char *fmt, ...);

#define D(n) virtual void n();
#define D10(p) D(p##0) D(p##1) D(p##2) D(p##3) D(p##4) D(p##5) D(p##6) D(p##7) D(p##8) D(p##9)
// The entity's slots up to 173 (slot 116 answers a char, slot 173 is Use).
struct CEntityUseSlotsX {
    D10(a0) D10(a1) D10(a2) D10(a3) D10(a4) D10(a5) D10(a6) D10(a7) D10(a8) D10(a9) D10(b10)
    D(c110) D(c111) D(c112) D(c113) D(c114) D(c115)
    virtual char vfunc116();
    D(c117) D(c118) D(c119)
    D10(d12) D10(d13) D10(d14) D10(d15) D10(d16)
    D(e170) D(e171) D(e172)
    virtual void vfunc173(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, float value);
    const char *sub_100ab4f0();
};

void sub_101c0b80(const char *pszTarget, CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, float value)
{
    if (!pszTarget)
        return;
    DevMsg(2, "Firing: (%s)\n", pszTarget);
    CBaseEntity *pTarget = g_106eb5d8.sub_100f7770(0, pszTarget, pActivator, 0);
    while (pTarget) {
        CEntityUseSlotsX *p = (CEntityUseSlotsX *)pTarget;
        if (!p->vfunc116()) {
            DevMsg(2, "[%03d] Found: %s, firing (%s)\n", g_1070ba38 % 1000, p->sub_100ab4f0(), pszTarget);
            p->vfunc173(pActivator, pCaller, useType, value);
        }
        pTarget = g_106eb5d8.sub_100f7770(pTarget, pszTarget, pActivator, 0);
    }
}
// END FUNCTION

// FUNCTION: 0x101c0c60 size=0x6
#include "datamap.h"
#include "CBaseToggle.h"
namespace lifted {
extern char g_1059b6f0;
}
datamap_t * CBaseToggle::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059b6f0);
}
// END FUNCTION

// FUNCTION: 0x101c0c80 size=0x5
int * sub_101c0cc0(void);
int * g_1072c7e8 = ((int * (*)(int))sub_101c0cc0)(0);
// END FUNCTION

// FUNCTION: 0x101c0cc0 size=0x103
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
extern int g_1059b6f0[2];
void sub_10007ca7();
void sub_10013f25();
void sub_1000ca31();
void sub_1000b6fe();
void sub_10014e52();

int *sub_101c0cc0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 4, "m_toggle_state", {0x4f8, 0}, 1, 2 },
        { 1, "m_flMoveDistance", {0x4fc, 0}, 1, 2 },
        { 1, "m_flWait", {0x500, 0}, 1, 6, "wait" },
        { 1, "m_flLip", {0x504, 0}, 1, 6, "lip" },
        { 14, "m_vecPosition1", {0x508, 0}, 1, 2 },
        { 14, "m_vecPosition2", {0x514, 0}, 1, 2 },
        { 3, "m_vecAngle1", {0x520, 0}, 1, 2 },
        { 3, "m_vecAngle2", {0x52c, 0}, 1, 2 },
        { 1, "m_flHeight", {0x538, 0}, 1, 6, "height" },
        { 12, "m_hActivator", {0x53c, 0}, 1, 2 },
        { 14, "m_vecFinalDest", {0x540, 0}, 1, 2 },
        { 3, "m_vecFinalAngle", {0x54c, 0}, 1, 2 },
        { 4, "m_movementType", {0x558, 0}, 1, 2 },
        { 3, "MoverData.vecMovePos1", {0x450, 0}, 1, 2 },
        { 3, "MoverData.vecMovePos2", {0x45c, 0}, 1, 6, "move_dest" },
        { 3, "MoverData.angMoveAngle1", {0x468, 0}, 1, 2 },
        { 3, "MoverData.angMoveAngle2", {0x474, 0}, 1, 2 },
        { 1, "MoverData.flMoveSpeed", {0x480, 0}, 1, 6, "move_speed" },
        { 4, "MoverData.Rot", {0x484, 0}, 1, 2 },
        { 4, "MoverData.Axis", {0x488, 0}, 1, 6, "rot_axis" },
        { 1, "MoverData.flRotSpeed", {0x490, 0}, 1, 6, "rot_speed" },
        { 1, "MoverData.flRotDist", {0x48c, 0}, 1, 6, "rot_dist" },
        { 4, "MoverData.TargetPos", {0x494, 0}, 1, 2 },
        { 4, "MoverData.CurrPos", {0x498, 0}, 1, 2 },
        { 4, "MoverData.UseType", {0x49c, 0}, 1, 2 },
        { 4, "m_MoverMoveType", {0x4a0, 0}, 1, 6, "use_pref" },
        { 1, "m_flMoveReboundDuration", {0x4d4, 0}, 1, 2 },
        { 1, "m_flMoveReboundAmount", {0x4d8, 0}, 1, 2 },
        { 1, "m_flMoveReboundStartTime", {0x4dc, 0}, 1, 2 },
        { 3, "m_flMoveReboundVelocity", {0x4e0, 0}, 1, 2 },
        { 3, "m_flMoveReboundAngVelocity", {0x4ec, 0}, 1, 2 },
        { 0, "InputMoveToDest", {0, 0}, 1, 8, "MoveToDest", 0, (void *)sub_10007ca7 },
        { 0, "InputMoveToHome", {0, 0}, 1, 8, "MoveToHome", 0, (void *)sub_10013f25 },
        { 0, "InputRotateToDest", {0, 0}, 1, 8, "RotateToDest", 0, (void *)sub_1000ca31 },
        { 0, "InputRotateToHome", {0, 0}, 1, 8, "RotateToHome", 0, (void *)sub_1000b6fe },
        { 10, "m_OnLinearMoveDone", {0x4a4, 0}, 1, 0x16, "OnLinearMoveDone", g_1055dc70 },
        { 10, "m_OnAngularMoveDone", {0x4bc, 0}, 1, 0x16, "OnAngularMoveDone", g_1055dc70 },
        { 0, "CBaseToggleMoverUse", {0, 0}, 1, 0x20, 0, 0, (void *)sub_10014e52 },
    };
    g_1059b6f0[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1059b6f0[0] = (int)&dataDesc[1];
    return g_1059b6f0;
}
// END FUNCTION

// FUNCTION: 0x101c0e20 size=0x34
#include "CBaseEntity.h"
#include "COutputEvent.h"
#include "ehandle.h"
#include "Vector.h"
#define m_i4a0 m_i4a0; COutputEvent m_Out4a4; COutputEvent m_Out4bc; char m_pad04d4[0x53c - 0x4d4]; EHANDLE m_hActivator53c
#include "CBaseToggle.h"
#undef m_i4a0

CBaseToggle::CBaseToggle() : CBaseEntity(0)
{
}
// END FUNCTION

// FUNCTION: 0x101c0e70 size=0x36
#include "CBaseToggle.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBaseEntity *CBaseToggle::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x4bc))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x4a4))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101c0ec0 size=0x193
#include "CBaseToggle.h"

struct CBaseToggleDumpView {
	char m_pad0000[0x4f8];
	int m_toggleState;	// 0x4f8
	int m_flMoveDistance;	// 0x4fc
	int m_flWait;	// 0x500
	int m_flLip;	// 0x504
	Vector m_vecPosition1;	// 0x508
	Vector m_vecPosition2;	// 0x514
	Vector m_vecAngle1;	// 0x520
	Vector m_vecAngle2;	// 0x52c
	int m_flHeight;	// 0x538
	EHANDLE m_hActivator;	// 0x53c
	Vector m_vecFinalDest;	// 0x540
	Vector m_vecFinalAngle;	// 0x54c
	int m_movementType;	// 0x558
};

void CBaseToggle::vfunc31(int pDump)
{
	CBaseToggleDumpView *pView = (CBaseToggleDumpView *)this;
	sub_1009b980(pDump, "m_toggle_state", pView->m_toggleState);
	sub_1009ba60(pDump, "m_flMoveDistance", pView->m_flMoveDistance);
	sub_1009ba60(pDump, "m_flWait", pView->m_flWait);
	sub_1009ba60(pDump, "m_flLip", pView->m_flLip);
	sub_1009be00(pDump, "m_vecPosition1", pView->m_vecPosition1);
	sub_1009be00(pDump, "m_vecPosition2", pView->m_vecPosition2);
	sub_1009bd10(pDump, "m_vecAngle1", pView->m_vecAngle1);
	sub_1009bd10(pDump, "m_vecAngle2", pView->m_vecAngle2);
	sub_1009ba60(pDump, "m_flHeight", pView->m_flHeight);
	sub_1009c000(pDump, "m_hActivator", pView->m_hActivator);
	sub_1009be00(pDump, "m_vecFinalDest", pView->m_vecFinalDest);
	sub_1009bd10(pDump, "m_vecFinalAngle", pView->m_vecFinalAngle);
	sub_1009b980(pDump, "m_movementType", pView->m_movementType);
	CBaseEntity::vfunc31(pDump);
}
// END FUNCTION

// FUNCTION: 0x101c10d0 size=0x2e9
#include "CBaseToggle.h"
#include "CEntityVSlots.h"
#include "Vector.h"
#include "QAngle.h"

struct CBaseToggleMoveView
{
	char m_pad0[0x4d4];
	float m_flMoveTime4d4;	// 0x4d4
	int m_unk4d8;
	float m_flStart4dc;	// 0x4dc
	Vector m_vecLinear4e0;	// 0x4e0
	Vector m_vecAngular4ec;	// 0x4ec
	int m_unk4f8;
	int m_unk4fc;
	int m_unk500;
	int m_unk504;
	int m_unk508;
	int m_unk50c;
	int m_unk510;
	int m_unk514;
	int m_unk518;
	int m_unk51c;
	int m_unk520;
	int m_unk524;
	int m_unk528;
	int m_unk52c;
	int m_unk530;
	int m_unk534;
	int m_unk538;
	int m_unk53c;
	Vector m_vecOrigin540;	// 0x540
	Vector m_vecAngles54c;	// 0x54c
};

float CBaseToggle::vfunc135(float flTime)
{
	CBaseToggleMoveView *v = (CBaseToggleMoveView *)this;
	if (flTime > 0.0f
		&& m_flNextThink3fc > 0.0f
		&& v->m_flStart4dc > 0.0f
		&& v->m_flStart4dc < m_flNextThink3fc
		&& v->m_flMoveTime4d4 > 0.0f)
	{
		float flMove = flTime + m_flLocalTime3f4 - v->m_flStart4dc;
		if (!(flMove > 0.0f))
			return flTime;
		if (flMove > v->m_flMoveTime4d4)
			flMove = v->m_flMoveTime4d4;

		float flEase = (flMove * flMove + 1.0f) * flMove
			- (flMove / v->m_flMoveTime4d4) * (v->m_flMoveTime4d4 * v->m_flMoveTime4d4 + 1.0f) * flMove;

		Vector vecNew;
		if (v->m_vecLinear4e0.x != 0.0f || v->m_vecLinear4e0.y != 0.0f || v->m_vecLinear4e0.z != 0.0f)
		{
			vecNew = v->m_vecLinear4e0 * flEase + v->m_vecOrigin540;
			Vector vecVel = (vecNew - *(Vector *)((CEntityVSlots *)this)->slot220()) / flTime;
			sub_100b2e30((const float *)&vecVel);
		}
		if (v->m_vecAngular4ec.x != 0.0f || v->m_vecAngular4ec.y != 0.0f || v->m_vecAngular4ec.z != 0.0f)
		{
			vecNew = v->m_vecAngular4ec * flEase + v->m_vecAngles54c;
			QAngle angDelta = *(QAngle *)&vecNew - *(QAngle *)((CEntityVSlots *)this)->slot221();
			Vector vecAVel = *(Vector *)&angDelta / flTime;
			sub_100b2f50((const float *)&vecAVel);
		}
	}
	return flTime;
}
// END FUNCTION

// FUNCTION: 0x101c1480 size=0x72
#include "CBaseToggle.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" double __cdecl atof(const char *);

bool CBaseToggle::vfunc110(const char *szKeyName, const char *szValue)
{
	if (!_strcmpi(szKeyName, "lip")) {
		*(float *)((char *)this + 0x504) = (float)atof(szValue);
		return true;
	}
	if (!_strcmpi(szKeyName, "distance")) {
		*(float *)((char *)this + 0x4fc) = (float)atof(szValue);
		return true;
	}
	return sub_1000fc86(szKeyName, szValue);
}
// END FUNCTION

// FUNCTION: 0x101c1520 size=0x18e
#include "CBaseToggle.h"

struct CBaseToggleView : CBaseToggle {
	char m_pad04a4[0x4d4 - 0x4a4];
	float m_f4d4;
	float m_f4d8;
	float m_f4dc;
	Vector m_vec4e0;
	char m_pad04ec[0x540 - 0x4ec];
	Vector m_vecFinalDest;
	char m_pad054c[0x558 - 0x54c];
	int m_i558;
};

typedef Vector *(__fastcall *GetLocalOriginFn)(CBaseToggle *);
#define GetLocalOrigin() (((GetLocalOriginFn)(*(void ***)this)[220])(this))

void CBaseToggle::sub_101c1520(Vector *pPosition, float flSpeed)
{
	CBaseToggleView *p = (CBaseToggleView *)this;
	const Vector &vecDest = *pPosition;
	p->m_vecFinalDest = vecDest;
	p->m_i558 = 1;
	if (vecDest == *GetLocalOrigin())
	{
		vfunc133();
		return;
	}
	Vector vecDestDelta;
	vecDestDelta = vecDest - *GetLocalOrigin();
	float flTravelTime = vecDestDelta.Length() / flSpeed;
	m_flNextThink3fc = m_flLocalTime3f4 + flTravelTime;
	Vector vecVelocity = vecDestDelta * (1.0f / flTravelTime);
	sub_100b2e30((float *)&vecVelocity);
	if (p->m_f4d4 > 0.0f)
	{
		p->m_f4dc = m_flNextThink3fc;
		m_flNextThink3fc = p->m_f4d4 + m_flNextThink3fc;
		p->m_vec4e0 = *(Vector *)m_vel3d4 * -p->m_f4d8;
	}
}
// END FUNCTION

// FUNCTION: 0x101c1720 size=0x44
#include "CBaseToggle.h"
struct CToggleView558 : CBaseToggle
{
	char m_pad04a4[0x558 - 0x4a4];
	int m_nMove558;
	void sub_101c1790();	// stub 0x10007cc0
	void sub_101c19e0();	// stub 0x10007725
};
void CBaseToggle::vfunc133()
{
	CToggleView558 *t = (CToggleView558 *)this;
	m_i498 = m_nToggleState;
	switch (t->m_nMove558) {
	case 1:
		t->sub_101c1790();
		break;
	case 2:
		t->sub_101c19e0();
		break;
	}
	t->m_nMove558 = 0;
	if (m_pfn0114)
		(this->*m_pfn0114)();
}
// END FUNCTION

// FUNCTION: 0x101c1790 size=0x3d
#include "CBaseEntity.h"

extern int g_1070d1b0[];
void sub_100043cc(void *, void *, int);

struct CUnk101c1790Sub {
    void sub_10010794(int, void *, int);
};

struct CUnk101c1790 {
    void sub_101c1790();
};

void CUnk101c1790::sub_101c1790()
{
    sub_100043cc(this, (char *)this + 0x540, 0);
    ((CBaseEntity *)this)->sub_100b2e30((const float *)g_1070d1b0);
    *(float *)((char *)this + 0x3fc) = -1.0f;
    ((CUnk101c1790Sub *)((char *)this + 0x4a4))->sub_10010794(0, this, 0);
}
// END FUNCTION

// FUNCTION: 0x101c17e0 size=0x18a
#include "Vector.h"
#include "QAngle.h"
#include "CBaseToggle.h"
#include "CEntityVSlots.h"

struct ToggleAngularView
{
	char pad0[0x3c8];
	Vector m_vecAccel;
	char pad3d4[0x3f4 - 0x3d4];
	float m_flLocalTime;
	char pad3f8[0x3fc - 0x3f8];
	float m_flMoveDoneTime;
	char pad400[0x4d4 - 0x400];
	float m_flEase;
	float m_flEaseScale;
	float m_flSavedTime;
	char pad4e0[0x4ec - 0x4e0];
	Vector m_vecEaseVel;
	char pad4f8[0x54c - 0x4f8];
	Vector m_vecFinalDest;
	int m_nMovementType;
};

void CBaseToggle::sub_101c17e0(Vector *pDest, int speed)
{
	float flSpeed = *(float *)&speed;
	ToggleAngularView *pView = (ToggleAngularView *)this;
	CEntityVSlots *pSelf = (CEntityVSlots *)this;
	pView->m_vecFinalDest = *pDest;
	pView->m_nMovementType = 2;
	if (*pDest == *pSelf->slot221())
	{
		pSelf->slot133();
		return;
	}
	QAngle vecDestDelta = *(QAngle *)pDest - *(QAngle *)pSelf->slot221();
	float flTravelTime = FastSqrt(vecDestDelta.x * vecDestDelta.x + (vecDestDelta.y * vecDestDelta.y + vecDestDelta.z * vecDestDelta.z)) / flSpeed;
	pView->m_flMoveDoneTime = flTravelTime + pView->m_flLocalTime;
	QAngle vecVel = vecDestDelta / flTravelTime;
	sub_100b2f50(&vecVel.x);
	if (pView->m_flEase > 0)
	{
		float flNewTime = pView->m_flEase + pView->m_flMoveDoneTime;
		pView->m_flSavedTime = pView->m_flMoveDoneTime;
		pView->m_flMoveDoneTime = flNewTime;
		pView->m_vecEaseVel = pView->m_vecAccel * (-pView->m_flEaseScale);
	}
}
// END FUNCTION

// FUNCTION: 0x101c19e0 size=0x3c
#include "CBaseToggle.h"

extern float g_1070d9d0[3];

struct COutputEventView101c19e0
{
	void sub_100cd660(int a, void *pEnt, int b);
};

namespace block_101c19e0 {
	struct CBaseToggleUnit101c19e0 : CBaseToggle
	{
		void sub_101c19e0();
	};
}

// TARGET: block_101c19e0::CBaseToggleUnit101c19e0::sub_101c19e0
void block_101c19e0::CBaseToggleUnit101c19e0::sub_101c19e0()
{
	((CBaseEntity *)this)->vfunc64((float *)((char *)this + 0x54c));
	((CBaseEntity *)this)->sub_100b2f50(g_1070d9d0);
	*(float *)((char *)this + 0x3fc) = -1.0f;
	((COutputEventView101c19e0 *)((char *)this + 0x4bc))->sub_100cd660(0, this, 0);
}
// END FUNCTION

// FUNCTION: 0x101c1a30 size=0x23
// TARGET: sub_101c1a30
float __cdecl sub_101c1a30(unsigned char flags, float *p)
{
    if (flags & 0x40) {
        return p[2];
    }
    if (flags & 0x80) {
        return p[0];
    }
    return p[1];
}
// END FUNCTION

// FUNCTION: 0x101c1a70 size=0x59
#include "CBaseEntity.h"
void CBaseEntity::sub_101c1a70()
{
	if (m_flags204 & 0x40) {
		m_vecMovedir[0] = 0;
		m_vecMovedir[1] = 0;
		m_vecMovedir[2] = 1.0f;
	} else if (m_flags204 & 0x80) {
		m_vecMovedir[0] = 1.0f;
		m_vecMovedir[1] = 0;
		m_vecMovedir[2] = 0;
	} else {
		m_vecMovedir[0] = 0;
		m_vecMovedir[1] = 1.0f;
		m_vecMovedir[2] = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x101c1af0 size=0x37
// TARGET: sub_101c1af0
float sub_101c1af0(unsigned char flags, const float *pA, const float *pB)
{
	if (flags & 0x40)
	{
		return pA[2] - pB[2];
	}
	if (flags & 0x80)
	{
		return pA[0] - pB[0];
	}
	return pA[1] - pB[1];
}
// END FUNCTION

// FUNCTION: 0x101c1b40 size=0xd
#include "CUnknown101c1b40.h"
void CUnknown101c1b40::sub_101c1b40(int mode)
{
	mode = 0;
	sub_1000d90e(mode);
}
// END FUNCTION

// FUNCTION: 0x101c1b60 size=0xd
#include "CUnknown101c1b60.h"
void CUnknown101c1b60::sub_101c1b60(int value)
{
	value = 1;
	sub_101c1bc0(value);
}
// END FUNCTION

// FUNCTION: 0x101c1b80 size=0xd
#include "CUnknown101c1b40.h"
void CUnknown101c1b40::sub_101c1b80(int mode)
{
	mode = 2;
	sub_1000d90e(mode);
}
// END FUNCTION

// FUNCTION: 0x101c1ba0 size=0xd
#include "CUnknown101c1b60.h"
void CUnknown101c1b60::sub_101c1ba0(int value)
{
	value = 3;
	sub_101c1bc0(value);
}
// END FUNCTION

// FUNCTION: 0x101c1bc0 size=0xb4
#include "CBaseToggle.h"

void CBaseToggle::sub_101c1bc0(int state)
{
	switch (state) {
	case 0:
		sub_101c1520(&m_vecPosition1, m_nSpeed480);
		m_nToggleState = 0;
		break;
	case 1:
		sub_101c1520(&m_vecPosition2, m_nSpeed480);
		m_nToggleState = 1;
		break;
	case 2:
		sub_101c17e0(&m_vecAngle1, m_nSpeed490);
		m_nToggleState = 2;
		break;
	case 3:
		sub_101c17e0(&m_vecAngle2, m_nSpeed490);
		m_nToggleState = 3;
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x101c1cb0 size=0xc9
#include "CBaseToggle.h"

#define SL1(n) virtual void s##n();
#define SL10(p) SL1(p##0) SL1(p##1) SL1(p##2) SL1(p##3) SL1(p##4) SL1(p##5) SL1(p##6) SL1(p##7) SL1(p##8) SL1(p##9)
#define SL100(p) SL10(p##0) SL10(p##1) SL10(p##2) SL10(p##3) SL10(p##4) SL10(p##5) SL10(p##6) SL10(p##7) SL10(p##8) SL10(p##9)

class CToggleSlots221
{
public:
	SL100(0) SL100(1) SL10(20) SL10(21)
	virtual Vector *slot220();
	virtual Vector *slot221();
};

static inline void AssignVector(Vector &dst, const Vector &src)
{
	dst.x = src.x;
	dst.y = src.y;
	dst.z = src.z;
}

// TARGET: CBaseToggle::sub_101c1cb0
void CBaseToggle::sub_101c1cb0()
{
	vfunc93(8, 0);
	sub_100b3b00();
	CBaseEntity::vfunc103();
	AssignVector(m_vecPosition1, *((CToggleSlots221 *)this)->slot220());
	AssignVector(m_vecAngle1, *((CToggleSlots221 *)this)->slot221());
	AssignVector(m_vecAngle2, m_vecAngle1);
	((float *)&m_vecAngle2)[m_nMoveAxis] += m_flMoveAmount;
	m_i49c = m_i4a0;
	if (m_i4a0 == 1)
		m_i498 = 0;
	else if (m_i4a0 == 2)
		m_i498 = m_i4a0;
}
// END FUNCTION

// FUNCTION: 0x101c1dc0 size=0x62
#include "CBaseToggle.h"
void CBaseToggle::sub_101c1dc0(int a, int b, int c, int d)
{
	if (m_i49c == 1) {
		if (m_i498 == 0)
			sub_101c1bc0(1);
		if (m_i498 == 1)
			sub_101c1bc0(0);
	} else if (m_i49c == 2) {
		if (m_i498 == 2)
			sub_101c1bc0(3);
		if (m_i498 == 3)
			sub_101c1bc0(2);
	}
}
// END FUNCTION

// FUNCTION: 0x101c1e50 size=0x175
#include "CTraceFilterNoCharacterCollide.h"
#include "Ray_t.h"
#include "CGameTrace.h"
#include "CTraceFilterSimple.h"
#include "CUnknown1070b254.h"
#include "ConVar.h"
#include "Vector.h"

#define SLA(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SLB(p) SLA(p##0) SLA(p##1) SLA(p##2) SLA(p##3) SLA(p##4) SLA(p##5) SLA(p##6) SLA(p##7) SLA(p##8) SLA(p##9)
struct EntVT101c1e50 {
	SLB(a) SLA(b0) SLA(b1) SLA(b2) SLA(b3) SLA(b4) SLA(b5) SLA(b6) SLA(b7) SLA(b8)
	virtual void s190(); virtual void s191(); virtual void s192();
	virtual Vector *a193(Vector *pOut);
};
struct RayLocal101c1e50
{
	Vector m_Start;
	Vector m_Delta;
	Vector m_Extents;
	Vector m_StartOffset;
	char m_IsRay;
	char m_IsSwept;
	char m_b32;
	char m_b33;
	int m_n34;
};
extern CUnknown1070b254 *g_1070b254;
extern ConVar *g_10738964;
void sub_10146570(const float *pStart, const float *pEnd, int r, int g, int b, int noDepth, float duration);

inline int NonZero(float f)
{
	return f != 0;
}

char sub_101c1e50(EntVT101c1e50 *pEntA, EntVT101c1e50 *pEntB)
{
	Vector posA;
	RayLocal101c1e50 ray;
	Vector posB;
	pEntA->a193(&posA);
	pEntB->a193(&posB);

	VectorSubtract(posB, posA, ray.m_Delta);
	int bSwept = NonZero(ray.m_Delta.LengthSqr());
	ray.m_IsSwept = bSwept;
	VectorClear(ray.m_StartOffset);
	ray.m_IsRay = 1;
	VectorClear(ray.m_Extents);
	VectorCopy(posA, ray.m_Start);
	ray.m_b32 = 0;
	ray.m_n34 = 0;
	ray.m_b33 = 0;

	CTraceFilterSimple filter(pEntA, 0);
	CGameTrace trace;
	g_1070b254->vfunc4((Ray_t *)&ray, 0x28040b1, (CTraceFilterNoCharacterCollide *)&filter, &trace);
	if (!g_10738964->vfunc1() && g_10738964->m_nValue)
		sub_10146570(trace.m_startpos, trace.m_endpos, 0xff, 0, 0, 1, -1.0f);
	return trace.m_fraction == 1.0f;
}
// END FUNCTION

// FUNCTION: 0x101c2030 size=0x1e
#include "CNullEntity.h"

void sub_100aa7b0(void *p);

// TARGET: CNullEntity::vfunc5
CBaseEntity *CNullEntity::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101c2060 size=0x1e
#include "CBaseDMStart.h"

void sub_100aa7b0(void *p);

// TARGET: CBaseDMStart::vfunc5
CBaseEntity *CBaseDMStart::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
