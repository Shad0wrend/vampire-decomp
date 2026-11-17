// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1039c480 size=0x6
#include "CNPC_VMingXiaoTentacle.h"
int CNPC_VMingXiaoTentacle::vfunc337()
{
    return 0x38000;
}
// END FUNCTION

// FUNCTION: 0x1039c4c0 size=0xed0
struct CTentTask
{
	int m_id;
	float m_flData;
};
#define vfunc442() vfunc442(CTentTask *pTask)
#include "CNPC_VMingXiaoTentacle.h"
#undef vfunc442
#include "CBaseEntity.h"
#include "CAI_Motor.h"
#include "CUnknown102e0150.h"
#include "globalvars.h"
#include "engineiface.h"
#include "CCineNPCSlots.h"
#include <math.h>

extern CBaseEntity *g_1093bd30;
extern Vector g_10934060;
extern float g_104bde70;

CBaseEntity *__fastcall sub_1032e7b0(CBaseEntity *pThis);
char *sub_102d6100(int hull);
int sub_101cf600(int a);
void __fastcall sub_1039ef60(void *pThis);
void __fastcall sub_1039ea60(void *pThis);

extern CBaseEntity *g_1093bd30x;
struct CTentNavGoal
{
	CTentNavGoal(int type, const Vector &dest, int activity = 0x13, float tolerance = g_104bde70, unsigned flags = 0, CBaseEntity *pTarget = g_1093bd30);
	int type;
	Vector dest;
	int destNode;
	int activity;
	int arrivalActivity;
	int arrivalSequence;
	float tolerance;
	unsigned flags;
	CBaseEntity *pTarget;
	Vector m_vec2c;
	float m_i38;
	int m_i3c;
};

inline CTentNavGoal::CTentNavGoal(int type, const Vector &dest, int activity, float tolerance, unsigned flags, CBaseEntity *pTarget)
 :	type(type),
	dest(dest),
	destNode(-1),
	activity(activity),
	tolerance(tolerance),
	flags(flags),
	pTarget(pTarget),
	arrivalActivity(-1),
	arrivalSequence(-1),
	m_vec2c(g_10934060),
	m_i38(0.0f),
	m_i3c(0)
{
}

struct CTentNavigator
{
	bool sub_102ecd20(const CTentNavGoal &goal, int flags);
	bool sub_102edae0(const Vector *pPos, float flDist, float flMax, Vector *pOut);
};

struct CTentNavigatorR
{
	bool sub_102edae0(const Vector &pos, float flDist, float flMax, Vector *pOut);
};
struct CTentHelper
{
	void sub_102ee1c0(float f);
};

struct CTentPlayerView
{
	CBaseEntity *sub_1039ede0();
};

struct CTentCalls
{
	void sub_102c41d0(const char *pszName, const Vector *pPos, int a, int b);
	void sub_10273070(int a);
	void sub_102a1910(CTentTask *pTask);
};

struct CTentStr
{
	const char *pszValue;
};
inline CTentStr MAKE_STR(const char *psz)
{
	CTentStr s;
	s.pszValue = (psz && *psz) ? psz : 0;
	return s;
}

struct CTentSlots
{
	CCS_V(s0) CCS_V(s1) CCS_V(s2) CCS_V(s3) CCS_V(s4) CCS_V(s5) CCS_V(s6) CCS_V(s7) CCS_V(s8) CCS_V(s9)
	virtual void slot10(int nModelIndex);
	CCS_V(s11) CCS_V(s12) CCS_V(s13) CCS_V(s14)
	virtual void slot15(const Vector *pV);
	CCS_V(s16) CCS_V(s17) CCS_V(s18) CCS_V(s19) CCS_V(s20) CCS_V(s21) CCS_V(s22) CCS_V(s23) CCS_V(s24) CCS_V(s25)
	CCS_V(s26) CCS_V(s27) CCS_V(s28) CCS_V(s29) CCS_V(s30) CCS_V(s31) CCS_V(s32) CCS_V(s33) CCS_V(s34) CCS_V(s35)
	CCS_V(s36) CCS_V(s37) CCS_V(s38) CCS_V(s39) CCS_V(s40) CCS_V(s41) CCS_V(s42) CCS_V(s43) CCS_V(s44) CCS_V(s45)
	CCS_V(s46) CCS_V(s47) CCS_V(s48) CCS_V(s49) CCS_V(s50) CCS_V(s51) CCS_V(s52) CCS_V(s53) CCS_V(s54) CCS_V(s55)
	CCS_V(s56) CCS_V(s57) CCS_V(s58) CCS_V(s59) CCS_V(s60) CCS_V(s61) CCS_V(s62) CCS_V(s63) CCS_V(s64) CCS_V(s65)
	CCS_V(s66) CCS_V(s67) CCS_V(s68) CCS_V(s69) CCS_V(s70) CCS_V(s71) CCS_V(s72) CCS_V(s73) CCS_V(s74) CCS_V(s75)
	CCS_V(s76) CCS_V(s77) CCS_V(s78) CCS_V(s79) CCS_V(s80) CCS_V(s81) CCS_V(s82) CCS_V(s83) CCS_V(s84) CCS_V(s85)
	CCS_V(s86) CCS_V(s87) CCS_V(s88) CCS_V(s89) CCS_V(s90) CCS_V(s91) CCS_V(s92) CCS_V(s93) CCS_V(s94) CCS_V(s95)
	CCS_V(s96) CCS_V(s97) CCS_V(s98) CCS_V(s99) CCS_V(s100) CCS_V(s101) CCS_V(s102) CCS_V(s103) CCS_V(s104)
	virtual void slot105(const char *pszModel);
	CCS_V(s106) CCS_V(s107) CCS_V(s108) CCS_V(s109) CCS_V(s110) CCS_V(s111) CCS_V(s112) CCS_V(s113) CCS_V(s114) CCS_V(s115)
	CCS_V(s116) CCS_V(s117) CCS_V(s118) CCS_V(s119) CCS_V(s120) CCS_V(s121) CCS_V(s122) CCS_V(s123) CCS_V(s124) CCS_V(s125)
	CCS_V(s126) CCS_V(s127) CCS_V(s128) CCS_V(s129) CCS_V(s130) CCS_V(s131) CCS_V(s132) CCS_V(s133) CCS_V(s134) CCS_V(s135)
	CCS_V(s136) CCS_V(s137) CCS_V(s138) CCS_V(s139) CCS_V(s140) CCS_V(s141) CCS_V(s142) CCS_V(s143) CCS_V(s144) CCS_V(s145)
	CCS_V(s146) CCS_V(s147) CCS_V(s148) CCS_V(s149) CCS_V(s150) CCS_V(s151) CCS_V(s152) CCS_V(s153) CCS_V(s154) CCS_V(s155)
	CCS_V(s156) CCS_V(s157) CCS_V(s158) CCS_V(s159) CCS_V(s160) CCS_V(s161) CCS_V(s162) CCS_V(s163) CCS_V(s164) CCS_V(s165)
	CCS_V(s166) CCS_V(s167) CCS_V(s168) CCS_V(s169) CCS_V(s170) CCS_V(s171) CCS_V(s172) CCS_V(s173) CCS_V(s174) CCS_V(s175)
	CCS_V(s176) CCS_V(s177) CCS_V(s178) CCS_V(s179) CCS_V(s180) CCS_V(s181) CCS_V(s182) CCS_V(s183) CCS_V(s184) CCS_V(s185)
	CCS_V(s186) CCS_V(s187) CCS_V(s188) CCS_V(s189) CCS_V(s190) CCS_V(s191) CCS_V(s192) CCS_V(s193) CCS_V(s194) CCS_V(s195)
	CCS_V(s196) CCS_V(s197) CCS_V(s198) CCS_V(s199) CCS_V(s200) CCS_V(s201) CCS_V(s202) CCS_V(s203) CCS_V(s204) CCS_V(s205)
	CCS_V(s206) CCS_V(s207) CCS_V(s208) CCS_V(s209) CCS_V(s210) CCS_V(s211)
	virtual void slot212(CTentStr s);
	CCS_V(s213) CCS_V(s214) CCS_V(s215) CCS_V(s216) CCS_V(s217) CCS_V(s218) CCS_V(s219) CCS_V(s220) CCS_V(s221) CCS_V(s222)
	CCS_V(s223) CCS_V(s224) CCS_V(s225) CCS_V(s226) CCS_V(s227) CCS_V(s228) CCS_V(s229) CCS_V(s230) CCS_V(s231) CCS_V(s232)
	CCS_V(s233) CCS_V(s234) CCS_V(s235) CCS_V(s236) CCS_V(s237) CCS_V(s238) CCS_V(s239) CCS_V(s240) CCS_V(s241) CCS_V(s242)
	CCS_V(s243) CCS_V(s244) CCS_V(s245) CCS_V(s246) CCS_V(s247) CCS_V(s248) CCS_V(s249) CCS_V(s250) CCS_V(s251) CCS_V(s252)
	CCS_V(s253) CCS_V(s254) CCS_V(s255) CCS_V(s256) CCS_V(s257) CCS_V(s258) CCS_V(s259) CCS_V(s260) CCS_V(s261) CCS_V(s262)
	CCS_V(s263) CCS_V(s264) CCS_V(s265) CCS_V(s266) CCS_V(s267) CCS_V(s268) CCS_V(s269) CCS_V(s270) CCS_V(s271) CCS_V(s272)
	CCS_V(s273) CCS_V(s274) CCS_V(s275) CCS_V(s276) CCS_V(s277) CCS_V(s278) CCS_V(s279) CCS_V(s280) CCS_V(s281) CCS_V(s282)
	CCS_V(s283) CCS_V(s284) CCS_V(s285) CCS_V(s286) CCS_V(s287) CCS_V(s288) CCS_V(s289) CCS_V(s290) CCS_V(s291) CCS_V(s292)
	CCS_V(s293) CCS_V(s294) CCS_V(s295) CCS_V(s296) CCS_V(s297) CCS_V(s298) CCS_V(s299) CCS_V(s300) CCS_V(s301) CCS_V(s302)
	CCS_V(s303) CCS_V(s304) CCS_V(s305) CCS_V(s306) CCS_V(s307) CCS_V(s308) CCS_V(s309) CCS_V(s310) CCS_V(s311) CCS_V(s312)
	CCS_V(s313) CCS_V(s314) CCS_V(s315) CCS_V(s316) CCS_V(s317) CCS_V(s318) CCS_V(s319) CCS_V(s320) CCS_V(s321) CCS_V(s322)
	CCS_V(s323) CCS_V(s324) CCS_V(s325) CCS_V(s326) CCS_V(s327) CCS_V(s328) CCS_V(s329) CCS_V(s330) CCS_V(s331) CCS_V(s332)
	CCS_V(s333) CCS_V(s334) CCS_V(s335) CCS_V(s336) CCS_V(s337) CCS_V(s338) CCS_V(s339) CCS_V(s340) CCS_V(s341) CCS_V(s342)
	CCS_V(s343) CCS_V(s344) CCS_V(s345) CCS_V(s346) CCS_V(s347) CCS_V(s348) CCS_V(s349) CCS_V(s350) CCS_V(s351) CCS_V(s352)
	CCS_V(s353) CCS_V(s354) CCS_V(s355) CCS_V(s356) CCS_V(s357) CCS_V(s358) CCS_V(s359) CCS_V(s360) CCS_V(s361) CCS_V(s362)
	CCS_V(s363) CCS_V(s364) CCS_V(s365) CCS_V(s366) CCS_V(s367) CCS_V(s368) CCS_V(s369) CCS_V(s370) CCS_V(s371) CCS_V(s372)
	CCS_V(s373) CCS_V(s374) CCS_V(s375) CCS_V(s376) CCS_V(s377) CCS_V(s378) CCS_V(s379) CCS_V(s380) CCS_V(s381) CCS_V(s382)
	CCS_V(s383) CCS_V(s384) CCS_V(s385) CCS_V(s386) CCS_V(s387) CCS_V(s388) CCS_V(s389) CCS_V(s390) CCS_V(s391) CCS_V(s392)
	CCS_V(s393) CCS_V(s394) CCS_V(s395) CCS_V(s396) CCS_V(s397) CCS_V(s398) CCS_V(s399) CCS_V(s400) CCS_V(s401) CCS_V(s402)
	CCS_V(s403) CCS_V(s404) CCS_V(s405) CCS_V(s406) CCS_V(s407) CCS_V(s408) CCS_V(s409) CCS_V(s410) CCS_V(s411) CCS_V(s412)
	CCS_V(s413) CCS_V(s414) CCS_V(s415) CCS_V(s416) CCS_V(s417) CCS_V(s418) CCS_V(s419) CCS_V(s420) CCS_V(s421) CCS_V(s422)
	CCS_V(s423) CCS_V(s424) CCS_V(s425) CCS_V(s426) CCS_V(s427) CCS_V(s428) CCS_V(s429) CCS_V(s430) CCS_V(s431) CCS_V(s432)
	CCS_V(s433) CCS_V(s434) CCS_V(s435) CCS_V(s436) CCS_V(s437) CCS_V(s438) CCS_V(s439) CCS_V(s440) CCS_V(s441) CCS_V(s442)
	CCS_V(s443) CCS_V(s444) CCS_V(s445) CCS_V(s446) CCS_V(s447)
	virtual void slot448(int code);
};


template <int O, class T> struct At { char pad[O]; T v; };
#define FLD(T, o) (((At<o, T > *)this)->v)
#define EFLD(p, T, o) (((At<o, T > *)(p))->v)
#define SL ((CTentSlots *)this)
#define TASKFAIL(code, line) { FLD(const char *, 0x1b44) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiaoTentacle.cpp"; FLD(int, 0x1b48) = line; SL->slot448(code); }
#define RANDF(lo, hi) enginerandom->vfunc1(lo, hi)


struct CTentNavView
{
	char m_pad[0x5d34];
	CTentNavigator *m_pNav;
	CTentNavigator *GetNavigator() { return m_pNav; }
};
#define NAV (((CTentNavView *)this)->GetNavigator())

void CNPC_VMingXiaoTentacle::vfunc442(CTentTask *pTask)
{
	CTentCalls *self = (CTentCalls *)this;
	switch (pTask->m_id) {
	case 0x9f:
		if (sub_1032e7b0((CBaseEntity *)this)) {
			CBaseEntity *pEnemy = vfunc167();
			int hull;
			if (pEnemy && EFLD(pEnemy, CBaseEntity *, 0x9c))
				hull = EFLD(EFLD(pEnemy, CBaseEntity *, 0x9c), int, 0x1568);
			else
				hull = 0;
			CTentHelper *pHelper = (CTentHelper *)m_p5d34;
			float *a = (float *)sub_102d6100(FLD(int, 0x1568));
			float *b = (float *)sub_102d6100(hull);
			pHelper->sub_102ee1c0(*(float *)((char *)sub_1032e7b0((CBaseEntity *)this) + 0x8c0) * pTask->m_flData + (*a + *b));
			sub_10273e80(0);
		} else {
			TASKFAIL(3, 0x181);
		}
		break;
	case 0x8b: {
		CBaseEntity *pEnemy = vfunc167();
		if (pEnemy && EFLD(pEnemy, int, 0x9c)) {
			sub_102e0b40((float *)m_pMotor5d44);
			Vector vec;
			((CUnknown102e0150 *)vfunc541())->sub_102dfed0(&vec, vfunc167());
			m_pMotor5d44->sub_102e2020(&vec.x, 0);
		}
		sub_10289ee0(0x51);
		break;
	}
	case 0x8e:
		sub_10289ee0(0x52);
		break;
	case 0x14a: {
		int n = (int)pTask->m_flData;
		if (n != m_n6670) {
			sub_1039f310();
			switch (n) {
			case 1:
				m_n6670 = 1;
				m_b63d8 = 1;
				m_n6674 = 0;
				break;
			case 2:
				m_n6670 = 2;
				m_b63d8 = 0;
				m_n6674 = 0;
				break;
			case 3:
				m_n6670 = 3;
				m_b63d8 = 1;
				m_n6674 = 0;
				break;
			case 0:
				m_n6670 = 0;
				m_b63d8 = 1;
				m_n6674 = 0;
				break;
			default:
				m_n6670 = 0;
				m_b63d8 = 1;
				m_n6674 = 0;
				break;
			}
		}
		sub_10273e80(0);
		break;
	}
	case 0x14b: {
		int n = (int)pTask->m_flData;
		Vector pos = *(Vector *)vfunc217();
		switch (n) {
		case 2:
			SL->slot212(MAKE_STR("models/character/monster/MingXiao/MingXiao_baby/MingXiao_baby.mdl"));
			SL->slot10(m_nModelIndex6668);
			SL->slot105("models/character/monster/MingXiao/MingXiao_baby/MingXiao_baby.mdl");
			FLD(int, 0x1568) = 0x11;
			FLD(int, 0x156c) = 0x11;
			SL->slot15(&Vector(0, 0, 0));
			break;
		case 3:
			SL->slot212(MAKE_STR("models/character/monster/MingXiao/MingXiao_transformation.mdl"));
			SL->slot10(m_nModelIndex666c);
			SL->slot105("models/character/monster/MingXiao/MingXiao_transformation.mdl");
			FLD(int, 0x1568) = 0xf;
			FLD(int, 0x156c) = 0xf;
			SL->slot15(&Vector(64, 64, 32));
			self->sub_102c41d0("Ming_xiao_baby_transform_emitter", &pos, 0, 0);
			break;
		case 0:
		case 1:
			;
		default:
			SL->slot212(MAKE_STR("models/character/monster/MingXiao/MingXiao_baby/MingXiao_baby.mdl"));
			SL->slot10(m_nModelIndex6664);
			SL->slot105("models/character/monster/MingXiao/MingXiao_baby/MingXiao_baby.mdl");
			FLD(int, 0x1568) = 0x11;
			FLD(int, 0x156c) = 0x11;
			SL->slot15(&Vector(0, 0, 0));
			self->sub_102c41d0("Ming_xiao_tentacle_transform_emitter", &pos, 0, 0);
			break;
		}
		self->sub_10273070(1);
		sub_101cf600((int)this);
		sub_10273e80(0);
		break;
	}
	case 0x14c:
		vfunc416(1);
		break;
	case 0x14e:
		sub_1039ef10();
		sub_10273e80(0);
		break;
	case 0x14f: {
		if (!vfunc167()) {
			TASKFAIL(6, 0x200);
			break;
		}
		Vector vecEnemy = *(Vector *)((CNPC_VMingXiaoTentacle *)vfunc167())->vfunc217();
		Vector vecGoal;
		if (!NAV->sub_102edae0(&vecEnemy, 512.0f, 30000.0f, &vecGoal)) {
			TASKFAIL(7, 0x20b);
			break;
		}
		Vector vecDelta;
		vecDelta = vecEnemy - vecGoal;
		float dx = vecDelta.x;
		float dy = vecDelta.y;
		float xmin, xmax, ymin, ymax;
		if (fabs(dx) > fabs(dy)) {
			if (dx > 0.0f) {
				xmin = 0.0f;
				xmax = 60.0f;
			} else {
				xmax = 0.0f;
				xmin = -60.0f;
			}
			ymin = -80.0f;
			ymax = 80.0f;
		} else {
			if (dy > 0.0f) {
				ymin = 0.0f;
				ymax = 60.0f;
			} else {
				ymax = 0.0f;
				ymin = -60.0f;
			}
			xmin = -80.0f;
			xmax = 80.0f;
		}
		{ Vector vecTest = vecGoal;
		int i = 0;
		bool bOk;
		do {
			vecTest.Init(vecGoal.x + RANDF(xmin, xmax), vecGoal.y + RANDF(ymin, ymax), vecGoal.z + vfunc522() * 0.5f);
			bOk = sub_102a0fb0(&vecTest, 0x202400b, 0, 0);
			i++;
		} while (i < 5 && !bOk);
		if (bOk)
			vecGoal = vecTest; }
		if (NAV->sub_102ecd20(CTentNavGoal(4, vecGoal), 0)) {
			FLD(float, 0x667c) = RANDF(1.0f, 2.0f) + gpGlobals->curtime;
			sub_10273e80(0);
		} else {
			TASKFAIL(0xc, 0x26b);
		}
		break;
	}
	case 0x14d:
		sub_10273e80(0);
		break;
	case 0x151: {
		CBaseEntity *pPlayer = ((CTentPlayerView *)this)->sub_1039ede0();
		CBaseEntity *pEnemy = vfunc167();
		if (pPlayer && pEnemy) {
			Vector vecPlayer = *(Vector *)((CNPC_VMingXiaoTentacle *)pPlayer)->vfunc217();
			Vector dir = vecPlayer - *(Vector *)((CNPC_VMingXiaoTentacle *)pEnemy)->vfunc217();
			VectorNormalize(dir);
			Vector vecTest = vecPlayer + dir * 200.0f + Vector(RANDF(-20.0f, 20.0f), RANDF(-20.0f, 20.0f), RANDF(-20.0f, 20.0f));
			if (sub_102a0fb0(&vecTest, 0x202400b, 0, 0)) {
				if (NAV->sub_102ecd20(CTentNavGoal(4, vecTest), 0)) {
					FLD(float, 0x667c) = gpGlobals->curtime + 600.0f;
					m_n6680 = RANDF(5.0f, 15.0f) + gpGlobals->curtime;
					sub_10273e80(0);
				} else {
					TASKFAIL(0xc, 0x294);
				}
			} else {
				TASKFAIL(0x1a, 0x29a);
			}
		} else {
			TASKFAIL(1, 0x2a0);
		}
		break;
	}
	case 0x152: {
		Vector vecGoal;
		bool bFound = false;
		if (vfunc167()) {
			Vector vecEnemy = *(Vector *)((CNPC_VMingXiaoTentacle *)vfunc167())->vfunc217();
			if ((vecEnemy - *(Vector *)vfunc217()).LengthSqr() < 262144.0f) {
				Vector vecMid;
				vecMid = (vecEnemy * 3.0f + m_vecScatterCenter) * 0.25f;
				bFound = NAV->sub_102edae0(&vecMid, 512.0f, 30000.0f, &vecGoal);
			}
		}
		if (!bFound)
			bFound = NAV->sub_102edae0(&m_vecScatterCenter, 512.0f, 30000.0f, &vecGoal);
		if (!bFound) {
			TASKFAIL(7, 0x2c6);
			break;
		}
		if (NAV->sub_102ecd20(CTentNavGoal(4, vecGoal), 0)) {
			FLD(float, 0x667c) = gpGlobals->curtime + 600.0f;
			sub_10273e80(0);
		} else {
			TASKFAIL(0xc, 0x2d4);
		}
		break;
	}
	case 0x153:
		::sub_1039ef60(this);
		sub_10273e80(0);
		break;
	case 0x154:
		sub_10289ee0(0x49);
		break;
	case 0x155: {
		Vector pos = *(Vector *)vfunc217();
		self->sub_102c41d0("Ming_xiao_baby_death_emitter", &pos, 0, 0);
		sub_10273e80(0);
		break;
	}
	case 0x156:
		::sub_1039ea60(this);
		sub_10273e80(0);
		break;
	case 0x150:
		break;
	default:
		self->sub_102a1910(pTask);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x1039de20 size=0x3bc
// TARGET: CNPC_VMingXiaoTentacle::vfunc438
#include "CNPC_VMingXiaoTentacle.h"
#include "CBaseCombatWeapon.h"
#include "engineiface.h"
#include "globalvars.h"

struct CTentCalls
{
	char sub_1039ee20(void *pArg);
	char sub_10269aa0(int a);
	CBaseCombatWeapon *sub_1032e7b0();
};

#define TENT_FILE "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiaoTentacle.cpp"
#define V ((CTentCalls *)this)

int CNPC_VMingXiaoTentacle::vfunc438()
{
	m_n1b2c = 0x1a;
	if (m_n6674 == 0.0f)
	{
		switch (m_n6670)
		{
		case 1: m_n6674 = gpGlobals->curtime + 0.5; break;
		case 2: m_n6674 = gpGlobals->curtime + 10.0f; break;
		case 3: m_n6674 = gpGlobals->curtime + 9999.0f; break;
		case 0: goto def1;
		default:
def1:
			m_n6674 = gpGlobals->curtime + 4.0f; break;
		}
	}

	switch (m_n6670)
	{
	case 1:
		if (gpGlobals->curtime < m_n6674)
		{
			m_pszFile1b30 = TENT_FILE;
			m_nLine1b34 = 0x3eb;
			return 0x158;
		}
		m_pszFile1b30 = TENT_FILE;
		m_nLine1b34 = 0x3f0;
		return 0x159;

	case 2:
		switch (m_nState5cc0)
		{
		case 1:
			if (gpGlobals->curtime >= m_n6674 && sub_1039eee0())
			{
				float *pArg = vfunc217();
				char r = V->sub_1039ee20(pArg);
				m_pszFile1b30 = TENT_FILE;
				if (r)
				{
					m_nLine1b34 = 0x400;
					return 0x160;
				}
				m_nLine1b34 = 0x404;
				return 0x161;
			}
			m_nLine1b34 = 0x409;
			m_pszFile1b30 = TENT_FILE;
			return 0x15a;

		case 2:
			m_b5b80 = 0;
			if (V->sub_10269aa0(0x78))
			{
				sub_10269b50(0x78);
				m_nLine1b34 = 0x41c;
				m_pszFile1b30 = TENT_FILE;
				return 0x165;
			}
			if (gpGlobals->curtime >= m_n6674 && sub_1039eee0())
			{
				float *pArg = vfunc217();
				char r = V->sub_1039ee20(pArg);
				m_pszFile1b30 = TENT_FILE;
				if (r)
				{
					m_nLine1b34 = 0x423;
					return 0x160;
				}
				m_nLine1b34 = 0x427;
				return 0x161;
			}
			if (gpGlobals->curtime >= m_n6678)
			{
				if (m_f6268 <= 256.0f)
				{
					m_nLine1b34 = 0x42e;
					m_pszFile1b30 = TENT_FILE;
					return 0x15b;
				}
				if (gpGlobals->curtime >= m_n6680 && enginerandom->vfunc2(0, 99) < 0x32)
				{
					m_nLine1b34 = 0x436;
					m_pszFile1b30 = TENT_FILE;
					return 0x163;
				}
				m_nLine1b34 = 0x43a;
				m_pszFile1b30 = TENT_FILE;
				return 0x15f;
			}
			{
				int result = vfunc604(V->sub_1032e7b0() ? V->sub_1032e7b0()->vfunc360() : 0);
				if (result)
					return result;
				m_nLine1b34 = 0x44f;
				m_pszFile1b30 = TENT_FILE;
				return 0x164;
			}

		default:
			m_nLine1b34 = 0x468;
			m_pszFile1b30 = TENT_FILE;
			return 0x164;
		}

	case 3:
		{
			float *pArg = vfunc217();
			char result = V->sub_1039ee20(pArg);
			m_pszFile1b30 = TENT_FILE;
			if (result)
			{
				m_nLine1b34 = 0x45e;
				return 0x160;
			}
			m_nLine1b34 = 0x462;
			return 0x161;
		}

	case 0: goto def2;
	default:
def2:
		if (gpGlobals->curtime < m_n6674)
		{
			m_nLine1b34 = 0x3dd;
			m_pszFile1b30 = TENT_FILE;
			return 0x156;
		}
		m_nLine1b34 = 0x3e2;
		m_pszFile1b30 = TENT_FILE;
		return 0x157;
	}
}
// END FUNCTION

// FUNCTION: 0x1039e310 size=0x90
#include "CNPC_VMingXiaoTentacle.h"

#define QV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define QV100(p) QV10(p##0) QV10(p##1) QV10(p##2) QV10(p##3) QV10(p##4) QV10(p##5) QV10(p##6) QV10(p##7) QV10(p##8) QV10(p##9)

struct CVTSlots {
	QV100(s0)
	QV10(s10) QV10(s11) QV10(s12) QV10(s13) QV10(s14) QV10(s15)
	virtual void s160(); virtual void s161(); virtual void s162(); virtual void s163();
	virtual void s164(); virtual void s165(); virtual void s166();
	virtual int vfunc167();
};

struct CVTFields {
	char m_pad0[0x1b38];
	int m_n1b38;
	const char *m_pszFile1b3c;
	int m_nLine1b40;
	char m_pad1[0x5cc0 - 0x1b44];
	int m_nState5cc0;
	int m_nIdealState5cc4;
};

int CNPC_VMingXiaoTentacle::vfunc461()
{
	CVTFields *p = (CVTFields *)this;
	p->m_n1b38 = 0x1a;
	if (p->m_nState5cc0 != 7 && p->m_nIdealState5cc4 != 7) {
		int r = ((CVTSlots *)this)->vfunc167();
		p->m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiaoTentacle.cpp";
		if (r) {
			p->m_nIdealState5cc4 = 2;
			p->m_nLine1b40 = 0x48d;
			return *(volatile int *)&p->m_nIdealState5cc4;
		}
		p->m_nIdealState5cc4 = 1;
		p->m_nLine1b40 = 0x491;
		return *(volatile int *)&p->m_nIdealState5cc4;
	}
	p->m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiaoTentacle.cpp";
	p->m_nLine1b40 = 0x486;
	p->m_nIdealState5cc4 = 7;
	return 7;
}
// END FUNCTION

// FUNCTION: 0x1039e3d0 size=0x334
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VMingXiaoTentacle.h"
#include "CAI_BaseNPCTroika.h"
#include "CAI_Navigator.h"
#include "CBCCSlotViews.h"
#include "ScopeTrace.h"
#include "CVProfile.h"
#include "globalvars.h"
#include "engineiface.h"

struct CTentSlotView
{
	VIEW_SLOT100(0) VIEW_SLOT10(10) VIEW_SLOT10(11) VIEW_SLOT10(12) VIEW_SLOT10(13) VIEW_SLOT10(14) VIEW_SLOT10(15)
	VIEW_SLOT(160) VIEW_SLOT(161) VIEW_SLOT(162) VIEW_SLOT(163) VIEW_SLOT(164) VIEW_SLOT(165) VIEW_SLOT(166)
	virtual CEntityOriginSlotView *vfunc167();
	VIEW_SLOT(168) VIEW_SLOT(169)
	VIEW_SLOT10(17) VIEW_SLOT10(18) VIEW_SLOT10(19)
	VIEW_SLOT(200) VIEW_SLOT(201) VIEW_SLOT(202) VIEW_SLOT(203) VIEW_SLOT(204) VIEW_SLOT(205) VIEW_SLOT(206) VIEW_SLOT(207) VIEW_SLOT(208)
	virtual int vfunc209();
	VIEW_SLOT10(21) VIEW_SLOT10(22) VIEW_SLOT10(23) VIEW_SLOT10(24) VIEW_SLOT10(25) VIEW_SLOT10(26) VIEW_SLOT10(27) VIEW_SLOT10(28) VIEW_SLOT10(29)
	VIEW_SLOT10(30) VIEW_SLOT10(31) VIEW_SLOT10(32) VIEW_SLOT10(33) VIEW_SLOT10(34) VIEW_SLOT10(35) VIEW_SLOT10(36) VIEW_SLOT10(37) VIEW_SLOT10(38) VIEW_SLOT10(39)
	VIEW_SLOT10(40) VIEW_SLOT10(41) VIEW_SLOT10(42) VIEW_SLOT10(43)
	VIEW_SLOT(440) VIEW_SLOT(441) VIEW_SLOT(442) VIEW_SLOT(443) VIEW_SLOT(444) VIEW_SLOT(445) VIEW_SLOT(446) VIEW_SLOT(447)
	virtual void vfunc448(int task);
};

struct CNav102edae0 : CAI_Navigator
{
	bool sub_102edae0(const float *pPosition, float flDistance, float flMax, float *pOut);
	bool sub_102ee220(const float *pPosition);
};

struct CCycleCountRunAI
{
	unsigned __int64 m_Int64;
	CCycleCountRunAI() { m_Int64 = 0; }
	void Sample()
	{
		unsigned long *pSample = (unsigned long *)&m_Int64;
		__asm {
			mov ecx, pSample
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
};

struct TentF
{
	char p0[0x26c];
	const char *m_pszName26c;
	char p1[0x1b44 - 0x270];
	const char * m_pszFile1b44;
	 int m_nLine1b48;
	char p2[0x5d34 - 0x1b4c];
	CAI_Navigator *m_pNavigator5d34;
	char p3[0x667c - 0x5d38];
	float m_n667c;
};
#define F ((TentF *)this)

struct TentVtbl { char pad[0x700]; void (CTentSlotView::*f448)(int); };
#define TFILE "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiaoTentacle.cpp"
inline void (CTentSlotView::*GetF448(void *p))(int) { ((TentF *)p)->m_pszFile1b44 = TFILE; return (*(TentVtbl **)p)->f448; }
inline CNav102edae0 *GetNavT(void *p) { return (CNav102edae0 *)((TentF *)p)->m_pNavigator5d34; }
// TARGET: CNPC_VMingXiaoTentacle::vfunc432
void CNPC_VMingXiaoTentacle::vfunc432(int a)
{
	ScopeTrace trace("CNPC_VMingXiaoTentacle::RunAI", this ? (F->m_pszName26c ? F->m_pszName26c : g_106b8540) : g_105387dc, g_106b8540);
	CVProfile *pv = g_109f3648;
	if (pv->m_enabled || !pv->m_bAtRoot) {
		if (pv->m_pCurNode->m_pszName != "CNPC_VMingXiaoTentacle_RunAI")
			pv->m_pCurNode = pv->m_pCurNode->GetSubNode("CNPC_VMingXiaoTentacle_RunAI", 0, "Unaccounted");
		pv->m_pCurNode->EnterScope();
		pv->m_bAtRoot = false;
	}
	if (gpGlobals->curtime > F->m_n667c) {
		F->m_n667c = enginerandom->vfunc1(1.0f, 2.0f) + gpGlobals->curtime;
		if (GetNavT(this)->sub_102ee6a0() && GetNavT(this)->sub_102ee620() == 4) {
			CTentSlotView *v = (CTentSlotView *)this;
			if (!v->vfunc167()) {
				F->m_nLine1b48 = 0x4ba;
				(v->*(GetF448(this)))(6);
			} else {
				if (!(m_f6268 <= 256.0f))
					goto done;
				float vecPos[3];
				CEntityOriginSlotView *pT = v->vfunc167();
				CNav102edae0 *pNav = GetNavT(this);
				if (!pNav->sub_102edae0(pT->vfunc217(), 512.0f, 30000.0f, vecPos)) {
					F->m_nLine1b48 = 0x4c6;
					(v->*(GetF448(this)))(7);
				} else {
					if (GetNavT(this)->sub_102ee220(vecPos))
						goto done;
					F->m_nLine1b48 = 0x4d0;
					(v->*(GetF448(this)))(12);
				}
			}
		}
	}
done:
	if (m_b6688 && gpGlobals->curtime >= m_flTimer6684) {
		m_b6688 = 0;
		if (!sub_102a0fb0(vfunc217(), 0x202400b, 0, 0))
		{
			m_flTimer6684 = gpGlobals->curtime + 1.0f;
			m_b6688 = 1;
		}
	}
	if (!m_b6698 && ((CTentSlotView *)this)->vfunc209()) {
		sub_1039f030();
		sub_1039f1a0();
		m_b6698 = 1;
	}
	((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc432(a);
	pv = g_109f3648;
	if (!pv->m_bAtRoot || pv->m_enabled) {
		CVProfNode *n = pv->m_pCurNode;
		if (--n->m_nRecursions == 0 && n->m_nCurFrameCalls != 0) {
			CCycleCountRunAI cnt;
			cnt.Sample();
			unsigned __int64 *pc = &n->m_CurFrameTime.m_Int64;
			*pc = cnt.m_Int64 - *pc;
			n->m_TotalTime += *pc;
			g_109f3648->PopGroup();
		}
		if (n->m_nRecursions == 0)
			pv->m_pCurNode = pv->m_pCurNode->m_pParent;
		pv->m_bAtRoot = pv->m_pCurNode == pv->m_pRoot;
	}
}
// END FUNCTION

// FUNCTION: 0x1039e890 size=0x3d
#include "vampire.h"
#include "CAI_BaseNPCTroika.h"
#include "CNPC_VMingXiaoTentacle.h"

extern char g_1064a398[];

struct CUnknownTroikaBase1039e890
{
    void sub_10012611(int a);
};

// TARGET: CNPC_VMingXiaoTentacle::vfunc390
void CNPC_VMingXiaoTentacle::vfunc390(int a)
{
    m_n6680 = 0;
    m_pszFile1b30 = g_1064a398;
    m_nLine1b34 = 0x549;
    ((CAI_BaseNPCTroika *)this)->sub_102ae750(0x168, 0);
    ((CUnknownTroikaBase1039e890 *)this)->sub_10012611(a);
}
// END FUNCTION

// FUNCTION: 0x1039e970 size=0xbc
#include "CNPC_VMingXiaoTentacle.h"

#define TENTACLE_FILE "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiaoTentacle.cpp"

void CNPC_VMingXiaoTentacle::sub_1039e970()
{
	switch ((unsigned int)m_n6670) {
	case 0:
		goto L_default;
	case 1:
		goto L_default;
	case 2:
		m_pszFile1b30 = TENTACLE_FILE;
		m_nLine1b34 = 0x590;
		sub_102ae750(0x16a, 1);
		break;
	case 3:
		if (sub_10295460(0x1d, 0) != -1) {
			m_pszFile1b30 = TENTACLE_FILE;
			m_nLine1b34 = 0x598;
			sub_102ae750(0x16a, 1);
		} else {
			m_pszFile1b30 = TENTACLE_FILE;
			m_nLine1b34 = 0x59d;
			sub_102ae750(0x16c, 1);
		}
		break;
	default:
	L_default:
		sub_1039f310();
		m_pszFile1b30 = TENTACLE_FILE;
		m_nLine1b34 = 0x589;
		sub_102ae750(0x16b, 1);
		break;
	}
	m_nTakeDamage = 1;
	m_b6699 = 1;
	m_b63d8 = 1;
}
// END FUNCTION
