// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10281730 size=0x6d
#include "CAI_BaseNPC.h"
#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)
struct CNpcSlotView {
    S100(a0) S100(a1) S100(a2) S100(a3)
    S10(b0) S10(b1) S10(b2)
    virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4();
    virtual void c5(); virtual void c6(); virtual void c7(); virtual void c8();
    virtual int vfunc439(int a, int b, int c);
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3();
    virtual void d4(); virtual void d5(); virtual void d6();
    virtual int vfunc447(int a);
};
struct CNpcScheduleUnit {
    int *sub_10005f1a();
    void sub_102cc1f0(int a);
    void sub_10281730();
};

void CNpcScheduleUnit::sub_10281730()
{
    char *p = (char *)this;
    CNpcSlotView *v = (CNpcSlotView *)this;
    int nClass;
    int *pTarget;
    int nId;
    if (*(int **)(p + 0x5c38))
        nClass = v->vfunc447(*(int *)(*(int *)(p + 0x5c38) + 0x1c));
    else
        nClass = 0;
    pTarget = sub_10005f1a();
    nId = pTarget ? *pTarget : 0;
    int r = v->vfunc439(nClass, nId, *(int *)(p + 0x5c50));
    *(int *)(p + 0x1b2c) = 1;
    *(const char **)(p + 0x1b30) = "E:\\Vampire\\main\\dlls\\AI_BaseNPC_Schedule.cpp";
    *(int *)(p + 0x1b34) = 0x2aa;
    sub_102cc1f0(r);
}
// END FUNCTION

// FUNCTION: 0x102827f0 size=0x4a7c
#include "CWeaponThrown_Grenade_Frag.h"
#include "Vector.h"
#include "QAngle.h"
#include "Ray_t.h"
#include "CTraceFilterSimple.h"
#include "CGameTrace.h"
#include <math.h>

#define SCHED_FILE "E:\\Vampire\\main\\dlls\\AI_BaseNPC_Schedule.cpp"
#define F(T, off) (*(T *)((char *)this + (off)))
#define FP(p, T, off) (*(T *)((char *)(p) + (off)))
#ifndef max
#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) < (b)) ? (a) : (b))
#endif

struct CSTV;
struct HintV;
struct SoundV { int m_hOwner; int m_pad04; int m_iVolume; char m_pad0c[0x20 - 0xc]; Vector m_vecOrigin; };
struct EnemiesV { Vector sub_102dfed0(CSTV *pEnemy); };
struct StrT
{
	const char *p;
	bool sub_10288510(const StrT &other) const;	// operator!=
	StrT *sub_10288540();	// NULL_STRING temporary
	const char *sub_100cd640() const;	// ToCStr
};
struct CastStrT : StrT { CastStrT() { p = 0; } };
struct NullStrT : StrT { NullStrT(); };
struct DistV { char pad[0x5de4]; float m_flDistTooFar; };
struct Task_t { int iTask; float flTaskData; };

struct EntSlot { CSTV *pEnt; int serial; int pad; };
struct EntListV { int pad; EntSlot slots[0x2000]; CSTV *sub_100290c0(const int *pHandle); };
extern EntListV *g_10566458;

struct EHView
{
	unsigned int m_Index;
	CSTV *Get() const
	{
		if (m_Index == 0xffffffff)
			return 0;
		const EntSlot *s = &g_10566458->slots[m_Index & 0x1fff];
		if (s->serial == (int)(m_Index >> 13))
			return s->pEnt;
		else
			return 0;
	}
	bool IsNull() const { return Get() == 0; }
	CSTV *sub_1028acc0() const;	// operator-> (out of line)
	CSTV *sub_100d15d0() const;	// operator-> (out of line)
	CSTV *sub_100d1590() const;	// operator T* (out of line)
	void sub_1028ac80(CSTV *p);	// operator=
	bool sub_1028ac10(CSTV *p) const;	// operator!=
};

struct HintV
{
	int HintType() const { return *(const int *)((const char *)this + 0x5dc); }
	bool sub_102d1350(CSTV *pNpc);	// Lock
	void sub_102d1420(float f);	// Unlock
	float sub_102d12e0();	// Yaw
	Vector sub_102d11f0();	// GetDirection
	void sub_102d1180(CSTV *pNpc, Vector *pOut);	// GetPosition
};

struct NavGoal;
struct NavV
{
	bool sub_102ee6a0();	// IsGoalActive
	bool sub_102ee270();	// ClearGoal
	bool sub_102ecd20(const NavGoal &goal, int flags);	// SetGoal
	void sub_102ee410(int act);	// SetArrivalActivity
	void sub_102ee530(const Vector &dir);	// SetArrivalDirection
	void sub_102ee550(const QAngle &ang);	// SetArrivalDirection
	bool sub_102edae0(const Vector &pos, int a, float dist, Vector *pOut);	// FindBackAwayPos
	bool sub_102edc80(const Vector &threat, const Vector &eye, float minDist, float maxDist, Vector *pOut, CSTV *pEnt);	// FindCoverPos
	bool sub_102edaa0(const Vector &target, const Vector &eye, float minDist, float maxDist, float blockTime, int a, Vector *pOut);	// FindLos
	const Vector *sub_102ee5e0();	// GetCurWaypointPos
	float sub_102f2fc0();
	void sub_102f2fe0(float f);
	void sub_102ee250(int act);	// SetMovementActivity
	int sub_102ee620();	// GetGoalType
	bool sub_102ee2e0();
	void sub_102ee2c0();
	bool sub_102ed940(float f, const Vector &v, int c);	// SetRandomGoal
	void sub_102ee1c0(float f);	// SetGoalTolerance
	void sub_102886f0(float f);	// SetMaxRouteRebuildTime
	bool sub_102ed540(float minDist, float maxDist, int c);	// SetWanderGoal
};

struct MotorV
{
	char m_pad00[0x1c];
	int m_1c;
	char m_pad20[8];
	char m_28;
	char m_pad29[3];
	float m_2c;
	float m_30;
	float m_34;
	float sub_102e0a80(float yaw);
	void sub_102e2020(const Vector &pos, int b);	// SetIdealYawToTarget
	float sub_102e1f90();	// DeltaIdealYaw
	void sub_10288670(float yaw);	// SetIdealYaw (out of line)
	void SetIdealYaw(float yaw)
	{
		if (m_28)
		{
			if (yaw >= 180.0f)
				yaw -= 180.0f;
			else
				yaw += 180.0f;
		}
		if (m_1c == 0x43340000)
			m_34 = yaw;
		else
			m_34 = sub_102e0a80(yaw);
	}
};
void __fastcall sub_102e0b40(MotorV *p);

struct GV { char m_pad00[0xc]; float curtime; };
extern GV *g_1070b228;
struct RandomV { virtual void v0(); virtual float RandomFloat(float a, float b); };
extern RandomV *g_1070b244;
struct EngineTraceV { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void TraceRay(Ray_t *pRay, unsigned int mask, CTraceFilterSimple *pFilter, CGameTrace *pTrace); };
extern EngineTraceV *g_1070b254;
struct DbgCvarV { virtual void v0(); virtual char vfunc1(); char m_pad04[0x28]; int m_n2c; };
extern DbgCvarV *g_10738964;
void sub_10146570(const float *pStart, const float *pEnd, int r, int g, int b, int bNoDepth, float flDuration);
struct GEntListV { CSTV *sub_100f7770(CSTV *pStart, const char *pszName, CSTV *pSearching, CSTV *pActivator); };
extern GEntListV g_106eb5d8;
extern CSTV *g_10923a30;	// AIN_DEF_TARGET
extern Vector g_10934060;	// vec3_invalid
extern Vector g_1093404c;
extern Vector g_1070d1b0;	// vec3_origin
extern char g_106b8540[];
extern void (__cdecl *g_109f3658)(int level, const char *fmt, ...);	// DevWarning
extern void (__cdecl *g_109f3650)(int level, const char *fmt, ...);	// DevMsg
extern void (__cdecl *g_109f3630)(const char *fmt, ...);	// Msg
HintV *sub_102d1af0(CSTV *pNpc, int hintType, int flags, float radius, Vector *pOrigin, float *pDist);
void sub_10139610(const QAngle &angles, Vector *forward, Vector *right, Vector *up);
int sub_1025d760(const char *psz);
bool sub_10288560(const char *a, const char *b);
float sub_10288590(float a);
CSTV *__fastcall sub_1032e7b0(CSTV *p);

inline Vector MulV(Vector &a, float b) { const Vector &ca = a; Vector r; r.x = a[0] * b; r.y = a[1] * b; r.z = ca[2] * b; return r; }
inline float UTIL_AngleMod(float a)
{
	a = (360.0f / 65536) * ((int)(a * (65536.0f / 360.0f)) & 65535);
	return a;
}

extern float g_1049a160;
extern float g_1049a164;
extern float g_104454c4;
extern float g_104454c0;
#define AIN_DEF_TOLERANCE g_1049a160
#define AIN_HULL_TOLERANCE g_1049a164

struct NavGoal
{
	NavGoal(int type_ = 0, int activity_ = -1, float tolerance_ = AIN_DEF_TOLERANCE, unsigned flags_ = 0, CSTV *pTarget_ = g_10923a30)
		: type(type_), dest(g_1093404c), destNode(-1), activity(activity_), arrivalActivity(-1), arrivalSequence(-1),
		  tolerance(tolerance_), flags(flags_), pTarget(pTarget_), arrivalDirection(g_10934060), m38(0.0f), m3c(0) {}
	NavGoal(const Vector &dest_, int activity_ = -1, float tolerance_ = AIN_DEF_TOLERANCE, unsigned flags_ = 0, CSTV *pTarget_ = g_10923a30)
		: type(4), dest(dest_), destNode(-1), activity(activity_), arrivalActivity(-1), arrivalSequence(-1),
		  tolerance(tolerance_), flags(flags_), pTarget(pTarget_), arrivalDirection(g_10934060), m38(0.0f), m3c(0) {}
	NavGoal(int type_, const Vector &dest_, int activity_ = -1, float tolerance_ = AIN_DEF_TOLERANCE, unsigned flags_ = 0, CSTV *pTarget_ = g_10923a30)
		: type(type_), dest(dest_), destNode(-1), activity(activity_), arrivalActivity(-1), arrivalSequence(-1),
		  tolerance(tolerance_), flags(flags_), pTarget(pTarget_), arrivalDirection(g_10934060), m38(0.0f), m3c(0) {}

	int type;
	Vector dest;
	int destNode;
	int activity;
	int arrivalActivity;
	int arrivalSequence;
	float tolerance;
	unsigned flags;
	CSTV *pTarget;
	Vector arrivalDirection;
	float m38;
	int m3c;
};


struct Vector2D
{
	float x, y;
	Vector2D &operator=(const Vector2D &v) { x = v.x; y = v.y; return *this; }
	Vector2D &operator/=(float fl) { float oofl = g_104454c0 / fl; x *= oofl; y *= oofl; return *this; }
	float Length() const { return (float)FastSqrt(x * x + y * y); }
};
inline Vector2D &AsVector2D(Vector &v) { return *(Vector2D *)&v; }
inline const Vector2D &AsVector2D(const Vector &v) { return *(const Vector2D *)&v; }
inline float Vector2DNormalize(Vector2D &v)
{
	float l = v.Length();
	if (l != 0.0f)
	{
		v /= l;
	}
	else
	{
		v.x = v.y = 0.0f;
	}
	return l;
}
inline float DotProduct2D(const Vector2D &a, const Vector2D &b) { float r = b.x; r *= a.x; r += a.y * b.y; return r; }
#define SV(n) virtual void s##n();
struct CSTV
{
	SV(0) SV(1) SV(2) SV(3) SV(4) SV(5) SV(6) SV(7) SV(8) SV(9)
	SV(10) SV(11) SV(12) SV(13) SV(14) SV(15) SV(16) SV(17) SV(18) SV(19)
	SV(20) SV(21) SV(22) SV(23) SV(24) SV(25) SV(26) SV(27) SV(28) SV(29)
	SV(30) SV(31) SV(32) SV(33) SV(34) SV(35) SV(36) SV(37) SV(38) SV(39)
	SV(40) SV(41) SV(42) SV(43) SV(44) SV(45) SV(46) SV(47) SV(48) SV(49)
	SV(50) SV(51) SV(52) SV(53) SV(54) SV(55) SV(56) SV(57) SV(58) SV(59)
	SV(60) SV(61) SV(62) SV(63) SV(64) SV(65) SV(66) SV(67) SV(68) SV(69)
	SV(70) SV(71) SV(72) SV(73) SV(74) SV(75) SV(76) SV(77) SV(78) SV(79)
	SV(80) SV(81) SV(82) SV(83) SV(84) SV(85) SV(86) SV(87) SV(88) SV(89)
	SV(90) SV(91) SV(92) SV(93)
	virtual int vfunc94();
	SV(95) SV(96) SV(97) SV(98) SV(99) SV(100) SV(101) SV(102) SV(103) SV(104)
	SV(105) SV(106) SV(107) SV(108) SV(109) SV(110) SV(111) SV(112) SV(113) SV(114)
	SV(115) SV(116) SV(117) SV(118) SV(119) SV(120) SV(121) SV(122) SV(123) SV(124)
	SV(125) SV(126) SV(127) SV(128) SV(129) SV(130) SV(131) SV(132) SV(133) SV(134)
	SV(135) SV(136) SV(137) SV(138) SV(139) SV(140) SV(141) SV(142) SV(143) SV(144)
	SV(145) SV(146) SV(147) SV(148) SV(149) SV(150) SV(151) SV(152) SV(153) SV(154)
	SV(155) SV(156) SV(157) SV(158) SV(159) SV(160) SV(161) SV(162) SV(163) SV(164)
	SV(165) SV(166)
	virtual CSTV *vfunc167();
	SV(168) SV(169) SV(170) SV(171) SV(172) SV(173) SV(174) SV(175) SV(176) SV(177)
	SV(178) SV(179) SV(180) SV(181) SV(182) SV(183) SV(184) SV(185) SV(186) SV(187)
	SV(188) SV(189) SV(190) SV(191)
	virtual Vector vfunc192();
	virtual Vector vfunc193();
	SV(194) SV(195) SV(196) SV(197) SV(198)
	virtual void vfunc199(Vector *pVel, void *pAng);
	SV(200) SV(201) SV(202) SV(203) SV(204) SV(205) SV(206) SV(207) SV(208) SV(209)
	SV(210) SV(211) SV(212) SV(213) SV(214) SV(215) SV(216)
	virtual Vector *vfunc217();
	SV(218)
	virtual QAngle *vfunc219();
	virtual Vector *vfunc220();
	virtual QAngle *vfunc221();
	SV(222) SV(223) SV(224) SV(225) SV(226) SV(227) SV(228) SV(229) SV(230) SV(231)
	SV(232) SV(233) SV(234) SV(235) SV(236) SV(237) SV(238) SV(239) SV(240) SV(241)
	SV(242) SV(243) SV(244) SV(245) SV(246) SV(247) SV(248) SV(249) SV(250)
	virtual bool vfunc251();
	SV(252) SV(253) SV(254) SV(255) SV(256) SV(257) SV(258) SV(259) SV(260) SV(261)
	SV(262) SV(263) SV(264) SV(265) SV(266) SV(267) SV(268) SV(269) SV(270) SV(271)
	SV(272) SV(273) SV(274) SV(275) SV(276) SV(277) SV(278) SV(279) SV(280) SV(281)
	SV(282) SV(283) SV(284) SV(285) SV(286) SV(287) SV(288) SV(289) SV(290) SV(291)
	SV(292) SV(293) SV(294) SV(295) SV(296) SV(297) SV(298) SV(299) SV(300) SV(301)
	SV(302) SV(303) SV(304) SV(305) SV(306) SV(307) SV(308) SV(309) SV(310) SV(311)
	SV(312) SV(313) SV(314) SV(315) SV(316) SV(317) SV(318) SV(319) SV(320) SV(321)
	SV(322) SV(323) SV(324) SV(325) SV(326) SV(327) SV(328) SV(329) SV(330) SV(331)
	SV(332) SV(333) SV(334) SV(335) SV(336) SV(337) SV(338) SV(339) SV(340) SV(341)
	SV(342) SV(343) SV(344)
	virtual float vfunc345(const char *pszName, float flValue, int n);
	SV(346) SV(347) SV(348) SV(349) SV(350) SV(351) SV(352) SV(353) SV(354) SV(355)
	SV(356) SV(357) SV(358) SV(359) SV(360) SV(361) SV(362) SV(363)
	virtual bool vfunc364(const Vector &v);
	SV(365) SV(366) SV(367)
	virtual Vector vfunc368();
	SV(369) SV(370) SV(371) SV(372) SV(373) SV(374) SV(375) SV(376) SV(377) SV(378)
	SV(379) SV(380) SV(381) SV(382) SV(383) SV(384) SV(385) SV(386) SV(387) SV(388)
	SV(389) SV(390) SV(391) SV(392) SV(393) SV(394) SV(395) SV(396) SV(397) SV(398)
	SV(399) SV(400) SV(401) SV(402) SV(403) SV(404) SV(405) SV(406) SV(407) SV(408)
	SV(409) SV(410) SV(411) SV(412) SV(413) SV(414) SV(415) SV(416) SV(417)
	virtual float vfunc418(float f);
	SV(419) SV(420) SV(421) SV(422) SV(423) SV(424) SV(425) SV(426) SV(427) SV(428)
	SV(429) SV(430) SV(431) SV(432) SV(433) SV(434) SV(435) SV(436) SV(437) SV(438)
	SV(439) SV(440) SV(441) SV(442) SV(443) SV(444) SV(445) SV(446) SV(447)
	virtual void vfunc448(int code);
	virtual const char *vfunc449(int task);
	SV(450) SV(451) SV(452) SV(453) SV(454) SV(455) SV(456) SV(457) SV(458) SV(459)
	SV(460) SV(461) SV(462) SV(463)
	virtual int vfunc464();
	SV(465) SV(466) SV(467) SV(468) SV(469) SV(470) SV(471) SV(472) SV(473)
	virtual SoundV *vfunc474();
	virtual SoundV *vfunc475();
	SV(476) SV(477) SV(478) SV(479) SV(480) SV(481) SV(482) SV(483) SV(484) SV(485)
	SV(486) SV(487)
	virtual void vfunc488();
	virtual void vfunc489();
	virtual void vfunc490();
	virtual void vfunc491();
	SV(492) SV(493) SV(494) SV(495) SV(496) SV(497) SV(498) SV(499) SV(500) SV(501)
	SV(502) SV(503) SV(504) SV(505) SV(506) SV(507)
	virtual void vfunc508(int n);
	SV(509) SV(510) SV(511) SV(512) SV(513) SV(514) SV(515) SV(516) SV(517) SV(518)
	SV(519) SV(520) SV(521) SV(522) SV(523) SV(524) SV(525) SV(526) SV(527)
	virtual void vfunc528();
	SV(529)
	virtual bool vfunc530(CSTV *pEnt);
	SV(531) SV(532) SV(533) SV(534) SV(535) SV(536) SV(537) SV(538) SV(539) SV(540)
	virtual EnemiesV *vfunc541();
	SV(542) SV(543) SV(544) SV(545) SV(546) SV(547) SV(548) SV(549)
	virtual float vfunc550();
	SV(551) SV(552) SV(553) SV(554) SV(555) SV(556) SV(557) SV(558) SV(559) SV(560)
	SV(561) SV(562)
	virtual void vfunc563(CSTV *pEnemy, Vector *pDest, float *pTol, float *pOut);
	SV(564) SV(565) SV(566)
	virtual int vfunc567(int hintType);
	SV(568)
	virtual int vfunc569(HintV *pHint);
	SV(570) SV(571)
	virtual void vfunc572();
	SV(573) SV(574) SV(575) SV(576) SV(577) SV(578) SV(579) SV(580) SV(581) SV(582)
	SV(583)
	virtual void vfunc584(CSTV *pNpc, StrT isz, bool b);
	SV(585) SV(586) SV(587) SV(588) SV(589) SV(590) SV(591) SV(592) SV(593) SV(594)
	SV(595) SV(596) SV(597) SV(598) SV(599)

	void sub_10273e80(char b);	// TaskComplete
	void sub_10272650(int act);	// SetIdealActivity
	void sub_10289ee0(int act);	// ResetIdealActivity
	void *sub_102cc1f0(int type);	// GetScheduleOfType
	void sub_10280e50(void *pSched);	// SetSchedule
	bool sub_102784a0(const Vector &eye, CSTV *pEnt);	// FindLateralCover
	int sub_10289fe0();	// GetScriptCustomMoveActivity
	int sub_1008dc40(int act, int b);	// TranslateActivity
	int sub_1008f7b0(const char *psz);	// LookupSequence
	void sub_10279cc0(CSTV *p);	// SetTarget
	void sub_10274080(CSTV *p);	// RememberUnreachable
	int sub_10265970();	// GetSmallFlinchActivity
	int sub_1027a6c0();	// GetStoppedActivity
	int sub_10092270(const char *psz);	// LookupPoseParameter
	void sub_100ad320(Vector *pForward, Vector *pRight, Vector *pUp);	// GetVectors
	bool sub_10094eb0(int seq);	// HasMovement
	int sub_10288610();	// GetSequence
	void sub_1027f270(int state);
	void sub_102885d0(const Vector *pOrigin);	// SetLocalOrigin
	MotorV *sub_10288650();	// GetMotor
	NavV *sub_10288630();	// GetNavigator
	const QAngle *sub_102885f0();	// GetLocalAngles
	CSTV *sub_10333ad0(const Vector &range);	// Weapon_FindUsable
	bool sub_10337230();
	bool sub_10337300();
	bool sub_10273180(char b);	// SetHullSizeSmall
	void sub_101a8cf0(int n);	// DelayStart

	MotorV *GetMotor() { return F(MotorV *, 0x5d44); }
	NavV *GetNavigator() { return F(NavV *, 0x5d34); }
	bool FindCoverFrom(const Vector &threat, Vector *pOut) { return GetNavigator()->sub_102edc80(threat, vfunc193(), 0, vfunc550(), pOut, this); }
	void sub_102827f0(const Task_t *pTask);
};

#define NAV F(NavV *, 0x5d34)
#define MOTOR GetMotor()
#define HINT F(HintV *, 0x5ddc)
#define CURTIME g_1070b228->curtime
#define TASKFAIL(code, line) { F(const char *, 0x1b44) = SCHED_FILE; F(int, 0x1b48) = line; vfunc448((int)(code)); }
#define TaskComplete() sub_10273e80(0)
#define TARGETH F(EHView, 0x5ce4)
#define CINEH F(EHView, 0x5d74)
#define WEAPON(f) FP(sub_1032e7b0(this), float, f)

inline void AI_TraceLine_RC(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, CSTV *ignore, int collisionGroup, CGameTrace *ptr)
{
	Ray_t ray;
	ray.sub_1004f7a0(&vecAbsStart.x, &vecAbsEnd.x);
	CTraceFilterSimple traceFilter(ignore, collisionGroup);
	g_1070b254->TraceRay(&ray, mask, &traceFilter, ptr);
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10146570(ptr->m_startpos, ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}
// TARGET: CSTV::sub_102827f0
void CSTV::sub_102827f0(const Task_t *pTask)
{
	switch (pTask->iTask)
	{
	case 1:	// TASK_RESET_ACTIVITY
		F(int, 0xfec) = 0;
		TaskComplete();
		break;

	case 107:	// TASK_TURN_RIGHT
		{
			sub_102e0b40(MOTOR);
			float flCurrentYaw = UTIL_AngleMod(vfunc221()->y);
			MOTOR->SetIdealYaw(UTIL_AngleMod(flCurrentYaw - pTask->flTaskData));
			vfunc572();
			break;
		}
	case 106:	// TASK_TURN_LEFT
		{
			sub_102e0b40(MOTOR);
			float flCurrentYaw = UTIL_AngleMod(vfunc221()->y);
			MOTOR->SetIdealYaw(UTIL_AngleMod(flCurrentYaw + pTask->flTaskData));
			vfunc572();
			break;
		}
	case 108:	// TASK_REMEMBER
		F(int, 0x5d8c) |= (int)pTask->flTaskData;
		TaskComplete();
		break;
	case 109:	// TASK_FORGET
		F(int, 0x5d8c) &= ~(int)pTask->flTaskData;
		TaskComplete();
		break;
	case 64:	// TASK_FIND_HINTNODE
	case 65:	// TASK_FIND_LOCK_HINTNODE
		{
			if (!HINT)
				HINT = sub_102d1af0(this, 0, (int)pTask->flTaskData, 2000, 0, 0);
			if (HINT)
				TaskComplete();
			else
				TASKFAIL(4, 0x45a);
			if (pTask->iTask == 64)
				break;
		}
	case 67:	// TASK_LOCK_HINTNODE
		{
			if (!HINT)
				TASKFAIL(4, 0x465)
			else if (HINT->sub_102d1350(this))
				TaskComplete();
			else
			{
				TASKFAIL(0x11, 0x46d);
				HINT = 0;
			}
			break;
		}
	case 23:	// TASK_STORE_LASTPOSITION
		F(Vector, 0x5db8) = *vfunc220();
		F(QAngle, 0x5dc4) = *vfunc221();
		TaskComplete();
		break;
	case 24:	// TASK_CLEAR_LASTPOSITION
		F(Vector, 0x5db8) = g_1070d1b0;
		F(QAngle, 0x5dc4) = *(QAngle *)g_1070d9d0;
		TaskComplete();
		break;
	case 25:	// TASK_STORE_POSITION_IN_SAVEPOSITION
		F(Vector, 0x5dd0) = *vfunc220();
		TaskComplete();
		break;
	case 26:	// TASK_STORE_BESTSOUND_IN_SAVEPOSITION
		{
			SoundV *pBestSound = vfunc474();
			if (!pBestSound)
			{
				TASKFAIL("No Sound!", 0x492);
				break;
			}
			F(Vector, 0x5dd0) = pBestSound->m_vecOrigin;
			CSTV *pSoundEnt = g_10566458->sub_100290c0(&pBestSound->m_hOwner);
			if (pSoundEnt)
			{
				Vector vel;
				pSoundEnt->vfunc199(&vel, 0);
				F(Vector, 0x5dd0) += vel * 2;
			}
			TaskComplete();
			break;
		}
	case 27:	// TASK_STORE_ENEMY_POSITION_IN_SAVEPOSITION
		{
			if (vfunc167() == 0)
			{
				TASKFAIL(6, 0x4a7);
				return;
			}
			F(Vector, 0x5dd0) = *vfunc167()->vfunc217();
			TaskComplete();
			break;
		}
	case 66:	// TASK_CLEAR_HINTNODE
		HINT->sub_102d1420(0);
		HINT = 0;
		TaskComplete();
		break;
	case 105:	// TASK_STOP_MOVING
		if (NAV->sub_102ee6a0())
		{
			NAV->sub_102ee270();
			if (sub_10092270("move_yaw") >= 0)
				vfunc345("move_yaw", 0, 0);
		}
		else
		{
			F(char, 0x1a40) = 0;
			TaskComplete();
		}
		break;
	case 82: case 83: case 84: case 85: case 86:	// TASK_PLAY_SEQUENCE...
		sub_10272650((int)pTask->flTaskData);
		break;
	case 48:	// TASK_PLAY_HINT_ACTIVITY
		sub_10272650(vfunc567(HINT->HintType()));
		break;
	case 76:	// TASK_SET_SCHEDULE
		{
			void *pNewSchedule = sub_102cc1f0((int)pTask->flTaskData);
			if (pNewSchedule)
			{
				F(int, 0x1b2c) = 1;
				F(const char *, 0x1b30) = SCHED_FILE;
				F(int, 0x1b34) = 0x4fc;
				F(int, 0x5c3c) = (int)pTask->flTaskData;
				sub_10280e50(pNewSchedule);
			}
			else
				TASKFAIL(5, 0x507);
			break;
		}
	case 90:	// TASK_FIND_BACKAWAY_FROM_SAVEPOSITION
		{
			if (vfunc167() == 0)
			{
				TASKFAIL(6, 0x510);
				return;
			}
			Vector backPos;
			if (!GetNavigator()->sub_102edae0(F(Vector, 0x5dd0), 0, 30000, &backPos))
				TASKFAIL(7, 0x519)
			else if (GetNavigator()->sub_102ecd20(NavGoal(backPos, 0x13), 0))
				TaskComplete();
			else
				TASKFAIL(0xc, 0x524);
			break;
		}
	case 92:	// TASK_FIND_NEAR_NODE_COVER_FROM_ENEMY
		{
			if (vfunc167() == 0)
			{
				TASKFAIL(6, 0x52d);
				return;
			}
			Vector coverPos;
			if (GetNavigator()->sub_102edc80(*vfunc167()->vfunc217(), vfunc167()->vfunc193(), 0, vfunc418(pTask->flTaskData), &coverPos, vfunc167()))
			{
				NavGoal goal(6, coverPos, 0x13);
				GetNavigator()->sub_102ecd20(goal, 0);
				if (HINT)
				{
					GetNavigator()->sub_102ee410(vfunc569(HINT));
					GetNavigator()->sub_102ee530(HINT->sub_102d11f0());
				}
			}
			else
				TASKFAIL(8, 0x541);
			break;
		}
	case 93:	// TASK_FIND_FAR_NODE_COVER_FROM_ENEMY
		{
			if (vfunc167() == 0)
			{
				TASKFAIL(6, 0x549);
				return;
			}
			Vector coverPos;
			if (GetNavigator()->sub_102edc80(*vfunc167()->vfunc217(), vfunc167()->vfunc193(), vfunc418(pTask->flTaskData), vfunc550(), &coverPos, vfunc167()))
			{
				NavGoal goal(6, coverPos, 0x13, AIN_HULL_TOLERANCE);
				GetNavigator()->sub_102ecd20(goal, 0);
				if (HINT)
				{
					GetNavigator()->sub_102ee410(vfunc569(HINT));
					GetNavigator()->sub_102ee530(HINT->sub_102d11f0());
				}
			}
			else
				TASKFAIL(8, 0x55e);
			break;
		}
	case 91:	// TASK_FIND_NODE_COVER_FROM_ENEMY
		{
			if (vfunc167() == 0)
			{
				TASKFAIL(6, 0x566);
				return;
			}
			Vector coverPos;
			if (GetNavigator()->sub_102edc80(*vfunc167()->vfunc217(), vfunc167()->vfunc193(), 0, vfunc550(), &coverPos, vfunc167()))
			{
				NavGoal goal(6, coverPos, 0x13);
				GetNavigator()->sub_102ecd20(goal, 0);
				if (HINT)
				{
					GetNavigator()->sub_102ee410(vfunc569(HINT));
					GetNavigator()->sub_102ee530(HINT->sub_102d11f0());
				}
			}
			else
				TASKFAIL(8, 0x57a);
			break;
		}
	case 88:	// TASK_FIND_COVER_FROM_ENEMY
		{
			CSTV *pEntity = vfunc167();
			if (pEntity == 0)
				pEntity = this;
			Vector coverPos;
			if (sub_102784a0(pEntity->vfunc193(), pEntity))
			{
				F(float, 0x5cf0) = CURTIME + pTask->flTaskData;
				TaskComplete();
				break;
			}
			if (GetNavigator()->sub_102edc80(*pEntity->vfunc217(), pEntity->vfunc193(), 0, vfunc550(), &coverPos, pEntity))
			{
				NavGoal goal(6, coverPos, 0x13, AIN_HULL_TOLERANCE);
				GetNavigator()->sub_102ecd20(goal, 0);
				if (HINT)
				{
					GetNavigator()->sub_102ee410(vfunc569(HINT));
					GetNavigator()->sub_102ee530(HINT->sub_102d11f0());
				}
				F(float, 0x5cf0) = CURTIME + pTask->flTaskData;
			}
			else
				TASKFAIL(8, 0x5a6);
			break;
		}
	case 89:	// TASK_FIND_LATERAL_COVER_FROM_ENEMY
		{
			CSTV *pEntity = (F(EHView, 0x5ce0).Get() == 0) ? this : F(EHView, 0x5ce0).Get();
			if (sub_102784a0(pEntity->vfunc193(), pEntity))
			{
				F(float, 0x5cf0) = CURTIME + pTask->flTaskData;
				TaskComplete();
			}
			else
				TASKFAIL(8, 0x5c2);
			break;
		}
	case 94:	// TASK_FIND_COVER_FROM_ORIGIN
		{
			Vector coverPos;
			const Vector &org = *vfunc220();
			if (GetNavigator()->sub_102edc80(org, vfunc193(), 0, vfunc550(), &coverPos, this))
			{
				NavGoal goal(coverPos, 0x13, AIN_HULL_TOLERANCE);
				NAV->sub_102ecd20(goal, 0);
				F(float, 0x5cf0) = CURTIME + pTask->flTaskData;
			}
			else
				TASKFAIL(8, 0x5d5);
			break;
		}
	case 87:	// TASK_FIND_COVER_FROM_BEST_SOUND
		{
			SoundV *pBestSound = vfunc474();
			if (!pBestSound)
			{
				TASKFAIL("No sound in list", 0x5eb);
				return;
			}
			Vector coverPos;
			if (GetNavigator()->sub_102edc80(pBestSound->m_vecOrigin, pBestSound->m_vecOrigin, (float)pBestSound->m_iVolume, vfunc550(), &coverPos, this))
			{
				NavGoal goal(coverPos, 0x13, AIN_HULL_TOLERANCE);
				GetNavigator()->sub_102ecd20(goal, 0);
				F(float, 0x5cf0) = CURTIME + pTask->flTaskData;
			}
			else
				TASKFAIL(8, 0x5fb);
			break;
		}
	case 47:	// TASK_FACE_HINTNODE
		sub_102e0b40(MOTOR);
		MOTOR->SetIdealYaw(HINT->sub_102d12e0());
		vfunc572();
		break;
	case 50:	// TASK_FACE_LASTPOSITION
		sub_102e0b40(MOTOR);
		MOTOR->sub_102e2020(F(Vector, 0x5db8), 0);
		vfunc572();
		break;
	case 51:	// TASK_SET_IDEAL_YAW_TO_CURRENT
		sub_102e0b40(MOTOR);
		MOTOR->SetIdealYaw(UTIL_AngleMod(vfunc221()->y));
		TaskComplete();
		break;
	case 49:	// TASK_FACE_TARGET
		if (TARGETH.Get() != 0)
		{
			sub_102e0b40(MOTOR);
			MOTOR->sub_102e2020(*TARGETH.Get()->vfunc217(), 0);
			vfunc572();
		}
		else
			TASKFAIL(1, 0x61c);
		break;
	case 45:	// TASK_FACE_PLAYER
		F(float, 0x5db4) = CURTIME + pTask->flTaskData;
		break;
	case 46:	// TASK_FACE_ENEMY
		{
			Vector vecEnemyLKP = vfunc541()->sub_102dfed0(vfunc167());
			if (!vfunc364(vecEnemyLKP))
			{
				sub_102e0b40(MOTOR);
				MOTOR->sub_102e2020(vecEnemyLKP, 0);
				vfunc572();
			}
			else
				TaskComplete();
			break;
		}
	case 43:	// TASK_FACE_IDEAL
		sub_102e0b40(MOTOR);
		{ vfunc572(); }
		break;
	case 44:	// TASK_FACE_PATH
		if (!NAV->sub_102ee6a0())
		{
			g_109f3658(2, "No route to face!\n");
			TASKFAIL(0xc, 0x63e);
		}
		else
		{
			const float NPC_TRIVIAL_TURN = 15;
			sub_102e0b40(MOTOR);
			MOTOR->sub_102e2020(*NAV->sub_102ee5e0(), 0);
			if (fabs(MOTOR->sub_102e1f90()) <= NPC_TRIVIAL_TURN)
			{
				TaskComplete();
				break;
			}
			vfunc572();
		}
		break;
	case 2:	// TASK_WAIT
	case 4:	// TASK_WAIT_FACE_ENEMY
		F(float, 0x5db4) = CURTIME + pTask->flTaskData;
		break;
	case 103:	// TASK_WAIT_RANDOM
		F(float, 0x5db4) = CURTIME + g_1070b244->RandomFloat(0.1f, pTask->flTaskData);
		break;
	case 11:	// TASK_MOVE_TO_TARGET_RANGE
		if (TARGETH.IsNull())
			TASKFAIL(1, 0x669)
		else if ((*TARGETH.Get()->vfunc217() - *vfunc220()).Length() < 1)
			TaskComplete();
		break;
	case 7:	// TASK_TARGET_PLAYER
		{
			CSTV *pPlayer = g_106eb5d8.sub_100f7770(0, "!player", this, 0);
			if (pPlayer)
			{
				sub_10279cc0(pPlayer);
				TaskComplete();
			}
			else
				TASKFAIL(0x17, 0x67a);
			break;
		}
	case 8:	// TASK_WALK_TO_TARGET
	case 9:	// TASK_RUN_TO_TARGET
	case 10:	// TASK_SCRIPT_CUSTOM_MOVE_TO_TARGET
		{
			int newActivity;
			if (TARGETH.IsNull())
				TASKFAIL(1, 0x686)
			else if ((*TARGETH.Get()->vfunc217() - *vfunc220()).Length() < 1)
				TaskComplete();
			else
			{
				if (pTask->iTask == 8)
					newActivity = 9;
				else if (pTask->iTask == 9)
					newActivity = 0x13;
				else
					newActivity = sub_10289fe0();

				if (newActivity != 0x18 && sub_1008dc40(newActivity, -1) == -1)
					TaskComplete();
				else if (TARGETH.IsNull())
					TASKFAIL(1, 0x6a7)
				else
				{
					NavGoal goal(1, newActivity);
					if (vfunc464() == 4 && (F(int, 0x5d7c) != -1 || F(const char *, 0x5d80) != 0))
					{
						if (F(int, 0x5d7c) != -1)
							goal.arrivalActivity = F(int, 0x5d7c);
						else
							goal.arrivalSequence = sub_1008f7b0(F(const char *, 0x5d80) ? F(const char *, 0x5d80) : g_106b8540);
					}
					if (!GetNavigator()->sub_102ecd20(goal, 4))
						TASKFAIL(0xc, 0x6be)
					else
						GetNavigator()->sub_102ee550(*TARGETH.Get()->vfunc219());
				}
			}
			F(int, 0x5d7c) = -1;
			F(const char *, 0x5d80) = 0;
			TaskComplete();
			break;
		}
	case 41:	// TASK_CLEAR_MOVE_WAIT
		F(float, 0x5cf0) = CURTIME;
		TaskComplete();
		break;
	case 54: case 59:	// TASK_MELEE_ATTACK1
		F(float, 0x5d9c) = CURTIME;
		sub_10289ee0(0x4b);
		break;
	case 55: case 60:	// TASK_MELEE_ATTACK2
		F(float, 0x5d9c) = CURTIME;
		sub_10289ee0(0x4e);
		break;
	case 52: case 57:	// TASK_RANGE_ATTACK1
		F(float, 0x5d9c) = CURTIME;
		sub_10289ee0(0x19);
		break;
	case 53: case 58:	// TASK_RANGE_ATTACK2
		F(float, 0x5d9c) = CURTIME;
		sub_10289ee0(0x1b);
		break;
	case 56: case 61:	// TASK_RELOAD
		sub_10289ee0(0x54);
		break;
	case 62:	// TASK_SPECIAL_ATTACK1
		sub_10289ee0(0x5e);
		break;
	case 63:	// TASK_SPECIAL_ATTACK2
		sub_10289ee0(0x5f);
		break;
	case 75:	// TASK_SET_ACTIVITY
		{
			int goalActivity = (int)pTask->flTaskData;
			if (goalActivity != 0)
				sub_10272650(goalActivity);
			else
				F(int, 0xfec) = 0;
			break;
		}
	case 16:	// TASK_GET_PATH_TO_ENEMY_LKP
		{
			CSTV *pEnemy = vfunc167();
			if (vfunc530(pEnemy))
			{
				TASKFAIL(0xc, 0x712);
				return;
			}
			NavGoal goal(vfunc541()->sub_102dfed0(pEnemy));
			float flOut = GetNavigator()->sub_102f2fc0();
			vfunc563(pEnemy, &goal.dest, &goal.tolerance, &flOut);
			if (GetNavigator()->sub_102ecd20(goal, 2))
			{
				GetNavigator()->sub_102f2fe0(flOut);
				TaskComplete();
			}
			else
			{
				g_109f3658(2, "GetPathToEnemyLKP failed!!\n");
				sub_10274080(vfunc167());
				TASKFAIL(0xc, 0x724);
			}
			break;
		}
	case 17:	// TASK_GET_PATH_TO_ENEMY_LKP_LOS
		{
			if (vfunc167() == 0)
			{
				TASKFAIL(6, 0x72d);
				return;
			}
			Vector vecEnemy = vfunc541()->sub_102dfed0(vfunc167());
			float flMaxRange = 2000;
			float flMinRange = 0;
			if (sub_1032e7b0(this))
			{
				flMaxRange = max(WEAPON(0x8c0), WEAPON(0x8c4));
				flMinRange = min(WEAPON(0x8b8), WEAPON(0x8bc));
			}
			if (flMaxRange > ((DistV *)this)->m_flDistTooFar)
				flMaxRange = ((DistV *)this)->m_flDistTooFar;
			Vector posLos;
			if (GetNavigator()->sub_102edaa0(vecEnemy, vecEnemy + FP(vfunc167(), Vector, 0x184), flMinRange, flMaxRange, 1.0, 0, &posLos))
			{
				NavGoal goal(posLos, 0x13, AIN_HULL_TOLERANCE);
				NAV->sub_102ecd20(goal, 2);
				NAV->sub_102ee530(vecEnemy - goal.dest);
			}
			else
				TASKFAIL(0xb, 0x74e);
			break;
		}
	case 13:	// TASK_SET_GOAL
		switch ((int)pTask->flTaskData)
		{
		case 0:
			if (vfunc167() == 0)
			{
				TASKFAIL(6, 0x75f);
				return;
			}
			F(Vector, 0x5df8) = *vfunc167()->vfunc217();
			F(int, 0x5e04) = 2;
			F(int, 0x5e08) = 0;
			F(CSTV *, 0x5df4) = vfunc167();
			NAV->sub_102ee250(0x13);
			break;
		case 2:
			if (vfunc167() == 0)
			{
				TASKFAIL(6, 0x76f);
				return;
			}
			F(Vector, 0x5df8) = vfunc541()->sub_102dfed0(vfunc167());
			F(int, 0x5e04) = 4;
			F(int, 0x5e08) = 0;
			F(CSTV *, 0x5df4) = 0;
			NAV->sub_102ee250(0x13);
			break;
		case 1:
			if (TARGETH.IsNull())
			{
				TASKFAIL(1, 0x77f);
				return;
			}
			F(Vector, 0x5df8) = *TARGETH.Get()->vfunc217();
			F(int, 0x5e04) = 1;
			F(int, 0x5e08) = 0;
			F(CSTV *, 0x5df4) = TARGETH.Get();
			NAV->sub_102ee250(0x13);
			break;
		case 3:
			if (TARGETH.IsNull())
			{
				TASKFAIL(1, 0x78f);
				return;
			}
			F(Vector, 0x5df8) = vfunc541()->sub_102dfed0(TARGETH.Get());
			F(int, 0x5e04) = 4;
			F(int, 0x5e08) = 0;
			F(CSTV *, 0x5df4) = 0;
			NAV->sub_102ee250(0x13);
			break;
		case 4:
			F(Vector, 0x5df8) = F(Vector, 0x5dd0);
			F(int, 0x5e04) = 4;
			F(int, 0x5e08) = 0;
			F(CSTV *, 0x5df4) = 0;
			NAV->sub_102ee250(0x13);
			break;
		}
		TaskComplete();
		break;
	case 14:	// TASK_GET_PATH_TO_GOAL
		{
			NavGoal goal(F(int, 0x5e04), -1, AIN_HULL_TOLERANCE, 0, F(CSTV *, 0x5df4));
			bool foundPath = false;
			switch ((int)pTask->flTaskData)
			{
			case 0:
				goal.dest = F(Vector, 0x5df8);
				foundPath = GetNavigator()->sub_102ecd20(goal, 0);
				break;
			case 1:
				{
					float flMaxRange = 2000.0f;
					float flMinRange = 0.0f;
					if (sub_1032e7b0(this))
					{
						flMaxRange = max(WEAPON(0x8c0), WEAPON(0x8c4));
						flMinRange = min(WEAPON(0x8b8), WEAPON(0x8bc));
					}
					if (flMaxRange > ((DistV *)this)->m_flDistTooFar)
						flMaxRange = ((DistV *)this)->m_flDistTooFar;
					Vector eyePosition = (F(CSTV *, 0x5df4) != 0) ? F(CSTV *, 0x5df4)->vfunc193() : F(Vector, 0x5df8);
					Vector posLos;
					if (GetNavigator()->sub_102edaa0(F(Vector, 0x5df8), eyePosition, flMinRange, flMaxRange, 1.0f, 0, &posLos))
					{
						goal.dest = posLos;
						foundPath = GetNavigator()->sub_102ecd20(goal, 0);
					}
					else
					{
						TASKFAIL(0xb, 0x7de);
						return;
					}
				}
				break;
			case 2:
				{
					CSTV *pEntity = (F(CSTV *, 0x5df4) == 0) ? this : F(CSTV *, 0x5df4);
					Vector coverPos;
					if (sub_102784a0(pEntity->vfunc193(), pEntity))
					{
						F(float, 0x5cf0) = CURTIME + pTask->flTaskData;
						TaskComplete();
						return;
					}
					else
					{
						if (GetNavigator()->sub_102edc80(*pEntity->vfunc217(), pEntity->vfunc193(), 0, vfunc550(), &coverPos, pEntity))
						{
							foundPath = GetNavigator()->sub_102ecd20(goal, 0);
							F(float, 0x5cf0) = CURTIME + pTask->flTaskData;
						}
						else
						{
							TASKFAIL(8, 0x807);
						}
					}
				}
				break;
			}
			if (foundPath)
				TaskComplete();
			else
				TASKFAIL(0xc, 0x816);
		}
		break;
	case 117:	// TASK_GET_DROPSHIP_DEPLOY_PATH
		{
			Vector vecForward;
			Vector vecGoal;
			CGameTrace tr;
			sub_100ad320(&vecForward, 0, 0);
			vecGoal = *vfunc220() + vecForward * 256;
			AI_TraceLine_RC(vecGoal, vecGoal - Vector(0, 0, 500), 0x46004003, this, 0, &tr);
			vecGoal = *(Vector *)tr.m_endpos;
			if (GetNavigator()->sub_102ecd20(NavGoal(vecGoal), 2))
				TaskComplete();
			else
				TASKFAIL("gah", 0x82f);
			TaskComplete();
		}
		break;
	case 15:	// TASK_GET_PATH_TO_ENEMY
		{
			if (vfunc530(vfunc167()))
			{
				TASKFAIL(0xc, 0x83a);
				return;
			}
			if (vfunc167() == 0)
			{
				TASKFAIL(6, 0x842);
				return;
			}
			if (GetNavigator()->sub_102ecd20(NavGoal(2), 0))
				TaskComplete();
			else
			{
				g_109f3658(2, "GetPathToEnemy failed!!\n");
				sub_10274080(vfunc167());
				TASKFAIL(0xc, 0x84f);
			}
			break;
		}
	case 18:	// TASK_GET_PATH_TO_ENEMY_CORPSE
		{
			Vector forward;
			sub_10139610(*vfunc221(), &forward, 0, 0);
			Vector vecEnemyLKP = vfunc541()->sub_102dfed0(vfunc167());
			NAV->sub_102ecd20(NavGoal(vecEnemyLKP - forward * 64), 2);
		}
		break;
	case 19:	// TASK_GET_PATH_TO_PLAYER
		{
			CSTV *pPlayer = g_106eb5d8.sub_100f7770(0, "!player", this, 0);
			NavGoal goal;
			goal.type = 4;
			goal.dest = pPlayer->vfunc192();
			goal.pTarget = pPlayer;
			NAV->sub_102ecd20(goal, 0);
			break;
		}
	case 20:	// TASK_GET_PATH_TO_ENEMY_LOS
		{
			if (vfunc167() == 0)
			{
				TASKFAIL(6, 0x86f);
				return;
			}
			float flMaxRange = 2000;
			float flMinRange = 0;
			if (sub_1032e7b0(this))
			{
				flMaxRange = max(WEAPON(0x8c0), WEAPON(0x8c4));
				flMinRange = min(WEAPON(0x8b8), WEAPON(0x8bc));
			}
			if (flMaxRange > ((DistV *)this)->m_flDistTooFar)
				flMaxRange = ((DistV *)this)->m_flDistTooFar;
			Vector posLos;
			if (GetNavigator()->sub_102edaa0(*vfunc167()->vfunc217(), vfunc167()->vfunc193(), flMinRange, flMaxRange, 1.0, 0, &posLos))
			{
				NavGoal goal(posLos, 0x13, AIN_HULL_TOLERANCE);
				NAV->sub_102ecd20(goal, 0);
				if (HINT)
					GetNavigator()->sub_102ee410(vfunc569(HINT));
				GetNavigator()->sub_102ee530(*vfunc167()->vfunc217() - posLos);
			}
			else
				TASKFAIL(0xb, 0x891);
			break;
		}
	case 30:	// TASK_GET_PATH_TO_SAVEPOSITION_LOS
		{
			float flMaxRange = 2000;
			float flMinRange = 0;
			if (sub_1032e7b0(this))
			{
				flMaxRange = max(WEAPON(0x8c0), WEAPON(0x8c4));
				flMinRange = min(WEAPON(0x8b8), WEAPON(0x8bc));
			}
			if (flMaxRange > ((DistV *)this)->m_flDistTooFar)
				flMaxRange = ((DistV *)this)->m_flDistTooFar;
			Vector vecEye = F(Vector, 0x5dd0) + F(Vector, 0x184);
			Vector posLos;
			if (GetNavigator()->sub_102edaa0(F(Vector, 0x5dd0), vecEye, flMinRange, flMaxRange, 1.0, 0, &posLos))
				GetNavigator()->sub_102ecd20(NavGoal(posLos, 0x13, AIN_HULL_TOLERANCE), 0);
			else
				TASKFAIL(0xb, 0x8b6);
			break;
		}
	case 21:	// TASK_GET_PATH_TO_TARGET
		if (TARGETH.IsNull())
			TASKFAIL(1, 0x8bf)
		else
		{
			NavGoal goal(*TARGETH.Get()->vfunc217());
			goal.pTarget = TARGETH.Get();
			NAV->sub_102ecd20(goal, 0);
		}
		break;
	case 22:	// TASK_GET_PATH_TO_HINTNODE
		if (!HINT)
			TASKFAIL(4, 0x8cf)
		else
		{
			Vector vHintPos;
			HINT->sub_102d1180(this, &vHintPos);
			NAV->sub_102ecd20(NavGoal(vHintPos, 0x13), 0);
		}
		break;
	case 28:	// TASK_GET_PATH_TO_LASTPOSITION
		if (!NAV->sub_102ecd20(NavGoal(F(Vector, 0x5db8)), 0))
			TASKFAIL(0xc, 0x8df)
		else
			NAV->sub_102ee550(F(QAngle, 0x5dc4));
		break;
	case 29:	// TASK_GET_PATH_TO_SAVEPOSITION
		NAV->sub_102ecd20(NavGoal(F(Vector, 0x5dd0)), 0);
		break;
	case 31:	// TASK_GET_PATH_TO_RANDOM_NODE
		if (GetNavigator()->sub_102ed940(vfunc418(pTask->flTaskData), vfunc368(), 0))
			TaskComplete();
		else
			TASKFAIL(0x18, 0x8f7);
		break;
	case 32:	// TASK_GET_PATH_TO_BESTSOUND
		{
			SoundV *pSound = vfunc474();
			if (!pSound)
				TASKFAIL(0x12, 0x905)
			else
				NAV->sub_102ecd20(NavGoal(pSound->m_vecOrigin), 0);
			break;
		}
	case 33:	// TASK_GET_PATH_TO_BESTSCENT
		{
			SoundV *pScent = vfunc475();
			if (!pScent)
				TASKFAIL(0x13, 0x915)
			else
				NAV->sub_102ecd20(NavGoal(pScent->m_vecOrigin), 0);
			break;
		}
	case 288:	// TASK_GET_PATH_TO_PATHCORNER
		if (!F(int, 0x20c))
			TASKFAIL(0x13, 0x921)
		else
		{
			bool bIsFlying = (vfunc94() == 5) || (vfunc94() == 6);
			const Vector &org = *F(CSTV *, 0x5de8)->vfunc220();
			NavGoal goal(3, org, bIsFlying ? 0x22 : 9, AIN_DEF_TOLERANCE, 1);
			if (!GetNavigator()->sub_102ecd20(goal, 0))
				g_109f3658(2, "Can't Create Route!\n");
		}
		break;
	case 12:	// TASK_MOVE_AWAY_PATH
		{
			QAngle ang = *vfunc221();
			ang.y = MOTOR->m_34 + 180;
			Vector move;
			sub_10139610(ang, &move, 0, 0);
			Vector vecGoal;
			vecGoal = *vfunc220() + MulV(move, vfunc418(pTask->flTaskData));
			if (GetNavigator()->sub_102ecd20(NavGoal(vecGoal, 9), 0))
				TaskComplete();
			else
			{
				Vector coverPos;
				const Vector &org = *vfunc220();
				if (GetNavigator()->sub_102edc80(org, vfunc193(), 0, vfunc550(), &coverPos, this))
				{
					NAV->sub_102ecd20(NavGoal(coverPos, 0x13), 0);
					F(float, 0x5cf0) = CURTIME + 2;
				}
				else
					TASKFAIL(8, 0x94b);
			}
		}
		break;
	case 34:	// TASK_RUN_PATH
		if (sub_1008dc40(0x13, -1) != -1)
			NAV->sub_102ee250(0x13);
		else
			NAV->sub_102ee250(9);
		F(int, 0x5d8c) &= ~2;
		TaskComplete();
		break;
	case 35:	// TASK_WALK_PATH
		{
			bool bIsFlying = (vfunc94() == 5) || (vfunc94() == 6);
			if (bIsFlying && (sub_1008dc40(0x22, -1) != -1))
				NAV->sub_102ee250(0x22);
			else if (sub_1008dc40(9, -1) != -1)
				NAV->sub_102ee250(9);
			else
				NAV->sub_102ee250(0x13);
			F(int, 0x5d8c) &= ~2;
			TaskComplete();
			break;
		}
	case 37:	// TASK_WALK_PATH_WITHIN_DIST
		F(char, 0x1a40) = 1;
		NAV->sub_102ee250(9);
		break;
	case 38:	// TASK_RUN_PATH_WITHIN_DIST
		F(char, 0x1a40) = 1;
		NAV->sub_102ee250(0x13);
		break;
	case 114:	// TASK_WEAPON_RUN_PATH
		NAV->sub_102ee250(0x13);
		break;
	case 36:	// TASK_WALK_PATH_TIMED
		F(char, 0x1a40) = 1;
		NAV->sub_102ee250(9);
		F(float, 0x5db4) = CURTIME + pTask->flTaskData;
		break;
	case 39:	// TASK_RUN_PATH_TIMED
		F(char, 0x1a40) = 1;
		NAV->sub_102ee250(0x13);
		F(float, 0x5db4) = CURTIME + pTask->flTaskData;
		break;
	case 40:	// TASK_STRAFE_PATH
		{
			F(char, 0x1a40) = 1;
			Vector2D vec2DirToPoint;
			Vector2D vec2RightSide;
			Vector right;
			sub_10139610(*vfunc221(), 0, &right, 0);
			vec2DirToPoint = AsVector2D(*GetNavigator()->sub_102ee5e0() - *vfunc220());
			Vector2DNormalize(vec2DirToPoint);
			vec2RightSide = AsVector2D(right);
			Vector2DNormalize(vec2RightSide);
			if (DotProduct2D(vec2DirToPoint, vec2RightSide) > g_104454c4)
				NAV->sub_102ee250(0x38);
			else
				NAV->sub_102ee250(0x37);
			TaskComplete();
			break;
		}
	case 111:	// TASK_WAIT_FOR_MOVEMENT_STEP
		{
			if (NAV->sub_102ee2e0())
				NAV->sub_102ee2c0();
			if (!NAV->sub_102ee6a0())
			{
				F(char, 0x1a40) = 0;
				TaskComplete();
				return;
			}
			if (vfunc251())
			{
				F(char, 0x1a40) = 0;
				TaskComplete();
				return;
			}
			F(char, 0x1a40) = 1;
			vfunc528();
			break;
		}
	case 110:	// TASK_WAIT_FOR_MOVEMENT
		{
			if (NAV->sub_102ee2e0())
				NAV->sub_102ee2c0();
			if (NAV->sub_102ee620() == 0)
			{
				F(char, 0x1a40) = 0;
				TaskComplete();
				NAV->sub_102ee270();
			}
			else if (!NAV->sub_102ee6a0())
			{
				F(char, 0x1a40) = 0;
				sub_10272650(sub_1027a6c0());
			}
			else
			{
				F(char, 0x1a40) = 1;
				vfunc528();
			}
			break;
		}
	case 42:	// TASK_SMALL_FLINCH
		sub_10272650(sub_10265970());
		break;
	case 95:	// TASK_DIE
	case 223:	// TASK_DIE_IMMEDIATE
		NAV->sub_102ee270();
		F(int, 0x200) = 1;
		break;
	case 71:	// TASK_SOUND_WAKE
		vfunc489();
		TaskComplete();
		break;
	case 73:	// TASK_SOUND_DIE
		vfunc488();
		TaskComplete();
		break;
	case 70:	// TASK_SOUND_IDLE
		vfunc490();
		TaskComplete();
		break;
	case 72:	// TASK_SOUND_PAIN
		vfunc491();
		TaskComplete();
		break;
	case 68:	// TASK_SOUND_ANGRY
		g_109f3650(2, "SOUND\n");
		TaskComplete();
		break;
	case 74:	// TASK_SPEAK_SENTENCE
		vfunc508((int)pTask->flTaskData);
		TaskComplete();
		break;
	case 96:	// TASK_WAIT_FOR_SCRIPT
		{
			if (FP(CINEH.Get(), StrT, 0x5f44).sub_10288510(CastStrT()))
			{
				CSTV *pCine = CINEH.sub_1028acc0();
				pCine->vfunc584(this, FP(CINEH.sub_1028acc0(), StrT, 0x5f44), false);
				if (sub_10288560(FP(CINEH.sub_1028acc0(), StrT, 0x5f44).sub_100cd640(), FP(CINEH.sub_1028acc0(), StrT, 0x5f48).sub_100cd640()))
					F(float, 0x6f4) = 0;
			}
			else if (F(int, 0x5d70) != 6)
				sub_10272650(1);
			break;
		}
	case 119:	// TASK_FREEZE
		F(float, 0x6f4) = 0;
		break;
	case 97:	// TASK_PUSH_SCRIPT_ARRIVAL_ACTIVITY
		{
			StrT iszArrivalText;
			if (FP(CINEH.sub_1028acc0(), StrT, 0x5f48).sub_10288510(NullStrT()))
				iszArrivalText = FP(CINEH.sub_1028acc0(), StrT, 0x5f48);
			else if (FP(CINEH.sub_1028acc0(), StrT, 0x5f4c).sub_10288510(NullStrT()))
				iszArrivalText = FP(CINEH.sub_1028acc0(), StrT, 0x5f4c);
			else
				iszArrivalText = NullStrT();
			F(int, 0x5d7c) = -1;
			F(StrT, 0x5d80) = NullStrT();
			if (iszArrivalText.sub_10288510(NullStrT()))
			{
				F(int, 0x5d7c) = sub_1025d760(iszArrivalText.sub_100cd640());
				if (F(int, 0x5d7c) == -1)
					F(StrT, 0x5d80) = iszArrivalText;
			}
			TaskComplete();
			break;
		}
	case 98:	// TASK_PLAY_SCRIPT
		if (!sub_10094eb0(sub_10288610()))
		{
		}
		sub_1027f270(0);
		F(int, 0x5d70) = 0;
		break;
	case 99:	// TASK_PLAY_SCRIPT_POST_IDLE
		sub_1027f270(2);
		F(int, 0x5d70) = 2;
		break;
	case 100:	// TASK_ENABLE_SCRIPT
		CINEH.sub_1028acc0()->sub_101a8cf0(0);
		TaskComplete();
		break;
	case 101:	// TASK_PLANT_ON_SCRIPT
		if (TARGETH.sub_1028ac10(0))
			sub_102885d0(TARGETH.sub_100d15d0()->vfunc217());
		TaskComplete();
		break;
	case 102:	// TASK_FACE_SCRIPT
		if (TARGETH.sub_1028ac10(0))
		{
			sub_102e0b40(sub_10288650());
			sub_10288650()->sub_10288670(sub_10288590(TARGETH.sub_100d15d0()->sub_102885f0()->y));
		}
		if (F(int, 0x5d70) != 6)
			vfunc572();
		sub_10288630()->sub_102ee270();
		break;
	case 6:	// TASK_SUGGEST_STATE
		F(const char *, 0x1b3c) = SCHED_FILE;
		F(int, 0x1b40) = 0xa9b;
		F(int, 0x5cc4) = (int)pTask->flTaskData;
		TaskComplete();
		break;
	case 77:	// TASK_SET_FAIL_SCHEDULE
		F(int, 0x5c54) = (int)pTask->flTaskData;
		TaskComplete();
		break;
	case 78:	// TASK_SET_TOLERANCE_DISTANCE
		sub_10288630()->sub_102ee1c0(vfunc418(pTask->flTaskData));
		TaskComplete();
		break;
	case 159:	// TASK_SET_MELEE_TOLERANCE_DISTANCE
		if (sub_1032e7b0(this))
		{
			sub_10288630()->sub_102ee1c0((int)(WEAPON(0x8c0) * pTask->flTaskData));
			TaskComplete();
		}
		else
			TASKFAIL(3, 0xab3);
		break;
	case 3:	// TASK_ANNOUNCE_ATTACK
		TaskComplete();
		break;
	case 80:	// TASK_SET_ROUTE_SEARCH_TIME
		sub_10288630()->sub_102886f0((int)pTask->flTaskData);
		TaskComplete();
		break;
	case 81:	// TASK_CLEAR_FAIL_SCHEDULE
		F(int, 0x5c54) = 0;
		TaskComplete();
		break;
	case 112:	// TASK_WEAPON_FIND
		TARGETH.sub_1028ac80(sub_10333ad0(Vector().sub_100f2f90(1000, 1000, 1000)));
		if (TARGETH.sub_100d1590())
			TaskComplete();
		else
			TASKFAIL(3, 0xaca);
		break;
	case 113:	// TASK_WEAPON_PICKUP
		sub_10272650(0x5c);
		break;
	case 115:	// TASK_USE_SMALL_HULL
		sub_10273180(0);
		TaskComplete();
		break;
	case 172:	// TASK_CHOOSE_BEST_MELEE_WEAPON
		if (sub_10337230())
			TaskComplete();
		else
			TASKFAIL(0x1f, 0xae6);
		break;
	case 173:	// TASK_CHOOSE_BEST_RANGED_WEAPON
		if (sub_10337300())
			TaskComplete();
		else
			TASKFAIL(0x1f, 0xaf1);
		break;
	case 118:	// TASK_WANDER
		{
			int iMinDist, iMaxDist, iParameter;
			iParameter = pTask->flTaskData;
			iMinDist = iParameter / 10000;
			iMaxDist = iParameter - (iMinDist * 10000);
			if (sub_10288630()->sub_102ed540(iMinDist, iMaxDist, 0))
				TaskComplete();
			else
				TASKFAIL(0x18, 0xb05);
		}
		break;
	default:
		g_109f3630("No StartTask entry for %s\n", vfunc449(pTask->iTask));
		break;
	case 5:	// TASK_WAIT_PVS
	case 104:	// TASK_WAIT_INDEFINITE
	case 116:	// TASK_FALL_TO_GROUND
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x10288780 size=0x10c4
#include "CAI_BaseNPC_vfunc144.h"
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CAI_BaseNPC.h"
#include "CAI_Motor.h"
#include "ScopeTrace.h"
#include "ehandle.h"
#include "globalvars.h"
#include "engineserver.h"
#include "Tier1.h"
#include "Vector.h"

extern "C" void *__cdecl __RTDynamicCast(void *pObj, long lDelta, void *pSrcType, void *pTargetType, int bReference);
extern char g_10538764[];
extern char g_1055f710[];

void __fastcall sub_102e0b40(float *p);
float sub_101d2c70(const Vector *pVec);
int sub_100ab250(void *pEdict);
int sub_101d1800(int edict);
void sub_101cf390(void *pEnt, const Vector *pMins, const Vector *pMaxs);

#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)
#define PV100(p) PV10(p##0) PV10(p##1) PV10(p##2) PV10(p##3) PV10(p##4) PV10(p##5) PV10(p##6) PV10(p##7) PV10(p##8) PV10(p##9)

struct RTEnemies
{
	Vector sub_102dfed0(void *pEnemy);
};

struct RTNav
{
	Vector *sub_102ee140();
	void sub_102ee220(const Vector *pPos);
	void sub_102ee250(int act);
	int sub_102ee620();
	char sub_102ee270();
	char sub_102ee6a0();
};

struct RTEnt
{
	PV10(0) PV10(1) PV10(2) PV10(3) PV10(4) PV10(5) PV10(6) PV10(7) PV10(8)
	PV(90) PV(91) PV(92) PV(93) PV(94) PV(95) PV(96)
	virtual int slot97();
	PV(98) PV(99)
	PV100(1)
	PV10(20)
	PV(210) PV(211) PV(212) PV(213) PV(214) PV(215) PV(216)
	virtual Vector *slot217();
};

struct RTWeapon
{
	PV100(0) PV100(1) PV100(2)
	PV10(30) PV10(31)
	PV(320) PV(321)
	virtual void slot322();
	char m_pad[0x898 - 4];
	char m_b898;
};

struct RTCine;
struct RTNpcV
{
	PV100(0)
	PV10(10) PV10(11) PV10(12) PV10(13) PV10(14) PV10(15)
	PV(160) PV(161) PV(162) PV(163) PV(164) PV(165) PV(166)
	virtual RTEnt *slot167();
	PV(168) PV(169)
	PV10(17) PV10(18)
	PV(190) PV(191) PV(192) PV(193) PV(194) PV(195) PV(196) PV(197)
	virtual Vector *slot198();
	PV(199)
	PV10(20)
	PV(210) PV(211) PV(212) PV(213) PV(214) PV(215) PV(216)
	virtual Vector *slot217();
	PV(218) PV(219)
	virtual Vector *slot220();
	PV(221) PV(222) PV(223) PV(224) PV(225) PV(226) PV(227) PV(228) PV(229)
	PV10(23) PV10(24)
	PV(250)
	virtual char slot251();
	PV(252) PV(253) PV(254) PV(255) PV(256) PV(257) PV(258) PV(259)
	PV10(26) PV10(27) PV10(28) PV10(29)
	PV100(3)
	PV(400) PV(401) PV(402) PV(403) PV(404) PV(405) PV(406) PV(407) PV(408) PV(409)
	PV(410) PV(411) PV(412) PV(413) PV(414) PV(415) PV(416) PV(417)
	virtual float slot418(float f);
	PV(419)
	PV10(42) PV10(43)
	PV(440) PV(441) PV(442) PV(443) PV(444) PV(445) PV(446) PV(447)
	virtual void slot448(int code);
	virtual const char *slot449(int task);
	PV10(45) PV10(46) PV10(47) PV10(48) PV10(49) PV10(50)
	PV(510) PV(511) PV(512)
	virtual int slot513();
	PV(514) PV(515) PV(516) PV(517) PV(518) PV(519)
	PV(520) PV(521) PV(522) PV(523) PV(524) PV(525) PV(526) PV(527)
	virtual void slot528();
	PV(529)
	PV10(53)
	PV(540)
	virtual RTEnemies *slot541();
	PV(542) PV(543) PV(544) PV(545) PV(546) PV(547) PV(548) PV(549)
	PV(550) PV(551)
	virtual char slot552();
	PV(553) PV(554) PV(555) PV(556) PV(557) PV(558) PV(559)
	PV(560) PV(561) PV(562) PV(563) PV(564) PV(565) PV(566) PV(567) PV(568) PV(569)
	PV(570)
	virtual int slot571(float dist);
	virtual void slot572();
};

struct RTNpcV364
{
	PV100(0) PV100(1) PV100(2)
	PV10(30) PV10(31) PV10(32) PV10(33) PV10(34) PV10(35)
	PV(360) PV(361) PV(362) PV(363)
	virtual char slot364(const Vector &v);
};

struct RTCine
{
	PV100(0) PV100(1) PV100(2) PV100(3) PV100(4)
	PV10(50) PV10(51) PV10(52) PV10(53) PV10(54) PV10(55) PV10(56) PV10(57)
	PV(580) PV(581) PV(582) PV(583)
	virtual char slot584(void *pNpc, int iszPlay, char bLoop);
	char sub_101a7540();
	void sub_101a81a0();
	void sub_101a8460(void *pNpc);
	void sub_101a8640(void *pNpc);
	char m_pad[0x5f48 - 4];
	int m_iszPlay;	// 0x5f48
	char m_pad5f4c[0x5f94 - 0x5f4c];
	EHANDLE m_hNextCine;	// 0x5f94
};

struct RTWeaponOwner
{
	void *sub_102521f0();
};

struct RTColl
{
	virtual void v0();
	virtual const Vector &slot1();
	virtual const Vector &slot2();
};

struct RTSelf
{
	char sub_10278c80();
	int sub_1027d990();
	void sub_1027d9b0(int t);
	int sub_100b3700();
	void sub_100ac4e0(int a, int b, const char *c);
	bool sub_10279420();
};

struct RTHint { const char *sub_100ab4f0(); };

struct RTEntList
{
	RTEnt *sub_100290c0(const void *h);
};
extern RTEntList *g_10566458;

void *__fastcall sub_1032e7b0(void *pNpc);
struct CSoundEntV { static void sub_101babc0(int type, const Vector *pPos, int vol, float dur, char a); };

struct RTFields
{
	char m_pad0[0x200];
	int m_lifeState;	// 0x200
	unsigned int m_fFlags204;	// 0x204
	char m_pad208[0x270 - 0x208];
	RTColl m_Collision;	// 0x270
	char m_pad274[0x2e0 - 0x274];
	int m_edict;	// 0x2e0
	char m_pad2e4[0x65c - 0x2e4];
	char m_bSequenceFinished;	// 0x65c
	char m_pad65d[0x6f0 - 0x65d];
	int m_nSequence;	// 0x6f0
	float m_flPlaybackRate;	// 0x6f4
	float m_flCycle;	// 0x6f8
	char m_pad6fc[0x1a40 - 0x6fc];
	char m_b1a40;	// 0x1a40
	char m_pad1a41[0x1b44 - 0x1a41];
	const char *m_pszFailFile;	// 0x1b44
	int m_nFailLine;	// 0x1b48
	char m_pad1b4c[0x5c4c - 0x1b4c];
	float m_flTimeTaskStarted;	// 0x5c4c
	char m_pad5c50[0x5ccc - 0x5c50];
	int m_nIdealSequence;	// 0x5ccc
	char m_pad5cd0[0x5ce0 - 0x5cd0];
	EHANDLE m_hEnemy;	// 0x5ce0
	CHandle<RTEnt> m_hTargetEnt;	// 0x5ce4
	char m_pad5ce8[0x5d34 - 0x5ce8];
	RTNav *m_pNavigator;	// 0x5d34
	char m_pad5d38[0x5d44 - 0x5d38];
	CAI_Motor *m_pMotor;	// 0x5d44
	char m_pad5d48[0x5d74 - 0x5d48];
	CHandle<RTCine> m_hCine;	// 0x5d74
	char m_pad5d78[0x5db4 - 0x5d78];
	float m_flWaitFinished;	// 0x5db4
	char m_pad5db8[0x5ddc - 0x5db8];
	char *m_pHintNode;	// 0x5ddc

	CAI_Motor *GetMotor() { return m_pMotor; }
	int edict() { return m_edict; }
	const Vector &GetLocalOrigin() { return *((RTNpcV *)this)->slot220(); }
	const Vector &WorldAlignMins() { return m_Collision.slot1(); }
	const Vector &WorldAlignMaxs() { return m_Collision.slot2(); }
	float GetTimeTaskStarted() { return m_flTimeTaskStarted; }
	RTEnt *GetEnemy() { return (RTEnt *)(CBaseEntity *)m_hEnemy; }
	RTNav *GetNavigator() { return m_pNavigator; }
};

struct Task_t
{
	int iTask;
	float flTaskData;
};

#define F ((RTFields *)this)
#define ME ((RTNpcV *)this)
#define SELF ((RTSelf *)this)
#define TASKFAIL(code, line) { F->m_pszFailFile = "E:\\Vampire\\main\\dlls\\AI_BaseNPC_Schedule.cpp"; F->m_nFailLine = line; ME->slot448(code); }

static inline float VLen1(const Vector &v) { return FastSqrt(v.x * v.x + (v.y * v.y + v.z * v.z)); }
static inline float MotorIdealYaw(CAI_Motor *m) { return m->m_34; }

struct RTMotorV : CAI_Motor
{
	void SetIdealYawAndUpdateV(const Vector &vecDir, float flSpeed) { sub_102e1c10(sub_101d2c70(&vecDir), flSpeed); }
};
static inline void FaceDir(CAI_Motor *pMotor, Vector vecDir, float flSpeed)
{
	pMotor->sub_102e1c10(sub_101d2c70(&vecDir), flSpeed);
}

void CAI_BaseNPC::vfunc444(void *pv)
{
	const Task_t *pTask = (const Task_t *)pv;
	if (0) (void)(*ME->slot198() - *ME->slot198());
	if (0) (void)(*ME->slot198() - *ME->slot198());
	if (0) (void)(*ME->slot198() - *ME->slot198());
	if (0) (void)(*ME->slot198() - *ME->slot198());
	if (0) (void)(*ME->slot198() - *ME->slot198());
	if (0) (void)(*ME->slot198() - *ME->slot198());
	switch (pTask->iTask)
	{
	case 31:
		break;
	case 106:
	case 107:
		F->GetMotor()->sub_102e1e20(-1);
		if (SELF->sub_10278c80())
			sub_10273e80(0);
		break;
	case 84:
	case 85:
	case 86:
		{
			RTEnt *pTarget;
			if (pTask->iTask == 86)
				pTarget = g_10566458->sub_100290c0(&F->m_hTargetEnt);
			else
				pTarget = ME->slot167();
			if (pTarget)
			{
				sub_102e0b40((float *)F->GetMotor());
				const Vector &vecAbs = *pTarget->slot217();
				((RTMotorV *)F->GetMotor())->SetIdealYawAndUpdateV(vecAbs - F->GetLocalOrigin(), -2.0f);
			}
			sub_10280a50();
			if (ME->slot251())
				sub_10273e80(0);
		}
		break;
	case 48:
		{
			if (!F->m_pHintNode)
				TASKFAIL(4, 0xb5c);
			char *pHint = F->m_pHintNode;
			if ((void *)g_10566458->sub_100290c0((EHANDLE *)(pHint + 0x5e0)) != this)
				g_109f3630("Hint node (%s) being used by non-owner!\n", ((RTHint *)pHint)->sub_100ab4f0());
			if (ME->slot251())
				sub_10273e80(0);
			break;
		}
	case 105:
		{
			if (SELF->sub_1027d990() == 1)
			{
				if (SELF->sub_100b3700() & 1)
				{
					SELF->sub_1027d9b0(0);
				}
				else if (VLen1(*ME->slot198()) > 0.01)
				{
					break;
				}
				else
				{
					SELF->sub_1027d9b0(0);
					TASKFAIL(0x1c, 0xb81);
				}
			}
			if (SELF->sub_1027d990() == 3)
				break;
			sub_10272650(sub_1027a6c0());
			F->m_b1a40 = 0;
			sub_10273e80(0);
			break;
		}
	case 82:
	case 83:
		sub_10280a50();
		if (ME->slot251())
			sub_10273e80(0);
		break;
	case 75:
		if (F->m_nSequence == F->m_nIdealSequence)
			sub_10273e80(0);
		break;
	case 46:
		{
			sub_102e0b40((float *)F->GetMotor());
			Vector vecEnemyLKP = ME->slot541()->sub_102dfed0(ME->slot167());
			F->GetMotor()->sub_102e20b0(&vecEnemyLKP.x, -1.0f);
			if (SELF->sub_10278c80())
				sub_10273e80(0);
			break;
		}
	case 45:
		{
			void *edict = engine->vfunc38(1);
			RTEnt *pPlayer;
			{
				ScopeTrace t("CBaseEntity::Instance", g_106b8540, g_106b8540);
				if (!edict)
					edict = engine->vfunc38(0);
				pPlayer = (RTEnt *)sub_100ab250(edict);
			}
			if (pPlayer)
			{
				sub_102e0b40((float *)F->GetMotor());
				F->GetMotor()->sub_102e20b0(&pPlayer->slot217()->x, -2.0f);
				ME->slot572();
				if (gpGlobals->curtime > F->m_flWaitFinished && F->GetMotor()->sub_102e1f90() < 10)
					sub_10273e80(0);
			}
			else
				TASKFAIL(0x17, 0xbc7);
		}
		break;
	case 43:
	case 44:
	case 47:
	case 49:
	case 50:
	case 102:
		F->GetMotor()->sub_102e1e20(-1);
		if (SELF->sub_10278c80())
			sub_10273e80(0);
		break;
	case 5:
		if ((bool)((F->m_fFlags204 >> 10) & 1) || sub_101d1800(F->edict()))
			sub_10273e80(0);
		break;
	case 104:
		break;
	case 2:
	case 103:
		if (gpGlobals->curtime >= F->m_flWaitFinished)
			sub_10273e80(0);
		break;
	case 4:
	case 176:
	case 177:
		{
			sub_102e0b40((float *)F->GetMotor());
			Vector vecEnemyLKP = ME->slot541()->sub_102dfed0(ME->slot167());
			if (!((RTNpcV364 *)this)->slot364(vecEnemyLKP))
				F->GetMotor()->sub_102e20b0(&vecEnemyLKP.x, -2.0f);
			if (gpGlobals->curtime >= F->m_flWaitFinished)
				sub_10273e80(0);
			break;
		}
	case 11:
		{
			float distance;
			if (F->m_hTargetEnt == 0)
			{
				TASKFAIL(1, 0xc09);
			}
			else
			{
				float flRange = ME->slot418(pTask->flTaskData);
				distance = (*F->GetNavigator()->sub_102ee140() - F->GetLocalOrigin()).Length2D();
				if (distance < flRange || (*F->GetNavigator()->sub_102ee140() - *F->m_hTargetEnt->slot217()).Length() > flRange * 0.5)
				{
					distance = (*F->m_hTargetEnt->slot217() - F->GetLocalOrigin()).Length2D();
					F->GetNavigator()->sub_102ee220(F->m_hTargetEnt->slot217());
				}
				if (distance < flRange)
				{
					sub_10273e80(0);
					F->GetNavigator()->sub_102ee270();
				}
				else
				{
					int followActivity = ME->slot571(distance);
					F->GetNavigator()->sub_102ee250(followActivity);
					sub_10272650(followActivity);
				}
			}
			break;
		}
	case 114:
		{
			RTEnt *pTarget = F->m_hTargetEnt;
			if (pTarget)
			{
				if (pTarget->slot97())
				{
					TASKFAIL(2, 0xc30);
				}
				else if (F->GetNavigator()->sub_102ee620() == 0)
				{
					sub_10273e80(0);
					F->GetNavigator()->sub_102ee270();
				}
			}
			else
			{
				TASKFAIL(3, 0xc3a);
			}
		}
		break;
	case 110:
	case 111:
		{
			bool fTimeExpired = (pTask->flTaskData != 0 && pTask->flTaskData < gpGlobals->curtime - F->GetTimeTaskStarted());
			if (fTimeExpired || F->GetNavigator()->sub_102ee620() == 0)
			{
				F->m_b1a40 = 0;
				sub_10273e80(0);
				F->GetNavigator()->sub_102ee270();
			}
			else if (!F->GetNavigator()->sub_102ee6a0())
			{
				F->m_b1a40 = 0;
				sub_10272650(sub_1027a6c0());
			}
			else
			{
				ME->slot528();
			}
			break;
		}
	case 95:
		{
			if (ME->slot251() && F->m_flCycle >= 1.0f)
			{
				F->m_lifeState = 2;
				SELF->sub_100ac4e0(0, 0, 0);
				F->m_flPlaybackRate = 0;
				if (!SELF->sub_10279420())
				{
					sub_101cf390(this, &Vector(-4, -4, 0), &Vector(4, 4, 1));
				}
				else
					sub_101cf390(this, &F->WorldAlignMins(), &Vector(F->WorldAlignMaxs().x, F->WorldAlignMaxs().y, F->WorldAlignMins().z + 1));
				if (ME->slot552())
				{
					sub_102695d0();
				}
				else
				{
					CSoundEntV::sub_101babc0(0x20, &F->GetLocalOrigin(), 384, 30, 0);
				}
			}
			break;
		}
	case 56:
	case 61:
		{
			sub_10280a50();
			if (pTask->iTask != 61)
			{
				sub_102e0b40((float *)F->GetMotor());
				Vector vecEnemyLKP = ME->slot541()->sub_102dfed0(F->GetEnemy());
				F->GetMotor()->sub_102e20b0(&vecEnemyLKP.x, -2.0f);
			}
			if (ME->slot251())
			{
				if (sub_1032e7b0(this))
				{
					((RTWeapon *)sub_1032e7b0(this))->m_b898 = 1;
					((RTWeapon *)sub_1032e7b0(this))->slot322();
					sub_10269b50(0x40);
					sub_10269b50(0x41);
				}
				sub_10273e80(0);
			}
			break;
		}
	case 57:
	case 58:
	case 59:
	case 60:
		sub_10280a50();
		if (ME->slot251())
			sub_10273e80(0);
		break;
	case 52:
	case 53:
	case 54:
	case 55:
	case 62:
	case 63:
		{
			sub_10280a50();
			sub_102e0b40((float *)F->GetMotor());
			Vector vecEnemyLKP = ME->slot541()->sub_102dfed0(ME->slot167());
			int task = pTask->iTask;
			if ((task == 0x34 || task == 0x38) && (ME->slot513() & 0x20000000) && ((RTNpcV364 *)this)->slot364(vecEnemyLKP))
			{
				F->GetMotor()->sub_102e1c10(MotorIdealYaw(F->GetMotor()), -2.0f);
			}
			else
			{
				F->GetMotor()->sub_102e20b0(&vecEnemyLKP.x, -2.0f);
			}
			if (ME->slot251())
				sub_10273e80(0);
			break;
		}
	case 42:
		if (ME->slot251())
			sub_10273e80(0);
		break;
	case 96:
		{
			if (F->m_hCine && F->m_hCine->sub_101a7540())
			{
				sub_10273e80(0);
				F->m_hCine->sub_101a81a0();
				F->m_hCine->slot584(this, F->m_hCine->m_iszPlay, 1);
				if (F->m_bSequenceFinished)
					sub_10280d30();
				F->m_flPlaybackRate = 1.0;
			}
			else if (!F->m_hCine)
			{
				g_109f3630("Cine died!\n");
				sub_10273e80(0);
			}
			break;
		}
	case 98:
		{
			sub_10280a50();
			if (F->m_bSequenceFinished)
			{
				if (F->m_hCine)
				{
					F->m_hCine->sub_101a8460(this);
				}
				sub_10273e80(0);
			}
			break;
		}
	case 99:
		{
			if (F->m_bSequenceFinished || (F->m_hCine->m_hNextCine != 0))
			{
				F->m_hCine->sub_101a8640(this);
			}
			break;
		}
	case 37:
	case 38:
		{
			Vector vecDiff;
			vecDiff = F->GetLocalOrigin() - *F->GetNavigator()->sub_102ee140();
			if (vecDiff.Length() <= ME->slot418(pTask->flTaskData))
			{
				F->m_b1a40 = 0;
				sub_10273e80(0);
				F->GetNavigator()->sub_102ee270();
			}
			break;
		}
	case 36:
	case 39:
		{
			if (gpGlobals->curtime > F->m_flWaitFinished || F->GetNavigator()->sub_102ee620() == 0)
			{
				F->m_b1a40 = 0;
				sub_10273e80(0);
				F->GetNavigator()->sub_102ee270();
			}
		}
		break;
	case 113:
		{
			if (ME->slot251())
			{
				RTWeaponOwner *pWeapon = (RTWeaponOwner *)__RTDynamicCast((RTEnt *)F->m_hTargetEnt, 0, g_10538764, g_1055f710, 0);
				void *pOwner = pWeapon->sub_102521f0();
				if (!pOwner)
				{
					sub_10273e80(0);
				}
				else
				{
					TASKFAIL(2, 0xd35);
				}
			}
			break;
		}
		break;
	case 116:
		if (SELF->sub_100b3700() & 1)
		{
			sub_10273e80(0);
		}
		break;
	case 118:
		break;
	case 119:
		break;
	default:
		{
			g_109f3630("No RunTask entry for %s\n", ME->slot449(pTask->iTask));
			sub_10273e80(0);
		}
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x1028a2a0 size=0xaa
#include "CAI_BaseNPC.h"

extern char g_105cde88[];	// "E:\\Vampire\\main\\dlls\\AI_BaseNPC_Schedule.cpp"

int CAI_BaseNPC::vfunc437()
{
	*(int *)((char *)this + 0x1b2c) = 1;
	if (sub_10269aa0(0x73)) {
		*(float *)((char *)this + 0x3ec) = 1.0f;
		vfunc208(0);
	}
	if (sub_10269aa0(0x75)) {
		*(const char **)((char *)this + 0x1b30) = g_105cde88;
		*(int *)((char *)this + 0x1b34) = 0xe2b;
		return 0x3a;
	}
	if (sub_10269aa0(0x30)) {
		*(const char **)((char *)this + 0x1b30) = g_105cde88;
		*(int *)((char *)this + 0x1b34) = 0xe32;
		return 0x151;
	}
	if (sub_10269aa0(0x73)) {
		*(const char **)((char *)this + 0x1b30) = g_105cde88;
		*(int *)((char *)this + 0x1b34) = 0xe37;
		return 0x3e;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1028a380 size=0x6a8
#include "CAI_BaseNPC.h"
#include "CAI_Motor.h"
#include "CBaseEntity.h"
#include <math.h>
#include "CAI_Navigator.h"

typedef void (__cdecl *FnDevWarning)(int level, const char *fmt, ...);
extern FnDevWarning g_109f3658;
extern int g_1070d1b0;

#define NPC_I(off) (*(int *)((char *)this + (off)))
#define NPC_SCHED_RET(line, val) \
	do { NPC_I(0x1b34) = (line); *(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\AI_BaseNPC_Schedule.cpp"; return (val); } while (0)

int CAI_BaseNPC::vfunc438()
{
	NPC_I(0x1b2c) = 1;
	switch (NPC_I(0x5cc0)) {
	case 0:
		g_109f3658(2, "NPC_STATE IS NONE!\n");
		break;
	case 6:
		NPC_SCHED_RET(0xe51, 1);
	case 1:
		if (sub_10269aa0(0x6a) || sub_10269aa0(0x6d) || sub_10269aa0(0x6e) || sub_10269aa0(0x70) || sub_10269aa0(0x6f))
			NPC_SCHED_RET(0xe5b, 6);
		if (sub_10269aa0(0x68))
			NPC_SCHED_RET(0xe60, 0x38);
		if (!((CAI_Navigator *)NPC_I(0x5d34))->sub_102ee620())
			NPC_SCHED_RET(0xe65, 1);
		if (sub_10269aa0(0x4c) && sub_1008dc40(0x49, -1) != -1) {
			*((char *)this + 0x5b80) = 0;
			NPC_SCHED_RET(0xe6b, 0x14);
		}
		NPC_SCHED_RET(0xe70, 2);
	case 3:
		if (sub_10269aa0(0x58) && sub_1008dc40(0x61, -1) != -1)
			NPC_SCHED_RET(0xe79, 8);
		if (!sub_10269aa0(0x4c) && !sub_10269aa0(0x4d)) {
			if (!sub_10269aa0(0x6a) && !sub_10269aa0(0x6f) && !sub_10269aa0(0x6e) && !sub_10269aa0(0x70) && !sub_10269aa0(0x6d))
				NPC_SCHED_RET(0xe95, 9);
			NPC_SCHED_RET(0xe91, 6);
		}
		*((char *)this + 0x5b80) = 0;
		if (fabs(((CAI_Motor *)NPC_I(0x5d44))->sub_102e1f90()) < (1.0 - *(float *)((char *)this + 0x1574)) * 60.0)
			NPC_SCHED_RET(0xe82, 0x19);
		if (sub_1008dc40(0x49, -1) != -1)
			NPC_SCHED_RET(0xe86, 7);
		NPC_SCHED_RET(0xe89, 6);
	case 2:
		if (sub_10269aa0(0x54))
			NPC_SCHED_RET(0xe9d, 5);
		if (sub_10269aa0(0x58)) {
			sub_10279a50(0);
			if (sub_10279dd0())
				sub_10269b50(0x58);
			else
				sub_1026e340(3);
			return sub_1028a260();
		}
		if ((sub_10269aa0(0x4c) || sub_10269aa0(0x4d)) && !(*(unsigned char *)((char *)this + 0x5d8c) & 0x40) && sub_1008dc40(0x49, -1) != -1) {
			*((char *)this + 0x5b80) = 0;
			NPC_SCHED_RET(0xeb4, 0x14);
		}
		if (vfunc404((CBaseEntity *)vfunc167()) == 2) {
			if (!sub_10269aa0(0x46) && !sub_10269aa0(0x4c) && !sub_10269aa0(0x4d))
				NPC_SCHED_RET(0xec5, 0xd);
			*((char *)this + 0x5b80) = 0;
			vfunc492();
			NPC_SCHED_RET(0xec1, 0x1b);
		}
		if (!sub_10269aa0(0x46)) {
			if (!sub_10269aa0(0x48))
				NPC_SCHED_RET(0xecf, 0xb);
			NPC_SCHED_RET(0xed4, 0xf);
		}
		if (sub_10269aa0(0x5f))
			NPC_SCHED_RET(0xed9, 0x15);
		if (sub_10269aa0(0x4f))
			NPC_SCHED_RET(0xee0, 0x21);
		if (sub_10269aa0(0x50))
			NPC_SCHED_RET(0xee4, 0x22);
		if (sub_10269aa0(0x51))
			NPC_SCHED_RET(0xee8, 0x1f);
		if (sub_10269aa0(0x52))
			NPC_SCHED_RET(0xeec, 0x20);
		if (sub_10269aa0(0x61))
			NPC_SCHED_RET(0xef0, 0xb);
		if (!sub_10269aa0(0x4f) && !sub_10269aa0(0x51))
			NPC_SCHED_RET(0xef6, 0xf);
		g_109f3658(2, "No suitable combat schedule!\n");
		break;
	case 7:
		if (sub_10090180(&g_1070d1b0, -1, 0))
			NPC_SCHED_RET(0xf04, 0x2c);
		NPC_SCHED_RET(0xf06, 0x2b);
	case 4:
		if (!((EHANDLE *)((char *)this + 0x5d74))->Get()) {
			g_109f3658(2, "Script failed for %s\n", sub_1009f200());
			sub_1027d170();
			NPC_SCHED_RET(0xf10, 1);
		}
		NPC_SCHED_RET(0xf13, 0x2e);
	case 12:
		NPC_SCHED_RET(0xf17, 1);
	default:
		g_109f3658(2, "Invalid State for SelectSchedule!\n");
		break;
	}
	NPC_SCHED_RET(0xf21, 0x43);
}
// END FUNCTION
