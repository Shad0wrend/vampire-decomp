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
