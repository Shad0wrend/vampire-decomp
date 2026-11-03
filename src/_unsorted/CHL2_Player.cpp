// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1034f2a0 size=0x6
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
float CHL2_Player::vfunc28()
{
    return *(float *)((char *)this + 0x1c70);
}
// END FUNCTION

// FUNCTION: 0x1034f390 size=0x7
float CHL2_Player::vfunc29()
{
    return *(float *)((char *)this + 0x1c74);
}
// END FUNCTION

// FUNCTION: 0x1034f3b0 size=0x7
float CHL2_Player::vfunc30()
{
    return *(float *)((char *)this + 0x1c78);
}
// END FUNCTION

// FUNCTION: 0x1034f3d0 size=0xd
struct HL2PlayerField2464 { char pad[0x2464]; int m; };
void CHL2_Player::vfunc475(int value)
{
	((HL2PlayerField2464 *)this)->m = value;
}
// END FUNCTION

// FUNCTION: 0x1034f430 size=0xd
struct HL2PlayerFloats { char pad[0x2534]; float a; float b; };
float CHL2_Player::vfunc480()
{
	HL2PlayerFloats *p = (HL2PlayerFloats *)this;
	return p->a - p->b;
}
// END FUNCTION

// FUNCTION: 0x1034f450 size=0xd
struct HL2PlayerFloats { char pad[0x2534]; float a; float b; };
float CHL2_Player::vfunc481()
{
	HL2PlayerFloats *p = (HL2PlayerFloats *)this;
	return p->b - p->a;
}
// END FUNCTION

// FUNCTION: 0x1034f470 size=0x7
float CHL2_Player::vfunc482()
{
    return *(float *)((char *)this + 0x253c);
}
// END FUNCTION

// FUNCTION: 0x1034f490 size=0xb
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
namespace lifted {
extern char g_109383e4;
}
int CHL2_Player::vfunc80()
{
    return (int)&lifted::g_109383e4;
}
// END FUNCTION

// FUNCTION: 0x1034f610 size=0x3
int CHL2_Player::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1034f7f0 size=0x4f
// TARGET: CHL2_Player::vfunc31
void CHL2_Player::vfunc31(int pDump)
{
	sub_1009ba60(pDump, "m_HL2Local.m_flSuitPower", *(int *)&m_u2464);
	sub_1009b980(pDump, "m_bitsActiveDevices", m_n252c);
	sub_1009ba60(pDump, "m_flSuitPowerLoad", *(int *)&m_f2530);
	sub_1015e140(pDump);
}
// END FUNCTION

// FUNCTION: 0x1034f970 size=0x4a
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
bool CHL2_Player::vfunc366(int a0, int a1, int a2)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103512a0 size=0x51
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
		((CBasePlayer *)this)->vfunc103();
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

// FUNCTION: 0x103528d0 size=0x70
#include "CHL2_Player.h"

void CHL2_Player::vfunc472()
{
    if (vfunc479()) {
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
void CHL2_Player::vfunc484()
{
}
// END FUNCTION

// FUNCTION: 0x10352cb0 size=0x5
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
