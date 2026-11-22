// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 191 blocks
#include "vampire.h"

// FUNCTION: 0x1020e1e0 size=0xd
#include "CGameText.h"
namespace lifted {
int __stdcall sub_10004557(int);
}
void CGameText::vfunc173(CBaseEntity *a0, CBaseEntity *a1, int a2, int a3)
{
#define a0 ((int)a0)
    lifted::sub_10004557(a0);
#undef a0
}
// END FUNCTION

// FUNCTION: 0x1020e200 size=0x6
#include "datamap.h"
#include "CGameText.h"
namespace lifted {
extern char g_105aab6c;
}
datamap_t *CGameText::vfunc82()
{
    return (datamap_t *)&lifted::g_105aab6c;
}
// END FUNCTION

// FUNCTION: 0x1020e220 size=0x5
int sub_1020e260(void);
int g_1074f0ac = ((int (*)(int))sub_1020e260)(0);
// END FUNCTION

// FUNCTION: 0x1020e260 size=0x1a
namespace lifted {
extern int g_105aab6c;
extern int g_105aab70;
extern char g_105aabb4;
}
int sub_1020e260()
{
    lifted::g_105aab70 = 0xd;
    lifted::g_105aab6c = (int)&lifted::g_105aabb4;
    return (int)&lifted::g_105aab6c;
}
// END FUNCTION

// FUNCTION: 0x1020e290 size=0xcb
#include "CGameText.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
void sub_101d0570(int *pOut, int count, const char *pszString);

bool CGameText::vfunc110(const char *szKeyName, const char *szValue)
{
	if (_strcmpi(szKeyName, "color") == 0) {
		int color[4];
		sub_101d0570(color, 4, szValue);
		m_textParms.r1 = color[0];
		m_textParms.g1 = color[1];
		m_textParms.b1 = color[2];
		m_textParms.a1 = color[3];
	} else if (_strcmpi(szKeyName, "color2") == 0) {
		int color[4];
		sub_101d0570(color, 4, szValue);
		m_textParms.r2 = color[0];
		m_textParms.g2 = color[1];
		m_textParms.b2 = color[2];
		m_textParms.a2 = color[3];
	} else
		return sub_1009e430(szKeyName, szValue);
	return true;
}
// END FUNCTION

// FUNCTION: 0x1020e3a0 size=0xf
struct CGameTextUnitFwd;
struct CGameTextUnitFwd {
    void sub_1020e3a0(int a);
    void sub_1020e6b0(int a);
};

// TARGET: sub_1020e3a0
void CGameTextUnitFwd::sub_1020e3a0(int a)
{
    this->sub_1020e6b0((*(int *)a));
}
// END FUNCTION

// FUNCTION: 0x1020e3c0 size=0xee
#include "CReliableSingleUserRecipientFilter.h"
struct S1020e3c0Arg { struct S1020e3c0Ent *pEnt; };
struct S1020e3c0Ent { char pad[0xa8]; void *pPlayer; };
extern int g_10726070;

void __stdcall sub_1020e3c0(S1020e3c0Arg *p)
{
    S1020e3c0Ent *pEnt = p->pEnt;
    if (pEnt) {
        void *pPlayer = pEnt->pPlayer;
        if (pPlayer) {
            CReliableSingleUserRecipientFilter filter(pPlayer);
            engine->vfunc65(&filter, g_10726070);
            engine->vfunc67(0);
            engine->vfunc66();
        }
    }
}
// END FUNCTION

// FUNCTION: 0x1020e4f0 size=0x152
#include "CBaseEntity.h"
#include "inputdata_t.h"
#include "CUnknown1020e4f0.h"
#include "CEventQueue.h"
#include "CReliableSingleUserRecipientFilter.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

struct CUnknown1020e4f0Activator
{
	char m_pad0000[0xa8];
	void *m_pPlayer;
};

extern int g_10726070;
extern CEventQueue g_106e7050;

// TARGET: CUnknown1020e4f0::sub_1020e4f0
void CUnknown1020e4f0::sub_1020e4f0(inputdata_t *pInput)
{
	CUnknown1020e4f0Activator *pActivator = *(CUnknown1020e4f0Activator **)pInput;
	if (pActivator && pActivator->m_pPlayer)
	{
		CReliableSingleUserRecipientFilter filter(pActivator->m_pPlayer);
		engine->vfunc65(&filter, g_10726070);
		engine->vfunc67(1);
		engine->vfunc78(STRINGR_F(m_pName450));
		engine->vfunc66();
		if (m_f470 > 0.0f)
		{
			g_106e7050.sub_100ce040(vfunc4(), "CloseWindow", m_f470, *(CBaseEntity **)pInput, vfunc4(), 0);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1020e6b0 size=0x6c
#include "CGameText.h"
#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)
struct CGameTextActivator {
    S100(a0) S10(a10) S10(a11) S10(a12) S10(a13) S10(a14) S10(a15)
    virtual void b0(); virtual void b1();
    virtual char IsPlayer();
};
extern const char g_106b8540[];
void sub_1000286f(void *pParams, const char *pszMessage);
void sub_1000f11e(void *pPlayer, void *pParams, const char *pszMessage);

struct CGameTextUnit : CGameText {
    void sub_1020e6b0(CGameTextActivator *pActivator);
};

void CGameTextUnit::sub_1020e6b0(CGameTextActivator *pActivator)
{
    char *pThis = (char *)this;
    if (*(unsigned int *)(pThis + 0x204) & 1) {
        const char *pszMessage = *(const char **)(pThis + 0x450);
        if (!pszMessage)
            pszMessage = g_106b8540;
        sub_1000286f(pThis + 0x454, pszMessage);
        return;
    }
    if (pActivator && pActivator->IsPlayer()) {
        const char *pszMessage = *(const char **)(pThis + 0x450);
        if (!pszMessage)
            pszMessage = g_106b8540;
        sub_1000f11e(pActivator, pThis + 0x454, pszMessage);
    }
}
// END FUNCTION

// FUNCTION: 0x1020e740 size=0xea
#include "platform.h"
#include "CBaseEntity.h"
extern int vt_10461bcc[];
extern int vt_10486c8c[];
void *sub_100aa720(unsigned int cb);
void *__fastcall sub_101c0e20(void *pThis);
void *__fastcall sub_100cd2a0(void *pThis);
void *__fastcall sub_100cc020(void *pThis);

// TARGET: func_elevator
DLL_EXPORT CBaseEntity *func_elevator()
{
	char *p = (char *)sub_100aa720(0x818);
	if (p) {
		sub_101c0e20(p);
		sub_100cd2a0(p + 0x578);
		sub_100cc020(p + 0x590);
		sub_100cc020(p + 0x5a8);
		sub_100cc020(p + 0x5c0);
		sub_100cc020(p + 0x5d8);
		sub_100cc020(p + 0x5f0);
		*(int **)p = vt_10461bcc;
		sub_100cd2a0(p + 0x638);
		sub_100cd2a0(p + 0x650);
		sub_100cd2a0(p + 0x668);
		for (int i = 0; i < 8; i++)
			sub_100cd2a0(p + 0x680 + i * 0x18);
		for (int j = 0; j < 8; j++)
			sub_100cd2a0(p + 0x740 + j * 0x18);
		*(int **)p = vt_10486c8c;
	} else {
		p = 0;
	}
	CBaseEntity *pEnt = (CBaseEntity *)p;
	pEnt->vfunc106("func_elevator");
	return pEnt;
}
// END FUNCTION

// FUNCTION: 0x1020e870 size=0x6
#include "datamap.h"
#include "CFuncElevator.h"
namespace lifted {
extern char g_105aadf0;
}
datamap_t *CFuncElevator::vfunc82()
{
    return (datamap_t *)&lifted::g_105aadf0;
}
// END FUNCTION

// FUNCTION: 0x1020e890 size=0x5
int * sub_1020e8d0(void);
int * g_1074f10c = ((int * (*)(int))sub_1020e8d0)(0);
// END FUNCTION

// FUNCTION: 0x1020e8d0 size=0x76e
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
extern int g_105aadf0[2];
void sub_10003cce();
void sub_1000c4e6();
void sub_1000d931();
void sub_10014f1a();
void sub_1000eba1();
void sub_10008319();

int *sub_1020e8d0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 1, "m_fFloorHeight[elevator_floor_1]", {0x608, 0}, 1, 6, "floor1" },
        { 1, "m_fFloorHeight[elevator_floor_2]", {0x60c, 0}, 1, 6, "floor2" },
        { 1, "m_fFloorHeight[elevator_floor_3]", {0x610, 0}, 1, 6, "floor3" },
        { 1, "m_fFloorHeight[elevator_floor_4]", {0x614, 0}, 1, 6, "floor4" },
        { 1, "m_fFloorHeight[elevator_floor_5]", {0x618, 0}, 1, 6, "floor5" },
        { 1, "m_fFloorHeight[elevator_floor_6]", {0x61c, 0}, 1, 6, "floor6" },
        { 1, "m_fFloorHeight[elevator_floor_7]", {0x620, 0}, 1, 6, "floor7" },
        { 1, "m_fFloorHeight[elevator_floor_8]", {0x624, 0}, 1, 6, "floor8" },
        { 4, "m_nNumFloors", {0x62c, 0}, 1, 6, "numfloors" },
        { 5, "m_bLocked", {0x80c, 0}, 1, 6, "locked" },
        { 3, "m_vecOrigPos", {0x800, 0}, 1, 2 },
        { 4, "m_nCurrFloor", {0x630, 0}, 1, 2 },
        { 4, "m_nTargetFloor", {0x634, 0}, 1, 2 },
        { 5, "m_bLocked", {0x80c, 0}, 1, 2 },
        { 0, "CFuncElevatorMoveThink", {0, 0}, 1, 0x20, 0, 0, (void *)sub_10003cce },
        { 10, "m_OnMoveStart", {0x638, 0}, 1, 0x16, "OnMoveStart", g_1055dc70 },
        { 10, "m_OnReachFloorAny", {0x650, 0}, 1, 0x16, "OnReachFloorAny", g_1055dc70 },
        { 10, "m_OnPassFloorAny", {0x668, 0}, 1, 0x16, "OnPassFloorAny", g_1055dc70 },
        { 10, "m_OnReachFloor[elevator_floor_1]", {0x680, 0}, 1, 0x16, "OnReachFloor1", g_1055dc70 },
        { 10, "m_OnReachFloor[elevator_floor_2]", {0x698, 0}, 1, 0x16, "OnReachFloor2", g_1055dc70 },
        { 10, "m_OnReachFloor[elevator_floor_3]", {0x6b0, 0}, 1, 0x16, "OnReachFloor3", g_1055dc70 },
        { 10, "m_OnReachFloor[elevator_floor_4]", {0x6c8, 0}, 1, 0x16, "OnReachFloor4", g_1055dc70 },
        { 10, "m_OnReachFloor[elevator_floor_5]", {0x6e0, 0}, 1, 0x16, "OnReachFloor5", g_1055dc70 },
        { 10, "m_OnReachFloor[elevator_floor_6]", {0x6f8, 0}, 1, 0x16, "OnReachFloor6", g_1055dc70 },
        { 10, "m_OnReachFloor[elevator_floor_7]", {0x710, 0}, 1, 0x16, "OnReachFloor7", g_1055dc70 },
        { 10, "m_OnReachFloor[elevator_floor_8]", {0x728, 0}, 1, 0x16, "OnReachFloor8", g_1055dc70 },
        { 10, "m_OnPassFloor[elevator_floor_2]", {0x758, 0}, 1, 0x16, "OnPassFloor2", g_1055dc70 },
        { 10, "m_OnPassFloor[elevator_floor_3]", {0x770, 0}, 1, 0x16, "OnPassFloor3", g_1055dc70 },
        { 10, "m_OnPassFloor[elevator_floor_4]", {0x788, 0}, 1, 0x16, "OnPassFloor4", g_1055dc70 },
        { 10, "m_OnPassFloor[elevator_floor_5]", {0x7a0, 0}, 1, 0x16, "OnPassFloor5", g_1055dc70 },
        { 10, "m_OnPassFloor[elevator_floor_6]", {0x7b8, 0}, 1, 0x16, "OnPassFloor6", g_1055dc70 },
        { 10, "m_OnPassFloor[elevator_floor_7]", {0x7d0, 0}, 1, 0x16, "OnPassFloor7", g_1055dc70 },
        { 4, "InputSnapToFloor", {0, 0}, 1, 8, "SnapToFloor", 0, (void *)sub_1000c4e6 },
        { 4, "InputGotoFloor", {0, 0}, 1, 8, "GotoFloor", 0, (void *)sub_1000d931 },
        { 0, "InputLock", {0, 0}, 1, 8, "Lock", 0, (void *)sub_10014f1a },
        { 0, "InputUnlock", {0, 0}, 1, 8, "Unlock", 0, (void *)sub_1000eba1 },
        { 0, "InputCallCurrentFloorOutputs", {0, 0}, 1, 8, "CallCurrentFloorOutputs", 0, (void *)sub_10008319 },
    };
    g_105aadf0[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_105aadf0[0] = (int)&dataDesc[1];
    return g_105aadf0;
}
// END FUNCTION

// FUNCTION: 0x1020f220 size=0x3b
#include "CFuncElevator.h"
#include "CBasePlayer.h"
#include "CFuncMoveLinear.h"

struct CFuncElevatorUnit1020f220 : CFuncElevator
{
    void sub_1020f220();
};

// TARGET: sub_1020f220
void CFuncElevatorUnit1020f220::sub_1020f220()
{
    float *pOrigin = ((CBasePlayer *)this)->vfunc220();
    *(float *)((char *)this + 0x800) = pOrigin[0];
    *(float *)((char *)this + 0x804) = pOrigin[1];
    *(float *)((char *)this + 0x808) = pOrigin[2];
    *(int *)((char *)this + 0x630) = 0;
    *(char *)((char *)this + 0x80c) = 0;
    ((CFuncMoveLinear *)this)->CFuncMoveLinear::vfunc103();
}
// END FUNCTION

// FUNCTION: 0x1020f270 size=0x3a
// TARGET: CFuncElevator::vfunc130
#include "CFuncElevator.h"
#include "CBaseEntity.h"

void sub_100043cc(CFuncElevator *p, float *v, int flag);

void CFuncElevator::vfunc130(int a)
{
    ((CBaseEntity *)this)->CBaseEntity::vfunc130(a);
    if ((char)a) {
        sub_100043cc(this, m_vecDest800, 0);
        m_nFloor630 = 0;
        m_flag80c = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x1020f2c0 size=0xa
void __fastcall sub_1020f2c0(char *self, int, int)
{
	self[0x80c] = 1;
}
// END FUNCTION

// FUNCTION: 0x1020f2e0 size=0xa
void __fastcall sub_1020f2e0(char *self, int, int)
{
	self[0x80c] = 0;
}
// END FUNCTION

// FUNCTION: 0x1020f300 size=0x17
#include "CFuncElevator.h"

struct CUnk1020f300 {
    char pad[0x630];
    int m_630;
    void sub_1020f300(int b);
};

void CUnk1020f300::sub_1020f300(int b)
{
    if (m_630 != -1)
        ((CFuncElevator *)this)->sub_1020f700(m_630);
}
// END FUNCTION

// FUNCTION: 0x1020f330 size=0x87
#include "CPropSwitch.h"
#include "inputdata_t.h"

extern float g_1070d1b0[];
void __cdecl sub_101cf5c0(CBaseEntity *pEntity, const float *pOrigin, int flags);

struct CSwitchVec3 { float x, y, z; };

void CPropSwitch::sub_1020f330(inputdata_t *pInput)
{
	int state = (pInput->value.fieldType == 4 ? pInput->value.iValue : 0) - 1;
	if (state != *(int *)((char *)this + 0x630)) {
		sub_100b2e30(g_1070d1b0);
		*(float *)((char *)this + 0x3fc) = -1.0f;
		*(int *)((char *)this + 0x630) = state;
		CSwitchVec3 vec = *(CSwitchVec3 *)((char *)this + 0x800);
		vec.z = *(float *)((char *)this + 0x608 + state * 4);
		sub_101cf5c0(this, &vec.x, 0);
		sub_100b3b00();
	}
}
// END FUNCTION

// FUNCTION: 0x1020f3f0 size=0x174
#include "CFuncElevator.h"
#include "inputdata_t.h"
#include "COutputEvent.h"
#include "Vector.h"

extern "C" void *__cdecl memset(void *, int, unsigned int);
#pragma intrinsic(memset)
__declspec(dllimport) void Warning(const char *, ...);


void sub_10003cce();	// the elevator's think function (stub)

struct ElevView_t {
	char m_pad0000[0x164];
	float m_flSpeed;	// 0x164
	char m_pad0168[0x17c - 0x168];
	float m_flNextThink;	// 0x17c
	char m_pad0180[0x548 - 0x180];
	float m_f548;
	char m_pad054c[0x608 - 0x54c];
	float m_flFloors[9];	// 0x608
	int m_nFloors;	// 0x62c
	int m_n630;
	int m_n634;
	COutputEvent m_out638;
	char m_pad0650[0x800 - 0x650];
	Vector m_vec800;
	char m_bBusy;	// 0x80c
	char m_bFlags[8];	// 0x80d

	void sub_1020f700(int nFloor);	// stub 0x1000aebb
	void sub_10116570(Vector vecDest, float flSpeed);	// stub 0x1000c7c5
	int sub_100ac4e0(int func, int thinkTime, const char *pszContext);	// stub 0x10007fe5
};

void CFuncElevator::sub_1020f3f0(inputdata_t *pInput)
{
	ElevView_t *p = (ElevView_t *)this;
	int nFloor = ((pInput->value.fieldType == 4) ? pInput->value.iValue : 0) - 1;
	if (p->m_n630 != -1 && !p->m_bBusy) {
		if (nFloor == p->m_n630) {
			p->sub_1020f700(p->m_n630);
			return;
		}
		if (nFloor <= 8 && nFloor <= p->m_nFloors && nFloor >= 0) {
			float flPos = p->m_flFloors[nFloor];
			Vector vecDest = p->m_vec800;
			vecDest.z = flPos;
			p->sub_10116570(vecDest, p->m_flSpeed);
			p->m_n634 = nFloor;
			p->m_n630 = -1;
			p->m_out638.sub_100cd660(pInput->pActivator, this, 0);
			p->sub_100ac4e0((int)sub_10003cce, 0, 0);
			p->m_flNextThink = gpGlobals->curtime + 0.1f;
			memset(p->m_bFlags, 0, 8);
			bool bUp = p->m_f548 > flPos;
			for (int i = 0; i < 8; i++) {
				if (bUp) {
					if (flPos > p->m_flFloors[i])
						p->m_bFlags[i] = 1;
				} else {
					if (flPos < p->m_flFloors[i])
						p->m_bFlags[i] = 1;
				}
			}
		} else {
			Warning("Elevator asked to go to invalid floor %d", nFloor);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1020f5d0 size=0xc0
#include "CEntityVSlots.h"
#include "COutputEvent.h"

// CFuncElevator's think: fires the floor outputs the elevator passes
struct CFuncElevatorV
{
	void sub_1020f5d0();

	char m_pad0000[0x17c];
	float m_flNextThink;	// 0x17c
	char m_pad0180[0x548 - 0x180];
	float m_flPrevZ548;
	char m_pad054c[0x608 - 0x54c];
	float m_flFloorZ608[8];
	char m_pad628[0x668 - 0x628];
	COutputEvent m_Output668;
	char m_pad680[0x740 - 0x680];
	COutputEvent m_Outputs740[8];
	char m_pad800[0x80d - 0x800];
	bool m_bFired80d[8];
};

// TARGET: CFuncElevatorV::sub_1020f5d0
void CFuncElevatorV::sub_1020f5d0()
{
	const Vector &vecOrigin = *((CEntityVSlots *)this)->slot220();
	float z = vecOrigin.z;
	bool bDown = m_flPrevZ548 > z;
	for (int i = 1; i < 8; i++)
	{
		if (m_bFired80d[i])
			continue;
		if (bDown)
		{
			if (z > m_flFloorZ608[i])
			{
				m_Output668.sub_100cd660(this, this, 0);
				m_Outputs740[i].sub_100cd660(this, this, 0);
				m_bFired80d[i] = true;
			}
		}
		else if (z < m_flFloorZ608[i])
		{
			m_Output668.sub_100cd660(this, this, 0);
			m_Outputs740[i].sub_100cd660(this, this, 0);
			m_bFired80d[i] = true;
		}
	}
	m_flNextThink = gpGlobals->curtime + 0.1f;
}
// END FUNCTION

// FUNCTION: 0x1020f6c0 size=0x24
#include "CFuncElevator.h"
#include "CBaseEntity.h"
#include "CFuncMoveLinear.h"

// TARGET: CFuncElevator::vfunc133
void CFuncElevator::vfunc133()
{
    ((CBaseEntity *)this)->sub_100ac4e0(0, 0, 0);
    sub_1020f700(*(int *)((char *)this + 0x634));
    ((CFuncMoveLinear *)this)->sub_10116bf0();
}
// END FUNCTION

// FUNCTION: 0x1020f700 size=0x35
#include "CFuncElevator.h"
// TARGET: CFuncElevator::sub_1020f700
void CFuncElevator::sub_1020f700(int nFloor)
{
	m_item650.sub_100cd660(this, this, 0.0f);
	m_items680[nFloor].sub_100cd660(this, this, 0.0f);
	m_nFloor630 = nFloor;
}
// END FUNCTION

// FUNCTION: 0x1020f750 size=0x3
#include "CFuncElevator.h"
void CFuncElevator::vfunc178(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1020f770 size=0x4b
#include "platform.h"
#include "CConstraintAnchor.h"
#include "CBaseEntity.h"
void *sub_100aa720(unsigned int size);
extern char g_1048711c[];	// CPointTarget vftable
extern const char g_105ae688[];

// TARGET: point_target
DLL_EXPORT CBaseEntity *point_target()
{
	void *mem = sub_100aa720(0x450);
	CBaseEntity *p;
	if (mem) {
		((CConstraintAnchorBase *)mem)->sub_1009d980(0);
		*(void **)mem = g_1048711c;
		p = (CBaseEntity *)mem;
	} else {
		p = 0;
	}
	p->vfunc106(g_105ae688);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1020f7e0 size=0x43
#include "platform.h"
#include "CLogicVisible.h"
void *sub_100aa720(int size);
extern char g_105ae698[];

// TARGET: logic_visibility_test
DLL_EXPORT CBaseEntity *logic_visibility_test()
{
	void *mem = sub_100aa720(0x4b8);
	CLogicVisible *p;
	if (mem)
		p = ((CLogicVisible *)mem)->sub_1020f990();
	else
		p = 0;
	p->vfunc106(g_105ae698);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1020f850 size=0x6
#include "datamap.h"
#include "CLogicVisible.h"
namespace lifted {
extern char g_105ab490;
}
datamap_t * CLogicVisible::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105ab490);
}
// END FUNCTION

// FUNCTION: 0x1020f870 size=0x5
int * sub_1020f8b0(void);
int * g_1074f0b0 = ((int * (*)(int))sub_1020f8b0)(0);
// END FUNCTION

// FUNCTION: 0x1020f8b0 size=0xb0
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
extern int g_105ab490[2];
void sub_10010b8b();

int *sub_1020f8b0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 2, "m_sTargetEnt", {0x450, 0}, 1, 6, "target_ent" },
        { 2, "m_sSourceEnt", {0x454, 0}, 1, 6, "source_ent" },
        { 1, "m_flRadius", {0x458, 0}, 1, 6, "radius" },
        { 0, "InputCheckVisibility", {0, 0}, 1, 8, "CheckVisibility", 0, (void *)sub_10010b8b },
        { 10, "m_OnCanSeeTarget", {0x45c, 0}, 1, 0x16, "OnCanSeeTarget", g_1055dc70 },
        { 10, "m_OnNotSeeTarget", {0x474, 0}, 1, 0x16, "OnNotSeeTarget", g_1055dc70 },
    };
    g_105ab490[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_105ab490[0] = (int)&dataDesc[1];
    return g_105ab490;
}
// END FUNCTION

// FUNCTION: 0x1020f990 size=0x75
#include "CLogicVisible.h"
extern void *vt_1044b584[];
extern void *vt_104875ac[];
struct CLogicVisibleSub { void sub_10002ddd(); };
struct CLogicVisibleUnit : CLogicVisible {
    CBaseEntity *sub_100090fc(int a);
    char m_pad0004[0x45c - sizeof(CBaseEntity)];
    CLogicVisibleSub m_s45c;
    char m_pad45d[0x474 - 0x45d];
    CLogicVisibleSub m_s474;
    char m_pad475[0x48c - 0x475];
    int m_f48c, m_f490, m_f494, m_f498, m_f49c, m_f4a0, m_f4a4, m_f4a8, m_f4ac, m_f4b0;
    char m_pad4b4;
    char m_b4b5;
};

CLogicVisible *CLogicVisible::sub_1020f990()
{
    CLogicVisibleUnit *u = (CLogicVisibleUnit *)this;
    u->sub_100090fc(0);
    *(void ***)this = vt_1044b584;
    u->m_s45c.sub_10002ddd();
    u->m_s474.sub_10002ddd();
    u->m_f48c = 0;
    u->m_f490 = 0;
    u->m_f494 = 0;
    u->m_f498 = 0;
    u->m_f49c = 0;
    u->m_f4a0 = 0;
    u->m_f4a4 = 0;
    u->m_f4a8 = 0;
    u->m_f4ac = 0;
    u->m_f4b0 = 0;
    *(void ***)this = vt_104875ac;
    u->m_b4b5 = 0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x1020fa30 size=0x78
#include "CLogicVisible.h"
#include "UtlMem.h"
void sub_100aa7b0(void *p);

struct CLogicVisibleVec : UtlMem {
    int m_Size;
    int *m_pElements;
};
struct CLogicVisibleItem {
    void sub_10015708();
};

CBaseEntity *CLogicVisible::vfunc5(unsigned int flags)
{
    CLogicVisibleVec *pVec = (CLogicVisibleVec *)((char *)this + 0x4a0);
    pVec->m_Size = 0;
    pVec->sub_10185100();
    pVec->m_pElements = pVec->m_pMemory;
    pVec->sub_10185100();
    pVec = (CLogicVisibleVec *)((char *)this + 0x48c);
    pVec->m_Size = 0;
    pVec->sub_10185100();
    pVec->m_pElements = pVec->m_pMemory;
    pVec->sub_10185100();
    ((CLogicVisibleItem *)((char *)this + 0x474))->sub_10015708();
    ((CLogicVisibleItem *)((char *)this + 0x45c))->sub_10015708();
    sub_1000cb8a();
    if (flags & 1)
        sub_100aa7b0(this);
    return this;
}
// END FUNCTION

// FUNCTION: 0x1020fad0 size=0x2de
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnit10210250.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "utlmemory.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "CGlobalEntityList.h"
#include "CEHandleGet.h"
#include "CBaseEntity.h"
#include "CUtlVector4.h"
extern CGlobalEntityList g_106eb5d8;
CBaseEntity *sub_101cd9e0(int);
void sub_101cd940(CUnit10210250 *);
extern "C" char *strstr(const char *, const char *);
extern const char g_106b8540[];

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }
#define LOOKUP(h) ((CBaseEntity *)g_10566458->sub_100290c0((const unsigned int *)&(h)))

struct CBaseHandleVec10217080 : CUtlVector4
{
	int AddToTail(const CBaseHandle &src) { return sub_10217080(m_size, (const int *)&src); }
};

void CUnit10210250::sub_1020fad0()
{
	if (m_bResolved4b5)
		return;
	m_bResolved4b5 = true;
	m_bAllValid4b4 = true;
	CBaseHandle h;
	if (strstr(STRINGR(m_pszNameA454), "!player")) {
		h = (IHandleEntity *)sub_101cd9e0(1);
		((CBaseHandleVec10217080 *)&m_ListA)->AddToTail(h);
	} else {
		h = (IHandleEntity *)g_106eb5d8.sub_100f7770(0, STRINGR(m_pszNameA454), 0, 0);
		while (LOOKUP(h)) {
			if (!LOOKUP(h)->m_p9c)
				m_bAllValid4b4 = false;
			((CBaseHandleVec10217080 *)&m_ListA)->AddToTail(h);
			CBaseEntity *pStart = LOOKUP(h);
			h = (IHandleEntity *)g_106eb5d8.sub_100f7770(pStart, STRINGR(m_pszNameA454), 0, 0);
		}
	}
	EHANDLE &hB = (EHANDLE &)h;
	if (strstr(STRINGR(m_pszNameB450), "!player")) {
		hB = sub_101cd9e0(1);
		m_ListB.AddToTail(hB);
	} else {
		hB = g_106eb5d8.sub_100f7770(0, STRINGR(m_pszNameB450), 0, 0);
		while (LOOKUP(hB)) {
			if (!LOOKUP(hB)->m_p9c)
				m_bAllValid4b4 = false;
			m_ListB.AddToTail(hB);
			CBaseEntity *pStart = hB.Get();
			hB = g_106eb5d8.sub_100f7770(pStart, STRINGR(m_pszNameB450), 0, 0);
		}
	}
	if (!m_ListA.Count() || !m_ListB.Count())
		sub_101cd940(this);
}
// END FUNCTION

// FUNCTION: 0x1020fe70 size=0x26b
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "utlrbtree.h"
#include "CBaseEntity.h"
#include "CUnit10210250.h"
#include "globalvars.h"
#include "Tier1.h"

inline CBaseEntity *Owner9c(CBaseEntity *pEnt) { return (CBaseEntity *)pEnt->m_p9c; }

#include "CGlobalEntityList.h"
#include "CEHandleGet.h"
#include "CUtlVector4.h"
extern CGlobalEntityList g_106eb5d8;
CBaseEntity *sub_101cd9e0(int);
void sub_101cd940(CUnit10210250 *);
extern "C" char *strstr(const char *, const char *);
extern const char g_106b8540[];

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }
#define LOOKUP(h) ((CBaseEntity *)g_10566458->sub_100290c0((const unsigned int *)&(h)))

struct CBaseHandleVec10217080 : CUtlVector4
{
	int AddToTail(const CBaseHandle &src) { return sub_10217080(m_size, (const int *)&src); }
};

namespace block_1020fe70
{
struct CUnitView : CUnit10210250
{
	void sub_1020fad0();
};

void CUnitView::sub_1020fad0()
{
	if (m_bResolved4b5)
		return;
	m_bResolved4b5 = true;
	m_bAllValid4b4 = true;
	CBaseHandle h;
	if (strstr(STRINGR(m_pszNameA454), "!player")) {
		h = (IHandleEntity *)sub_101cd9e0(1);
		((CBaseHandleVec10217080 *)&m_ListA)->AddToTail(h);
	} else {
		h = (IHandleEntity *)g_106eb5d8.sub_100f7770(0, STRINGR(m_pszNameA454), 0, 0);
		while ((CBaseEntity *)h.Get()) {
			if (!((CBaseEntity *)h.Get())->m_p9c)
				m_bAllValid4b4 = false;
			((CBaseHandleVec10217080 *)&m_ListA)->AddToTail(h);
			CBaseEntity *pStart = (CBaseEntity *)h.Get();
			h = (IHandleEntity *)g_106eb5d8.sub_100f7770(pStart, STRINGR(m_pszNameA454), 0, 0);
		}
	}
	EHANDLE &hB = (EHANDLE &)h;
	if (strstr(STRINGR(m_pszNameB450), "!player")) {
		hB = sub_101cd9e0(1);
		m_ListB.AddToTail(hB);
	} else {
		hB = g_106eb5d8.sub_100f7770(0, STRINGR(m_pszNameB450), 0, 0);
		while (LOOKUP(hB)) {
			if (!LOOKUP(hB)->m_p9c)
				m_bAllValid4b4 = false;
			m_ListB.AddToTail(hB);
			CBaseEntity *pStart = hB.Get();
			hB = g_106eb5d8.sub_100f7770(pStart, STRINGR(m_pszNameB450), 0, 0);
		}
	}
	if (!m_ListA.Count() || !m_ListB.Count())
		sub_101cd940(this);
}
}

// TARGET: CUnit10210250::sub_1020fe70
void CUnit10210250::sub_1020fe70(void *pInputData)
{
	float flStart = gpGlobals->curtime;
	((block_1020fe70::CUnitView *)this)->sub_1020fad0();
	int nB = m_ListB.Count();
	int nA = m_ListA.Count();
	for (int i = 0; i < nB; i++)
	{
		for (int j = 0; j < nA; j++)
		{
			if (m_ListA[j] && m_ListB[i])
			{
				if (m_bAllValid4b4)
				{
					if (sub_102101d0(Owner9c(m_ListA[j]), Owner9c(m_ListB[i])))
					{
						m_Output45c.sub_100cd660(*(void **)pInputData, this, 0);
						return;
					}
				}
				if (!m_bAllValid4b4)
				{
					if (sub_10210180(m_ListA[j], m_ListB[i]))
					{
						m_Output45c.sub_100cd660(*(void **)pInputData, this, 0);
						return;
					}
				}
			}
		}
	}
	m_Output474.sub_100cd660(*(void **)pInputData, this, 0);
	if (flStart + 0.1 < gpGlobals->curtime)
		g_109f3628("%s searching too long!!\n", sub_100ab4f0());
}
// END FUNCTION

// FUNCTION: 0x10210180 size=0x32
#include "CEntityVSlots.h"

struct CUnit10210250
{
	bool sub_10210250(CEntityVSlots *pA, CEntityVSlots *pB);
	char sub_102102e0(CEntityVSlots *pA, CEntityVSlots *pB);
	bool sub_10210180(CEntityVSlots *pA, CEntityVSlots *pB);
};

// TARGET: CUnit10210250::sub_10210180
bool CUnit10210250::sub_10210180(CEntityVSlots *pA, CEntityVSlots *pB)
{
	if (!sub_10210250(pA, pB)) {
		return false;
	}
	return sub_102102e0(pA, pB) ? true : false;
}
// END FUNCTION

// FUNCTION: 0x102101d0 size=0x59
#include "CEntityVSlots.h"
#include "CBaseCombatCharacter.h"
struct CUnit10210250
{
	bool sub_10210250(CEntityVSlots *pA, CEntityVSlots *pB);
	bool sub_102102e0(CEntityVSlots *pA, CEntityVSlots *pB);
	bool sub_102101d0(CEntityVSlots *pA, CEntityVSlots *pB);
};
bool CUnit10210250::sub_102101d0(CEntityVSlots *pA, CEntityVSlots *pB)
{
	if (!sub_10210250(pA, pB))
		return false;
	if (!pA->slot363(pB))
		return false;
	if (!((CBaseCombatCharacter *)pB)->sub_10146b20((CBaseCombatCharacter *)pA))
		return false;
	if (sub_102102e0(pA, pB))
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x10210250 size=0x70
#include "CEntityVSlots.h"
#include <math.h>

bool sub_101d20a0(CEntityVSlots *a, CEntityVSlots *b);

struct CUnit10210250 {
	char m_pad0000[0x458];
	float m_flRange;
	bool sub_10210250(CEntityVSlots *pB, CEntityVSlots *pA);
};

// TARGET: CUnit10210250::sub_10210250
bool CUnit10210250::sub_10210250(CEntityVSlots *pB, CEntityVSlots *pA)
{
	if (!sub_101d20a0(pA, pB))
		return false;
	Vector *a = pA->slot217();
	Vector *b = pB->slot217();
	float d = fabs(b->z - a->z) + fabs(b->y - a->y) + fabs(b->x - a->x);
	if (m_flRange < d)
		return false;
	return true;
}
// END FUNCTION

// FUNCTION: 0x102102e0 size=0x305
#include "CTraceFilterNoCharacterCollide.h"
#include "CUnit10210250.h"
#include "CEntityVSlots.h"
#include "Ray_t.h"
#include "CTraceFilterSimple.h"
#include "CGameTrace.h"
#include "CCollisionProperty.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738964.h"
#include "CUnknown10738960.h"

void sub_10146570(Vector *pStart, Vector *pEnd, int r, int g, int b, int a, float flDuration);

// TARGET: CUnit10210250::sub_102102e0
bool CUnit10210250::sub_102102e0(CEntityVSlots *pA, CEntityVSlots *pB)
{
	Vector eye;
	pA->slot193(&eye);
	Vector center;
	center = pB->slot192();
	Ray_t ray;
	ray.sub_1004f7a0(&eye.x, &center.x);
	CGameTrace tr;
	{
		CTraceFilterSimple filter((CBaseEntity *)pA, 0);
		g_1070b254->vfunc4(&ray, 0x2804091, (CTraceFilterNoCharacterCollide *)&filter, &tr);
	}
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10146570((Vector *)&tr, (Vector *)tr.m_endpos, 0xff, 0, 0, 1, -1.0f);
	if (tr.m_fraction == 1.0 || tr.m_pEnt == (CBaseEntity *)pB)
		return true;
	Vector vecA, vecB;
	CCollisionProperty *pCol = (CCollisionProperty *)((char *)pB + 0x270);
	pCol->sub_100dcd90(&pCol->m_vecMins.x, &pCol->m_vecMaxs.x, &vecA.x, &vecB.x);
	ray.Init(eye, vecB);
	{
		CTraceFilterSimple filter((CBaseEntity *)pA, 0);
		g_1070b254->vfunc4(&ray, 0x2804091, (CTraceFilterNoCharacterCollide *)&filter, &tr);
	}
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10146570((Vector *)&tr, (Vector *)tr.m_endpos, 0xff, 0, 0, 1, -1.0f);
	if (tr.m_fraction == 1.0 || tr.m_pEnt == (CBaseEntity *)pB)
		return true;
	ray.sub_1004f7a0(&eye.x, &vecA.x);
	{
		CTraceFilterSimple filter((CBaseEntity *)pA, 0);
		g_1070b254->vfunc4(&ray, 0x2804091, (CTraceFilterNoCharacterCollide *)&filter, &tr);
	}
	if (g_10738960.sub_1005f190())
		sub_10146570((Vector *)&tr, (Vector *)tr.m_endpos, 0xff, 0, 0, 1, -1.0f);
	if (tr.m_fraction == 1.0 || tr.m_pEnt == (CBaseEntity *)pB)
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x102106c0 size=0x43
#include "platform.h"
#include "CTriggerPlayerActivityLevel.h"
void *sub_100aa720(int size);
extern char g_105ae720[];

// TARGET: trigger_player_activity_level
DLL_EXPORT CBaseEntity *trigger_player_activity_level()
{
	void *mem = sub_100aa720(0x5a4);
	CTriggerPlayerActivityLevel *p;
	if (mem)
		p = ((CTriggerPlayerActivityLevel *)mem)->sub_102107c0();
	else
		p = 0;
	p->vfunc106(g_105ae720);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10210730 size=0x6
#include "datamap.h"
#include "CTriggerPlayerActivityLevel.h"
namespace lifted {
extern char g_105ab5dc;
}
datamap_t * CTriggerPlayerActivityLevel::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105ab5dc);
}
// END FUNCTION

// FUNCTION: 0x10210750 size=0x5
int sub_10210790(void);
int g_1074f124 = ((int (*)(int))sub_10210790)(0);
// END FUNCTION

// FUNCTION: 0x10210790 size=0x1a
namespace lifted {
extern int g_105ab5dc;
extern int g_105ab5e0;
extern char g_105ab624;
}
int sub_10210790()
{
    lifted::g_105ab5e0 = 6;
    lifted::g_105ab5dc = (int)&lifted::g_105ab624;
    return (int)&lifted::g_105ab5dc;
}
// END FUNCTION

// FUNCTION: 0x102107c0 size=0x45
#include "CTriggerPlayerActivityLevel.h"
CTriggerPlayerActivityLevel::CTriggerPlayerActivityLevel()
{
	m_nLevelA = -1;
	m_nLevelB = -1;
	m_nLevelC = -1;
}
// END FUNCTION

// FUNCTION: 0x10210830 size=0x4c
#include "CTriggerPlayerActivityLevel.h"
void __fastcall sub_100cd2d0(void *p);
void __fastcall sub_1009df20(void *p);
void sub_100aa7b0(void *p);
// TARGET: CTriggerPlayerActivityLevel::vfunc5
CBaseEntity *CTriggerPlayerActivityLevel::vfunc5(unsigned int flags)
{
	sub_100cd2d0((char *)this + 0x580);
	sub_100cd2d0((char *)this + 0x568);
	sub_100cd2d0((char *)this + 0x4bc);
	sub_100cd2d0((char *)this + 0x4a4);
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity *)(this);
}
// END FUNCTION

// FUNCTION: 0x102108a0 size=0x10
#include "CTriggerPlayerActivityLevel.h"

// TARGET: CTriggerPlayerActivityLevel::vfunc103
void CTriggerPlayerActivityLevel::vfunc103()
{
	CBaseEntity::vfunc103();
	sub_101c5080();
}
// END FUNCTION

// FUNCTION: 0x102108c0 size=0x5
#include "CTriggerPlayerActivityLevel.h"
#include "CBaseTrigger.h"

// TARGET: CTriggerPlayerActivityLevel::vfunc174
// the game's 0x102108c0: a tail call (jmp) of CBaseTrigger::vfunc174
void CTriggerPlayerActivityLevel::vfunc174(CBaseEntity *a0)
{
	CBaseTrigger::vfunc174(a0);
}
// END FUNCTION

// FUNCTION: 0x102108e0 size=0x9a
#include "CBasePlayer.h"
#include "CTriggerPlayerActivityLevel.h"

struct CPlayerLevel : CBasePlayer
{
	void sub_1017e6f0(int level);	// stub 0x1000c838
};

const char *sub_101d3730(const char *fmt, const char *name);

// TARGET: CTriggerPlayerActivityLevel::vfunc175
void CTriggerPlayerActivityLevel::vfunc175(CBaseEntity *pOther)
{
	if (m_bDisabled)
		return;
	CPlayerLevel *pPlayer = *(CPlayerLevel **)((char *)pOther + 0xa8);
	if (!pPlayer)
		return;
	if (m_nLevelA > -1)
		pPlayer->sub_1017df50(m_nLevelA, -1.0f, sub_101d3730("CTriggerPlayerActivityLevel::Touch %s", sub_100ab4f0()));
	if (m_nLevelB > -1)
		pPlayer->sub_1017e150(m_nLevelB, -1.0f, sub_101d3730("CTriggerPlayerActivityLevel::Touch %s", sub_100ab4f0()));
	if (m_nLevelC > -1)
		pPlayer->sub_1017e6f0(m_nLevelC);
}
// END FUNCTION

// FUNCTION: 0x102109b0 size=0xc7
#include "CTriggerPlayerActivityLevel.h"
#include "CBasePlayer.h"

const char *__cdecl sub_101d3730(const char *pszFormat, ...);

struct CBasePlayerAct : CBasePlayer
{
	int sub_1017dd80();	// stub 0x10003364
	int sub_1017de60();	// stub 0x100038f5
	void sub_1017e6f0(int a);	// stub 0x1000c838
};

struct CPlayerHolderView
{
	char m_pad0000[0xa8];
	CBasePlayerAct *m_pPlayer;	// 0xa8
};

// TARGET: CTriggerPlayerActivityLevel::vfunc176
void CTriggerPlayerActivityLevel::vfunc176(CBaseEntity *pOther)
{
	CBasePlayerAct *pPlayer = ((CPlayerHolderView *)pOther)->m_pPlayer;
	if (pPlayer) {
		if (m_flags204 & 0x20) {
			if (m_nLevelA > -1) {
				if (pPlayer->sub_1017dd80() == m_nLevelA)
					pPlayer->sub_1017df50(0, -1.0f, sub_101d3730("CTriggerPlayerActivityLevel::EndTouch %s", sub_100ab4f0()));
			}
			if (m_nLevelB > -1) {
				if (pPlayer->sub_1017ddd0() == m_nLevelB)
					pPlayer->sub_1017e150(0, -1.0f, sub_101d3730("CTriggerPlayerActivityLevel::EndTouch %s", sub_100ab4f0()));
			}
		}
		if (m_nLevelC > -1) {
			if (pPlayer->sub_1017de60() == m_nLevelC)
				pPlayer->sub_1017e6f0(0);
		}
	}
	sub_101c55d0(pOther);
}
// END FUNCTION

// FUNCTION: 0x10210ac0 size=0x30
#include "CTriggerDisciplineContext.h"

struct variant_10210ac0 {
	int iVal;
	int m_pad04;
	int m_pad08;
	int m_pad0c;
	int fieldType;
	int Int() const
	{
		if (fieldType == 4)
			return iVal;
		return 0;
	}
};
struct InputData_10210ac0 {
	int m_pad00;
	int m_pad04;
	variant_10210ac0 value;
};
void sub_10210bc0();

void CTriggerDisciplineContext::sub_10210ac0(void *pInputData)
{
	InputData_10210ac0 *p = (InputData_10210ac0 *)pInputData;
	int n = p->value.Int();
	if (n <= 5)
		*(int *)((char *)this + 0x598) = n;
	sub_10210bc0();
}
// END FUNCTION

// FUNCTION: 0x10210b00 size=0x30
#include "CTriggerDisciplineContext.h"

struct variant_10210b00 {
	int iVal;
	int m_pad04;
	int m_pad08;
	int m_pad0c;
	int fieldType;
	int Int() const
	{
		if (fieldType == 4)
			return iVal;
		return 0;
	}
};
struct InputData_10210b00 {
	int m_pad00;
	int m_pad04;
	variant_10210b00 value;
};
void sub_10210bc0();

void CTriggerDisciplineContext::sub_10210b00(void *pInputData)
{
	InputData_10210b00 *p = (InputData_10210b00 *)pInputData;
	int n = p->value.Int();
	if (n <= 5)
		*(int *)((char *)this + 0x59c) = n;
	sub_10210bc0();
}
// END FUNCTION

// FUNCTION: 0x10210b40 size=0x5e
struct Arg
{
	int a, b, c, d, e, f;
	int type;
	int Int() const { return (type == 4) ? c : 0; }
};

struct Obj
{
	char pad[0x5a0];
	int m_n5a0;
};

struct Res
{
	void sub_1017e6f0(int);
};

Res *sub_101cd9e0(int);

// TARGET: sub_10210b40
void __fastcall sub_10210b40(Obj *p, int, Arg *a)
{
	int v = a->Int();
	if (v > 5)
		return;
	Res *r = sub_101cd9e0(1);
	if (v == -1 && p->m_n5a0 != -1)
	{
		r->sub_1017e6f0(0);
		p->m_n5a0 = v;
		return;
	}
	if (p->m_n5a0 != v)
		r->sub_1017e6f0(v);
	p->m_n5a0 = v;
}
// END FUNCTION

// FUNCTION: 0x10210bc0 size=0x9
void __cdecl sub_101cd9e0(int a);
void sub_10210bc0()
{
    sub_101cd9e0(1);
}
// END FUNCTION

// FUNCTION: 0x10210be0 size=0x43
#include "platform.h"
#include "CTriggerDisciplineContext.h"
void *sub_100aa720(int size);
extern char g_105ae7dc[];

// TARGET: trigger_discipline_context
DLL_EXPORT CBaseEntity *trigger_discipline_context()
{
	void *mem = sub_100aa720(0x59c);
	CTriggerDisciplineContext *p;
	if (mem)
		p = ((CTriggerDisciplineContext *)mem)->sub_10210ce0();
	else
		p = 0;
	p->vfunc106(g_105ae7dc);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10210c50 size=0x6
#include "datamap.h"
#include "CTriggerDisciplineContext.h"
namespace lifted {
extern char g_105ab72c;
}
datamap_t * CTriggerDisciplineContext::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105ab72c);
}
// END FUNCTION

// FUNCTION: 0x10210c70 size=0x5
int sub_10210cb0(void);
int g_1074f134 = ((int (*)(int))sub_10210cb0)(0);
// END FUNCTION

// FUNCTION: 0x10210cb0 size=0x1a
namespace lifted {
extern int g_105ab72c;
extern int g_105ab730;
extern char g_105ab774;
}
int sub_10210cb0()
{
    lifted::g_105ab730 = 1;
    lifted::g_105ab72c = (int)&lifted::g_105ab774;
    return (int)&lifted::g_105ab72c;
}
// END FUNCTION

// FUNCTION: 0x10210ce0 size=0x3c
#include "CTriggerDisciplineContext.h"
// TARGET: CTriggerDisciplineContext::CTriggerDisciplineContext
CTriggerDisciplineContext::CTriggerDisciplineContext()
{
	m_nDiscipline598 = 0;
}
// END FUNCTION

// FUNCTION: 0x10210d30 size=0x4c
#include "CTriggerDisciplineContext.h"
void __fastcall sub_100cd2d0(void *p);
void __fastcall sub_1009df20(void *p);
void sub_100aa7b0(void *p);
// TARGET: CTriggerDisciplineContext::vfunc5
CBaseEntity *CTriggerDisciplineContext::vfunc5(unsigned int flags)
{
	sub_100cd2d0((char *)this + 0x580);
	sub_100cd2d0((char *)this + 0x568);
	sub_100cd2d0((char *)this + 0x4bc);
	sub_100cd2d0((char *)this + 0x4a4);
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity *)(this);
}
// END FUNCTION

// FUNCTION: 0x10210da0 size=0x10
#include "CTriggerDisciplineContext.h"

// TARGET: CTriggerDisciplineContext::vfunc103
void CTriggerDisciplineContext::vfunc103()
{
	CBaseEntity::vfunc103();
	sub_101c5080();
}
// END FUNCTION

// FUNCTION: 0x10210dc0 size=0x4c
#include "CTriggerDisciplineContext.h"
struct CDisciplineChar { char pad[0xeac]; unsigned int m_nDisciplineFlags; };
void CTriggerDisciplineContext::vfunc174(CBaseEntity *pEnt)
{
    if (!m_bDisabled55c && m_nDiscipline598 >= 0 && pEnt) {
        CDisciplineChar *pChar = (CDisciplineChar *)pEnt->m_p9c;
        if (pChar)
            pChar->m_nDisciplineFlags |= 1 << m_nDiscipline598;
    }
    sub_101c5590(pEnt);
}
// END FUNCTION

// FUNCTION: 0x10210e30 size=0x3
#include "CTriggerDisciplineContext.h"

void CTriggerDisciplineContext::vfunc175(CBaseEntity *pOther)
{
}
// END FUNCTION

// FUNCTION: 0x10210e50 size=0x44
#include "CTriggerDisciplineContext.h"
struct SDiscView598 { char pad[0x598]; int m598; };
struct SDiscChar { char pad[0xeac]; unsigned int m_flagsEac; };
void CTriggerDisciplineContext::vfunc176(CBaseEntity *pEnt)
{
	int bit = ((SDiscView598 *)this)->m598;
	if (bit >= 0 && pEnt) {
		SDiscChar *p = (SDiscChar *)pEnt->m_p9c;
		if (p)
			p->m_flagsEac &= ~(1 << bit);
	}
	sub_101c55d0(pEnt);
}
// END FUNCTION

// FUNCTION: 0x10210ec0 size=0x85
#include "platform.h"
#include "CBaseEntity.h"

extern void *vt_1047d08c[];
extern void *vt_104883bc[];
extern char g_105ae854[];
void *sub_100aa720(int size);

struct COutputCtor {
	char m_data[0x18];
	void sub_100cd2a0();
};

struct CTriggerBombSiteView : CBaseEntity {
	void sub_101c0e20();
	char m_padView[0x564 - 0x3e0];
	int m_h564;
	COutputCtor m_out568;
	COutputCtor m_out580;
	char m_pad598[0x5a0 - 0x598];
	COutputCtor m_out5a0;
	COutputCtor m_out5b8;
};

DLL_EXPORT CBaseEntity *trigger_bomb_site()
{
	CTriggerBombSiteView *p = (CTriggerBombSiteView *)sub_100aa720(0x5d0);
	CBaseEntity *e;
	if (p) {
		p->sub_101c0e20();
		p->m_h564 = -1;
		p->m_out568.sub_100cd2a0();
		p->m_out580.sub_100cd2a0();
		*(void ***)p = vt_1047d08c;
		p->m_out5a0.sub_100cd2a0();
		p->m_out5b8.sub_100cd2a0();
		*(void ***)p = vt_104883bc;
		e = p;
	} else
		e = 0;
	e->vfunc106(g_105ae854);
	return e;
}
// END FUNCTION

// FUNCTION: 0x10210f80 size=0x6
#include "datamap.h"
#include "CTriggerBombSite.h"
namespace lifted {
extern char g_105ab7a0;
}
datamap_t *CTriggerBombSite::vfunc82()
{
    return (datamap_t *)&lifted::g_105ab7a0;
}
// END FUNCTION

// FUNCTION: 0x10210fa0 size=0x5
int * sub_10210fe0(void);
int * g_1074f0b8 = ((int * (*)(int))sub_10210fe0)(0);
// END FUNCTION

// FUNCTION: 0x10210fe0 size=0xb0
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
extern int g_105ab7a0[2];

int *sub_10210fe0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 10, "m_OnBombPlaced", {0x5a0, 0}, 1, 0x16, "OnBombPlaced", g_1055dc70 },
        { 10, "m_OnBombDefused", {0x5b8, 0}, 1, 0x16, "OnBombDefused", g_1055dc70 },
    };
    g_105ab7a0[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_105ab7a0[0] = (int)&dataDesc[1];
    return g_105ab7a0;
}
// END FUNCTION

// FUNCTION: 0x102110c0 size=0x10
#include "CTriggerBombSite.h"

void __fastcall sub_1000350d(void *pThis);
void __fastcall sub_101c5080(void *pThis);

// TARGET: CTriggerBombSite::vfunc103
void CTriggerBombSite::vfunc103()
{
	sub_1000350d(this);
	sub_101c5080(this);
}
// END FUNCTION

// FUNCTION: 0x102110e0 size=0x52
#include "CCameraTrack.h"
#include "CTriggerBombSite.h"

struct CTriggerView { bool sub_101c5460(void *pOther); };
struct CHandleView { virtual void vfunc0(); virtual unsigned int *GetRefEHandle(); };

void CTriggerBombSite::vfunc174(void *pOther)
{
	if (((CTriggerView *)this)->sub_101c5460(pOther))
		((CCameraTrackMember *)((char *)this + 0x568))->sub_10010794((CCameraTrack *)pOther, (CCameraTrack *)this, 0);
	char *pPlayer = *(char **)((char *)pOther + 0xa8);
	if (pPlayer) {
		if (this)
			*(unsigned int *)(pPlayer + 0x1cb8) = *((CHandleView *)this)->GetRefEHandle();
		else
			*(unsigned int *)(pPlayer + 0x1cb8) = 0xffffffff;
	}
}
// END FUNCTION

// FUNCTION: 0x10211160 size=0x6c
#include "CTriggerBombSite.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList *g_10566458;
struct CTouchList568 {
    void sub_10010794(void *pOther, void *pBombSite, int a);
};
struct CBombSitePlayer {
    char m_pad[0x1cb8];
    unsigned int m_hBombSite;
};
struct CTriggerBombSiteUnit : CTriggerBombSite {
    char sub_10007d15(void *pOther);
};

void CTriggerBombSite::vfunc176(void *pOther)
{
    if (((CTriggerBombSiteUnit *)this)->sub_10007d15(pOther))
        ((CTouchList568 *)((char *)this + 0x568))->sub_10010794(pOther, this, 0);
    CBombSitePlayer *pPlayer = *(CBombSitePlayer **)((char *)pOther + 0xa8);
    if (pPlayer) {
        unsigned int h = pPlayer->m_hBombSite;
        CGlobalEntityList_Ent *pEnt;
        if (h == 0xffffffff)
            pEnt = 0;
        else {
            CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
            pEnt = pSlot->m_Serial == (int)(h >> 13) ? pSlot->m_pEntity : 0;
        }
        if ((void *)pEnt == (void *)this)
            pPlayer->m_hBombSite = 0xffffffff;
    }
}
// END FUNCTION

// FUNCTION: 0x102111f0 size=0x6
#include "CTriggerBombSite.h"
int CTriggerBombSite::vfunc33()
{
    return 0x12f;
}
// END FUNCTION

// FUNCTION: 0x10211210 size=0x50
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CTriggerBombSite.h"
int CTriggerBombSite::vfunc35(CBasePlayer *pPlayer)
{
	EHANDLE &h = *(EHANDLE *)((char *)pPlayer + 0x1cb8);
	return (h.Get() == (CBaseEntity *)this) ? 0x11 : 0;
}
// END FUNCTION

// FUNCTION: 0x10211280 size=0xd1
#include "CTriggerBombSite.h"

struct HandleEntry { void *ent; unsigned int serial; int pad; };
struct HandleList { int pad; HandleEntry e[1]; };
extern HandleList *g_10566458;

struct EntHandle
{
	unsigned int m_Index;
	void *Get() const
	{
		if (m_Index != 0xffffffff) {
			HandleEntry *e = &g_10566458->e[m_Index & 0x1fff];
			if (e->serial == (m_Index >> 13))
				return e->ent;
		}
		return 0;
	}
};

struct BombSitePlayer
{
	char m_pad0000[0x1cb8];
	EntHandle m_hSite;	// 0x1cb8
};

struct BombSiteOther
{
	char m_pad0000[0xa8];
	BombSitePlayer *m_pPlayer;	// 0xa8
};

bool CTriggerBombSite::vfunc32(void *pOther)
{
	if (m_bDisabled)
		return false;
	BombSitePlayer *pPlayer = ((BombSiteOther *)pOther)->m_pPlayer;
	if (!pPlayer)
		return false;
	if (pPlayer->m_hSite.Get() != this)
		return false;
	if (((EntHandle *)&m_hOwner008c)->Get() != 0) {
		if (pPlayer != ((EntHandle *)&m_hOwner008c)->Get())
			return false;
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x102113a0 size=0x3
#include "CTriggerBombSite.h"
int CTriggerBombSite::vfunc36()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102113c0 size=0x31
// TARGET: CTriggerBombSite::vfunc39
#include "CTriggerBombSite.h"
#include "CBaseEntity.h"
#include "CAI_BaseNPCTroika.h"

void __fastcall sub_1015ef40(CBaseEntity *pThis);

void CTriggerBombSite::vfunc39(CBaseEntity *pOther)
{
    ((CBaseEntity *)this)->CBaseEntity::vfunc39(pOther);
    *(int *)((char *)this + 0x598) = *(int *)&gpGlobals->curtime;
    sub_1015ef40(pOther);
    ((CAI_BaseNPCTroika *)pOther)->sub_10181580(1);
}
// END FUNCTION

// FUNCTION: 0x10211410 size=0x46
#include "CTriggerBombSite.h"
#include "CBasePlayer.h"
typedef void (CTriggerBombSite::*PFN_Update)(CBasePlayer *pPlayer, CBombState newState);

void CTriggerBombSite::vfunc42(CBasePlayer *pPlayer)
{
	pPlayer->sub_1015ef60();
	pPlayer->sub_101815b0(1);
	sub_100a5030(pPlayer);
	CBombState state;
	state.m_c = 0x22;
	if (m_nProgress >= 100)
		state.m_c = 0x62;
	PFN_Update pfn = (PFN_Update)&CTriggerBombSite::sub_10211550;
	(this->*pfn)(pPlayer, state);
}
// END FUNCTION

// FUNCTION: 0x10211480 size=0x95
#include "CTriggerBombSite.h"

void CTriggerBombSite::vfunc41(CBombState state)
{
	float flProgress = (gpGlobals->curtime - m_flStartTime) * 0.16666667f;
	flProgress = flProgress * 100.0f;
	if (flProgress > 100.0f)
		flProgress = 100.0f;
	else if (flProgress < 0.0f)
		flProgress = 0.0f;
	m_nProgress = (unsigned char)flProgress;
	CBombState c;
	if (m_nProgress >= 100) {
		c.m_c = 0x62;
		sub_102116c0(state);
	} else {
		c.m_c = 0x21;
	}
	sub_10211550(state, c);
}
// END FUNCTION

// FUNCTION: 0x10211550 size=0x115
#include "CTriggerBombSite.h"
#include "CRecipientFilter.h"
#include "CPASAttenuationFilter.h"

extern int g_1072607c;
extern char vt_104540e8[];
extern char vt_10454688[];

struct S_ReliableFilter
{
	void *m_vptr;
	int m_pad04;
	CRecipientVec m_Vec;
	int m_n1c;
	char m_pad20[8];
	char m_b28;
};

void CTriggerBombSite::sub_10211550(CBombState state, CBombState newState)
{
	S_ReliableFilter filter;
	((CRecipientFilter *)&filter)->sub_1019ce00();
	filter.m_vptr = vt_104540e8;
	((CRecipientFilter *)&filter)->sub_1019d040(*(void **)&state);
	filter.m_vptr = vt_10454688;
	((CRecipientFilter *)&filter)->sub_1019cf50();
	engine->vfunc65((CRecipientFilter *)&filter, g_1072607c);
	engine->vfunc67((unsigned char)newState.m_c);
	engine->vfunc67(m_nProgress);
	engine->vfunc67(0);
	engine->vfunc67(0);
	engine->vfunc66();
}
// END FUNCTION

// FUNCTION: 0x102116c0 size=0x145
#include "CBaseEntity.h"
#include "CTriggerBombSite.h"
#include "CEntityVSlots.h"
#include "CAI_BaseNPC.h"

struct CBombSitePlayerObj
{
	char pad0000[0x1cb8];
	unsigned int m_hBombSite;
};

struct CBombSitePlayerView
{
	char pad0000[0xa8];
	CBombSitePlayerObj *m_pObj;
};

struct CBombSiteSub5a0
{
	void sub_100cd660(CBombSitePlayerView *pPlayer, CTriggerBombSite *pSite, int a);
};

struct CTriggerBombSiteUnit : CTriggerBombSite
{
	void sub_101c4dd0();
};

struct CItemAstroUnit : CAI_BaseNPC
{
	void sub_103f6800(CBombSitePlayerView *pPlayer);
};

extern Vector g_1070d9d0;
extern char g_10538764[];
extern char g_105ae890[];
extern "C" void *__cdecl __RTDynamicCast(void *, long, void *, void *, int);
void sub_1021fee0(CBombSitePlayerObj *pObj, const char *pszName);
CBaseEntity *sub_100a99d0(const char *pszClassname, const float *pOrigin, const float *pAngles, CBaseEntity *pOwner);

void CTriggerBombSite::sub_102116c0(CBombState state)
{
	CEntityVSlots *pPlayer = *(CEntityVSlots **)&state;
	((CTriggerBombSiteUnit *)this)->sub_101c4dd0();
	m_hOwner008c = 0xffffffff;
	CBombSitePlayerObj *pObj = ((CBombSitePlayerView *)pPlayer)->m_pObj;
	if (pObj)
	{
		pObj->m_hBombSite = 0xffffffff;
		sub_1021fee0(pObj, "item_g_astrolite");
	}
	Vector vecTemp;
	const Vector *pHalf = pPlayer->slot368(&vecTemp);
	Vector vecScaled;
	vecScaled.x = pHalf->x * 20.0f;
	vecScaled.y = pHalf->y * 20.0f;
	vecScaled.z = pHalf->z * 20.0f;
	Vector vecPos = vecScaled + *pPlayer->slot220();
	Vector vecAng = g_1070d9d0;
	vecAng.y = pPlayer->slot221()->y + 180.0f;
	CBaseEntity *pItem = sub_100a99d0("item_g_astrolite", &vecPos.x, &vecAng.x, 0);
	if (pItem)
	{
		CAI_BaseNPC *pAstro = (CAI_BaseNPC *)__RTDynamicCast(pItem, 0, g_10538764, g_105ae890, 0);
		if (pAstro)
		{
			pAstro->sub_103f6ab0((CBaseEntity *)this);
			((CItemAstroUnit *)pAstro)->sub_103f6800((CBombSitePlayerView *)pPlayer);
		}
	}
	((CBombSiteSub5a0 *)((char *)this + 0x5a0))->sub_100cd660((CBombSitePlayerView *)pPlayer, this, 0);
}
// END FUNCTION

// FUNCTION: 0x10211870 size=0x16
namespace lifted {
struct C10010794 { int sub_10010794(int, int, int); };
}
struct CUnknown10211870 { int sub_10211870(int, int); };
int CUnknown10211870::sub_10211870(int a0, int a1)
{
    return ((lifted::C10010794 *)(this + 0x5b8))->sub_10010794(a1, (int)this, 0);
}
// END FUNCTION

// FUNCTION: 0x102118a0 size=0x43
#include "platform.h"
#include "CPropSign.h"
#include "CBaseEntity.h"
void *sub_100aa720(int size);
extern char g_105ae8c8[];

// TARGET: prop_sign
DLL_EXPORT CBaseEntity *prop_sign()
{
	void *mem = sub_100aa720(0x770);
	CPropSign *p;
	if (mem)
		p = ((CPropSign *)mem)->sub_10211a50();
	else
		p = 0;
	((CBaseEntity *)p)->vfunc106(g_105ae8c8);
	return (CBaseEntity *)p;
}
// END FUNCTION

// FUNCTION: 0x10211910 size=0x6
#include "CPropSign.h"
#include "datamap.h"
namespace lifted {
extern char g_105ab83c;
}
datamap_t *CPropSign::vfunc82()
{
    return (datamap_t *)&lifted::g_105ab83c;
}
// END FUNCTION

// FUNCTION: 0x10211930 size=0x5
int * sub_10211970(void);
int * g_1074f110 = ((int * (*)(int))sub_10211970)(0);
// END FUNCTION

// FUNCTION: 0x10211970 size=0xb0
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
extern int g_105ab83c[2];
void sub_1000d710();

int *sub_10211970()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 4, "m_UseIcon", {0x768, 0}, 1, 6, "use_icon" },
        { 5, "m_bPause", {0x76c, 0}, 1, 6, "pause" },
        { 2, "m_sDefFile", {0x730, 0}, 1, 6, "definition_file" },
        { 2, "InputChangeFile", {0, 0}, 1, 8, "ChangeFile", 0, (void *)sub_1000d710 },
        { 10, "m_OnSignReadBegin", {0x734, 0}, 1, 0x16, "OnReadBegin", g_1055dc70 },
        { 10, "m_OnSignReadEnd", {0x74c, 0}, 1, 0x16, "OnReadEnd", g_1055dc70 },
    };
    g_105ab83c[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_105ab83c[0] = (int)&dataDesc[1];
    return g_105ab83c;
}
// END FUNCTION

// FUNCTION: 0x10211a50 size=0x46
extern int vt_1047332c;
extern int vt_1048887c;
void __fastcall sub_1008b230(void *pThis);
void __fastcall sub_100cd2a0(void *pThis);
// TARGET: sub_10211a50
int *__fastcall sub_10211a50(int *pThis)
{
	sub_1008b230(pThis);
	pThis[0] = (int)&vt_1047332c;
	sub_100cd2a0((char *)pThis + 0x734);
	sub_100cd2a0((char *)pThis + 0x74c);
	pThis[0] = (int)&vt_1048887c;
	pThis[0x1d9] = 0;
	*((char *)pThis + 0x76c) = 0;
	pThis[0x1da] = 0x12;
	return pThis;
}
// END FUNCTION

// FUNCTION: 0x10211ac0 size=0x1e
#include "CPropSign.h"

void sub_100aa7b0(void *p);

// TARGET: CPropSign::vfunc5
CPropSign *CPropSign::vfunc5(unsigned int flags)
{
	sub_10001a0a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10211af0 size=0x36
#include "CPropSign.h"
#include "CBaseAnimating.h"
extern char g_1048887c;
void CPropSign::sub_10211af0()
{
	*(void **)this = &g_1048887c;
	operator delete(*(void **)((char *)this + 0x764));
	((COutputEvent *)((char *)this + 0x74c))->sub_100cd2d0();
	m_Output734.sub_100cd2d0();
	((CBaseAnimating *)this)->sub_1008b3c0();
}
// END FUNCTION

// FUNCTION: 0x10211b40 size=0xd2
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPropSign.h"
#include "ScopeTrace.h"

#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
struct CPropSignSlotsX {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8)
	SV(90) SV(91) SV(92)
	virtual void s93(int moveType, int moveCollide);
};

void CPropSign::vfunc103()
{
	sub_1018df70();
	char *pStudioHdr = (char *)sub_100952d0(-1);
	if (pStudioHdr) {
		((CPropSignSlotsX *)this)->s93(0, 0);
		{
			ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
			m_Collision.sub_100dc480(3);
		}
		sub_100adf10((float *)(pStudioHdr + 0xb4), (float *)(pStudioHdr + 0xc0));
		sub_100aaa40(1);
		m_Collision.sub_100ddd90();
		sub_100b3b00();
	}
}
// END FUNCTION

// FUNCTION: 0x10211c60 size=0x7f
#include "CPropSign.h"
struct Sub { void *pEnt; unsigned int serial; };
struct EntInfo { int pad; Sub s; };
extern EntInfo *g_10566458;
static inline void *HGet(const CPropSignHandle *h)
{
    if (h->m_Index != 0xffffffff) {
        Sub *e = &g_10566458[h->m_Index & 0x1fff].s;
        if (e->serial == (h->m_Index >> 13))
            return e->pEnt;
    }
    return 0;
}
bool CPropSign::vfunc32(void *pEntity)
{
    if (pEntity == HGet(&m_hAttached))
        return true;
    return HGet(&m_hAttached) == 0;
}
// END FUNCTION

// FUNCTION: 0x10211d00 size=0x6
#include "CPropSign.h"
int CPropSign::vfunc33()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10211d20 size=0x9
#include "CPropSign.h"
int CPropSign::vfunc35(int a) { return m_field768; }
// END FUNCTION

// FUNCTION: 0x10211d40 size=0x16
#include "CPropSign.h"

bool CPropSign::vfunc34(int a)
{
	return vfunc35(a) != 0;
}
// END FUNCTION

// FUNCTION: 0x10211d70 size=0x2d
#include "CUnknown10147d10.h"
#include "CUnknown10211d70.h"
#include "string_t.h"

struct CVariantView10211d70
{
	char pad0[8];
	string_t iszVal;	// 0x08
	char pad1[0xc];
	int fieldType;		// 0x18
	string_t StringID() const { return (fieldType == 2) ? iszVal : string_t(0); }
};

struct CUnknownView10211d70
{
	char pad0[0x730];
	string_t m_isz;
};

void CUnknown10211d70::sub_10211d70(CInputData10147d10 *data)
{
	string_t s; s = ((CVariantView10211d70 *)data)->StringID();
	((CUnknownView10211d70 *)this)->m_isz = s;
}
// END FUNCTION

// FUNCTION: 0x10211db0 size=0x3a
#include "CPropSign.h"
#include "CBasePlayer.h"

void CPropSign::vfunc39(CBasePlayer *pPlayer)
{
	sub_100a4fe0(pPlayer);
	m_Output734.sub_100cd660(pPlayer, this, 0);
	sub_10211f10((CBaseEntity *)pPlayer);
	pPlayer->sub_1015ef40();
	pPlayer->sub_10181580(1);
}
// END FUNCTION

// FUNCTION: 0x10211e00 size=0x50
#include "CPropSign.h"
#include "CBasePlayer.h"
struct CBasePlayerView208c { char pad[0x208c]; int m_n208c; };

void CPropSign::vfunc41(CBasePlayer *pPlayer)
{
	if (((CBasePlayerView208c *)pPlayer)->m_n208c) {
		pPlayer->sub_10167fd0();
		return;
	}
	pPlayer->sub_10178590(((CBasePlayer *)this)->vfunc192());
}
// END FUNCTION

// FUNCTION: 0x10211e70 size=0x72
#include "CPropSign.h"
#include "CBasePlayer.h"
#include "CEntityVSlots.h"

// TARGET: CPropSign::vfunc42
void CPropSign::vfunc42(CBasePlayer *pPlayer)
{
	sub_100a5030(pPlayer);
	m_Users74c.sub_100cd660(pPlayer, this, 0);
	sub_102120c0((CBaseEntity *)pPlayer);
	pPlayer->sub_10178590(((CEntityVSlots *)this)->slot192());
	pPlayer->sub_1015ef40();
	pPlayer->sub_1015ef60();
	pPlayer->sub_101815b0(1);
}
// END FUNCTION

// FUNCTION: 0x10211f10 size=0x14c
#include "CPropSign.h"
#include "CSingleUserRecipientFilter.h"
#include "engineserver.h"

extern int g_10726088;
inline int ENTINDEX(int pEdict) { return engine->vfunc35(pEdict); }
extern char g_106b8540[];

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

// TARGET: CPropSign::sub_10211f10
void CPropSign::sub_10211f10(CBaseEntity *pPlayer)
{
	if (!pPlayer) return;
	sub_10212200();
	CSingleUserRecipientFilter filter(pPlayer);
	filter.MakeReliable();
	engine->vfunc65(&filter, g_10726088);
	engine->vfunc67(1);
	engine->vfunc72(0.5);
	engine->vfunc71(ENTINDEX(m_edict2e0));
	engine->vfunc67(m_bPause);
	if (!m_Users74c.m_pText764)
		engine->vfunc78(STRINGR(m_psz730));
	else
		engine->vfunc78(m_Users74c.m_pText764);
	engine->vfunc66();
}
// END FUNCTION

// FUNCTION: 0x102120c0 size=0xf7
#include "CPropSign.h"
#include "CSingleUserRecipientFilter.h"
extern int g_10726088;

// TARGET: CPropSign::sub_102120c0
void CPropSign::sub_102120c0(CBaseEntity *pPlayer)
{
    if (pPlayer != 0) {
        CSingleUserRecipientFilter filter(pPlayer);
        filter.MakeReliable();
        engine->vfunc65(&filter, g_10726088);
        engine->vfunc67(0);
        engine->vfunc72(0.5f);
        int edict = *(int *)((char *)this + 0x2e0);
        engine->vfunc71(engine->vfunc35(edict));
        engine->vfunc66();
    }
}
// END FUNCTION

// FUNCTION: 0x10212200 size=0x1b7
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPropSign.h"
#include "CUnknown10248a50.h"
#include "CKeyValuesX.h"
#include "ScopeTrace.h"
#include <string.h>

extern IFileSys *g_1070b238;
int sub_101d2850(const char *pszName, int flags);
__declspec(dllimport) char *Q_strncpy(char *pDest, const char *pSrc, int nMaxLen);

// TARGET: CPropSign::sub_10212200
bool CPropSign::sub_10212200()
{
	ScopeTrace trace("CPropSign::LoadSignData", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);

	delete m_Users74c.m_pText764;
	m_Users74c.m_pText764 = 0;

	CUnknown10248a50 *pKV = new CUnknown10248a50("SignData");
	if (pKV) {
		const char *pszPath = m_psz730 ? m_psz730 : g_106b8540;
		IFileSys *pFileSys = g_1070b238;
		if (!pKV->sub_102480f0(pszPath, pFileSys, 0, 1)) {
			pKV->sub_100046f1();
			::operator delete(pKV);
			return false;
		}
		CKeyValuesX *pKey = (CKeyValuesX *)pKV->sub_10248a10();
		if (!pKey) {
			pKV->sub_100046f1();
			::operator delete(pKV);
			return false;
		}
		for (; pKey; pKey = pKey->sub_1000fa65()) {
			const char *pszName = pKey->sub_102480b0();
			if (!_strcmpi(pszName, "Sign")) {
				const char *pszDep = pKey->sub_10248cd0("dependency", 0);
				const char *pszFile = pKey->sub_10248cd0("filename", 0);
				if (pszDep && pszFile && sub_101d2850(pszDep, 0x102)) {
					int nLen = strlen(pszFile) + 1;
					m_Users74c.m_pText764 = new char[nLen];
					Q_strncpy(m_Users74c.m_pText764, pszFile, nLen);
					break;
				}
			}
		}
		pKV->sub_100046f1();
		::operator delete(pKV);
		return m_Users74c.m_pText764 == 0;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10212430 size=0x43
#include "platform.h"
#include "CGameSign.h"
void *sub_100aa720(int size);
extern char g_105ae950[];

// TARGET: game_sign
DLL_EXPORT CBaseEntity *game_sign()
{
	void *mem = sub_100aa720(0x474);
	CGameSign *p;
	if (mem)
		p = ((CGameSign *)mem)->sub_10212530();
	else
		p = 0;
	p->vfunc106(g_105ae950);
	return p;
}
// END FUNCTION

// FUNCTION: 0x102124a0 size=0x6
#include "CGameSign.h"
namespace lifted {
extern char g_105ab98c;
}
datamap_t * CGameSign::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105ab98c);
}
// END FUNCTION

// FUNCTION: 0x102124c0 size=0x5
int sub_10212500(void);
int g_1074f118 = ((int (*)(int))sub_10212500)(0);
// END FUNCTION

// FUNCTION: 0x10212500 size=0x1a
namespace lifted {
extern int g_105ab98c;
extern int g_105ab990;
extern char g_105ab9d4;
}
int sub_10212500()
{
    lifted::g_105ab990 = 7;
    lifted::g_105ab98c = (int)&lifted::g_105ab9d4;
    return (int)&lifted::g_105ab98c;
}
// END FUNCTION

// FUNCTION: 0x10212530 size=0x63
#include "CGameSign.h"
extern Vector g_1070d1b0;
// TARGET: CGameSign::CGameSign
CGameSign::CGameSign()
{
    m_f458 = 0.5f;
    m_f45c = 0.5f;
    m_pszFile450 = 0;
    m_vecToucherPos = g_1070d1b0;
    m_pszFile450 = 0;
    m_b470 = 1;
}
// END FUNCTION

// FUNCTION: 0x102125c0 size=0x5
#include "CGameSign.h"
bool CGameSign::vfunc32(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x102125e0 size=0x7
#include "CGameSign.h"
namespace lifted {
extern float g_1044e674;
}
float CGameSign::vfunc37()
{
    return lifted::g_1044e674;
}
// END FUNCTION

// FUNCTION: 0x10212600 size=0x5
#include "CGameSign.h"
bool CGameSign::vfunc44(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10212620 size=0x1e
#include "CGameSign.h"

void sub_100aa7b0(void *p);

// TARGET: CGameSign::vfunc5
CBaseEntity *CGameSign::vfunc5(unsigned int flags)
{
	sub_1000726b();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10212650 size=0x20
#include "CGameSign.h"

extern char g_10488d7c[];
void __fastcall sub_1009df20(CGameSign *self);

// TARGET: CGameSign::sub_10212650
void CGameSign::sub_10212650()
{
	*(void **)this = g_10488d7c;
	operator delete(m_pszFile450);
	sub_1009df20(this);
}
// END FUNCTION

// FUNCTION: 0x10212680 size=0x2d
#include "CUnknown10147d10.h"
#include "CUnknown10212680.h"
#include "string_t.h"

struct CVariantView10212680
{
	char pad0[8];
	string_t iszVal;	// 0x08
	char pad1[0xc];
	int fieldType;		// 0x18
	string_t StringID() const { return (fieldType == 2) ? iszVal : string_t(0); }
};

struct CUnknownView10212680
{
	char pad0[0x454];
	string_t m_isz;
};

void CUnknown10212680::sub_10212680(CInputData10147d10 *data)
{
	string_t s; s = ((CVariantView10212680 *)data)->StringID();
	((CUnknownView10212680 *)this)->m_isz = s;
}
// END FUNCTION

// FUNCTION: 0x102126c0 size=0x95
#include "CUnknown102126c0.h"
#include "inputdata_t.h"

struct CPlayerObjView
{
	char m_pad0000[0x1040];
	EHANDLE m_hTarget;	// 0x1040
	void sub_10167fd0();	// stub 0x10014a6a
	void sub_10167d70(void *pOwner);	// stub 0x1000ef3e
};

struct CActivatorView
{
	char m_pad0000[0xa8];
	CPlayerObjView *m_pPlayerObj;
};

CPlayerObjView *__cdecl sub_101cda50();

void CUnknown102126c0::sub_102126c0(inputdata_t *pInput)
{
	CActivatorView *pActivator = (CActivatorView *)pInput->pActivator;
	CPlayerObjView *pPlayer = pActivator ? pActivator->m_pPlayerObj : 0;
	if (!pPlayer)
		pPlayer = sub_101cda50();
	if (pPlayer)
	{
		if (pPlayer->m_hTarget.Get())
			pPlayer->sub_10167fd0();
	}
	if (pPlayer && !pPlayer->m_hTarget.Get())
		pPlayer->sub_10167d70(this);
}
// END FUNCTION

// FUNCTION: 0x10212790 size=0x5f
#include "CBaseEntity.h"
#include "CUnknown102126c0.h"
#include "inputdata_t.h"
struct CPlayerObjView
{
	char m_pad0000[0x1040];
	EHANDLE m_hTarget;	// 0x1040
	void sub_10167fd0();	// stub 0x10014a6a
};
struct CActivatorView
{
	char m_pad0000[0xa8];
	CPlayerObjView *m_pPlayerObj;
};
CPlayerObjView *__cdecl sub_101cda50();
void CUnknown102126c0::sub_10212790(inputdata_t *pInput)
{
	CActivatorView *pActivator = (CActivatorView *)pInput->pActivator;
	CPlayerObjView *pPlayer = pActivator ? pActivator->m_pPlayerObj : 0;
	if (!pPlayer) {
		pPlayer = sub_101cda50();
		if (!pPlayer)
			return;
	}
	if (pPlayer->m_hTarget.Get() == (CBaseEntity *)this)
		pPlayer->sub_10167fd0();
}
// END FUNCTION

// FUNCTION: 0x10212810 size=0x1ab
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CGameSign.h"
#include "CSingleUserRecipientFilter.h"
#include "CEHandleGet.h"
#include "engineserver.h"
#include "TestBit.h"
#include "globalvars.h"
extern char g_106b8540[];

extern int g_10726088;

struct StrArg { const char *p; };
struct CGameSignView
{
	char m_pad0000[0x2e0];
	int m_pEdict;
	char m_pad2e4[0x450 - 0x2e4];
	StrArg m_s450;
	StrArg m_s454;
	float m_fl458;
	char m_pad45c[4];
	float m_flTime460;
	char m_pad464[0x470 - 0x464];
	unsigned char m_b470;

	int GetEdict() { return m_pEdict; }
	unsigned char GetFlag() { return m_b470; }
};
static StrArg s_empty;
#define V10(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3(); virtual void a##4(); virtual void a##5(); virtual void a##6(); virtual void a##7(); virtual void a##8(); virtual void a##9();
struct EngView
{
	V10(s0) V10(s1) V10(s2) V10(s3) V10(s4) V10(s5) V10(s6)
	virtual void s70(); virtual void s71(); virtual void s72(); virtual void s73(); virtual void s74(); virtual void s75(); virtual void s76(); virtual void s77();
	virtual void WriteString(StrArg s);
};
static inline StrArg MakeStr(const char *p) { StrArg s; s.p = p; return s; }

inline void WRITE_STRING(const char *sz) { engine->vfunc78(sz); }
inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }
inline const char *StrL(const char *s) { const char *r; if (s) r = s; else r = g_106b8540; return r; }
inline const char *StrR(const char *const &s) { if (s) return s; return g_106b8540; }
struct StrC { const char *p; StrC(const char *q) { p = q; } };
struct EngView2
{
	V10(s0) V10(s1) V10(s2) V10(s3) V10(s4) V10(s5) V10(s6)
	virtual void s70(); virtual void s71(); virtual void s72(); virtual void s73(); virtual void s74(); virtual void s75(); virtual void s76(); virtual void s77();
	virtual void WriteString(StrC s);
};

void CGameSign::sub_10212810(CBaseEntity *pOther)
{
	CGameSignView *pView = (CGameSignView *)this;
	if (!pOther)
		return;
	if (EHandle_Get(*(unsigned int *)((char *)pOther + 0x1040)) != (CGlobalEntityList_Ent *)this)
		return;
	pView->m_flTime460 = gpGlobals->curtime;
	if (!TestBit(m_flags204, 1))
	{
		((CBasePlayer *)pOther)->sub_1015ef40();
		((CBasePlayer *)pOther)->sub_10181580(1);
		((CBasePlayer *)pOther)->sub_10181580(8);
	}
	sub_10212da0();
	CSingleUserRecipientFilter filter(pOther);
	filter.MakeReliable();
	engine->vfunc65(&filter, g_10726088);
	engine->vfunc67(1);
	engine->vfunc72(pView->m_fl458);
	engine->vfunc71(engine->vfunc35(pView->GetEdict()));
	engine->vfunc67(pView->GetFlag());
	if (!pView->m_s450.p)
		WRITE_STRING(pView->m_s454.p ? pView->m_s454.p : g_106b8540);
	else
		WRITE_STRING(pView->m_s450.p);
	engine->vfunc66();
}
// END FUNCTION

// FUNCTION: 0x10212a30 size=0x169
template <class T> __forceinline T pcd_stage(T x) { return x; }
#include "CBasePlayer.h"
#include "CGameSign.h"
#include "CSingleUserRecipientFilter.h"
#include "engineserver.h"
#include "TestBit.h"

extern int g_10726088;
void sub_101cd940(CBaseEntity *pEntity);

struct CGameSignView
{
	char m_pad0000[0x45c];
	float m_flValue45c;
};

// TARGET: CGameSign::sub_10212a30
void CGameSign::sub_10212a30(CBasePlayer *pPlayer)
{
	if (!pPlayer)
		return;
	if (((EHANDLE *)((char *)pPlayer + 0x1040))->Get() != (CBaseEntity *)this)
		return;
	if (!TestBit(m_flags204, 1)) {
		pPlayer->sub_1015ef60();
		pPlayer->sub_101815b0(1);
		pPlayer->sub_101815b0(8);
	}
	CSingleUserRecipientFilter filter(pPlayer);
	filter.MakeReliable();
	engine->vfunc65(&filter, g_10726088);
	engine->vfunc67(0);
	engine->vfunc72(((CGameSignView *)this)->m_flValue45c);
	engine->vfunc71(engine->vfunc35(pcd_stage(m_pEdict2e0)));
	engine->vfunc66();
	if (!TestBit(m_flags204, 2))
		sub_101cd940((CBaseEntity *)this);
}
// END FUNCTION

// FUNCTION: 0x10212c00 size=0x74
#include "CGameSign.h"
extern int g_105abb08;
struct CSignPlayerView {
    char m_pad[0x2090];
    unsigned int m_nFlags2090;
    void sub_10178590(Vector vLook);
    void sub_10167fd0();
};

void CGameSign::vfunc41(void *pPlayer)
{
    CSignPlayerView *p = (CSignPlayerView *)pPlayer;
    p->sub_10178590(*(Vector *)((char *)this + 0x464));
    if (m_flags204 & 1) {
        if (gpGlobals->curtime - *(float *)((char *)this + 0x460) > *(float *)((char *)this + 0x458) + 2.0f) {
            if ((p->m_nFlags2090 & g_105abb08) == g_105abb08)
                p->sub_10167fd0();
        }
    }
}
// END FUNCTION

// FUNCTION: 0x10212ca0 size=0x95
#include "CGameSign.h"

#define SV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

// the entity vtable up to slot 368
struct CTouchSlotsView
{
	SV10(a0) SV10(a1) SV10(a2) SV10(a3) SV10(a4) SV10(a5) SV10(a6) SV10(a7) SV10(a8) SV10(a9)
	SV10(b0) SV10(b1) SV10(b2) SV10(b3) SV10(b4) SV10(b5) SV10(b6) SV10(b7) SV10(b8)
	virtual void u190(); virtual void u191(); virtual void u192();
	virtual Vector vfunc193();
	SV10(c0) SV10(c1) SV10(c2) SV10(c3) SV10(c4) SV10(c5) SV10(c6) SV10(c7) SV10(c8) SV10(c9)
	SV10(d0) SV10(d1) SV10(d2) SV10(d3) SV10(d4) SV10(d5) SV10(d6)
	virtual void u364(); virtual void u365(); virtual void u366(); virtual void u367();
	virtual Vector vfunc368();
};

void CGameSign::vfunc39(CBaseEntity *pOther)
{
	sub_10212810(pOther);
	CBaseEntity::vfunc39(pOther);
	m_vecToucherPos = ((CTouchSlotsView *)pOther)->vfunc368() * 2000.0f + ((CTouchSlotsView *)pOther)->vfunc193();
}
// END FUNCTION

// FUNCTION: 0x10212d70 size=0x1b
#include "CBasePlayer.h"
#include "CGameSign.h"

// TARGET: CGameSign::vfunc42
void CGameSign::vfunc42(void *pEntity)
{
	sub_10212a30((CBasePlayer *)pEntity);
	sub_100a5030(pEntity);
}
// END FUNCTION

// FUNCTION: 0x10212da0 size=0x1b7
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CGameSign.h"
#include "CUnknown10248a50.h"
#include "CKeyValuesX.h"
#include "ScopeTrace.h"
#include <string.h>

extern IFileSys *g_1070b238;
int sub_101d2850(const char *pszName, int flags);
__declspec(dllimport) char *Q_strncpy(char *pDest, const char *pSrc, int nMaxLen);

bool CGameSign::sub_10212da0()
{
	ScopeTrace trace("CGameSign::LoadSignData", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);

	delete m_pszFile450;
	m_pszFile450 = 0;

	CUnknown10248a50 *pKV = new CUnknown10248a50("SignData");
	if (pKV) {
		const char *pszPath = m_psz454 ? m_psz454 : g_106b8540;
		IFileSys *pFileSys = g_1070b238;
		if (!pKV->sub_102480f0(pszPath, pFileSys, 0, 1)) {
			pKV->sub_100046f1();
			::operator delete(pKV);
			return false;
		}
		CKeyValuesX *pKey = (CKeyValuesX *)pKV->sub_10248a10();
		if (!pKey) {
			pKV->sub_100046f1();
			::operator delete(pKV);
			return false;
		}
		for (; pKey; pKey = pKey->sub_1000fa65()) {
			const char *pszName = pKey->sub_102480b0();
			if (!_strcmpi(pszName, "Sign")) {
				const char *pszDep = pKey->sub_10248cd0("dependency", 0);
				const char *pszFile = pKey->sub_10248cd0("filename", 0);
				if (pszDep && pszFile && sub_101d2850(pszDep, 0x102)) {
					int nLen = strlen(pszFile) + 1;
					m_pszFile450 = new char[nLen];
					Q_strncpy(m_pszFile450, pszFile, nLen);
					break;
				}
			}
		}
		pKV->sub_100046f1();
		::operator delete(pKV);
		return m_pszFile450 == 0;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10212fd0 size=0x43
#include "platform.h"
#include "CPropHaunted.h"
void *sub_100aa720(int size);
extern char g_105ae994[];

// TARGET: prop_haunted
DLL_EXPORT CBaseEntity *prop_haunted()
{
	void *mem = sub_100aa720(0x81c);
	CPropHaunted *p;
	if (mem)
		p = ((CPropHaunted *)mem)->sub_102139f0();
	else
		p = 0;
	p->vfunc106(g_105ae994);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10213040 size=0x6
#include "datamap.h"
#include "CPropHaunted.h"
namespace lifted {
extern char g_105abb0c;
}
datamap_t * CPropHaunted::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105abb0c);
}
// END FUNCTION

// FUNCTION: 0x10213060 size=0x5
int * sub_102130a0(void);
int * g_1074f0a4 = ((int * (*)(int))sub_102130a0)(0);
// END FUNCTION

// FUNCTION: 0x102130a0 size=0x766
#include "QAngle.h"
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
struct CPropHauntedView {
    char pad[0x7ac];
    QAngle m_angImpulseScale;
};
extern ISaveRestoreOps *g_1055dc70;
extern int g_105abb0c[2];
void sub_1000af5b();
void sub_1000fd12();
void sub_100020b3();
void sub_10007964();
void sub_10012945();
void sub_1000c621();
void sub_10010bd1();

int *sub_102130a0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 1, "m_flDamage", {0x794, 0}, 1, 6, "damage" },
        { 3, "m_vecFlingDest", {0x7a0, 0}, 1, 6, "fling_dest" },
        { 5, "m_bTargetPlayer", {0x79c, 0}, 1, 6, "target_player" },
        { 1, "m_flFlingVelocity", {0x788, 0}, 1, 6, "velocity" },
        { 1, "m_flMinShakeTime", {0x78c, 0}, 1, 6, "min_shake" },
        { 1, "m_flMaxShakeTime", {0x790, 0}, 1, 6, "max_shake" },
        { 1, "m_flStopShakeFadeoutTime", {0x784, 0}, 1, 6, "stop_shake_fadeout" },
        { 1, "m_angImpulseScale[YAW]", {(int)&((CPropHauntedView *)0)->m_angImpulseScale[1], 0}, 1, 6, "spin_yaw_scale", 0, 0 },
        { 1, "m_angImpulseScale[PITCH]", {(int)&((CPropHauntedView *)0)->m_angImpulseScale[0], 0}, 1, 6, "spin_pitch_scale", 0, 0 },
        { 1, "m_angImpulseScale[ROLL]", {(int)&((CPropHauntedView *)0)->m_angImpulseScale[2], 0}, 1, 6, "spin_roll_scale", 0, 0 },
        { 2, "m_sFlingParticle", {0x7bc, 0}, 1, 6, "fling_particle", 0, 0 },
        { 2, "m_sShakeParticle", {0x7c0, 0}, 1, 6, "shake_particle", 0, 0 },
        { 2, "m_sFlingSound", {0x7c4, 0}, 1, 6, "fling_sound", 0, 0 },
        { 2, "m_sBreakSound", {0x7c8, 0}, 1, 6, "break_sound", 0, 0 },
        { 2, "m_sShakeSound", {0x7cc, 0}, 1, 6, "shake_sound", 0, 0 },
        { 15, "m_flFlingTime", {0x77c, 0}, 1, 2, 0, 0, 0 },
        { 15, "m_flStopShakeTime", {0x780, 0}, 1, 2, 0, 0, 0 },
        { 12, "m_hShakeParticle", {0x7d0, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bCanDamage", {0x7b8, 0}, 1, 2, 0, 0, 0 },
        { 0, "InputFlingNow", {0, 0}, 1, 8, "FlingNow", 0, (void *)sub_1000af5b },
        { 0, "InputStopShaking", {0, 0}, 1, 8, "StopShaking", 0, (void *)sub_1000fd12 },
        { 0, "InputStartShaking", {0, 0}, 1, 8, "StartShaking", 0, (void *)sub_100020b3 },
        { 0, "InputShakeAndFling", {0, 0}, 1, 8, "ShakeAndFling", 0, (void *)sub_10007964 },
        { 0, "CPropHauntedFlyingThink", {0, 0}, 1, 0x20, 0, 0, (void *)sub_10012945 },
        { 0, "CPropHauntedHauntedThink", {0, 0}, 1, 0x20, 0, 0, (void *)sub_1000c621 },
        { 0, "CPropHauntedShakeFadeoutThink", {0, 0}, 1, 0x20, 0, 0, (void *)sub_10010bd1 },
        { 10, "m_OnFling", {0x7d4, 0}, 1, 0x16, "OnFling", g_1055dc70 },
        { 10, "m_OnBeginShake", {0x7ec, 0}, 1, 0x16, "OnBeginShake", g_1055dc70 },
        { 10, "m_OnEndShake", {0x804, 0}, 1, 0x16, "OnEndShake", g_1055dc70 },
    };
    g_105abb0c[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_105abb0c[0] = (int)&dataDesc[1];
    return g_105abb0c;
}
// END FUNCTION

// FUNCTION: 0x102139f0 size=0x4e
extern int vt_1048920c;
void __fastcall sub_1018f1c0(void *pThis);
void __fastcall sub_100cd2a0(void *pThis);
// TARGET: sub_102139f0
int *__fastcall sub_102139f0(int *pThis)
{
	sub_1018f1c0(pThis);
	pThis[0x1f4] = -1;
	sub_100cd2a0((char *)pThis + 0x7d4);
	sub_100cd2a0((char *)pThis + 0x7ec);
	sub_100cd2a0((char *)pThis + 0x804);
	pThis[0] = (int)&vt_1048920c;
	pThis[0x1e1] = 0x3f800000;
	*((char *)pThis + 0x7b8) = 0;
	return pThis;
}
// END FUNCTION

// FUNCTION: 0x10213a60 size=0x57
#include "CPropHaunted.h"
#include "COutputEvent.h"

void sub_100aa7b0(void *);

CBaseEntity *CPropHaunted::vfunc5(unsigned int flags)
{
	((COutputEvent *)((char *)this + 0x804))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x7ec))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x7d4))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x748))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x730))->sub_100cd2d0();
	sub_1008b3c0();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10213ae0 size=0x4e
#include "CPropHaunted.h"

struct CPropHauntedPhysObj
{
	virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4();
	virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9();
	virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14();
	virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19();
	virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23();
	virtual void vfunc24(int a);
};

// TARGET: CPropHaunted::vfunc103
void CPropHaunted::vfunc103()
{
	sub_1018f340();
	vfunc225();
	vfunc93(0, 0);
	CPropHauntedPhysObj *pObj = (CPropHauntedPhysObj *)sub_100a5ea0(6, 0, 1, 0);
	if (pObj)
		pObj->vfunc24(0);
	m_hGhost7d0 = 0xffffffff;
	sub_100b3b00();
}
// END FUNCTION

// FUNCTION: 0x10213b50 size=0x1
#include "CPropHaunted.h"
void CPropHaunted::vfunc265()
{
}
// END FUNCTION

// FUNCTION: 0x10213b70 size=0xb3
#include "CPropHaunted.h"
#include "CGlobalEntityList.h"

#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)
#define PV100(p) PV10(p##0) PV10(p##1) PV10(p##2) PV10(p##3) PV10(p##4) PV10(p##5) PV10(p##6) PV10(p##7) PV10(p##8) PV10(p##9)

struct CGhostSlotsX
{
	PV(0) PV(1) PV(2) PV(3) PV(4) PV(5) PV(6) PV(7) PV(8) PV(9)
	PV10(1) PV10(2) PV10(3) PV10(4) PV10(5) PV10(6) PV10(7) PV10(8) PV10(9)
	PV100(1)
	PV10(20) PV10(21) PV10(22) PV10(23)
	PV(240) PV(241)
	virtual void vfunc242();

	void sub_100fbaf0(float flDelay);
};

extern CGlobalEntityList *g_10566458;

struct CEHandleX
{
	unsigned int m_Index;

	CGlobalEntityList_Ent *Valid() const
	{
		if (m_Index == 0xffffffff)
			return 0;
		CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[m_Index & 0x1fff];
		int nSerial = pSlot->m_Serial;
		if (nSerial != (int)(m_Index >> 13))
			return 0;
		return pSlot->m_pEntity;
	}

	CGhostSlotsX *Get() const
	{
		if (m_Index != 0xffffffff) {
			CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[m_Index & 0x1fff];
			if (pSlot->m_Serial == (int)(m_Index >> 13))
				return (CGhostSlotsX *)pSlot->m_pEntity;
		}
		return 0;
	}
};

struct CPropHauntedFields
{
	char m_pad0000[0x7d0];
	CEHandleX m_hGhost;
};

// TARGET: CPropHaunted::vfunc180
void CPropHaunted::vfunc180()
{
	CBaseEntity::vfunc180();
	CPropHauntedFields *p = (CPropHauntedFields *)this;
	if (p->m_hGhost.Valid()) {
		p->m_hGhost.Get()->vfunc242();
		p->m_hGhost.Get()->sub_100fbaf0(5.0f);
	}
}
// END FUNCTION

// FUNCTION: 0x10213c60 size=0xeb
#include "CPropHaunted.h"
struct CPrecacheSounds { virtual void vfunc0(const char *name, int preload); };
extern CPrecacheSounds *g_1070b248;
extern char g_106b8540[];
void sub_10014e93(const char *src, char *dst, int size);
void CPropHaunted::vfunc104()
{
	char buf[260];
	sub_1000978c();
	const char *p = *(const char **)((char *)this + 0x7bc);
	if (!p) p = g_106b8540;
	if (*p) {
		sub_10014e93(p, buf, 260);
		engine->vfunc17((const char *)buf, 1);
	}
	p = *(const char **)((char *)this + 0x7c0);
	if (!p) p = g_106b8540;
	if (*p) {
		sub_10014e93(p, buf, 260);
		engine->vfunc17((const char *)buf, 1);
	}
	p = *(const char **)((char *)this + 0x7c4);
	if (!p) p = g_106b8540;
	if (*p) g_1070b248->vfunc0(p, 1);
	p = *(const char **)((char *)this + 0x7c8);
	if (!p) p = g_106b8540;
	if (*p) g_1070b248->vfunc0(p, 1);
	p = *(const char **)((char *)this + 0x7cc);
	if (!p) p = g_106b8540;
	if (*p) g_1070b248->vfunc0(p, 1);
}
// END FUNCTION

// FUNCTION: 0x10213d90 size=0x28
#include "CPropHaunted.h"

// TARGET: CPropHaunted::vfunc174
void CPropHaunted::vfunc174(CBaseEntity *pOther)
{
    sub_10213ef0(0, 0, pOther);
    if (*(int *)((char *)this + 0x200) != 2)
        CBaseEntity::vfunc174(pOther);
}
// END FUNCTION

// FUNCTION: 0x10213dd0 size=0x61
#include "CPropHaunted.h"
struct CServerUnknownView { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual CBaseEntity *GetBaseEntity(); };
struct CEdictView { char pad[0x40]; CServerUnknownView *m_pUnk; };
// TARGET: CPropHaunted::vfunc228
void CPropHaunted::vfunc228(int index, int pEvent)
{
#define pEvent ((void *)pEvent)
	CBaseEntity *pOther = ((CBaseEntity **)pEvent)[0x68 / 4 + (index == 0)];
	if (!pOther) {
		CEdictView *pEdict = (CEdictView *)engine->vfunc38(0);
		if (pEdict && pEdict->m_pUnk)
			pOther = pEdict->m_pUnk->GetBaseEntity();
		else
			pOther = 0;
	}
	sub_10213ef0(index, pEvent, pOther);
	if (*(int *)((char *)this + 0x200) != 2)
		sub_100a65a0(index, pEvent);
#undef pEvent
}
// END FUNCTION

// FUNCTION: 0x10213e60 size=0x61
#include "CPropHaunted.h"
struct CServerUnknownView { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual CBaseEntity *GetBaseEntity(); };
struct CEdictView { char pad[0x40]; CServerUnknownView *m_pUnk; };
// TARGET: CPropHaunted::vfunc230
void CPropHaunted::vfunc230(int index, void *pEvent)
{
	CBaseEntity *pOther = ((CBaseEntity **)pEvent)[0x68 / 4 + (index == 0)];
	if (!pOther) {
		CEdictView *pEdict = (CEdictView *)engine->vfunc38(0);
		if (pEdict && pEdict->m_pUnk)
			pOther = pEdict->m_pUnk->GetBaseEntity();
		else
			pOther = 0;
	}
	sub_10213ef0(index, pEvent, pOther);
	if (*(int *)((char *)this + 0x200) != 2)
		sub_1018fe80(index, pEvent);
}
// END FUNCTION

// FUNCTION: 0x10213ef0 size=0xbe
#include "CPropHaunted.h"
#include "CTakeDamageInfo.h"

void sub_101520a0(void *pEvent, int index, float *pOutA, float *pOutB);
void sub_10032720(void *pTarget, CTakeDamageInfo *pInfo);

struct CHauntedOwnerView	// CBaseEntity::sub_100a8240: the owner / parent entity (null when none)
{
	CHauntedOwnerView *sub_100a8240();
};

void CPropHaunted::sub_10213ef0(int index, void *pEvent, CBaseEntity *pOther)
{
	if (!m_bArmed7b8)
		return;
	vfunc266(pOther);
	if (pEvent)
	{
		float vecA[3];
		float vecB[3];
		CTakeDamageInfo info;
		sub_101520a0(pEvent, index, vecA, vecB);
		CHauntedOwnerView *pView = (CHauntedOwnerView *)pOther;
		info.sub_101c2720(pOther, !pView->sub_100a8240() ? pView : pView->sub_100a8240(), vecB, vecA, m_flDamage794, 1, 0);
		sub_10032720(this, &info);
	}
	else
	{
		CTakeDamageInfo info;
		info.sub_101c26d0(this, this, m_flDamage794, 1, 0, 0, -1);
		sub_10032720(pOther, &info);
	}
}
// END FUNCTION

// FUNCTION: 0x10213fe0 size=0x13
#include "CPropHaunted.h"

char CPropHaunted::vfunc68(int a)
{
	if (m_field200 == 2)
		return 1;
	return sub_1008bfe0(a);
}
// END FUNCTION

// FUNCTION: 0x10214010 size=0x44
#include "CPropHaunted.h"
void CPropHaunted::vfunc266(CBaseEntity *pOther)
{
	if (m_iHealth > 0) {
		sub_100ac4e0(0, 0, 0);
		sub_10214200((const char *)m_iszSound7cc);
		sub_10214080(*(int *)((char *)this + 0x7c8));
		sub_1018fb90(pOther);
	}
}
// END FUNCTION

// FUNCTION: 0x10214080 size=0x121
#include "CPropHaunted.h"
#include "CEntitySoundOriginView.h"
#include "CPASAttenuationFilter.h"
#include "CUnknown1070b248.h"
extern CUnknown1070b248 *g_1070b248;
extern char g_106b8540[];

void CPropHaunted::sub_10214080(const char *pszSound)
{
    if (!pszSound)
        pszSound = g_106b8540;
    if (*pszSound) {
        CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
        int edict = m_pEdict2e0;
        g_1070b248->vfunc2(&filter, engine->vfunc35(edict), 4, pszSound, 1.0f, 75, 0, 100, 0, 0, 1, 0);
    }
}
// END FUNCTION

// FUNCTION: 0x10214200 size=0x41
#include "CPropHaunted.h"

extern char g_106b8540[];

void CPropHaunted::sub_10214200(const char *pszSound)
{
	if (!pszSound)
		pszSound = g_106b8540;
	if (*pszSound) {
		int edict = m_pEdict2e0;
		enginesound->vfunc7(engine->vfunc35(edict), 4, pszSound);
	}
}
// END FUNCTION

// FUNCTION: 0x10214270 size=0xa
#include "ConVar.h"
ConVar g_1074f0c0("haunted_break_speed", "150", 0);
// END FUNCTION

// FUNCTION: 0x10214300 size=0xb0
#include "CPropHaunted.h"
#include "IPhysicsObject.h"
#include "ConVar.h"

extern ConVar *g_1074f0c4;
extern float g_104454c4;

void CPropHaunted::sub_10214300()
{
	if (m_obj36c)
	{
		Vector vecVelocity;
		((IPhysicsObject *)m_obj36c)->vfunc40((float *)&vecVelocity, 0);
		float flSpeed = vecVelocity.Length();
		float flThreshold = g_1074f0c4->vfunc1() ? g_104454c4 : g_1074f0c4->m_fValue;
		if (flSpeed < flThreshold)
		{
			sub_100ac4e0(0, 0, 0);
			m_bArmed7b8 = 0;
			return;
		}
		m_flNextThink = gpGlobals->curtime + 0.05;
	}
}
// END FUNCTION

// FUNCTION: 0x102143e0 size=0x7a
template <class T> __forceinline T pcd_stage(T x) { return x; }
#include "CUnknown102148f0.h"

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SL100(p) SL10(p##0) SL10(p##1) SL10(p##2) SL10(p##3) SL10(p##4) SL10(p##5) SL10(p##6) SL10(p##7) SL10(p##8) SL10(p##9)
struct VT250 {
	SL100(a) SL100(b)
	SL10(c0) SL10(c1) SL10(c2) SL10(c3) SL10(c4) 
	virtual float a250(int);
};

void CUnknown102148f0::sub_102143e0()
{
	if (gpGlobals->curtime > m_flTime77c) {
		sub_102148f0();
		sub_10214a20();
		return;
	}
	((VT250 *)this)->a250(0);
	float flNow;
	if (!(sub_10090ef0(pcd_stage(m_iValue6f0)) & 1) && m_flValue6f8 >= 0.99) {
		m_flValue6f8 = 0;
	}
	flNow = gpGlobals->curtime;
	m_flNextTime17c = flNow + 0.041666666666666664;
}
// END FUNCTION

// FUNCTION: 0x10214480 size=0x1c6
#include "CPropHaunted.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"

extern char g_106b8540[];

#define clamp(val, min, max) (((val) > (max)) ? (max) : (((val) < (min)) ? (min) : (val)))

void CPropHaunted::sub_10214480()
{
	if (gpGlobals->curtime > (m_flStart780 + m_flDuration784)) {
		sub_10214200((const char *)m_iszSound7cc);
		sub_100ac4e0(0, 0, 0);
		return;
	}
	hsl6(0);
	float flVolume = (((gpGlobals)->curtime - m_flStart780)) / m_flDuration784;
	flVolume = clamp(flVolume, 0.0, 1.0);
	const char *pszSound = ((const char *)m_iszSound7cc);
	flVolume = 1.0 - flVolume;
	if (!pszSound) {
		pszSound = (const char *)m_iszSound7cc;
		if (!pszSound)
			pszSound = g_106b8540;
		if (!*pszSound)
			goto done;
	}
	else if (!*pszSound)
		goto done;
	{

		CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
		unsigned int edict = m_pEdict2e0;
		enginesound->vfunc11((&filter), engine->vfunc35(edict), 4, flVolume, 0x4b, 1, 0x64, 0, 0, 1, 0);
	}
done:
	m_flNextThink = gpGlobals->curtime + 0.05;
}
// END FUNCTION

// FUNCTION: 0x102146d0 size=0x13
#include "CUnknown102148f0.h"

void CUnknown102148f0::sub_102146d0(int a)
{
	sub_102148f0();
	sub_10214a20();
}
// END FUNCTION

// FUNCTION: 0x10214700 size=0x8
namespace lifted {
int sub_100122f6();
}
int __stdcall sub_10214700(int a0)
{
    return lifted::sub_100122f6();
}
// END FUNCTION

// FUNCTION: 0x10214720 size=0x16
struct CThis102148f0 { void sub_102148f0(); };

// TARGET: sub_10214720
void __fastcall sub_10214720(void *pThis, int, int)
{
	((CThis102148f0 *)pThis)->sub_102148f0();
	*(int *)((char *)pThis + 0x77c) = 0x7f7fffff;
}
// END FUNCTION

// FUNCTION: 0x10214750 size=0x16
struct CThis10214780 { void sub_10214780(); };

// TARGET: sub_10214750
void __fastcall sub_10214750(void *pThis, int, int)
{
	((CThis10214780 *)pThis)->sub_10214780();
	*(int *)((char *)pThis + 0x77c) = 0x7f7fffff;
}
// END FUNCTION

// FUNCTION: 0x10214780 size=0x11f
#include "CEnvParticle.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPropHaunted.h"
#include "CEHandleGet.h"
#include "ScopeTrace.h"

__declspec(dllimport) void Warning(const char *pszFormat, ...);
extern "C" __declspec(dllimport) float RandomFloat(float flMin, float flMax);

union ThinkPtr
{
	void (CPropHaunted::*pfn)();
	int n;
};

// TARGET: CPropHaunted::sub_10214780
void CPropHaunted::sub_10214780()
{
	sub_100b3640(0x40000);
	int nSequence = sub_1008f7b0("spin");
	if (nSequence >= 0) {
		sub_10260a50(nSequence);
	} else {
		int nTmp;
		const char *pszName = *vfunc9(&nTmp);
		if (!pszName)
			pszName = g_106b8540;
		Warning("%s does not have a 'spin' animation. (%s) \n", sub_100ab4f0(), pszName);
	}
	ThinkPtr think;
	think.pfn = &CPropHaunted::sub_102143e0;
	sub_100ac4e0(think.n, 0, 0);
	m_flTime77c = RandomFloat(m_flMin78c, m_flMax790) + gpGlobals->curtime;
	m_flNextThink = gpGlobals->curtime + 0.01;
	((CPropHauntedSub *)m_sub07ec)->sub_100cd660(this, this, 0);
	sub_10214080(m_iszSound7cc);
	if (!EHandle_Get(m_hGhost7d0)) {
		CEnvParticle *pGhost = sub_10214cc0(m_iszGhost7c0);
		if (pGhost) {
			pGhost->sub_100fb1f0(this, 0, -1);
			m_hGhost7d0 = *((CBaseEntity *)pGhost)->vfunc1();
		}
	}
}
// END FUNCTION

// FUNCTION: 0x102148f0 size=0xec
#include "CUnknown102148f0.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;
void sub_10010bd1();

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SL100(p) SL10(p##0) SL10(p##1) SL10(p##2) SL10(p##3) SL10(p##4) SL10(p##5) SL10(p##6) SL10(p##7) SL10(p##8) SL10(p##9)

// The target entity: slot 242 and the SetNextThink stub are used.
struct TargetSlots
{
	SL100(a) SL100(b) SL10(c0) SL10(c1) SL10(c2) SL10(c3)
	virtual void d0(); virtual void d1();
	virtual void vfunc242();
	void sub_100fbbb0(float time);	// stub 0x1000fb23
};

struct TargetHandle
{
	unsigned int m_Index;
	TargetSlots *Get() const
	{
		if (m_Index == 0xffffffff)
			return 0;
		CGlobalEntityList_Slot *e = &g_10566458->m_Slots[m_Index & 0x1fff];
		return e->m_Serial == (m_Index >> 13) ? (TargetSlots *)e->m_pEntity : 0;
	}
};

// TARGET: CUnknown102148f0::sub_102148f0
void CUnknown102148f0::sub_102148f0()
{
    sub_10260a50(sub_1008f7b0("idle"));
    sub_100ac4e0((void *)sub_10010bd1, 0, 0);
    m_out804.sub_100cd660(this, this, 0);
    m_flTime780 = gpGlobals->curtime;
    if (((TargetHandle *)&m_hTarget)->Get() != 0) {
        ((TargetHandle *)&m_hTarget)->Get()->vfunc242();
        ((TargetHandle *)&m_hTarget)->Get()->sub_100fbbb0(5.0f);
        m_hTarget = 0xffffffff;
    }
}
// END FUNCTION

// FUNCTION: 0x10214a20 size=0x20f
#include "CEnvParticle.h"
#include "CUnknown102148f0.h"
#include "CPropHaunted.h"
#include "CEntityVSlots.h"
#include "COutputEvent.h"
#include "CBaseEntityUnit100fbaf0.h"
#include "DebugOverlay.h"
#include "globalvars.h"
#include "Vector.h"

extern float (*g_109f385c)(float, float);

#define PV(n) virtual void p##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)

class CPhysView
{
public:
	PV10(0) PV10(1) PV(20) PV(21) PV(22) PV(23)
	virtual void vfunc24(int a);
	PV(25) PV(26) PV(27) PV(28) PV(29)
	PV(30) PV(31) PV(32) PV(33) PV(34) PV(35) PV(36) PV(37) PV(38)
	virtual void vfunc39(Vector *pA, Vector *pB);
};

void CUnknown102148f0::sub_10214a20()
{
	CPropHaunted *p = (CPropHaunted *)this;
	CEntityVSlots *pSlots = (CEntityVSlots *)this;

	p->sub_100b3640(0x40000);
	CBaseEntity *pTarget = sub_101cd9e0(1);
	CPhysView *pPhys = (CPhysView *)p->m_obj36c;
	if (!pPhys)
		return; else { CEnvParticle *pGhost = p->sub_10214cc0((int)p->m_sFlingParticle.pszValue);
	if (pGhost)
		((CBaseEntityUnit100fbaf0 *)pGhost)->sub_100fbaf0(10.0f);

	p->sub_10260a50(p->sub_1008f7b0("idle"));
	*(int *)((char *)this + 0x6f8) = 0;
	p->vfunc93(7, 0);
	pPhys->vfunc24(1);
	p->sub_100b3b00();

	Vector vecDir;
	if (p->m_bTargetPlayer && pTarget)
	{
		Vector *pOrigin = pSlots->slot217();
		Vector vecEye;
		Vector *pOther = ((CEntityVSlots *)pTarget)->slot193(&vecEye);
		vecDir = *pOther - *pOrigin;
	}
	else
	{
		Vector *pOrigin = pSlots->slot217();
		vecDir = p->m_vecFlingDest - *pOrigin;
	}

	VectorNormalize(vecDir);

	float flScale = p->m_flFlingVelocity;
	VectorScale(vecDir, flScale, vecDir);

	float r1 = g_109f385c(-180.0f, 180.0f);
	float r2 = g_109f385c(-180.0f, 180.0f);
	float r3 = g_109f385c(-180.0f, 180.0f);

	Vector vecSpin;
	vecSpin.x = r3 * *(float *)((char *)this + 0x7ac);
	vecSpin.y = r2 * *(float *)((char *)this + 0x7b0);
	vecSpin.z = r1 * *(float *)(0x7b4 + (char *)this);

	pPhys->vfunc39(&vecDir, &vecSpin);

	((COutputEvent *)((char *)this + 0x7d4))->sub_100cd660(pTarget, this, 0);

	void (CPropHaunted::*pfnThink)() = &CPropHaunted::sub_10214300;
	p->sub_100ac4e0(*(int *)&pfnThink, 0, 0);

	p->m_flNextThink = gpGlobals->curtime + 0.05;
	p->sub_10214200((const char *)p->m_iszSound7cc);
	p->sub_10214080(p->m_sFlingSound.pszValue);
	p->m_bArmed7b8 = 1; }
}
// END FUNCTION

// FUNCTION: 0x10214cc0 size=0x71
#include "CEntityVSlots.h"
#include "CEnvParticle.h"
#include "CPropHaunted.h"
#include "Vector.h"

extern char g_106b8540[];
void sub_101cf7c0(const char *src, char *dst, int size);
CEntityVSlots *sub_100fbc90(const char *pszName, const Vector &vecOrigin, const float *pAngles, float flLife);

CEnvParticle *CPropHaunted::sub_10214cc0(int a)
{
	const char *psz = (const char *)a;
	if (!psz)
		psz = g_106b8540;
	if (*psz) {
		char buf[260];
		sub_101cf7c0(psz, buf, sizeof(buf));
		return (CEnvParticle *)sub_100fbc90(buf, vfunc192(), vfunc219(), -1.0f);
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10214d60 size=0x43
#include "platform.h"
#include "CPropButton.h"
void *sub_100aa720(int size);
extern char g_105aeccc[];

// TARGET: prop_button
DLL_EXPORT CBaseEntity *prop_button()
{
	void *mem = sub_100aa720(0x834);
	CPropButton *p;
	if (mem)
		p = ((CPropButton *)mem)->sub_102154f0();
	else
		p = 0;
	p->vfunc106(g_105aeccc);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10214dd0 size=0x6
#include "datamap.h"
#include "CPropButton.h"
namespace lifted {
extern char g_105ac050;
}
datamap_t * CPropButton::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105ac050);
}
// END FUNCTION

// FUNCTION: 0x10214df0 size=0x5
int * sub_10214e30(void);
int * g_1074f120 = ((int * (*)(int))sub_10214e30)(0);
// END FUNCTION

// FUNCTION: 0x10214e30 size=0x55f
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
extern int g_105ac050[2];
void sub_10014d5d();
void sub_100150af();
void sub_100158d9();
void sub_1000a407();
void sub_10014619();
void sub_1000f506();

int *sub_10214e30()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 5, "m_bLocked", {0x738, 0}, 1, 6, "locked" },
        { 4, "m_nState", {0x73c, 0}, 1, 6, "current_state" },
        { 4, "m_UseIcon", {0x730, 0}, 1, 6, "use_icon" },
        { 4, "m_LockedIcon", {0x734, 0}, 1, 6, "locked_icon" },
        { 4, "m_nMaxStates", {0x740, 0}, 1, 6, "max_states" },
        { 10, "m_OnPressed", {0x744, 0}, 1, 0x16, "OnPressed", g_1055dc70 },
        { 10, "m_OnPressedLocked", {0x75c, 0}, 1, 0x16, "OnPressedLocked", g_1055dc70 },
        { 10, "m_OnSetState[0]", {0x774, 0}, 1, 0x16, "OnSetState1", g_1055dc70 },
        { 10, "m_OnSetState[1]", {0x78c, 0}, 1, 0x16, "OnSetState2", g_1055dc70 },
        { 10, "m_OnSetState[2]", {0x7a4, 0}, 1, 0x16, "OnSetState3", g_1055dc70 },
        { 10, "m_OnSetState[3]", {0x7bc, 0}, 1, 0x16, "OnSetState4", g_1055dc70 },
        { 10, "m_OnSetState[4]", {0x7d4, 0}, 1, 0x16, "OnSetState5", g_1055dc70 },
        { 10, "m_OnSetState[5]", {0x7ec, 0}, 1, 0x16, "OnSetState6", g_1055dc70 },
        { 10, "m_OnSetState[6]", {0x804, 0}, 1, 0x16, "OnSetState7", g_1055dc70 },
        { 10, "m_OnSetState[7]", {0x81c, 0}, 1, 0x16, "OnSetState8", g_1055dc70 },
        { 0, "InputLock", {0, 0}, 1, 8, "Lock", 0, (void *)sub_10014d5d },
        { 0, "InputUnlock", {0, 0}, 1, 8, "Unlock", 0, (void *)sub_100150af },
        { 0, "InputToggleLock", {0, 0}, 1, 8, "ToggleLock", 0, (void *)sub_100158d9 },
        { 0, "InputUse", {0, 0}, 1, 8, "Use", 0, (void *)sub_1000a407 },
        { 4, "InputSetState", {0, 0}, 1, 8, "SetState", 0, (void *)sub_10014619 },
        { 0, "CPropButtonButtonUse", {0, 0}, 1, 0x20, 0, 0, (void *)sub_1000f506 },
    };
    g_105ac050[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_105ac050[0] = (int)&dataDesc[1];
    return g_105ac050;
}
// END FUNCTION

// FUNCTION: 0x102154f0 size=0x54
#include "CPropButton.h"
#include "CBaseAnimating.h"

extern int g_1047332c;
extern int g_10489724;

CPropButton *CPropButton::sub_102154f0()
{
	((CBaseAnimating *)this)->sub_1008b230();
	*(int **)this = &g_1047332c;
	m_OnPressed.sub_100cd2a0();
	m_OnLocked.sub_100cd2a0();
	for (int i = 0; i < 8; i++)
		m_OnPosition[i].sub_100cd2a0();
	*(int **)this = &g_10489724;
	*(int *)((char *)this + 0x734) = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10215570 size=0x52
#include "CCineNPC.h"
#include "CBaseAnimating.h"

void sub_100aa7b0(void *);

struct Helper
{
	void *sub_10215570(unsigned int flags);
};

// TARGET: Helper::sub_10215570
void *Helper::sub_10215570(unsigned int flags)
{
	CCineNPCSlot *p = (CCineNPCSlot *)((char *)this + 0x834);
	int n = 8;
	do {
		--p;
		p->sub_10015708();
	} while (--n);
	((CCineNPCSlot *)((char *)this + 0x75c))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x744))->sub_10015708();
	((CBaseAnimating *)this)->sub_1008b3c0();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x102155f0 size=0x1e
#include "CPropButton.h"
#include "CBaseProp.h"

void sub_1000f506();

// TARGET: CPropButton::vfunc104
void CPropButton::vfunc104()
{
	vfunc71();
	((CBaseProp *)this)->CBaseProp::vfunc104();
	*(void **)((char *)this + 0x1f0) = (void *)sub_1000f506;
}
// END FUNCTION

// FUNCTION: 0x10215620 size=0xe5
#include "CPropButton.h"
#include "CUnknown1073dc28.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern CUnknown1073dc28 g_1073dc00;
extern int g_1074f144;
extern int g_1074f148;

inline int FindSoundId(const char *pszName)
{
	for (int i = 0; i < g_1073dc00.m_nRecords; i++)
	{
		if (!_strcmpi(g_1073dc00.m_ppRecords[i]->m_Name.Get(), pszName))
			return g_1073dc00.m_ppRecords[i]->m_nId;
	}
	return -1;
}

// TARGET: CPropButton::vfunc71
void CPropButton::vfunc71()
{
	m_nVSoundTableIdx = 0;
	m_nVSoundGroup = g_1073dc00.sub_101f55a0((CBaseEntity *)this, ((CUnknown1073dc28Name *)((char *)this + 0xc0))->Get(), 0);

	g_1074f144 = FindSoundId("on");
	g_1074f148 = FindSoundId("off");
}
// END FUNCTION

// FUNCTION: 0x10215750 size=0x12e
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPropButton.h"
#include "CBaseProp.h"
#include "CBaseAnimating.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

// TARGET: CPropButton::vfunc103
void CPropButton::vfunc103()
{
	((CBaseProp *)this)->CBaseProp::vfunc103();
	int n = m_nPositions;
	n = (n > 7) ? 7 : ((n < 0) ? 0 : n);
	m_nPositions = n;
	int start = *(int *)((char *)this + 0x73c);
	if (start <= n)
		n = (start < 0) ? 0 : start;
	*(int *)((char *)this + 0x73c) = n;
	*(int *)((char *)this + 0x670) = n;
	sub_100b3580(0x40000);
	*(unsigned int *)((char *)this + 0x19c) |= 0xa0;
	sub_100a9470(0);
	char *pHdr = (char *)((CBaseAnimating *)this)->sub_100952d0(-1);
	if (pHdr) {
		{
			ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
			((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(3);
		}
		sub_100adf10((float *)(pHdr + 0xb4), (float *)(pHdr + 0xc0));
		sub_100aaa40(1);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100ddd90();
		sub_100b3b00();
	}
}
// END FUNCTION

// FUNCTION: 0x102158d0 size=0x8
#include "CPropButton.h"
namespace lifted {
int sub_10006703();
}
int CPropButton::vfunc117()
{
    return (lifted::sub_10006703()) | 8;
}
// END FUNCTION

// FUNCTION: 0x102158f0 size=0xa
void __fastcall sub_102158f0(char *self, int, int)
{
	self[0x738] = 1;
}
// END FUNCTION

// FUNCTION: 0x10215910 size=0xa
#include "CUnknown10215910.h"
void CUnknown10215910::sub_10215910(int unused)
{
	m_unk738 = 0;
}
// END FUNCTION

// FUNCTION: 0x10215930 size=0x14
struct CUnit10215930
{
	char m_pad0000[0x738];
	bool m_b738;

	void sub_10215930(int a);
};

// TARGET: CUnit10215930::sub_10215930
void CUnit10215930::sub_10215930(int a)
{
	m_b738 = !m_b738;
}
// END FUNCTION

// FUNCTION: 0x10215960 size=0x64
#include "CPropButton.h"
#include "inputdata_t.h"

// the input's integer value (0 unless the variant holds an integer)
__forceinline int VariantAsInt(variant_t *pValue)
{
    if (pValue->fieldType == 4)
        return pValue->iValue;
    return 0;
}

#define CLAMP(x, lo, hi) ((x) > (hi) ? (hi) : ((x) < (lo) ? (lo) : (x)))

// TARGET: CPropButton::sub_10215960
void CPropButton::sub_10215960(inputdata_t *pData)
{
    sub_10215ad0(CLAMP(VariantAsInt(&pData->value) - 1, 0, m_nPositions - 1), pData->pActivator);
}
// END FUNCTION

// FUNCTION: 0x102159f0 size=0x2e
#include "CBaseEntity.h"
#define P10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
    virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CUnk102159f0
{
    P10(a) P10(b) P10(c) P10(d) P10(e) P10(f) P10(g) P10(h) P10(i) P10(j) P10(k)
    P10(l) P10(m) P10(n) P10(o) P10(p) P10(q) P10(r) P10(s) P10(t) P10(u) P10(v) P10(w) P10(x)
    P10(y) P10(z)
    virtual void vfunc260();
    virtual void vfunc261();
    virtual void vfunc262();
    virtual void vfunc263();
    virtual void vfunc264();
    virtual void vfunc265(int a, int b, int c, int d);

    void sub_102159f0(int *pPair);
};

void CUnk102159f0::sub_102159f0(int *pPair)
{
    if (((CBaseEntity *)this)->sub_100a7bd0((CBaseEntity *)pPair[0]))
    {
        vfunc265(pPair[0], pPair[1], 1, 0);
    }
}
// END FUNCTION

// FUNCTION: 0x10215a30 size=0x7f
#include "CPropButton.h"
#include "CUnknown1073dc00.h"

extern CUnknown1073dc00 g_1073dc00;
extern int g_1074f148;

void CPropButton::vfunc265(void *pActivator, void *pCaller, int useType, float value)
{
	if (!m_bLocked) {
		m_OnPressed.sub_100cd660(pActivator, this, 0);
		if (m_nPosition >= m_nPositions)
			sub_10215ad0(0, pActivator);
		else
			sub_10215ad0(m_nPosition + 1, pActivator);
		return;
	}
	m_OnLocked.sub_100cd660(pActivator, this, 0);
	g_1073dc00.sub_101f5950(this, g_1074f148, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10215ad0 size=0x48
#include "CPropButton.h"
#include "CUnknown1073dc00.h"
extern CUnknown1073dc00 g_1073dc00;
extern int g_1074f144;
void CPropButton::sub_10215ad0(int index, void *pActivator)
{
	m_OnPosition[index].sub_100cd660(pActivator, this, 0);
	m_nCurrent670 = index;
	g_1073dc00.sub_101f5950(this, g_1074f144, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10215b40 size=0x22
struct CPropButtonX
{
    char sub_100a7bd0(void *pActivator);
    int sub_10215b40(void *pActivator);
};

// TARGET: sub_10215b40
int CPropButtonX::sub_10215b40(void *pActivator)
{
    if (*((char *)this + 0x738)) {
        return 0;
    }
    return sub_100a7bd0(pActivator) != 0;
}
// END FUNCTION

// FUNCTION: 0x10215b80 size=0x3b
#include "CPropButton.h"

struct CPropButtonUnit10215b80 : CPropButton
{
    int sub_10215b80(int pActivator);
};

// TARGET: sub_10215b80
int CPropButtonUnit10215b80::sub_10215b80(int pActivator)
{
    if (m_bLocked)
    {
        return *(int *)((char *)this + 0x734);
    }
    if (!((CBaseEntity *)this)->sub_100a7bd0((CBaseEntity *)pActivator))
    {
        return *(int *)((char *)this + 0x734);
    }
    return *(int *)((char *)this + 0x730);
}
// END FUNCTION

// FUNCTION: 0x10215bd0 size=0x43
#include "platform.h"
#include "CPropModelState.h"
void *sub_100aa720(int size);
extern char g_105aeea4[];

// TARGET: prop_model_state
DLL_EXPORT CBaseEntity *prop_model_state()
{
	void *mem = sub_100aa720(0x850);
	CPropModelState *p;
	if (mem)
		p = ((CPropModelState *)mem)->sub_10216360();
	else
		p = 0;
	p->vfunc106(g_105aeea4);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10215c40 size=0x6
#include "datamap.h"
#include "CPropModelState.h"
namespace lifted {
extern char g_105ac430;
}
datamap_t * CPropModelState::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105ac430);
}
// END FUNCTION

// FUNCTION: 0x10215c60 size=0x5
int * sub_10215ca0(void);
int * g_1074f12c = ((int * (*)(int))sub_10215ca0)(0);
// END FUNCTION

// FUNCTION: 0x10215ca0 size=0x55f
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
extern int g_105ac430[2];
void sub_10010267();
void sub_10007e32();
void sub_10004fa2();
void sub_100132c3();
void sub_1001058c();
void sub_1000f506();

int *sub_10215ca0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 5, "m_bLocked", {0x734, 0}, 1, 6, "locked" },
        { 4, "m_nState", {0x738, 0}, 1, 6, "current_state" },
        { 4, "m_UseIcon", {0x730, 0}, 1, 6, "use_icon" },
        { 16, "m_StateModels[0]", {0x740, 0}, 1, 6, "state_model_0" },
        { 16, "m_StateModels[1]", {0x744, 0}, 1, 6, "state_model_1" },
        { 16, "m_StateModels[2]", {0x748, 0}, 1, 6, "state_model_2" },
        { 16, "m_StateModels[3]", {0x74c, 0}, 1, 6, "state_model_3" },
        { 16, "m_StateModels[4]", {0x750, 0}, 1, 6, "state_model_4" },
        { 16, "m_StateModels[5]", {0x754, 0}, 1, 6, "state_model_5" },
        { 16, "m_StateModels[6]", {0x758, 0}, 1, 6, "state_model_6" },
        { 16, "m_StateModels[7]", {0x75c, 0}, 1, 6, "state_model_7" },
        { 4, "m_nMaxStates", {0x73c, 0}, 1, 2 },
        { 10, "m_OnPressed", {0x760, 0}, 1, 0x16, "OnPressed", g_1055dc70 },
        { 10, "m_OnPressedLocked", {0x778, 0}, 1, 0x16, "OnPressedLocked", g_1055dc70 },
        { 10, "m_OnSetState[0]", {0x790, 0}, 1, 0x16, "OnSetState1", g_1055dc70 },
        { 10, "m_OnSetState[1]", {0x7a8, 0}, 1, 0x16, "OnSetState2", g_1055dc70 },
        { 10, "m_OnSetState[2]", {0x7c0, 0}, 1, 0x16, "OnSetState3", g_1055dc70 },
        { 10, "m_OnSetState[3]", {0x7d8, 0}, 1, 0x16, "OnSetState4", g_1055dc70 },
        { 10, "m_OnSetState[4]", {0x7f0, 0}, 1, 0x16, "OnSetState5", g_1055dc70 },
        { 10, "m_OnSetState[5]", {0x808, 0}, 1, 0x16, "OnSetState6", g_1055dc70 },
        { 10, "m_OnSetState[6]", {0x820, 0}, 1, 0x16, "OnSetState7", g_1055dc70 },
        { 10, "m_OnSetState[7]", {0x838, 0}, 1, 0x16, "OnSetState8", g_1055dc70 },
        { 0, "InputLock", {0, 0}, 1, 8, "Lock", 0, (void *)sub_10010267 },
        { 0, "InputUnlock", {0, 0}, 1, 8, "Unlock", 0, (void *)sub_10007e32 },
        { 0, "InputToggleLock", {0, 0}, 1, 8, "ToggleLock", 0, (void *)sub_10004fa2 },
        { 0, "InputUse", {0, 0}, 1, 8, "Use", 0, (void *)sub_100132c3 },
        { 4, "InputSetState", {0, 0}, 1, 8, "SetState", 0, (void *)sub_1001058c },
        { 0, "CPropModelStateModelStateUse", {0, 0}, 1, 0x20, 0, 0, (void *)sub_1000f506 },
    };
    g_105ac430[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_105ac430[0] = (int)&dataDesc[1];
    return g_105ac430;
}
// END FUNCTION

// FUNCTION: 0x10216360 size=0x51
#include "CPropModelState.h"
extern int vt_1047332c[];
extern int vt_10489c2c[];
void __fastcall sub_100103fc(CPropModelState *p);
void __fastcall sub_1000bed8(CPropModelState *p);
CPropModelState *CPropModelState::sub_10216360()
{
    sub_100103fc(this);
    *(int **)this = vt_1047332c;
    m_OnPressed.sub_100cd2a0();
    m_OnLocked.sub_100cd2a0();
    for (int i = 0; i < 8; i++)
        m_OnState[i].sub_100cd2a0();
    *(int **)this = vt_10489c2c;
    sub_1000bed8(this);
    return this;
}
// END FUNCTION

// FUNCTION: 0x102163e0 size=0x52
#include "CCineNPC.h"
#include "CBaseAnimating.h"

void sub_100aa7b0(void *);

struct Helper
{
	void *sub_102163e0(unsigned int flags);
};

// TARGET: Helper::sub_102163e0
void *Helper::sub_102163e0(unsigned int flags)
{
	CCineNPCSlot *p = (CCineNPCSlot *)((char *)this + 0x850);
	int n = 8;
	do {
		--p;
		p->sub_10015708();
	} while (--n);
	((CCineNPCSlot *)((char *)this + 0x778))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x760))->sub_10015708();
	((CBaseAnimating *)this)->sub_1008b3c0();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10216460 size=0x5e
#include "CPropModelState.h"
extern char g_106b8540[];
void CPropModelState::vfunc104()
{
	vfunc71();
	sub_1018e0d0();
	m_pfnUse = (void (CBaseEntity::*)(CBaseEntity *, CBaseEntity *, int, float))&CPropModelState::sub_10217160;
	for (int i = 0; i < 8; i++) {
		if (!m_pStateModels[i])
			return;
		m_nStates++;
		const char *pName = m_pStateModels[i];
		if (!pName)
			pName = g_106b8540;
		engine->vfunc13(pName, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x102164e0 size=0xe5
#include "CPropModelState.h"
#include "CBaseButton.h"
#include "CUnknown1073dc28.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern CUnknown1073dc28 g_1073dc00;
extern int g_1074f14c;
extern int g_1074f150;

inline int FindSoundId(const char *pszName)
{
	for (int i = 0; i < g_1073dc00.m_nRecords; i++)
	{
		if (!_strcmpi(g_1073dc00.m_ppRecords[i]->m_Name.Get(), pszName))
			return g_1073dc00.m_ppRecords[i]->m_nId;
	}
	return -1;
}

void CPropModelState::vfunc71()
{
	CBaseButton *p = (CBaseButton *)this;
	p->m_nVSoundTableIdx = 0;
	p->m_nVSoundGroup = g_1073dc00.sub_101f55a0((CBaseEntity *)this, ((CUnknown1073dc28Name *)&p->m_iszVSoundGroup)->Get(), 0);

	g_1074f14c = FindSoundId("on");
	g_1074f150 = FindSoundId("off");
}
// END FUNCTION

// FUNCTION: 0x10216610 size=0x190
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPropModelState.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

inline bool PropModelState_FlagBit(unsigned int flags, int bit)
{
	return (flags >> bit) & 1;
}

#define CLAMPX(val, minv, maxv) ((val) > (maxv) ? (maxv) : ((val) < (minv) ? (minv) : (val)))

// TARGET: CPropModelState::vfunc103
void CPropModelState::vfunc103()
{
	m_nStates = 0;
	m_pStateModels[0] = *(const char **)((char *)this + 0x388);
	sub_1018df70();
	m_nStates = CLAMPX(m_nStates, 0, 7);
	m_iState = CLAMPX(m_iState, 0, m_nStates);
	const char *model = m_pStateModels[m_iState];
	vfunc105(model ? model : g_106b8540);
	if (!(m_flags204 & 1))
		sub_100b3580(0x40000);
	else
		sub_100b3640(0x40000);
	*(int *)((char *)this + 0x19c) = !PropModelState_FlagBit(m_flags204, 1) ? (*(int *)((char *)this + 0x19c) | 0xa0) : (*(int *)((char *)this + 0x19c) & ~0xa0);
	sub_10260a50(0);
	sub_100a9470(0);
	char *hdr = sub_100952d0(-1);
	if (hdr)
	{
		{
			ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
			((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(3);
		}
		sub_100adf10((const float *)(hdr + 0xb4), (const float *)(hdr + 0xc0));
		if (PropModelState_FlagBit(m_flags204, 2))
			sub_100aaa40(0);
		else
			sub_100aaa40(1);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100ddd90();
		sub_100b3b00();
	}
}
// END FUNCTION

// FUNCTION: 0x10216810 size=0x8
#include "CPropModelState.h"
namespace lifted {
int sub_10006703();
}
int CPropModelState::vfunc117()
{
    return (lifted::sub_10006703()) | 8;
}
// END FUNCTION

// FUNCTION: 0x10216830 size=0xa
void __fastcall sub_10216830(char *self, int, int)
{
	self[0x734] = 1;
}
// END FUNCTION

// FUNCTION: 0x10216850 size=0xa
void __fastcall sub_10216850(char *self, int, int)
{
	self[0x734] = 0;
}
// END FUNCTION

// FUNCTION: 0x10216870 size=0x14
struct CUnit10216870
{
	char m_pad0000[0x734];
	bool m_b734;

	void sub_10216870(int a);
};

// TARGET: CUnit10216870::sub_10216870
void CUnit10216870::sub_10216870(int a)
{
	m_b734 = !m_b734;
}
// END FUNCTION

// FUNCTION: 0x102168a0 size=0x64
#include "CPropModelState.h"
#include "inputdata_t.h"

#define CLAMP_IDX(v, lo, hi) ((v) > (hi) ? (hi) : ((v) < (lo) ? (lo) : (v)))

struct VarL {
    int m_iValue;
    char m_pad[0xc];
    volatile int m_fieldType;
    int Int() { return m_fieldType == 4 ? m_iValue : 0; }
};

void CPropModelState::sub_102168a0(inputdata_t *pData)
{
    VarL &v = *(VarL *)&pData->value;
    sub_10216aa0(CLAMP_IDX(v.Int() - 1, 0, m_nStates - 1), pData->pActivator);
}
// END FUNCTION

// FUNCTION: 0x10216930 size=0x2e
#include "CBaseEntity.h"
#define P10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
    virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CUnk10216930
{
    P10(a) P10(b) P10(c) P10(d) P10(e) P10(f) P10(g) P10(h) P10(i) P10(j) P10(k)
    P10(l) P10(m) P10(n) P10(o) P10(p) P10(q) P10(r) P10(s) P10(t) P10(u) P10(v) P10(w) P10(x)
    P10(y) P10(z)
    virtual void vfunc260();
    virtual void vfunc261();
    virtual void vfunc262();
    virtual void vfunc263();
    virtual void vfunc264();
    virtual void vfunc265(int a, int b, int c, int d);

    void sub_10216930(int *pPair);
};

// TARGET: ?sub_10216930@CUnk10216930@@QAEXPAH@Z
void CUnk10216930::sub_10216930(int *pPair)
{
    if (((CBaseEntity *)this)->sub_100a7bd0((CBaseEntity *)pPair[0]))
    {
        vfunc265(pPair[0], pPair[1], 1, 0);
    }
}
// END FUNCTION

// FUNCTION: 0x10216970 size=0x7f
#include "CPropModelState.h"
#include "CUnknown1073dc00.h"

extern CUnknown1073dc00 g_1073dc00;
extern int g_1074f150;

void CPropModelState::vfunc265(void *pActivator, void *pCaller, int useType, float value)
{
	if (!m_bLocked) {
		m_OnPressed.sub_100cd660(pActivator, this, 0);
		if (m_iState >= m_nStates - 1)
			sub_10216aa0(0, pActivator);
		else
			sub_10216aa0(m_iState + 1, pActivator);
		return;
	}
	m_OnLocked.sub_100cd660(pActivator, this, 0);
	g_1073dc00.sub_101f5950(this, g_1074f150, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10216a10 size=0x22
// TARGET: CPropModelState::vfunc34
#include "CPropModelState.h"
int CPropModelState::vfunc34(CBaseEntity *pActivator)
{
    if (m_bLocked != 0) {
        return 0;
    }
    return sub_100a7bd0(pActivator) != 0;
}
// END FUNCTION

// FUNCTION: 0x10216a50 size=0x33
#include "CPropModelState.h"
// TARGET: CPropModelState::vfunc35
int CPropModelState::vfunc35(void *pActivator)
{
	if (m_bLocked)
		return 0;
	if (!sub_100a7bd0((CBaseEntity *)pActivator))
		return 0;
	return m_n730;
}
// END FUNCTION

// FUNCTION: 0x10216aa0 size=0xd6
#include "CPropModelState.h"

extern void (__cdecl *g_109f364c)(const char *fmt, ...);	// DevWarning
extern int (__cdecl *g_109f3868)(int nMin, int nMax);	// RandomInt
extern char g_106b8540[];
extern int g_1074f14c;
extern int g_1074f150;

struct CModelStateSoundsX	// the sound object at 0x1073dc00
{
	void sub_101f5950(CBaseEntity *pEnt, int nSound, int nChannel, float flVolume, float flPitch);	// stub 0x100119fa
};
extern CModelStateSoundsX g_1073dc00;

void CPropModelState::sub_10216aa0(int index, void *pActivator)
{
	if (index < 0 || index > m_nStates) {
		g_109f364c("Unable to set %s to state %d!!\n", sub_100ab4f0(), index);
		return;
	}
	m_OnState[index].sub_100cd660(pActivator, this, 0);
	const char *pszModel = m_pStateModels[index];
	if (!pszModel)
		pszModel = g_106b8540;
	vfunc105(pszModel);
	char *pHeader = sub_100952d0(-1);
	if (pHeader)
		sub_100adf10((const float *)(pHeader + 0xb4), (const float *)(pHeader + 0xc0));
	m_iState = index;
	if (g_109f3868(0, 1))
		g_1073dc00.sub_101f5950(this, g_1074f14c, 2, 1.0f, 1.25f);
	else
		g_1073dc00.sub_101f5950(this, g_1074f150, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10216bc0 size=0x6
#include "datamap.h"
#include "CTriggerInventory.h"
namespace lifted {
extern char g_105ac944;
}
datamap_t * CTriggerInventory::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105ac944);
}
// END FUNCTION

// FUNCTION: 0x10216be0 size=0x5
int * sub_10216c20(void);
int * g_1074f128 = ((int * (*)(int))sub_10216c20)(0);
// END FUNCTION

// FUNCTION: 0x10216c20 size=0x52
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
extern int g_105ac944[2];

int *sub_10216c20()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 2, "m_iszItemName", {0x598, 0}, 1, 6, "itemname" },
        { 10, "m_OnPlayerHasItem", {0x59c, 0}, 1, 0x16, "OnPlayerHasItem", g_1055dc70 },
    };
    g_105ac944[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_105ac944[0] = (int)&dataDesc[1];
    return g_105ac944;
}
// END FUNCTION

// FUNCTION: 0x10216ca0 size=0x7a
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000d5ee(GP *);
void __fastcall sub_10002ddd(void *);
extern int vt_1047d08c;
extern int vt_1048a134;
extern char g_105aef50[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: trigger_inventory_check
DLL_EXPORT GP *trigger_inventory_check()
{
	GP *p = (GP *)sub_1000db89(0x5b4);
	if (p) {
		sub_1000d5ee(p);
		*((int *)p + 0x159) = -1;
		sub_10002ddd((char *)p + 0x568);
		sub_10002ddd((char *)p + 0x580);
		*(int **)p = &vt_1047d08c;
		sub_10002ddd((char *)p + 0x59c);
		*(int **)p = &vt_1048a134;
	} else {
		p = 0;
	}
	p->name(g_105aef50);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10216d40 size=0x10
#include "CTriggerInventory.h"

// TARGET: CTriggerInventory::vfunc103
void CTriggerInventory::vfunc103()
{
	CBaseEntity::vfunc103();
	sub_101c5080();
}
// END FUNCTION

// FUNCTION: 0x10216d60 size=0x77
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CTriggerInventory.h"
#include "CBaseCombatCharacter.h"

struct CCharItemUnit : CBaseCombatCharacter {
	int sub_10178470(const char *name);
};

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

void CTriggerInventory::vfunc174(CBaseEntity *pOther)
{
	if (sub_101c5460(pOther))
		m_out568.sub_100cd660(pOther, this, 0);
	CCharItemUnit *pChar = (CCharItemUnit *)pOther->m_pA8;
	if (pChar) {
		if (pChar->sub_10335950(STRINGR(m_pszItem)))
			m_out59c.sub_100cd660(pOther, this, 0);
		else if (pChar->sub_10178470(STRINGR(m_pszItem)) >= 0)
			m_out59c.sub_100cd660(pOther, this, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x10216e00 size=0x1e
#include "CGameText.h"

void sub_100aa7b0(void *p);

// TARGET: CGameText::vfunc5
CBaseEntity *CGameText::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
