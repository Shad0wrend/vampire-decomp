// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102341d0 size=0x6
#include "CWeaponRanged.h"
namespace lifted {
extern char g_10751cf0;
}
int CWeaponRanged::vfunc80()
{
    return (int)&lifted::g_10751cf0;
}
// END FUNCTION

// FUNCTION: 0x102341f0 size=0x3
#include "CWeaponRanged.h"
int CWeaponRanged::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102343a0 size=0x6
extern char g_105b6bc8[];

// TARGET: sub_102343a0
void *sub_102343a0()
{
	return g_105b6bc8;
}
// END FUNCTION

// FUNCTION: 0x10234430 size=0x6
extern char g_105b6c90[];

// TARGET: sub_10234430
void *sub_10234430()
{
	return g_105b6c90;
}
// END FUNCTION

// FUNCTION: 0x10234450 size=0x6
// TARGET: sub_10234450
int sub_10234450()
{
	return 1;
}
// END FUNCTION

// FUNCTION: 0x102347c0 size=0x6
// TARGET: sub_102347c0
int sub_102347c0()
{
	return 0x2000;
}
// END FUNCTION

// FUNCTION: 0x102347e0 size=0xb
#include "CWeaponRanged.h"

const Vector &CWeaponRanged::vfunc331()
{
	return *(const Vector *)((char *)sub_102517e0() + 0x3ac);
}
// END FUNCTION

// FUNCTION: 0x10234800 size=0x3
// TARGET: sub_10234800
char sub_10234800() {
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10238070 size=0x7f
#include "CWeaponRanged.h"

struct CWeaponRangedFields {
    char pad0000[0x778];
    int m_n778;
    char pad077c[0x86c - 0x77c];
    int m_n86c;
    char m_b870;
    char m_b871;
    char pad0872[0x878 - 0x872];
    int m_n878;
    char pad087c[0x8b4 - 0x87c];
    char m_b8b4;
    char pad08b5[3];
    float m_f8b8;
    float m_f8bc;
    float m_f8c0;
    float m_f8c4;
    char pad08c8[0x910 - 0x8c8];
    float m_f910;
    int m_n914;
};

CWeaponRanged::CWeaponRanged()
{
    CWeaponRangedFields *p = (CWeaponRangedFields *)this;
    p->m_n86c = 0;
    p->m_f910 = gpGlobals->curtime;
    p->m_f8b8 = 150.0f;
    p->m_f8c0 = 1024.0f;
    p->m_f8bc = 65.0f;
    p->m_f8c4 = 300.0f;
    p->m_n914 = -1;
    p->m_n778 = 3;
    char *pb = &p->m_b870;
    *pb = 1;
    p->m_b871 = 1;
    p->m_b8b4 = 1;
    p->m_n878 = -1;
}
// END FUNCTION

// FUNCTION: 0x10238110 size=0x1e
#include "CWeaponRanged.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponRanged::vfunc5
CWeaponRanged *CWeaponRanged::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10238140 size=0x5
#include "CWeaponRanged.h"
#include "CBaseCombatWeapon.h"

// TARGET: CWeaponRanged::vfunc104
// the game's 0x10238140: a tail call (jmp) of CBaseCombatWeapon::vfunc104
void CWeaponRanged::vfunc104()
{
	((CBaseCombatWeapon *)this)->CBaseCombatWeapon::vfunc104();
}
// END FUNCTION

// FUNCTION: 0x10238160 size=0x99
#include "CWeaponRanged.h"

extern "C" int atoi(const char *);
extern int g_1088aee4;

// TARGET: CWeaponRanged::vfunc370
void CWeaponRanged::vfunc370(int *event, void *other)
{
	switch (event[0])
	{
	case 0xbd6: case 0xbd7: case 0xbd8: case 0xbd9: case 0xbda: case 0xbdb: case 0xbdc: case 0xbdd:
	case 0xbde: case 0xbdf: case 0xbe0: case 0xbe1: case 0xbe2: case 0xbe3: case 0xbe4:
		if (g_1088aee4 != 0 && *(int *)((char *)other + 0xa8) != 0)
		{
			sub_10238380();
			return;
		}
		sub_10238320();
		return;
	case 0xfa1:
		sub_10093b10(atoi((const char *)event[1]), 1);
		return;
	case 0xfa2:
		sub_10093b10(atoi((const char *)event[1]), 0);
		return;
	}
	sub_1024f030(event, other);
}
// END FUNCTION

// FUNCTION: 0x10238230 size=0x8d
#include "CWeaponRanged.h"
#include "CBaseCombatWeapon.h"


struct COwnerObj_t
{
	void vfunc410();
};

extern int g_1088aee4;

typedef void (CWeaponRanged::*Fn6Int)(int, int, int, int, int, int);
typedef void (CWeaponRanged::*Fn1Int)(int);
typedef float (CWeaponRanged::*FnFloat)();
typedef void (COwnerObj_t::*FnOwner)();

#define WR_VSLOT(Type, obj, slot) (*(Type *)&(*(void ***)(obj))[slot])

void CWeaponRanged::vfunc291()
{
	(this->*WR_VSLOT(Fn6Int, this, 333))(0xc, 1, 0, 0, 0, 0);
	if (*(int *)((char *)this + 0x86c) == 0)
		(this->*WR_VSLOT(Fn1Int, this, 307))(0xc4);
	else
		(this->*WR_VSLOT(Fn1Int, this, 307))(0xe5);
	*(float *)((char *)this + 0x910) = (this->*WR_VSLOT(FnFloat, this, 332))() + gpGlobals->curtime;
	((float *)((char *)this + 0x730))[g_1088aee4] = (this->*WR_VSLOT(FnFloat, this, 332))() + gpGlobals->curtime;
	COwnerObj_t *pOwner = (COwnerObj_t *)((CBaseCombatWeapon *)this)->sub_10252290();
	if (pOwner)
		(pOwner->*WR_VSLOT(FnOwner, pOwner, 410))();
}
// END FUNCTION

// FUNCTION: 0x102382f0 size=0x12
extern int g_1088aee4;
void __stdcall sub_102383b0(int a);
void sub_102382f0()
{
	g_1088aee4 = 0;
	sub_102383b0(0);
}
// END FUNCTION

// FUNCTION: 0x10238350 size=0x12
namespace lifted {
extern int g_1088aee4;
int __stdcall sub_10010ab9(int);
}

void sub_10238350()
{
	lifted::g_1088aee4 = 1;
	lifted::sub_10010ab9(0);
}
// END FUNCTION

// FUNCTION: 0x10238580 size=0x1b6
#include "CWeaponRanged.h"
extern int g_1088aee4;
const char *__fastcall sub_100ab4f0(void *p);
char *sub_101d3730(const char *fmt, ...);

#define H10(p) CWR_V10(p)
#define H100(p) H10(p##0) H10(p##1) H10(p##2) H10(p##3) H10(p##4) H10(p##5) H10(p##6) H10(p##7) H10(p##8) H10(p##9)

struct TV {
	CWR_V(0) CWR_V(1) CWR_V(2) CWR_V(3) CWR_V(4) CWR_V(5) CWR_V(6) CWR_V(7) CWR_V(8) CWR_V(9)
	H10(1) H10(2) H10(3) H10(4) H10(5) H10(6) H10(7) H10(8) H10(9)
	H100(1) H100(2)
	CWR_V(300) CWR_V(301) CWR_V(302) CWR_V(303) CWR_V(304) CWR_V(305) CWR_V(306)
	virtual void vfunc307(int v);
	CWR_V(308) CWR_V(309)
	CWR_V(310) CWR_V(311) CWR_V(312) CWR_V(313) CWR_V(314) CWR_V(315) CWR_V(316) CWR_V(317) CWR_V(318) CWR_V(319)
	CWR_V(320) CWR_V(321) CWR_V(322) CWR_V(323) CWR_V(324) CWR_V(325) CWR_V(326) CWR_V(327)
	virtual int vfunc328();
	virtual int vfunc329();
	virtual void vfunc330();
	virtual void vfunc331();
	virtual float vfunc332();
};
struct OV {
	CWR_V(0) CWR_V(1) CWR_V(2) CWR_V(3) CWR_V(4) CWR_V(5) CWR_V(6) CWR_V(7) CWR_V(8) CWR_V(9)
	H10(1) H10(2) H10(3) H10(4) H10(5) H10(6) H10(7) H10(8) H10(9)
	H100(1) H100(2) H100(3)
	H10(40) H10(41)
	CWR_V(420) CWR_V(421) CWR_V(422) CWR_V(423) CWR_V(424) CWR_V(425) CWR_V(426) CWR_V(427) CWR_V(428)
	virtual void vfunc429();
	CWR_V(430) CWR_V(431) CWR_V(432) CWR_V(433) CWR_V(434) CWR_V(435) CWR_V(436) CWR_V(437) CWR_V(438) CWR_V(439)
	CWR_V10(44)
	virtual void vfunc449(int a, int b);
	void sub_1017e150(int a, float b, char *c);
};

void CWeaponRanged::vfunc372()
{
	int *pSlot = sub_102517e0();
	char *t = (char *)this;
	TV *tv = (TV *)this;
	*(float *)(t + 0x910) = *(float *)((char *)pSlot + 0x260) + gpGlobals->curtime;
	if (vfunc275(pSlot[0x10c / 4]) != -1 && *(int *)(t + pSlot[0x10c / 4] * 4 + 0x74c) == 0) {
		vfunc325();
		return;
	}
	if (sub_10252240()) {
		OV *owner = (OV *)sub_10252290();
		if (owner) {
			owner->vfunc429();
			if (pSlot[0x3c4 / 4] > 0) {
				owner->sub_1017e150(pSlot[0x3c4 / 4], -1.0f, sub_101d3730("CWeaponRanged::Attack %s", sub_100ab4f0(this)));
			}
			if (g_1088aee4 == 0)
				tv->vfunc307(tv->vfunc328());
			else
				tv->vfunc307(tv->vfunc329());
			owner->vfunc449(5, 1);
			*(int *)(t + 0x918) = 0;
			float f = tv->vfunc332();
			float tm = gpGlobals->curtime - gpGlobals->frametime;
			float *arr = (float *)(t + 0x730);
			if (tm >= arr[g_1088aee4])
				arr[g_1088aee4] = tm;
			while (arr[g_1088aee4] <= gpGlobals->curtime) {
				if (*(int *)(t + 0x86c) == 0)
					arr[g_1088aee4] = f / *(float *)((char *)owner + 0x1488) + arr[g_1088aee4];
				else
					arr[g_1088aee4] = tv->vfunc332() / *(float *)((char *)owner + 0x1488) + arr[g_1088aee4];
				(*(int *)(t + 0x918))++;
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x102387b0 size=0x7b0
#include "CWeaponRanged.h"
#include "CBaseCombatCharacter.h"
#include "CBasePlayer.h"
#include "CVDmg_t.h"
#include "CGameTrace.h"
#include "UTIL_Trace.h"
#include "CEntityVSlots.h"
#include "CUnknown1003ff80.h"
#include "ConVar.h"
#include "CSoundEnt.h"
#include "Tier1.h"

extern int g_1088aee4;
extern ConVar g_1088aef0;
extern ConVar g_1074f048;
extern int g_1072bc40;
extern char g_1072bcb0;
extern const Vector g_1070d1b0;

struct CSoundFlagArg
{
	char b;
	__forceinline CSoundFlagArg(char c) { b = c; }
};

struct CSoundEntView
{
	static void sub_101bac90(int iType, const Vector *pOrigin, int iVolume, float flDuration, CSoundFlagArg bFlag, CBaseEntity *pOwner);
};

struct CWeaponRollRecord
{
	int m_nIndex;	// 0x00
	int m_pad004[(0x10c - 4) / 4];
	int m_nAmmoIndex;	// 0x10c
	int m_nShotsPerFire;	// 0x110
	int m_n114;	// 0x114
	int m_pad118[(0x3ac - 0x118) / 4];
	Vector m_vecSpread;	// 0x3ac
};

struct CWeaponOwnerList
{
	char m_pad0[0x4fe84];
	int m_nCount;	// 0x4fe84
	char m_pad4fe88[0x4fed8 - 0x4fe88];
	int m_n4fed8;
	int m_n4fedc;
	char m_pad4fee0[0x4feec - 0x4fee0];
	int m_n4feec;
	char m_sz4fef0[0x80];
	char m_sz4ff70[0x80];
	char m_sz4fff0[0x80];
	char m_sz50070[0x80];
	char m_sz500f0[0x80];
	char m_b50170;
};

struct CWeaponRangedData
{
	char m_pad0[0x730];
	float m_flNextShot[4];	// 0x730
	int m_n740;	// 0x740
	int m_nAmmoType[2];	// 0x744
	int m_nClip[12];	// 0x74c
	CVDmg_t m_Damage[3];	// 0x77c
	int m_n848;
	char m_pad84c[0x86c - 0x84c];
	int m_n86c;
	char m_pad870[0x914 - 0x870];
	int m_n914;
	int m_nShots;	// 0x918
};

struct CVBulletTrace : CUnknown1003ff80
{
	int m_n[0x54 / 4];
	CVBulletTrace() { sub_1003ff80(); }
};

struct CVBulletInfo
{
	int m_n00;
	int m_n04;
	Vector m_vecSrc;	// 0x08
	Vector m_vecDir;	// 0x14
	Vector m_v20;	// 0x20
	Vector m_v2c;	// 0x2c
	Vector m_vecSpread;	// 0x38
	float m_flDistance;	// 0x44
	CVDmg_t m_Damage;	// 0x48
	int m_iAmmoType;	// 0x8c
	int m_iTracerFreq;	// 0x90
	int m_n94;
	CBaseEntity *m_pAttacker;	// 0x98
	int m_n9c;
	int m_nFlags;	// 0xa0
	int m_na4;
	const char *m_psz[5];	// 0xa8
	int m_nbc;
	int m_nc0;
	CVBulletTrace m_c4;

	void InitVecs()
	{
		((float *)&m_vecSrc)[0] = ((const float *)&g_1070d1b0)[0]; ((float *)&m_vecSrc)[1] = ((const float *)&g_1070d1b0)[1]; ((float *)&m_vecSrc)[2] = ((const float *)&g_1070d1b0)[2];
		((float *)&m_v2c)[0] = ((const float *)&g_1070d1b0)[0]; ((float *)&m_v2c)[1] = ((const float *)&g_1070d1b0)[1]; ((float *)&m_v2c)[2] = ((const float *)&g_1070d1b0)[2];
		((float *)&m_vecDir)[0] = ((const float *)&g_1070d1b0)[0]; ((float *)&m_vecDir)[1] = ((const float *)&g_1070d1b0)[1]; ((float *)&m_vecDir)[2] = ((const float *)&g_1070d1b0)[2];
		((float *)&m_vecSpread)[0] = ((const float *)&g_1070d1b0)[0]; ((float *)&m_vecSpread)[1] = ((const float *)&g_1070d1b0)[1]; ((float *)&m_vecSpread)[2] = ((const float *)&g_1070d1b0)[2];
	}
	CVBulletInfo()
	{
		m_n04 = 1;
		m_iTracerFreq = 4;
		m_iAmmoType = -1;
		InitVecs();
		m_flDistance = 56755.84f;
		m_n94 = 0;
		m_pAttacker = 0;
		m_n9c = 0;
		m_nFlags = 0;
		m_na4 = 0;
		m_psz[0] = 0;
		m_psz[1] = 0;
		m_psz[2] = 0;
		m_psz[3] = 0;
		m_psz[4] = 0;
		m_nbc = 0;
		m_nc0 = 0;
		m_n00 = 1;
	}
	~CVBulletInfo() { m_Damage.sub_101fa680(); }
};

struct CVDmgLocal : CVDmg_t
{
	CVDmgLocal(const CVDmg_t &o) : CVDmg_t(o) {}
	~CVDmgLocal() { sub_101fa680(); }
};

struct Ray_tYX : Ray_t
{
	__forceinline void InitYX(const Vector &start, const Vector &end)
	{
		m_Delta[0] = end.x - start.x;
		m_Delta[1] = end.y - start.y;
		m_Delta[2] = end.z - start.z;
		m_IsSwept = ((m_Delta[1] * m_Delta[1] + m_Delta[0] * m_Delta[0]) + m_Delta[2] * m_Delta[2]) != g_104454c4;
		m_StartOffset[0] = m_StartOffset[1] = m_StartOffset[2] = 0.0f;
		m_IsRay = true;
		m_Extents[0] = m_Extents[1] = m_Extents[2] = 0.0f;
		m_Start[0] = start.x;
		m_Start[1] = start.y;
		m_Start[2] = start.z;
		m_b32 = 0;
		m_n34 = 0;
		m_b33 = 0;
	}
};

inline void UTIL_TraceLine_DebugCallYX(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, const void *ignore,
	int collisionGroup, CGameTrace *ptr)
{
	Ray_tYX ray;
	ray.InitYX(vecAbsStart, vecAbsEnd);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (g_10738960.sub_1005f190())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}

struct CEntityVSlotsW
{
	EVS(0) EVS(1) EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) EVS(8) EVS(9)
	EVS(10) EVS(11) EVS(12) EVS(13) EVS(14) EVS(15) EVS(16) EVS(17) EVS(18) EVS(19)
	EVS(20) EVS(21) EVS(22) EVS(23) EVS(24) EVS(25) EVS(26) EVS(27) EVS(28) EVS(29)
	EVS(30) EVS(31) EVS(32) EVS(33) EVS(34) EVS(35) EVS(36) EVS(37) EVS(38) EVS(39)
	EVS(40) EVS(41) EVS(42) EVS(43) EVS(44) EVS(45) EVS(46) EVS(47) EVS(48) EVS(49)
	EVS(50) EVS(51) EVS(52) EVS(53) EVS(54) EVS(55) EVS(56) EVS(57) EVS(58) EVS(59)
	EVS(60) EVS(61) EVS(62) EVS(63) EVS(64) EVS(65) EVS(66) EVS(67) EVS(68) EVS(69)
	EVS(70) EVS(71) EVS(72) EVS(73) EVS(74) EVS(75) EVS(76) EVS(77) EVS(78) EVS(79)
	EVS(80) EVS(81) EVS(82) EVS(83) EVS(84) EVS(85) EVS(86) EVS(87) EVS(88) EVS(89)
	EVS(90) EVS(91) EVS(92) EVS(93) EVS(94) EVS(95) EVS(96) EVS(97) EVS(98) EVS(99)
	EVS(100) EVS(101) EVS(102) EVS(103) EVS(104) EVS(105) EVS(106) EVS(107) EVS(108) EVS(109)
	EVS(110) EVS(111) EVS(112) EVS(113) EVS(114) EVS(115) EVS(116) EVS(117) EVS(118) EVS(119)
	EVS(120) EVS(121) EVS(122) EVS(123) EVS(124) EVS(125) EVS(126) EVS(127) EVS(128) EVS(129)
	EVS(130) EVS(131) EVS(132) EVS(133) EVS(134) EVS(135) EVS(136) EVS(137) EVS(138) EVS(139)
	EVS(140) EVS(141) EVS(142) EVS(143) EVS(144) EVS(145) EVS(146) EVS(147) EVS(148) EVS(149)
	EVS(150) EVS(151) EVS(152) EVS(153) EVS(154) EVS(155) EVS(156) EVS(157) EVS(158) EVS(159)
	EVS(160) EVS(161) EVS(162) EVS(163) EVS(164) EVS(165) EVS(166) EVS(167) EVS(168) EVS(169)
	EVS(170) EVS(171) EVS(172) EVS(173) EVS(174) EVS(175) EVS(176) EVS(177) EVS(178) EVS(179)
	EVS(180) EVS(181) EVS(182) EVS(183) EVS(184) virtual void slot185(void *pBulletInfo); EVS(186) EVS(187) EVS(188) EVS(189)
	EVS(190) EVS(191) EVS(192) EVS(193) EVS(194) EVS(195) EVS(196) EVS(197) EVS(198) EVS(199)
	EVS(200) EVS(201) EVS(202) EVS(203) EVS(204) EVS(205) EVS(206) EVS(207) EVS(208) EVS(209)
	EVS(210) EVS(211) EVS(212) EVS(213) EVS(214) EVS(215) EVS(216) EVS(217) EVS(218) EVS(219)
	virtual Vector *slot220(); EVS(221) EVS(222) EVS(223) EVS(224) EVS(225) EVS(226) EVS(227) EVS(228) EVS(229)
	EVS(230) EVS(231) EVS(232) EVS(233) EVS(234) EVS(235) EVS(236) EVS(237) EVS(238) EVS(239)
	EVS(240) EVS(241) EVS(242) EVS(243) EVS(244) EVS(245) EVS(246) EVS(247) EVS(248) EVS(249)
	EVS(250) EVS(251) EVS(252) EVS(253) EVS(254) EVS(255) EVS(256) EVS(257) EVS(258) EVS(259)
	EVS(260) EVS(261) EVS(262) EVS(263) EVS(264) EVS(265) EVS(266) EVS(267) EVS(268) EVS(269)
	EVS(270) EVS(271) EVS(272) EVS(273) EVS(274) EVS(275) EVS(276) EVS(277) EVS(278) EVS(279)
	EVS(280) EVS(281) EVS(282) EVS(283) EVS(284) EVS(285) EVS(286) EVS(287) EVS(288) EVS(289)
	EVS(290) EVS(291) EVS(292) EVS(293) EVS(294) EVS(295) EVS(296) EVS(297) EVS(298) EVS(299)
	EVS(300) EVS(301) EVS(302) EVS(303) EVS(304) EVS(305) EVS(306) EVS(307) EVS(308) EVS(309)
	EVS(310) EVS(311) EVS(312) EVS(313) EVS(314) EVS(315) EVS(316) EVS(317) EVS(318) EVS(319)
	EVS(320) EVS(321) EVS(322) EVS(323) EVS(324) EVS(325) EVS(326) EVS(327) EVS(328) EVS(329)
	EVS(330) EVS(331) virtual float slot332(); virtual void slot333(int a, int b, int c, int d, int e, int f); EVS(334) EVS(335) EVS(336) EVS(337) EVS(338) virtual void slot339();
	EVS(340) EVS(341) EVS(342) EVS(343) EVS(344) EVS(345) EVS(346) EVS(347) EVS(348) EVS(349)
	EVS(350) EVS(351) EVS(352) EVS(353) EVS(354) EVS(355) EVS(356) EVS(357) EVS(358) EVS(359)
	EVS(360) EVS(361) EVS(362) EVS(363) EVS(364) EVS(365) EVS(366) EVS(367) EVS(368) EVS(369)
	EVS(370) EVS(371) EVS(372) EVS(373) EVS(374) EVS(375) EVS(376) EVS(377) EVS(378) EVS(379)
	EVS(380) EVS(381) EVS(382) EVS(383) EVS(384) EVS(385) EVS(386) EVS(387) EVS(388) virtual Vector slot389(const Vector &vecSrc);
	EVS(390) EVS(391) EVS(392) EVS(393) EVS(394) EVS(395) EVS(396) EVS(397) EVS(398) EVS(399)
	EVS(400) EVS(401) EVS(402) EVS(403) EVS(404) EVS(405) EVS(406) EVS(407) EVS(408) EVS(409)
	EVS(410) EVS(411) EVS(412) EVS(413) EVS(414) EVS(415) EVS(416) EVS(417) EVS(418) EVS(419)
	EVS(420) EVS(421) EVS(422) EVS(423) EVS(424) EVS(425) EVS(426) EVS(427) EVS(428) EVS(429)
	EVS(430) EVS(431) EVS(432) EVS(433) EVS(434) EVS(435) EVS(436) EVS(437) EVS(438) EVS(439)
	EVS(440) EVS(441) EVS(442) EVS(443) EVS(444) EVS(445) EVS(446) EVS(447) EVS(448) EVS(449)
	EVS(450) EVS(451) EVS(452) EVS(453) EVS(454) EVS(455) EVS(456) EVS(457) EVS(458) EVS(459)
	EVS(460) EVS(461) EVS(462) EVS(463) EVS(464) EVS(465) EVS(466) EVS(467) EVS(468) EVS(469)
	EVS(470) EVS(471) EVS(472) EVS(473) EVS(474) EVS(475) EVS(476) EVS(477) EVS(478) EVS(479)
	EVS(480) EVS(481) EVS(482) EVS(483) EVS(484) EVS(485) EVS(486) EVS(487) EVS(488) EVS(489)
	EVS(490) EVS(491) EVS(492) EVS(493) EVS(494) EVS(495) EVS(496) EVS(497) EVS(498) EVS(499)
	EVS(500) EVS(501) EVS(502) EVS(503) EVS(504) EVS(505) EVS(506) EVS(507) EVS(508) EVS(509)
	EVS(510) EVS(511) EVS(512) EVS(513) EVS(514) EVS(515) EVS(516) EVS(517) EVS(518) EVS(519)
	EVS(520) EVS(521) EVS(522) EVS(523) EVS(524) EVS(525) EVS(526) EVS(527) EVS(528) EVS(529)
	EVS(530) EVS(531) EVS(532) EVS(533) EVS(534) EVS(535) EVS(536) EVS(537) EVS(538) EVS(539)
	EVS(540) EVS(541) EVS(542) EVS(543) EVS(544) EVS(545) EVS(546) EVS(547) EVS(548) EVS(549)
	EVS(550) EVS(551) EVS(552) EVS(553) EVS(554) EVS(555) EVS(556) EVS(557) EVS(558) EVS(559)
	EVS(560) EVS(561) EVS(562) EVS(563) EVS(564) EVS(565) EVS(566) EVS(567) EVS(568) EVS(569)
	EVS(570) EVS(571) EVS(572) EVS(573) virtual Vector slot574(const Vector &vecSrc, int a, int b);
};
#define W(p) ((CEntityVSlotsW *)(p))

void CWeaponRanged::vfunc373()
{
	CWeaponRangedData *self = (CWeaponRangedData *)this;
	CWeaponRollRecord *roll = (CWeaponRollRecord *)sub_102517e0();
	if (((CWeaponOwnerList *)sub_102517b0())->m_nCount > 0 && self->m_n914 > 0)
	{
		int save = self->m_n848;
		self->m_n848 = 2;
		roll = (CWeaponRollRecord *)sub_102517e0();
		self->m_n848 = save;
	}

	CBaseCombatCharacter *pOwner = (CBaseCombatCharacter *)sub_10252240();
	if (!pOwner)
		return;

	pOwner->sub_1033c6b0(0x200000);

	void *p = sub_102521f0();
	CBasePlayer *pPlayer = !p ? 0 : *(CBasePlayer **)((char *)p + 0xa8);
	CEntityVSlots *pNPC = *(CEntityVSlots **)((char *)pOwner + 0x94);

	if (pPlayer)
		((CEntityVSlotsW *)this)->slot333(1, 1, 0, 0, 0, 0);
	else
	{
		if (!pNPC)
			return;
		((CEntityVSlotsW *)this)->slot333(6, 1, 0, 0, 0, 0);
	}

	if (((CWeaponOwnerList *)sub_102517b0())->m_b50170)
		*(unsigned int *)((char *)pOwner + 0x19c) |= 2;

	Vector vecSrc = ((CEntityVSlotsW *)pOwner)->slot389(*((CEntityVSlotsW *)pOwner)->slot220());
	Vector vecDir;
	if (pPlayer)
		vecDir = *pPlayer->sub_10176520(&Vector(), 0.08715574274766f);
	else
		vecDir = ((CEntityVSlotsW *)pNPC)->slot574(vecSrc, 1, 0);

	if (pNPC)
	{
		self->m_nShots = 0;
		float flInterval = ((CEntityVSlotsW *)this)->slot332();
		int idx = g_1088aee4;
		float flNow = gpGlobals->curtime - gpGlobals->frametime;
		if (flNow >= self->m_flNextShot[idx])
			self->m_flNextShot[g_1088aee4] = flNow;
		for (; self->m_flNextShot[g_1088aee4] <= gpGlobals->curtime; self->m_nShots++)
		{
			if (self->m_n86c == 0)
				self->m_flNextShot[g_1088aee4] += flInterval;
			else
				self->m_flNextShot[g_1088aee4] += ((CEntityVSlotsW *)this)->slot332();
		}
	}

	int nShots = self->m_nShots * roll->m_nShotsPerFire;
	if (nShots > 0 && nShots > self->m_nClip[roll->m_nAmmoIndex])
	{
		self->m_nShots = self->m_nClip[roll->m_nAmmoIndex] / roll->m_nShotsPerFire;
		nShots = self->m_nClip[roll->m_nAmmoIndex];
	}

	if (pPlayer && g_1088aef0.GetInt() < 2)
		self->m_nClip[roll->m_nAmmoIndex] -= nShots;

	CGameTrace tr;
	UTIL_TraceLine_DebugCallYX(vecSrc, vecSrc + vecDir * 56755.84f, 0x46004003, (CBaseEntity *)this, 0, &tr);
	if (tr.m_fraction != 1.0 && tr.m_pEnt)
		tr.m_pEnt->sub_100b3700();

	if (g_1074f048.GetInt() > 1)
	{
		int nBonus = pOwner->sub_10323210();
		int nPenalty = pOwner->sub_103232b0();
		if (nBonus || nPenalty)
			g_109f3630("Presence bonus: %d   penalty: %d \n", nBonus, nPenalty);
	}

	CVDmgLocal dmg(self->m_Damage[roll->m_nIndex]);
	CVBulletInfo info;
	info.m_n04 = roll->m_n114;
	info.m_iAmmoType = self->m_nAmmoType[roll->m_nAmmoIndex];
	info.m_Damage = dmg;
	info.m_vecSrc = vecSrc;
	info.m_vecDir = vecDir;
	info.m_vecSpread = roll->m_vecSpread;
	info.m_flDistance = 56755.84f;
	info.m_n9c = self->m_n740;
	info.m_iTracerFreq = 1;
	info.m_pAttacker = (CBaseEntity *)this;
	info.m_na4 = ((CWeaponOwnerList *)sub_102517b0())->m_n4feec;
	info.m_psz[0] = ((CWeaponOwnerList *)sub_102517b0())->m_sz4fef0;
	info.m_psz[1] = ((CWeaponOwnerList *)sub_102517b0())->m_sz4ff70;
	info.m_psz[2] = ((CWeaponOwnerList *)sub_102517b0())->m_sz4fff0;
	info.m_psz[3] = ((CWeaponOwnerList *)sub_102517b0())->m_sz50070;
	info.m_psz[4] = ((CWeaponOwnerList *)sub_102517b0())->m_sz500f0;

	for (int i = 0; i < self->m_nShots; i++)
	{
		int nFlags = 0;
		if (((CWeaponOwnerList *)sub_102517b0())->m_n4fed8)
			nFlags |= 1;
		if (((CWeaponOwnerList *)sub_102517b0())->m_n4fedc)
			nFlags |= 2;
		info.m_nFlags = nFlags;
		((CEntityVSlotsW *)pOwner)->slot185(&info);
	}

	int nVolume = g_1072bc40;
	CSoundEntView::sub_101bac90(1, ((CEntityVSlotsW *)this)->slot220(), nVolume, 0.2f, CSoundFlagArg(g_1072bcb0), (CBaseEntity *)pOwner);

	if (pPlayer)
		((CEntityVSlotsW *)this)->slot339();
}
// END FUNCTION

// FUNCTION: 0x10239210 size=0x2c
#include "CWeaponRanged.h"

unsigned char __fastcall sub_102391c0(void *pThis);

// TARGET: CWeaponRanged::vfunc328
int CWeaponRanged::vfunc328()
{
	if (*(int *)((char *)this + 0x86c) - 1 != 0) {
		unsigned char c = sub_102391c0(this);
		return ((c != 0 ? -1 : 0) & 0x1f) + 0xbc;
	}
	unsigned char c = sub_102391c0(this);
	return (c != 0 ? -4 : 0) + 0xe0;
}
// END FUNCTION

// FUNCTION: 0x10239250 size=0x8
#include "CWeaponRanged.h"
// TARGET: CWeaponRanged::vfunc329
void CWeaponRanged::vfunc329()
{
	vfunc328();
}
// END FUNCTION

// FUNCTION: 0x10239270 size=0xae
#include "CWeaponRanged.h"

#define WV1(n) virtual void wv##n();
#define WV10(p) WV1(p##0) WV1(p##1) WV1(p##2) WV1(p##3) WV1(p##4) WV1(p##5) WV1(p##6) WV1(p##7) WV1(p##8) WV1(p##9)
#define WV100(p) WV10(p##0) WV10(p##1) WV10(p##2) WV10(p##3) WV10(p##4) WV10(p##5) WV10(p##6) WV10(p##7) WV10(p##8) WV10(p##9)

struct CWeaponRangedView	// the weapon's vtable up to slot 333, with the members the zoom toggle touches
{
	WV100(a) WV100(b) WV100(c)
	WV1(d0) WV1(d1) WV1(d2) WV1(d3) WV1(d4) WV1(d5) WV1(d6)
	virtual void slot307(int value);
	WV1(e8) WV1(e9)
	WV10(f0) WV10(f1) WV1(g0) WV1(g1) WV1(g2)
	virtual void slot333(int a, int b, int c, int d, int e, int f);

	char m_pad0004[0x84c - 4];
	int m_n84c;
	char m_pad0850[0x86c - 0x850];
	int m_n86c;
};

extern int g_1088aee4;
void sub_101cebc0(void *pOwner, int a, int b);

void CWeaponRanged::vfunc374()
{
	CWeaponRangedView *p = (CWeaponRangedView *)this;
	if (p->m_n86c == 0) {
		p->slot307(0xe7);
		p->m_n86c = 1;
		p->slot333(8, 1, 0, 0, 0, 0);
		p->m_n84c = 1;
		g_1088aee4 = 1;
	} else {
		p->slot307(0xe6);
		p->m_n86c = 0;
		p->slot333(3, 1, 0, 0, 0, 0);
		p->m_n84c = 0;
		g_1088aee4 = 0;
	}
	void *pOwner = sub_10252290();
	if (pOwner)
		sub_101cebc0(pOwner, 0x1a, p->m_n86c);
}
// END FUNCTION

// FUNCTION: 0x10239350 size=0x1ad
#include "CWeaponRanged.h"
#include "CBaseCombatWeapon.h"
#include "CUnknown1070b244.h"
#include "globalvars.h"

struct CWRTimeView
{
	virtual void v0();
	virtual bool vfunc1();
	char m_pad[0x28];
	int m_n2c;
};

struct CWeaponRangedView
{
	char m_pad0000[0x730];
	float m_flTimes730[2];
	char m_pad738[0x74c - 0x738];
	int m_nClip74c;
	char m_pad750[0x854 - 0x750];
	int m_nPending854;
	char m_pad858[0x86c - 0x858];
	int m_nState86c;
};

extern CWRTimeView *g_107520a4;
extern int g_10752954;
extern int g_10751a54;
extern int g_105bf918[];
extern CUnknown1070b244 *g_1070b244;
char __fastcall sub_102506a0(CBaseCombatWeapon *pWeapon);
void __fastcall sub_10253110(CBaseCombatWeapon *pWeapon);

void CWeaponRanged::vfunc321()
{
	CBaseCombatWeapon *pWeapon = (CBaseCombatWeapon *)this;
	CWeaponRangedView *pView = (CWeaponRangedView *)this;
	if (!pWeapon->vfunc309())
		return;
	if (!g_107520a4->vfunc1() && g_107520a4->m_n2c)
	{
		g_10752954++;
		if (g_10752954 > g_10751a54)
			g_10752954 = 0;
		pWeapon->vfunc307(g_105bf918[g_10752954]);
		return;
	}
	if (pView->m_nPending854 == -1)
	{
		if (!sub_102506a0(pWeapon) && g_1070b244->vfunc2(0, 100) <= 5)
		{
			switch (pView->m_nState86c)
			{
			case 0:
				pWeapon->vfunc307(0xb7);
				return;
			case 1:
				pWeapon->vfunc307(0xda);
				return;
			}
			return;
		}
		switch (pView->m_nState86c)
		{
		case 0:
			if (pWeapon->vfunc277(0) && pView->m_nClip74c <= 0)
			{
				pWeapon->vfunc307(0xd8);
				return;
			}
			pWeapon->vfunc307(0xb6);
			return;
		case 1:
			if (pWeapon->vfunc277(0) && pView->m_nClip74c <= 0)
			{
				pWeapon->vfunc307(0xd9);
				return;
			}
			pWeapon->vfunc307(0xdf);
			return;
		}
	}
	else
	{
		sub_10253110(pWeapon);
		pWeapon->vfunc307(pView->m_nPending854);
		pView->m_nPending854 = -1;
		void *pOwner = pWeapon->sub_102521f0();
		if (pOwner)
			*(float *)((char *)pOwner + 0x1564) = pWeapon->vfunc311();
		for (int i = 0; i < 2; i++)
			pView->m_flTimes730[i] = gpGlobals->curtime;
	}
}
// END FUNCTION

// FUNCTION: 0x10239570 size=0x3f
#include "CWeaponRanged.h"

struct CWeaponRangedView
{
	char m_pad0000[0x86c];
	int m_n086c;	// +0x86c
	char m_pad0870[0x898 - 0x870];
	char m_b0898;	// +0x898
	char m_b0899;	// +0x899
	char m_pad089a[0x8c8 - 0x89a];
	char m_b08c8;	// +0x8c8

	void sub_10254b00(int a);	// CBaseCombatWeapon::sub_10254b00 (stub 0x10007784), called directly
};

// TARGET: CWeaponRanged::vfunc325
void CWeaponRanged::vfunc325()
{
	CWeaponRangedView *pView = (CWeaponRangedView *)this;
	if (!pView->m_b0898 && pView->m_b08c8) {
		pView->m_b0899 = 0;
		pView->sub_10254b00(0xc1);
		return;
	}
	pView->sub_10254b00(pView->m_n086c ? 0xe3 : 0xc2);
}
// END FUNCTION

// FUNCTION: 0x102395c0 size=0x86
#include "CWeaponRanged.h"
#include "CBaseCombatCharacter.h"

#define OV(n) virtual void v##n();
#define OV10(p) OV(p##0) OV(p##1) OV(p##2) OV(p##3) OV(p##4) OV(p##5) OV(p##6) OV(p##7) OV(p##8) OV(p##9)
struct CWeaponRangedShotSlots {
	OV(0) OV(1) OV(2) OV(3) OV(4) OV(5) OV(6) OV(7) OV(8) OV(9)
	OV10(1) OV10(2) OV10(3) OV10(4) OV10(5) OV10(6) OV10(7) OV10(8) OV10(9)
	OV(100) OV(101) OV(102) OV(103) OV(104)
	virtual void v105(const char *psz);
	OV(106) OV(107) OV(108) OV(109)
	OV10(11) OV10(12) OV10(13) OV10(14) OV10(15) OV10(16) OV10(17) OV10(18) OV10(19)
	OV10(20) OV10(21) OV10(22) OV10(23) OV10(24) OV10(25) OV10(26)
	OV(270) OV(271)
	virtual const char *v272();
	virtual const char *v273();
	OV(274) OV(275) OV(276) OV(277) OV(278) OV(279)
	OV10(28) OV10(29)
	OV10(30) OV10(31) OV10(32) OV10(33)
	OV(340) OV(341)
	virtual int v342(int a);
	virtual int v343();
	virtual int v344();
};

struct CWeaponFireView {
	char sub_10253b70(int a, int b, int c, int d);
};
struct CWeaponRangedVT {
	char pad0[0x1a4];
	void (CWeaponRangedShotSlots::*v105)(const char *);
	char pad1[0x440 - 0x1a8];
	const char *(CWeaponRangedShotSlots::*v272)();
	const char *(CWeaponRangedShotSlots::*v273)();
};

bool CWeaponRanged::vfunc315()
{
	CWeaponRangedShotSlots *pSlots = (CWeaponRangedShotSlots *)this;
	CBaseCombatCharacter *pOwner = (CBaseCombatCharacter *)sub_10252240();
	if (pOwner) {
		bool bMale = pOwner->sub_10336920();
		CWeaponRangedVT *vt = *(CWeaponRangedVT **)pSlots;
		if (!bMale)
			(pSlots->*vt->v105)((pSlots->*vt->v272)());
		else
			(pSlots->*vt->v105)((pSlots->*vt->v273)());
	}
	int a = (*(int *)((char *)this + 0x86c) ? 0x2d : 0) + 0xb4;
	if (((CWeaponFireView *)this)->sub_10253b70(pSlots->v342(0), pSlots->v343(), a, pSlots->v344())) {
		sub_10239d80();
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10239680 size=0x69
#include "CWeaponRanged.h"

struct CWeaponRangedView
{
	char m_pad0000[0x74c];
	int m_nClip[2];
	char m_pad0754[0x898 - 0x754];
	char m_b898;
	char m_b899;
	char m_pad089a[0x8c8 - 0x89a];
	char m_b8c8;
};

struct CWeaponRangedOwnerAI
{
	char m_pad0000[0x2088];
	unsigned int m_flags2088;
	unsigned int m_flags208c;
};

struct CWeaponRangedRoll
{
	char m_pad0000[0x10c];
	int m_iSlot;
};

struct CWeaponRangedOwnerEnt
{
	char m_pad0000[0xa8];
	CWeaponRangedOwnerAI *m_pAI;
};

// TARGET: CWeaponRanged::vfunc319
void CWeaponRanged::vfunc319()
{
	CWeaponRangedOwnerEnt *pOwner = (CWeaponRangedOwnerEnt *)sub_102521f0();
	if (pOwner)
	{
		CWeaponRangedOwnerAI *pAI = pOwner->m_pAI;
		if (pAI)
		{
			CWeaponRangedView *v = (CWeaponRangedView *)this;
			if (v->m_b898 && v->m_b8c8 && ((pAI->m_flags208c | pAI->m_flags2088) & 0x801))
			{
				CWeaponRangedRoll *pRoll = (CWeaponRangedRoll *)sub_102517e0();
				if (0 < v->m_nClip[pRoll->m_iSlot])
					v->m_b899 = 1;
			}
			sub_10253ea0();
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10239710 size=0x73
#include "CWeaponRanged.h"

struct COwnerChar
{
	char m_pad0000[0x2088];
	unsigned int m_f2088;
	unsigned int m_f208c;
};

struct COwnerObj
{
	char m_pad0000[0xa8];
	COwnerChar *m_pChar;
};

struct CRollRecord
{
	char m_pad0000[0x10c];
	int m_nAmmoSlot;
};

struct CWeaponView	// the fields of the weapon at their real offsets
{
	char m_pad0000[0x74c];
	int m_aClip[2];	// 0x74c
	char m_pad0754[0x898 - 0x754];
	char m_b898;
	char m_b899;
	char m_pad089a[0x8c8 - 0x89a];
	char m_b8c8;
};

void CWeaponRanged::vfunc320()
{
	CWeaponView *w = (CWeaponView *)this;
	COwnerObj *pOwner = (COwnerObj *)sub_102521f0();
	if (!pOwner)
		return;
	COwnerChar *pChar = pOwner->m_pChar;
	if (!pChar)
		return;
	if (w->m_b898 && w->m_b8c8 && ((pChar->m_f208c | pChar->m_f2088) & 0x801)) {
		CRollRecord *pRoll = (CRollRecord *)sub_102517e0();
		if (w->m_aClip[pRoll->m_nAmmoSlot] > 0) {
			w->m_b899 = 1;
			vfunc319();
		}
	}
	sub_10254250();
}
// END FUNCTION

// FUNCTION: 0x102397b0 size=0x141
#include "CWeaponRanged.h"
#include "CBaseEntity.h"
#include "CBaseCombatCharacter.h"
#include "engineiface.h"

struct CKickRecord
{
	char m_pad0000[0x384];
	float m_fl384, m_fl388, m_fl38c, m_fl390, m_fl394, m_fl398, m_fl39c, m_fl3a0;
};

#define CV(n) virtual void cv##n();
#define CV10(p) CV(p##0) CV(p##1) CV(p##2) CV(p##3) CV(p##4) CV(p##5) CV(p##6) CV(p##7) CV(p##8) CV(p##9)
struct CCombatCharSlots
{
	CV10(0) CV10(1) CV10(2) CV10(3) CV10(4) CV10(5) CV10(6) CV10(7) CV10(8) CV10(9)
	CV10(10) CV10(11) CV10(12) CV10(13) CV10(14) CV10(15)
	CV(160) CV(161) CV(162) CV(163) CV(164) CV(165) CV(166) CV(167) CV(168)
	virtual void vfunc169(Vector *pVec);
};

extern float g_1048f07c;
extern float g_104454c4;

// TARGET: CWeaponRanged::vfunc339
void CWeaponRanged::vfunc339()
{
	void *pOwner = sub_102521f0();
	if (!pOwner)
		return;
	CBaseCombatCharacter *pChar = (CBaseCombatCharacter *)((CBaseEntity *)pOwner)->m_pA8;
	if (!pChar)
		return;

	CKickRecord *pRec = (CKickRecord *)sub_102517e0();

	float flValue;
	if (pChar->sub_10346070() > g_1048f07c)
		flValue = g_1048f07c;
	else if (pChar->sub_10346070() < g_104454c4)
		flValue = g_104454c4;
	else
		flValue = pChar->sub_10346070();

	float flFraction = flValue / g_1048f07c;
	float flScale = flFraction * flFraction;

	float flX = (pRec->m_fl38c - pRec->m_fl390) * flScale + pRec->m_fl390;
	float flY = (pRec->m_fl39c - pRec->m_fl3a0) * flScale + pRec->m_fl3a0;
	flX = enginerandom->vfunc1(-flX, flX);
	flY = enginerandom->vfunc1(-flY, flY);

	Vector vec;
	vec.z = 0.0f;
	vec.x = (pRec->m_fl384 - pRec->m_fl388) * flScale + pRec->m_fl388 + flX;
	vec.y = (pRec->m_fl394 - pRec->m_fl398) * flScale + pRec->m_fl398 + flY;

	((CCombatCharSlots *)pChar)->vfunc169(&vec);
}
// END FUNCTION

// FUNCTION: 0x10239d10 size=0x4e
#include "CWeaponRanged.h"
#include "CFlagSet10174550.h"
struct CRangedCharView : CFlagSet10174550 { char m_pad[0x1e78 - 1]; int m_n1e78; };
struct CRangedOwnerView { char m_pad[0xa8]; CRangedCharView *m_pChar; };
void CWeaponRanged::vfunc316(int a)
{
	CRangedOwnerView *pOwner = (CRangedOwnerView *)sub_102521f0();
	if (pOwner) {
		CRangedCharView *pChar = pOwner->m_pChar;
		if (pChar && *(int *)((char *)this + 0x914) > -1) {
			pChar->sub_10174550(true);
			pChar->m_n1e78 = 0;
			*(int *)((char *)this + 0x914) = -1;
		}
	}
	sub_10253ca0(a);
}
// END FUNCTION

// FUNCTION: 0x10239f70 size=0x207
#include "CWeaponRanged.h"
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "UTIL_Trace.h"
#include "CUnknown10738960.h"
#include "QAngle.h"

#define CVS(n) virtual void cv##n();
#define CVS10(p) CVS(p##0) CVS(p##1) CVS(p##2) CVS(p##3) CVS(p##4) CVS(p##5) CVS(p##6) CVS(p##7) CVS(p##8) CVS(p##9)
struct CPlayerCharView
{
	CVS10(a0) CVS10(a1) CVS10(a2) CVS10(a3) CVS10(a4) CVS10(a5) CVS10(a6) CVS10(a7) CVS10(a8) CVS10(a9)
	CVS10(b0) CVS10(b1) CVS10(b2) CVS10(b3) CVS10(b4) CVS10(b5) CVS10(b6) CVS10(b7) CVS10(b8) CVS10(b9)
	CVS10(c0) CVS10(c1)
	virtual Vector *vfunc220();
	CVS10(d0) CVS10(d1) CVS10(d2) CVS10(d3) CVS10(d4) CVS10(d5) CVS10(d6) CVS10(d7) CVS10(d8) CVS10(d9)
	CVS10(e0) CVS10(e1) CVS10(e2) CVS10(e3) CVS10(e4) CVS10(e5)
	CVS(f381) CVS(f382) CVS(f383) CVS(f384) CVS(f385) CVS(f386) CVS(f387) CVS(f388)
	virtual Vector vfunc389(const Vector &vecSrc);
};

void sub_10139610(const QAngle *pAngles, Vector *pForward, Vector *pRight, Vector *pUp);
extern char g_10538764[];
extern char g_1058edc8[];

void *CWeaponRanged::vfunc293()
{
	void *pOwner = sub_102521f0();
	if (!pOwner)
		return 0;
	CBasePlayer *pChar = (CBasePlayer *)((CBaseEntity *)pOwner)->m_pA8;
	if (!pChar)
		return 0;

	Vector vecForward;
	Vector vecRight;
	sub_10139610((const QAngle *)&pChar->m_vec206c, &vecForward, &vecRight, 0);

	Vector vecStart;
	vecStart = ((CPlayerCharView *)pChar)->vfunc389(*((CPlayerCharView *)pChar)->vfunc220());
	CGameTrace tr;
	UTIL_TraceLine_DebugCall(vecStart, vecStart + vecForward * 4096.0f, 0x46004003, pChar, 0, &tr);

	CBaseEntity *pEntity;
	if (tr.m_fraction < 1.0f && tr.m_pEnt != 0 &&
	    ((unsigned char)((pEntity = tr.m_pEnt)->m_flags204 >> 13) & 1) != 0 && pEntity->m_p9c == 0 &&
	    __RTDynamicCast(pEntity, 0, g_10538764, g_1058edc8, 0) != 0)
		return pEntity;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1023a210 size=0x2c
#include "CWeaponRanged.h"

#define S10(b) virtual void s##b##0(); virtual void s##b##1(); virtual void s##b##2(); virtual void s##b##3(); virtual void s##b##4(); virtual void s##b##5(); virtual void s##b##6(); virtual void s##b##7(); virtual void s##b##8(); virtual void s##b##9();

struct CIntObj1023a210 {
    virtual void vfunc0();
    virtual int *vfunc1();
};
struct CWRView1023a210 {
    S10(0) S10(1) S10(2) S10(3) S10(4) S10(5) S10(6) S10(7) S10(8) S10(9)
    S10(10) S10(11) S10(12) S10(13) S10(14) S10(15) S10(16) S10(17) S10(18) S10(19)
    S10(20) S10(21) S10(22) S10(23) S10(24) S10(25) S10(26) S10(27) S10(28)
    virtual void s290();
    virtual void s291();
    virtual void s292();
    virtual CIntObj1023a210 *vfunc293();
    char pad[0x874 - 4];
    int m_i874;
};

// TARGET: CWeaponRanged::vfunc294
void CWeaponRanged::vfunc294()
{
    CIntObj1023a210 *pObj = ((CWRView1023a210 *)this)->vfunc293();
    if (pObj != 0) {
        int *pVal = pObj->vfunc1();
        ((CWRView1023a210 *)this)->m_i874 = *pVal;
        return;
    }
    ((CWRView1023a210 *)this)->m_i874 = -1;
}
// END FUNCTION
