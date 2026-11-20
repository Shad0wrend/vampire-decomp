// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1034f2a0 size=0x6
#include "CHL2_Player.h"
#include "datamap.h"
namespace lifted {
extern char g_106266e4;
}
datamap_t *CHL2_Player::vfunc82()
{
    return (datamap_t *)&lifted::g_106266e4;
}
// END FUNCTION

// FUNCTION: 0x1034f330 size=0x27
#include "CHL2_Player.h"

CHL2_Player::CHL2_Player()
{
	m_n2528 = 0;
}
// END FUNCTION

// FUNCTION: 0x1034f370 size=0x7
#include "CHL2_Player.h"
float CHL2_Player::vfunc28()
{
    return *(float *)((char *)this + 0x1c70);
}
// END FUNCTION

// FUNCTION: 0x1034f390 size=0x7
#include "CHL2_Player.h"
float CHL2_Player::vfunc29()
{
    return *(float *)((char *)this + 0x1c74);
}
// END FUNCTION

// FUNCTION: 0x1034f3b0 size=0x7
#include "CHL2_Player.h"
float CHL2_Player::vfunc30()
{
    return *(float *)((char *)this + 0x1c78);
}
// END FUNCTION

// FUNCTION: 0x1034f3d0 size=0xd
#include "CHL2_Player.h"
struct HL2PlayerField2464 { char pad[0x2464]; int m; };
void CHL2_Player::vfunc475(int value)
{
	((HL2PlayerField2464 *)this)->m = value;
}
// END FUNCTION

// FUNCTION: 0x1034f3f0 size=0x26
#include "CHL2_Player.h"

int CHL2_Player::vfunc479()
{
	if (m_n252c == 0 && *(float *)((char *)this + 0x2464) < 100.0f)
		return 1;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1034f430 size=0xd
#include "CHL2_Player.h"
struct HL2PlayerFloats { char pad[0x2534]; float a; float b; };
float CHL2_Player::vfunc480()
{
	HL2PlayerFloats *p = (HL2PlayerFloats *)this;
	return p->a - p->b;
}
// END FUNCTION

// FUNCTION: 0x1034f450 size=0xd
#include "CHL2_Player.h"
struct HL2PlayerFloats { char pad[0x2534]; float a; float b; };
float CHL2_Player::vfunc481()
{
	HL2PlayerFloats *p = (HL2PlayerFloats *)this;
	return p->b - p->a;
}
// END FUNCTION

// FUNCTION: 0x1034f470 size=0x7
#include "CHL2_Player.h"
float CHL2_Player::vfunc482()
{
    return *(float *)((char *)this + 0x253c);
}
// END FUNCTION

// FUNCTION: 0x1034f490 size=0xb
#include "CHL2_Player.h"
namespace lifted {
int sub_10008b84();
}
int CHL2_Player::vfunc483()
{
    return ((unsigned)(lifted::sub_10008b84()) >> 1) & 1;
}
// END FUNCTION

// FUNCTION: 0x1034f4b0 size=0x1e
#include "CHL2_Player.h"

void sub_100aa7b0(void *p);

// TARGET: CHL2_Player::vfunc5
CHL2_Player *CHL2_Player::vfunc5(unsigned int flags)
{
	sub_100140f1();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1034f5f0 size=0x6
#include "CHL2_Player.h"
namespace lifted {
extern char g_109383e4;
}
int CHL2_Player::vfunc80()
{
    return (int)&lifted::g_109383e4;
}
// END FUNCTION

// FUNCTION: 0x1034f610 size=0x3
#include "CHL2_Player.h"
int CHL2_Player::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1034f7f0 size=0x4f
#include "CHL2_Player.h"
// TARGET: CHL2_Player::vfunc31
void CHL2_Player::vfunc31(int pDump)
{
	sub_1009ba60(pDump, "m_HL2Local.m_flSuitPower", *(int *)&m_u2464);
	sub_1009b980(pDump, "m_bitsActiveDevices", m_n252c);
	sub_1009ba60(pDump, "m_flSuitPowerLoad", *(int *)&m_f2530);
	sub_1015e140(pDump);
}
// END FUNCTION

// FUNCTION: 0x1034f860 size=0xc4
#include "vampire_all.h"
#include "CHL2_Player.h"
#include <string.h>

struct CSpawnEngine
{
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4();
    virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
    virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14();
    virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19();
    virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23();
    virtual bool IsMultiplayer();
};

extern CSpawnEngine *g_1070ba0c;
extern CBaseEntity *g_107260ac;
extern CGlobalEntityList g_106eb5d8;
extern char g_1057c024[];
extern void (__cdecl *g_109f362c)(const char *fmt, ...);
__declspec(dllimport) void DevMsg(const char *fmt, ...);

inline const char *STRING(const int &offset) { return offset ? (const char *)offset : g_106b8540; }

CBaseEntity *CHL2_Player::vfunc453()
{
    CBaseEntity *pSpot;
    if (g_1070ba0c->IsMultiplayer()) {
        pSpot = g_106eb5d8.sub_100f7380(g_107260ac, "info_player_coop");
        if (pSpot)
            goto ReturnSpot;
        pSpot = g_106eb5d8.sub_100f7380(g_107260ac, g_1057c024);
        if (pSpot)
            goto ReturnSpot;
    }
    DevMsg("   vampmp_player_start loop didn't complete\n");
    if (!gpGlobals->m_n2c || !strlen(STRING(gpGlobals->m_n2c)))
    {
        pSpot = g_106eb5d8.sub_100f7380(0, g_1057c024);
        if (pSpot)
            goto ReturnSpot;
    }
    else
    {
        int t0; t0 = gpGlobals->m_n2c; pSpot = g_106eb5d8.sub_100f7770(0, STRING(t0), 0, 0);
        if (pSpot)
            goto ReturnSpot;
    }
ReturnSpot:
    if (!pSpot) {
        g_109f362c("PutClientInServer: no info_player_start on level\n");
        return 0;
    }
    g_107260ac = pSpot;
    return pSpot;
}
// END FUNCTION

// FUNCTION: 0x1034f970 size=0x4a
#include "CBaseEntity.h"
#include "CHL2_Player.h"
// TARGET: CHL2_Player::vfunc144
void CHL2_Player::vfunc144(int a)
{
    sub_10163af0(a);
    vfunc407();
    *(unsigned int *)((char *)this + 0x19c) |= 0x20;
    ((CBaseEntity *)this)->vfunc66();
    sub_103373e0();
    *(unsigned int *)((char *)this + 0x1ed8) |= 0x400;
}
// END FUNCTION

// FUNCTION: 0x1034fa80 size=0x216
#include <math.h>
#include "CHL2_Player.h"
#include "CBaseAnimating.h"
#include "CEntityVSlots.h"
#include "Vector.h"

float sub_101d2c70(const Vector *pVec);

static inline float Norm(float a)
{
	if (a > 180.0f)
		a -= 360.0f;
	if (a < -180.0f)
		a += 360.0f;
	return a;
}

static inline void Smooth(float &out, float target, float t)
{
	while (t > 0.0f)
	{
		out = out * 0.8f + target * (1.0f - 0.8f);
		t -= 0.1;
	}
}

void CHL2_Player::vfunc469(Vector *pTarget, float flTime)
{
	CEntityVSlots *pSlots = (CEntityVSlots *)this;

	Vector *pOrigin = pSlots->slot220();
	Vector delta = *pTarget - *pOrigin;

	float flYaw = sub_101d2c70(&delta);
	Vector *pAngles = pSlots->slot221();

	Smooth(m_fe5c, Norm(flYaw - pAngles->y), flTime);

	if (m_fe5c > 360.0f)
		m_fe5c = 0.0f;
	m_fe5c = ((CBaseAnimating *)this)->sub_10095cb0(0, m_fe5c);

	Vector vecEye;
	pSlots->slot193(&vecEye);

	float *pE60 = (float *)((char *)this + 0xe60);
	Smooth(*pE60, -((float)atan((pTarget->z - vecEye.z) / (*pTarget - vecEye).Length()) * 57.29578f), flTime);

	if (*pE60 > 360.0f)
		*pE60 = 0.0f;
	((CBaseAnimating *)this)->sub_10095cb0(1, *pE60);
}
// END FUNCTION

// FUNCTION: 0x1034fd30 size=0x14
#include "CHL2_Player.h"

#define VT(n) virtual void vt##n();
#define VT10(p) VT(p##0) VT(p##1) VT(p##2) VT(p##3) VT(p##4) VT(p##5) VT(p##6) VT(p##7) VT(p##8) VT(p##9)

struct CBaseCombatCharacterVtbl
{
	VT10(0) VT10(1) VT10(2) VT10(3) VT10(4) VT10(5) VT10(6) VT10(7) VT10(8) VT10(9)
	VT10(10) VT10(11) VT10(12) VT10(13) VT10(14) VT10(15) VT10(16) VT10(17) VT10(18) VT10(19)
	VT10(20) VT10(21) VT10(22) VT10(23) VT10(24) VT10(25) VT10(26) VT10(27) VT10(28) VT10(29)
	VT10(30) VT10(31) VT10(32) VT10(33) VT10(34) VT10(35) VT10(36)
	virtual void vt370(int a);
};

int CHL2_Player::vfunc372(int a)
{
	((CBaseCombatCharacterVtbl *)this)->vt370(a);
	return a;
}
// END FUNCTION

// FUNCTION: 0x1034fd60 size=0x14
#include "CHL2_Player.h"

#define QVS(n) virtual void q##n();
#define QVS10(p) QVS(p##0) QVS(p##1) QVS(p##2) QVS(p##3) QVS(p##4) QVS(p##5) QVS(p##6) QVS(p##7) QVS(p##8) QVS(p##9)

struct CHL2Slots371
{
	QVS10(0) QVS10(1) QVS10(2) QVS10(3) QVS10(4) QVS10(5) QVS10(6) QVS10(7) QVS10(8) QVS10(9)
	QVS10(10) QVS10(11) QVS10(12) QVS10(13) QVS10(14) QVS10(15) QVS10(16) QVS10(17) QVS10(18) QVS10(19)
	QVS10(20) QVS10(21) QVS10(22) QVS10(23) QVS10(24) QVS10(25) QVS10(26) QVS10(27) QVS10(28) QVS10(29)
	QVS10(30) QVS10(31) QVS10(32) QVS10(33) QVS10(34) QVS10(35) QVS10(36)
	QVS(370)
	virtual void s371(int a);
};

int CHL2_Player::vfunc373(int a)
{
	((CHL2Slots371 *)this)->s371(a);
	return a;
}
// END FUNCTION

// FUNCTION: 0x1034fd90 size=0x39
// TARGET: CHL2_Player::sub_1034fd90
#include "CHL2_Player.h"

void sub_1000ecd2(int a, float f);

int CHL2_Player::sub_1034fd90(int a)
{
    Vector v = vfunc367();
    sub_1000ecd2(a, v.y + m_fe5c);
    return a;
}
// END FUNCTION

// FUNCTION: 0x1034fde0 size=0x6c
#include "CHL2_Player.h"
#include "QAngle.h"

void sub_10139610(const QAngle &angles, Vector *forward, Vector *right, Vector *up);

struct SHL2PlayerView
{
	char m_pad[0xe5c];
	float m_f5c;
	float m_f60;
};

Vector CHL2_Player::vfunc371()
{
	Vector tmp = vfunc367();
	QAngle ang(((SHL2PlayerView *)this)->m_f60, tmp.y + ((SHL2PlayerView *)this)->m_f5c, 0);
	Vector fwd;
	sub_10139610(ang, &fwd, 0, 0);
	return fwd;
}
// END FUNCTION

// FUNCTION: 0x1034fe70 size=0x4e
#include "CHL2_Player.h"
#include "CUnknown1006e890.h"
struct Holder;
void *__fastcall sub_1017cf90(Holder *);
Vector CHL2_Player::vfunc196()
{
	char *pEnt = (char *)sub_1017cf90((Holder *)this);
	if (pEnt && ((CUnknown1006e890 *)pEnt)->sub_1006e890())
		return *(Vector *)(pEnt + 0x5ec);
	return sub_100b4c00();
}
// END FUNCTION

// FUNCTION: 0x10350270 size=0x9f
#include "CHL2_Player.h"

void CHL2_Player::vfunc333(int unused)
{
	Vector vecSecond;
	Vector vecFirst;
	sub_10014eb6((float *)&vecFirst, (float *)&vecSecond);
	m_vecE44 = vecSecond * 300.0f + vecFirst;
	m_vecE50 = m_vecE44;
	vfunc277(&m_vecE50);
}
// END FUNCTION

// FUNCTION: 0x10350600 size=0x5
#include "CHL2_Player.h"
#include "CBasePlayer.h"

// TARGET: CHL2_Player::vfunc104
// the game's 0x10350600: a tail call (jmp) of CBasePlayer::vfunc104
void CHL2_Player::vfunc104()
{
	((CBasePlayer *)this)->CBasePlayer::vfunc104();
}
// END FUNCTION

// FUNCTION: 0x10350830 size=0x623
#include "CEntityVSlots.h"
#include "CNPC_VTzimisce.h"
#include "CHL2_Player.h"
#include "CBasePlayer.h"
#include "CBaseEntity.h"
#include "ConVar.h"
#include "ehandle.h"
#include "globalvars.h"
#include "UTIL_Trace.h"
#include "TestBit.h"

extern ConVar *g_109ef1b4;
extern char g_1070ba2c;
extern Vector g_1070d1b0;

#define S436_V1(n) virtual void v##n();
#define S436_V10(p) S436_V1(p##0) S436_V1(p##1) S436_V1(p##2) S436_V1(p##3) S436_V1(p##4) S436_V1(p##5) S436_V1(p##6) S436_V1(p##7) S436_V1(p##8) S436_V1(p##9)

struct S436Net
{
	S436_V1(0) S436_V1(1) S436_V1(2) S436_V1(3)
	virtual int slot4();
};

struct S436Edict
{
	char pad0[0x40];
	S436Net *m_pNet40;
};

struct S436Ent
{
	S436_V10(a0) S436_V10(a1) S436_V10(a2) S436_V10(a3) S436_V10(a4) S436_V10(a5) S436_V10(a6) S436_V10(a7) S436_V10(a8) S436_V10(a9)	// 0..99
	S436_V10(b0) S436_V1(b10) S436_V1(b11) S436_V1(b12) S436_V1(b13) S436_V1(b14) S436_V1(b15) S436_V1(b16)	// 100..116
	virtual int slot117();
	S436_V1(b18) S436_V1(b19) S436_V10(b2) S436_V10(b3) S436_V10(b4) S436_V1(b50) S436_V1(b51) S436_V1(b52) S436_V1(b53) S436_V1(b54) S436_V1(b55) S436_V1(b56)	// 118..156
	virtual bool slot157(int a);
	S436_V1(b58) S436_V1(b59) S436_V10(b6) S436_V1(b70) S436_V1(b71) S436_V1(b72)	// 158..172
	virtual void slot173(void *pActivator, void *pCaller, int useType, float value);
};

struct S436
{
	char pad0[0x200];
	int m_lifeState200;
	char pad1[0x268 - 0x204];
	unsigned int m_flags268;
	char pad2[0x2e0 - 0x26c];
	S436Edict *m_pEdict2e0;
	char pad3[0x3c4 - 0x2e4];
	float m_f3c4;
	char pad4[0x3e0 - 0x3c8];
	int m_MoveType3e0;
	char pad5[0x1488 - 0x3e4];
	float m_flFrenzyRate;
	char pad6[0x1b84 - 0x148c];
	float m_flRunForwardSpeeds[8];
	float m_flRunSideSpeeds[8];
	float m_flWalkForwardSpeeds[8];
	float m_flWalkSideSpeeds[8];
	float m_flSneakForwardSpeeds[8];
	float m_flSneakSideSpeeds[8];
	char pad7[0x1c58 - 0x1c44];
	EHANDLE m_hMeleeOpponent;
	char pad8[0x1c6c - 0x1c5c];
	float m_flNextThink1c6c;
	char pad9[0x1db4 - 0x1c70];
	int m_nSpeedScaleState1DB4;
	char pad10[0x1ee8 - 0x1db8];
	float m_f1ee8;
	char pad11[0x2088 - 0x1eec];
	int m_nButtons2088;
	int m_afButtonPressed208c;
	char pad12[0x20f0 - 0x2090];
	int m_nFlags20f0;
	bool m_b20f4;
	char pad13[0x2304 - 0x20f5];
	int m_n2304;
	char pad14[0x2310 - 0x2308];
	float m_flMaxspeed;
	char pad15[0x2544 - 0x2314];
	bool m_bForceWalk;
};

void CHL2_Player::vfunc436()
{
	S436 *d = (S436 *)this;
	CBasePlayer *pl = (CBasePlayer *)this;
	CBaseEntity *pe = (CBaseEntity *)this;
	if (d->m_b20f4) {
		vfunc444();
		pl->sub_1016b270();
		pl->sub_1016b440();
		return;
	}
	if (d->m_hMeleeOpponent.Get() && !pl->vfunc412())
		d->m_hMeleeOpponent = 0;
	static ConVar sv_walkscale("sv_walkscale", "1.0", 0);
	static ConVar sv_runscale("sv_runscale", "1.0", 0);
	static ConVar sv_sneakscale("sv_sneakscale", "2.3", 0);
	if (d->m_nSpeedScaleState1DB4 > 0 && d->m_nSpeedScaleState1DB4 < 8) {
		d->m_flMaxspeed = g_109ef1b4->vfunc1() ? 0.0f : g_109ef1b4->m_fValue;
	} else {
		float flMax = 0.0f;
		sub_10350620(9, d->m_flWalkForwardSpeeds, d->m_flWalkSideSpeeds, &flMax, sv_walkscale.GetFloat());
		sub_10350620(0x13, d->m_flRunForwardSpeeds, d->m_flRunSideSpeeds, &flMax, sv_runscale.GetFloat() * d->m_flFrenzyRate);
		sub_10350620(0x12, d->m_flSneakForwardSpeeds, d->m_flSneakSideSpeeds, &flMax, sv_sneakscale.GetFloat() * d->m_flFrenzyRate);
		if (d->m_bForceWalk) {
			for (int i = 0; i < 8; i++) {
				d->m_flRunForwardSpeeds[i] = d->m_flWalkForwardSpeeds[i];
				d->m_flRunSideSpeeds[i] = d->m_flWalkSideSpeeds[i];
			}
		}
		if (flMax > 0.0f)
			d->m_flMaxspeed = flMax;
	}
	if (g_1070ba2c || d->m_n2304)
		return;
	((CEntityVSlots *)this)->slot416();
	pl->sub_10174c10();
	pl->sub_10166120();
	vfunc472();
	vfunc444();
	pl->sub_1016b270();
	pl->sub_1016b440();
	if (d->m_MoveType3e0 > 1)
		pe->sub_100b3580(0x800);
	else
		pe->sub_100b3640(0x800);
	if (d->m_MoveType3e0 == 2)
		pl->sub_10166500();
	else if (d->m_MoveType3e0 == 0)
		pe->sub_100b3640(4);
	if (d->m_lifeState200 >= 1) {
		sub_101668b0();
		return;
	}
	if (d->m_nFlags20f0 & 2)
		pe->sub_100b3580(8);
	else
		pe->sub_100b3640(8);
	if (d->m_nFlags20f0 & 2) {
		S436Ent *pGround = (S436Ent *)vfunc209();
		if (pGround && !(pGround->slot117() & 0x40))
			pGround = 0;
		if (!pGround) {
			if (sub_1032e7b0() && (((S436Ent *)sub_1032e7b0())->slot117() & 0x40))
				return;
			Vector *o = ((CEntityVSlots *)this)->slot220();
			Vector vecEnd;
			vecEnd.x = o->x;
			vecEnd.y = o->y;
			vecEnd.z = o->z - 38.0f;
			CGameTrace tr;
			UTIL_TraceLine(*((CEntityVSlots *)this)->slot220(), vecEnd, 0x1400b, this, 0, &tr);
			if (tr.m_fraction != 1.0 && tr.m_pEnt)
				pGround = (S436Ent *)tr.m_pEnt;
			if (!pGround || !(pGround->slot117() & 0x40) ||
				!pGround->slot157(d->m_pEdict2e0 && d->m_pEdict2e0->m_pNet40 ? d->m_pEdict2e0->m_pNet40->slot4() : 0)) {
				d->m_nFlags20f0 &= ~2;
				return;
			}
		} else {
			if (!(pe->sub_100b3700() & 1) || (d->m_nButtons2088 & 0x600)) {
				d->m_nFlags20f0 &= ~2;
				return;
			}
		}
		pe->sub_100b2e30((const float *)&g_1070d1b0);
		if (d->m_afButtonPressed208c & 8)
			pGround->slot173(this, this, 2, 1.0f);
		else if (d->m_afButtonPressed208c & 0x10)
			pGround->slot173(this, this, 2, -1.0f);
	}
	if (!(pe->sub_100b3700() & 1)) {
		if (TestBit(d->m_flags268, 12))
			pe->sub_100b1d10();
		d->m_f1ee8 = -d->m_f3c4;
	}
	if (gpGlobals->curtime >= d->m_flNextThink1c6c) {
		vfunc471();
		d->m_flNextThink1c6c = gpGlobals->curtime + 0.1f;
	}
	vfunc470();
	vfunc484();
}
// END FUNCTION

// FUNCTION: 0x10351050 size=0x10
#include "CHL2_Player.h"

int CHL2_Player::vfunc138()
{
	int n = *(int *)((char *)this + 0x2460);
	if (!n)
		n = 1;
	return n;
}
// END FUNCTION

// FUNCTION: 0x10351070 size=0x5
#include "CHL2_Player.h"
bool CHL2_Player::vfunc366(int a0, int a1, int a2)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10351090 size=0x196
#include "CHL2_Player.h"
#include "CBasePlayer.h"
#include "CUserCmd.h"

void CHL2_Player::vfunc462(void *pCmd, void *pExtra)
{
	CUserCmd *ucmd = (CUserCmd *)pCmd;
	CBasePlayer *pPlayer = (CBasePlayer *)this;
	pPlayer->sub_1016b0e0(ucmd->m_n34);
	if (pPlayer->m_hControllerNPC1db0.Get()) {
		if (!pPlayer->m_b1EDC) {
			ucmd->Reset();
		} else {
			ucmd->forwardmove = 0;
			ucmd->sidemove = 0;
			ucmd->upmove = 0;
		}
	}
	if (ucmd->forwardmove == 0 && ucmd->sidemove == 0 && ucmd->upmove == 0) {
		m_flIdleTime += ucmd->frametime;
		if (m_flIdleTime > 4.0f)
			m_flIdleTime = 4.0f;
		m_flMoveTime -= ucmd->frametime * 2;
		if (m_flMoveTime < 0)
			m_flMoveTime = 0;
	} else {
		m_flIdleTime -= ucmd->frametime * 2;
		if (m_flIdleTime < 0)
			m_flIdleTime = 0;
		m_flMoveTime += ucmd->frametime;
		if (m_flMoveTime > 4.0f)
			m_flMoveTime = 4.0f;
	}
	pPlayer->sub_1016af80(pCmd, pExtra);
}
// END FUNCTION

// FUNCTION: 0x103512a0 size=0x51
#include "CBaseEntity.h"
#include "CHL2_Player.h"
struct SSub36c {
	virtual void v0();
	virtual bool vfunc1();
};

// TARGET: CHL2_Player::vfunc175
void CHL2_Player::vfunc175(CBaseEntity *pEnt)
{
	CHL2_Player *pOther = (CHL2_Player *)pEnt;
	if (pEnt != vfunc209()) {
		if (pOther->vfunc94() == 7 && pOther->vfunc92() == 6) {
			SSub36c *p = *(SSub36c **)((char *)pEnt + 0x36c);
			if (p && !p->vfunc1())
				*((char *)this + 0x2128) = 1;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10351390 size=0x73
#include "CHL2_Player.h"
#include "CBasePlayer.h"
#include "CUnknown1015ef20.h"

void CHL2_Player::vfunc103()
{
	*((char *)this + 0x2544) = 0;
	int flags;
	if (((CUnknown1015ef20 *)this)->sub_1015eec0() && !sub_1015ef80()) {
		vfunc408();
		flags = *(int *)((char *)this + 0x19c) & ~0x20;
	} else {
		vfunc407();
		flags = *(int *)((char *)this + 0x19c) | 0x20;
	}
	*(int *)((char *)this + 0x19c) = flags;
	sub_1016d260();
	*(int *)((char *)this + 0x1c6c) = 0;
	if (vfunc406())
		((CBasePlayer *)this)->sub_1015efa0();
}
// END FUNCTION

// FUNCTION: 0x10351430 size=0xa3
#include "CHL2_Player.h"

struct SCollisionSlots
{
	virtual void v0();
	virtual int GetMins();	// slot 1
	virtual int GetMaxs();	// slot 2
};

struct SPlayerObject
{
	virtual void v0();
	virtual void v1();
	virtual void v2(const char *p);
};

int sub_1002dfe0(int a, int b);
void __fastcall sub_100132c8(CHL2_Player *self);
extern char g_1093827c[];

void CHL2_Player::vfunc468()
{
	sub_100132c8(this);
	if (*(int *)((char *)this + 0x2104) == 0 && *(int *)((char *)this + 0x2108) == 0) {
		SCollisionSlots *pCollision = (SCollisionSlots *)((char *)this + 0x270);
		int mins = pCollision->GetMins();
		int maxs = pCollision->GetMaxs();
		sub_1002dfe0(mins, maxs);
		float hullMins[3];
		float hullMaxs[3];
		hullMaxs[0] = 16.0f;
		hullMaxs[1] = 16.0f;
		hullMaxs[2] = 36.0f;
		hullMins[0] = -16.0f;
		hullMins[1] = -16.0f;
		hullMins[2] = 0.0f;
		sub_1002dfe0((int)hullMins, (int)hullMaxs);
		SPlayerObject *pObj = *(SPlayerObject **)((char *)this + 0x2100);
		if (pObj)
			pObj->v2(g_1093827c);
	}
}
// END FUNCTION

// FUNCTION: 0x10351530 size=0x5
#include "CHL2_Player.h"
#include "CBasePlayer.h"

// TARGET: CHL2_Player::vfunc451
// the game's 0x10351530: a tail call (jmp) of CBasePlayer::vfunc451
void CHL2_Player::vfunc451(int a0)
{
	((CBasePlayer *)this)->CBasePlayer::vfunc451(a0);
}
// END FUNCTION

// FUNCTION: 0x10351550 size=0x1c
#include "CHL2_Player.h"
#include "CBaseCombatCharacter.h"

char CHL2_Player::vfunc86(int a, int b, int c, int d, int e)
{
	if (b == *(int *)((char *)this + 0x2e0))
		return 1;
	return ((CBaseCombatCharacter *)this)->CBaseCombatCharacter::vfunc86(a, b, c, d, e);
}
// END FUNCTION

// FUNCTION: 0x103517e0 size=0x4ea
#include "CNPC_VTzimisce.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CHL2_Player.h"
#include "CBasePlayer.h"
#include "CVFeat_t.h"
#include "ConVar.h"
#include "CCollisionProperty.h"
#include "Tier1.h"

struct CPartition471
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
	virtual void SuppressLists(int nListMask, bool bSuppress);
};

struct CWeaponView471
{
	char m_pad0000[0x11c];
	const char *m_iClassname;
	char m_pad0120[0x871 - 0x120];
	char m_b871;
	char sub_102585f0();
};

struct CUnkView471
{
	char sub_101672d0();
};

extern CPartition471 *g_1070b24c;
extern ConVar g_10938358;
extern ConVar g_10938310;
extern ConVar g_109384d8;
extern ConVar g_109383a0;
extern float g_1093851c;
extern float g_106262c0[][11];
extern float g_106264a8[][11];
extern float g_1062668c[];
extern float g_106266b8[];
extern "C" int _strcmpi(const char *, const char *);

inline const char *STRINGR(const char *const &s) { return s ? s : (const char *)g_106b8540; }

#define clamp(val, min, max) (((val) > (max)) ? (max) : (((val) < (min)) ? (min) : (val)))

// TARGET: CHL2_Player::vfunc471
void CHL2_Player::vfunc471()
{
	CBasePlayer *pPlayer = (CBasePlayer *)this;
	bool bValid = true;

	if (!engine->vfunc3())
		return;

	int nStealth = ((CVFeatSet *)&g_10739d20)->Lookup(1)->sub_101e56e0(this);
	if (nStealth > 10)
		nStealth = 10;

	if (!(sub_100b3700() & 2) || ((CUnkView471 *)this)->sub_101672d0())
		bValid = false;

	CWeaponView471 *pWeapon = (CWeaponView471 *)sub_1032e7b0();
	if (pWeapon && pWeapon->sub_102585f0() && pWeapon->m_b871 && !_strcmpi(STRINGR(pWeapon->m_iClassname), "item_w_torch"))
	{
		pPlayer->m_f1C8C = 1.0f;
	}
	else
	{
		Vector vecMins, vecMaxs, vecFeet, vecHead;
		CCollisionProperty *pColl = (CCollisionProperty *)&pPlayer->Sub270();
		pColl->sub_100dcd90(&pColl->m_vecMins.x, &pColl->m_vecMaxs.x, &vecMins.x, &vecMaxs.x);
		Vector vecCenter = pPlayer->vfunc192();

		g_1070b24c->SuppressLists(4, false);
		switch (pPlayer->m_nNextLightPositionTest)
		{
		case 1:
			pPlayer->m_nNextLightPositionTest = 2;
			pPlayer->m_flLightOnCenter = engine->vfunc118(vecCenter);
			break;
		case 2:
			vecHead.Init(vecCenter.x, vecCenter.y, vecMins.z * 0.125f + vecMaxs.z * 0.875f);
			pPlayer->m_nNextLightPositionTest = 0;
			pPlayer->m_flLightOnHead = engine->vfunc118(vecHead);
			break;
		default:
			vecFeet.Init(vecCenter.x, vecCenter.y, vecMins.z * 0.875f + vecMaxs.z * 0.125f);
			pPlayer->m_nNextLightPositionTest = 1;
			pPlayer->m_flLightOnFeet = engine->vfunc118(vecFeet);
			break;
		}
		g_1070b24c->SuppressLists(4, true);

		pPlayer->m_f1C8C = (pPlayer->m_flLightOnHead + pPlayer->m_flLightOnCenter + pPlayer->m_flLightOnFeet) * 0.083325f;
		pPlayer->m_f1C8C = clamp(pPlayer->m_f1C8C, g_10938310.GetFloat(), g_10938358.GetFloat());
		pPlayer->m_f1C8C -= g_10938310.GetFloat();
		pPlayer->m_f1C8C /= g_10938358.GetFloat() - g_10938310.GetFloat();
	}

	if (g_109384d8.GetInt() >= 0)
		pPlayer->m_f1C8C = g_109384d8.GetFloat() * 0.1f;

	int nLight = 0;
	if (!(pPlayer->m_f1C8C >= 1.0f))
	{
		for (nLight = 0; nLight < 10; nLight++)
		{
			if (!(pPlayer->m_f1C8C <= g_106266b8[nLight]))
				break;
		}
	}

	if (g_109383a0.GetFloat() != 0.0f && gpGlobals->curtime >= g_1093851c)
	{
		g_1093851c = g_109383a0.GetFloat() + gpGlobals->curtime;
		g_109f3630("%6.3f feet %6.3f cent %6.3f head -> %6.3f -> %d\n",
			pPlayer->m_flLightOnFeet, pPlayer->m_flLightOnCenter, pPlayer->m_flLightOnHead, pPlayer->m_f1C8C, nLight);
	}

	pPlayer->m_flStealthVisionScalar = g_106262c0[nLight][nStealth];
	pPlayer->m_flStealthHearingDist = g_1062668c[nStealth];
	pPlayer->m_flStealthVisionCone = g_106264a8[nLight][nStealth];
	pPlayer->m_n1C98 = nLight;
	pPlayer->m_n1C94 = nStealth;

	if (!bValid)
	{
		pPlayer->m_f1C8C = -1.0f;
		pPlayer->m_flStealthVisionScalar = 1.0f;
		pPlayer->m_flStealthHearingDist = g_1062668c[0];
		pPlayer->m_flStealthVisionCone = g_106264a8[0][0];
	}
}
// END FUNCTION

// FUNCTION: 0x10351e10 size=0x263
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CBaseCombatCharacter.h"
#include "CBasePlayer.h"
#include "CHL2_Player.h"
#include "CVFeat_t.h"
#include "engineserver.h"
#include "ConVar.h"

struct ConVarView7c
{
	virtual void v0();
	virtual char vfunc1();
	char m_pad[0x28 - 4];
	float m_f28;
	int m_n2c;
};

#define LV1(p) virtual void p();
#define LV10(p) LV1(p##0) LV1(p##1) LV1(p##2) LV1(p##3) LV1(p##4) LV1(p##5) LV1(p##6) LV1(p##7) LV1(p##8) LV1(p##9)
#define LV100(p) LV10(p##0) LV10(p##1) LV10(p##2) LV10(p##3) LV10(p##4) LV10(p##5) LV10(p##6) LV10(p##7) LV10(p##8) LV10(p##9)

struct CharView351e10
{
	LV100(a) LV10(b) LV1(c0) LV1(c1) LV1(c2) LV1(c3) LV1(c4) LV1(c5)
	virtual char vfunc116();
	LV10(d) LV10(e) LV10(f) LV10(g) LV1(h0)
	virtual char vfunc158();
	LV100(i) LV100(j) LV10(k) LV10(l) LV10(m) LV10(n) LV1(o0) LV1(o1) LV1(o2) LV1(o3) LV1(o4)
	virtual int vfunc404(CBasePlayer *pPlayer);
	char m_pad0004[0x2e0 - 4];
	int m_nEdict2e0;
	char sub_10269aa0(int a);
	const char *sub_100ab4f0();
};

struct EntView351e10
{
	char m_pad0000[0x98];
	CharView351e10 *m_pChar98;
};

extern ConVar g_1070b078;
extern ConVar g_10938358;
extern ConVar g_10938310;
void __cdecl sub_10119750(const char *fmt, ...);
EntView351e10 *__cdecl sub_101d1d10(CBasePlayer *pPlayer, EntView351e10 *pPrev);


// TARGET: CHL2_Player::vfunc470
void CHL2_Player::vfunc470()
{
	if (!g_1070b078.GetBool())
		return;
	CBasePlayer *pPlayer = (CBasePlayer *)this;
	sub_10119750("World light on Player: %f", engine->vfunc118(pPlayer->vfunc192()));
	sub_10119750("World Min: %.2f   Max: %.2f   Scale: %.2f", g_10938310.GetFloat(), g_10938358.GetFloat(), g_10938358.GetFloat() - g_10938310.GetFloat());
	sub_10119750("Player Light Level: %f", pPlayer->m_f1C8C);
	CVFeat_t *pFeat = CVFeatSet::Find(1);
	sub_10119750("Stealth modifier: %d Stealth total:%d", ((CBaseCombatCharacter *)pPlayer)->sub_1032fab0(), pFeat->sub_101e56e0(pPlayer));
	sub_10119750("Hostile / Frightened NPCs that can see the player:");
	for (EntView351e10 *pEnt = sub_101d1d10(pPlayer, 0); pEnt; pEnt = sub_101d1d10(pPlayer, pEnt)) {
		CharView351e10 *pNPC = pEnt->m_pChar98;
		if (pNPC && pNPC->sub_10269aa0(0x5a) && pNPC->vfunc158() && !pNPC->vfunc116()
			&& (pNPC->vfunc404(pPlayer) == 1 || pNPC->vfunc404(pPlayer) == 2)) {
			int nIndex = engine->vfunc35(pNPC->m_nEdict2e0);
			const char *pszName = pNPC->sub_100ab4f0();
			sub_10119750("(%d) - %s", nIndex, pszName);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10352120 size=0x61c
template <class T> __forceinline T pcd_stage(T x) { return x; }
#include "CBaseEntity.h"
#include "CEHandleGet.h"
#include "CLogicAuto.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "utlrbtree.h"
#include "CHL2_Player.h"
#include "CBasePlayer.h"
#include "CUnknown1006e890.h"
#include "CBCCSlotViews.h"
#include "Vector.h"
#include "ehandle.h"

extern float g_104454c4;

void sub_1018c600();
void sub_10115980(void *pOwner, int a);

struct CPlayerFadeOut
{
	char m_pad0000[0x1f2c];
	Vector m_vec1F2C;
	Vector m_vec1F38;
	float m_fl1F44;
	float m_fl1F48;
	float m_fl1F4C;
	float m_fl1F50;
	float m_fl1F54;
};

struct CUseEntityView
{
	char m_pad0000[0x5ec];
	Vector m_vec5ec;
};

struct CEHandleListView
{
	IHandleEntity *sub_100290c0(const CBaseHandle *h);
};

inline CBaseEntity *LookupFade(const CBaseHandle *h)
{
	return (CBaseEntity *)((CEHandleListView *)EHandleDetail::g_10566458)->sub_100290c0(h);
}

class CEngine430View
{
public:
	VIEW_SLOT100(0)
	virtual void vfunc100(int a);
	virtual void vfunc101(const Vector *p);
};

// TARGET: CHL2_Player::vfunc430
void CHL2_Player::vfunc430(int a1, int a2)
{
	CBasePlayer *p = (CBasePlayer *)this;
	CPlayerFadeOut *o = (CPlayerFadeOut *)pcd_stage(this);

	o->m_fl1F50 = p->m_flFadeStart19B8;
	o->m_fl1F54 = p->m_flFadeDuration19BC;

	if (p->sub_1017d900() > g_104454c4)
	{
		o->m_fl1F4C = engine->vfunc119(0);
		float flBlend[2] = { 0.0f, 0.0f };
		float flTime = engine->vfunc119(0);

		if (LookupFade(&p->m_hFadeEnt19C0))
		{
			LookupFade(&p->m_hFadeEnt19C0)->vfunc50(&o->m_vec1F2C);
			o->m_fl1F44 = p->m_hFadeEnt19C0.Get()->vfunc49();
			o->m_fl1F48 = p->m_hFadeEnt19C0.Get()->vfunc48();

			*(flBlend + 0) = 1.0f;
			if (p->m_flFadeValue19C8 > g_104454c4)
			{
				flBlend[0] = (flTime - p->m_flFadeTime19C4) / p->m_flFadeValue19C8;
				if (flBlend[0] > 1.0f)
					flBlend[0] = 1.0f;
				else if (flBlend[0] < g_104454c4)
					flBlend[0] = 0.0f;
			}
		}

		if (p->m_hFadeEnt19CC.Get())
		{
			Vector *pOrigin = p->m_hFadeEnt19C0.Get() ? &o->m_vec1F2C : &p->vfunc193();

			p->m_hFadeEnt19CC.Get()->vfunc51(pcd_stage((int)pOrigin), &o->m_vec1F38);

			flBlend[1] = 1.0f;
			if (p->m_flFadeValue19D4 > g_104454c4)
			{
				flBlend[1] = (flTime - p->m_flFadeTime19D0) / p->m_flFadeValue19D4;
				if (flBlend[1] > 1.0f)
					flBlend[1] = 1.0f;
				else if (flBlend[1] < g_104454c4)
					flBlend[1] = 0.0f;
			}
		}

		int i = 0;
		while (i < p->FadeStack().Count())
		{
			CBasePlayerFadeRec *pRec = &p->FadeStack()[i];

			if (flBlend[(unsigned char)pcd_stage(pRec->m_bType)] >= 1.0f || !pRec->m_hEnt.Get())
			{
				p->FadeStack().Remove(i);
				continue;
			}

			float flRec = 1.0f;
			if (pRec->m_flValue > g_104454c4)
			{
				flRec = ((((flTime - pRec->m_flTime)))) / pRec->m_flValue;
				if (flRec > 1.0f)
					flRec = 1.0f;
				else if (flRec < g_104454c4)
					flRec = 0.0f;
			}

			if (pRec->m_bType == 0)
			{
				Vector v;
				pRec->m_hEnt.Get()->vfunc50(&v);
				VectorLerp(v, o->m_vec1F2C, flBlend[0], o->m_vec1F2C);

				float f48 = pRec->m_hEnt.Get()->vfunc48();
				o->m_fl1F48 = f48 + (o->m_fl1F48 - f48) * pcd_stage(flBlend[0]);

				float f49; f49 = pRec->m_hEnt.Get()->vfunc49();
				o->m_fl1F44 = ((o->m_fl1F44 - f49) * flBlend[0]) + f49;
			}
			else
			{
				Vector v;
				pRec->m_hEnt.Get()->vfunc51((int)&o->m_vec1F2C, &v);
				VectorLerp(v, o->m_vec1F38, flBlend[1], o->m_vec1F38);
			}

			flBlend[(unsigned char)pRec->m_bType] = 1.0f - (1.0f - flRec) * (1.0f - flBlend[(unsigned char)pRec->m_bType]);
			i++;
		}

		((CEngine430View *)engine)->vfunc101(&o->m_vec1F2C);
	}

	CBaseEntity *pUse = p->sub_1000306c();
	if (pUse)
	{
		if (((CUnknown1006e890 *)pUse)->sub_1006e890())
		{
			((CEngine430View *)engine)->vfunc100(a1);
			Vector v = ((CUseEntityView *)pUse)->m_vec5ec;
			((CEngine430View *)engine)->vfunc101(&v);
			return;
		}
	}

	p->vfunc430(a1, a2);
	sub_1018c600();
	sub_10115980((void *)p->m_pEdict2e0, a1);
}
// END FUNCTION

// FUNCTION: 0x103528d0 size=0x70
#include "CHL2_Player.h"

void CHL2_Player::vfunc472()
{
    if ((char)vfunc479()) {
        vfunc474(gpGlobals->frametime * 4.2);
    } else if (m_n252c != 0) {
        if (!vfunc473(m_f2530 * gpGlobals->frametime)) {
            if (vfunc445() != 0)
                vfunc447();
        }
    }
}
// END FUNCTION

// FUNCTION: 0x10352960 size=0x19
#include "CHL2_Player.h"
int CHL2_Player::vfunc476()
{
    *(int *)((char *)this + 0x2464) = 0x42c80000;
    *(int *)((char *)this + 0x252c) = 0;
    *(int *)((char *)this + 0x2530) = 0;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10352990 size=0x31
#include "CHL2_Player.h"

bool CHL2_Player::vfunc473(float flDelta)
{
    float *pTime = (float *)((char *)this + 0x2464);
    *pTime = *pTime - flDelta;
    if (*pTime < 0.0) {
        *pTime = 0.0f;
        return false;
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x103529e0 size=0x2c
#include "CHL2_Player.h"

// TARGET: CHL2_Player::vfunc474
void CHL2_Player::vfunc474(float value)
{
    float *pAmount = (float *)((char *)this + 0x2464);
    float f = value + *pAmount;
    *pAmount = f;
    if (f > 100.0) {
        *pAmount = 100.0f;
    }
}
// END FUNCTION

// FUNCTION: 0x10352a20 size=0x3e
#include "CHL2_Player.h"

extern int g_109f3628;

// TARGET: CHL2_Player::vfunc477
void CHL2_Player::vfunc477(unsigned int *pPower)
{
    if ((m_n252c & pPower[0]) != 0) {
        ((void (*)(const char *))g_109f3628)("SUIT POWER TRIED TO ADD A DUPLICATE DEVICE\n");
        return;
    }
    m_n252c = pPower[0] | m_n252c;
    float flAmount = *(float *)&pPower[1];
    m_f2530 = flAmount + m_f2530;
}
// END FUNCTION

// FUNCTION: 0x10352a70 size=0x40
#include "CHL2_Player.h"

extern int g_109f3628;

// TARGET: CHL2_Player::vfunc478
void CHL2_Player::vfunc478(unsigned int *pPower)
{
    if ((m_n252c & pPower[0]) == 0) {
        ((void (*)(const char *))g_109f3628)("SUIT POWER TRIED TO REMOVE AN INACTIVE DEVICE\n");
        return;
    }
    m_n252c = ~pPower[0] & m_n252c;
    float flAmount = *(float *)&pPower[1];
    m_f2530 = m_f2530 - flAmount;
}
// END FUNCTION

// FUNCTION: 0x10352b50 size=0xf2
#include "CTakeDamageInfo.h"
#include "CHL2_Player.h"
#include "CVDmg_t.h"
#include "ConVar.h"
#include "CUnknown1070b244.h"
struct SDamageView { CVDmg_t *m_pDmg; char m_pad[0x2c]; float m_flDamage; };
extern ConVar *g_109382cc;
extern CUnknown1070b244 *g_1070b244;
int CHL2_Player::vfunc142(const CTakeDamageInfo *pInfo)
{
    const SDamageView *pDamage = (const SDamageView *)pInfo;
    float flDamage = pDamage->m_pDmg ? (float)pDamage->m_pDmg->sub_101faa70() : pDamage->m_flDamage;
    if (flDamage > 0.0f)
    {
        m_flLastDamageTime = gpGlobals->curtime;
        float flAmount = pDamage->m_pDmg ? (float)pDamage->m_pDmg->sub_101faa70() : pDamage->m_flDamage;
        float flScale = g_109382cc->vfunc1() ? 0.0f : g_109382cc->m_fValue;
        flAmount = flScale * flAmount;
        Vector punch;
        punch.x = g_1070b244->vfunc1(-flAmount, flAmount);
        punch.y = g_1070b244->vfunc1(-flAmount, flAmount);
        punch.z = g_1070b244->vfunc1(-flAmount, flAmount);
        vfunc169(&punch);
    }
    return sub_10163020(pInfo);
}
// END FUNCTION

// FUNCTION: 0x10352c90 size=0x1
#include "CHL2_Player.h"
void CHL2_Player::vfunc484()
{
}
// END FUNCTION

// FUNCTION: 0x10352cb0 size=0x5
#include "CHL2_Player.h"
bool CHL2_Player::vfunc485(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10352cd0 size=0x77
#include "CHL2_Player.h"

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CGameRulesView {
	S10(a0) S10(a1)
	virtual int vfunc20(void *pPlayer, void *pWeapon);
};
extern CGameRulesView *g_1070ba0c;

struct CHL2WeaponView {
	char sub_10253b40(int a);
};

int CHL2_Player::vfunc374(int count, int ammoIndex, int unused)
{
	bool bNoAmmo = false;
	CHL2WeaponView *pWeapon = (CHL2WeaponView *)sub_1032e7b0();
	if (pWeapon && pWeapon->sub_10253b40(0) && sub_103346c0(ammoIndex) == 0)
		bNoAmmo = true;
	int result = sub_10334180(count, ammoIndex, unused);
	if (bNoAmmo && g_1070ba0c->vfunc20(this, pWeapon))
		sub_10334860(sub_1032e7b0());
	return result;
}
// END FUNCTION
