// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10185ac0 size=0x9
#include "CPlayerMove.h"
// TARGET: CPlayerMove::CPlayerMove
CPlayerMove::CPlayerMove() { }
// END FUNCTION

// FUNCTION: 0x10185ae0 size=0x20
#include "vampire.h"
extern char g_10471730;
void sub_10430964(void *p);
struct CUnk10185ae0
{
    void *sub_10185ae0(unsigned char bFree);
};
// TARGET: CUnk10185ae0::sub_10185ae0
void *CUnk10185ae0::sub_10185ae0(unsigned char bFree)
{
    *(void **)this = &g_10471730;
    if (bFree & 1) {
        sub_10430964(this);
    }
    return this;
}
// END FUNCTION

// FUNCTION: 0x10186120 size=0x8ba
#include "CNPC_VTzimisce.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CBaseCombatCharacter.h"
#include "CPlayerMove.h"
#include "CBasePlayer.h"
#include "CBaseEntity.h"
#include "CBaseAnimating.h"
#include "CBaseCombatWeapon.h"
#include "CUserCmd.h"
#include "CVProfile.h"
#include "matrix3x4_t.h"
#include "QAngle.h"
#include "CUnknown100290c0.h"
#include "CUnknown1015ef20.h"
#include "CEHandleGet.h"
#include "CCollisionProperty.h"
#include "CVStatList_t.h"
#include "TestBit.h"
#include "globalvars.h"
#include <math.h>
#include <string.h>
#include <stdlib.h>

// TARGET: CPlayerMove::vfunc1
extern unsigned int g_10589050;
extern Vector g_1070d1b0;
extern char g_10739d08[];
extern char g_106b8540[];
extern char g_106eae3c[];
extern float g_104454c4;
char *sub_102587f0();
void sub_10138df0(const matrix3x4_t &a, const matrix3x4_t &b, matrix3x4_t &out);
void sub_10137ed0(const matrix3x4_t &m, QAngle &angles);
bool sub_100c5d10(void *p, int n, float a, float b, const float *pPose, Vector &out, Vector &out2);

#define VX(n) virtual void vx##n();
#define VX10(p) VX(p##0) VX(p##1) VX(p##2) VX(p##3) VX(p##4) VX(p##5) VX(p##6) VX(p##7) VX(p##8) VX(p##9)
struct CEntV
{
	VX10(0) VX10(1) VX10(2) VX10(3) VX10(4) VX10(5) VX10(6) VX10(7) VX10(8) VX10(9)
	VX10(10) VX10(11) VX10(12) VX10(13) VX10(14) VX10(15) VX10(16) VX10(17) VX10(18) VX10(19)
	VX10(20) VX10(21)
	virtual float *s220();
	virtual float *s221();
};

struct CUnk10181650 { char sub_10181650(int n); };
struct CView101815e0 { int sub_101815e0(); };
struct CTune { float sub_101e7e60(); float sub_101e7e80(); float sub_101e8820(CBaseCombatCharacter *p); };

struct CCycleCountY
{
	unsigned __int64 m_Int64;
};
inline void SampleCycle(CCycleCountY *p)
{
	__asm
	{
		mov ecx, p
		rdtsc
		mov dword ptr [ecx], eax
		mov dword ptr [ecx + 4], edx
	}
}

struct CVProfileSetupMove : CVProfile
{
	void PopGroupHere()
	{
		--m_nGroupStackDepth;
		int nNew = m_GroupIDStack[m_nGroupStackDepth];
		int nOld = m_GroupIDStack[m_nGroupStackDepth + 1];
		if (nNew != nOld && m_bVTuneGroupsEnabled && nOld == m_nVTuneGroupID)
			vtune(false);
	}
};

struct CMoveDataX
{
	unsigned char m_bFirstRun;
	char m_pad01[3];
	int m_nPlayerHandle;
	int m_nImpulseCommand;
	Vector m_vecViewAngles;
	Vector m_vecAbsViewAngles;
	int m_nButtons;
	int m_nOldButtons;
	float m_flForwardMove;
	float m_flSideMove;
	float m_flUpMove;
	float m_flMaxSpeed;
	float m_flClientMaxSpeed;
	Vector m_vec40;
	Vector m_vec4c;
	Vector m_vec58;
	char m_pad64[0xc];
	Vector m_vec70;
	char m_pad7c[0x10];
	float m_fl8c;
	float m_fl90;
	float m_fl94;
	float m_fl98;
	float m_fl9c;
	float m_fla0;
	int m_nA4;
	int m_nA8;
	float m_flAC;
	int m_nB0;
	float m_flB4;
	char m_padB8[4];
	int m_nBC;
	int m_nC0;
	int m_nC4;
	char m_padC8[8];
	unsigned char m_bD0;
};

extern CVStatList_t g_109f0b40;
void __cdecl sub_10012a8a();
extern "C" int __cdecl atexit(void (__cdecl *)(void));
inline void *operator new(unsigned int, void *p) { return p; }
inline CVStatList_t *FindA(CVStatListSet *pSet, int type)
{
	for (int i = 0; i < pSet->m_nLists; i++) {
		if (pSet->m_pLists[i]->m_field10 == type)
			return pSet->m_pLists[i];
	}
	if (!(g_109f0b2a & 1)) {
		g_109f0b2a |= 1;
		g_109f0b40.CVStatList_t::CVStatList_t(-1);
		atexit(sub_10012a8a);
	}
	return &g_109f0b40;
}
void CPlayerMove::vfunc1(CBasePlayer *pPlayer, CUserCmd *pCmd, void *pHelper, void *pMoveData)
{
	CMoveDataX *pMove = (CMoveDataX *)pMoveData;
	CBaseEntity *pEnt = (CBaseEntity *)pPlayer;

	g_109f3648->EnterScope("CPlayerMove::SetupMove", 0, "Unaccounted", false);

	int iTargetActivity;
	if (((CUnknown100290c0 *)g_10566458)->sub_100290c0((unsigned int *)&pPlayer->m_hTarget1538))
		iTargetActivity = pPlayer->m_nTarget153c;
	else
		iTargetActivity = -1;
	bool bHasTarget = (iTargetActivity != -1);

	pMove->m_bFirstRun = 1;
	pMove->m_nImpulseCommand = pCmd->impulse;
	pMove->m_vecViewAngles = pCmd->viewangles;
	if (!((CUnk10181650 *)pPlayer)->sub_10181650(8))
		pMove->m_vecViewAngles = pCmd->viewangles;
	else
		pMove->m_vecViewAngles = pPlayer->m_vec206c;

	pMove->m_bD0 = 0;
	pMove->m_nButtons = pCmd->buttons;
	if (!((CUnknown1015ef20 *)pPlayer)->sub_1015ef20())
		pMove->m_nButtons &= ~g_10589050;

	CBaseEntity *pMoveParent = (CBaseEntity *)((CUnknown100290c0 *)g_10566458)->sub_100290c0(&pEnt->m_hMoveParent);
	if (!pMoveParent)
	{
		pMove->m_vecAbsViewAngles = pMove->m_vecViewAngles;
	}
	else
	{
		matrix3x4_t viewToParent;
		matrix3x4_t viewToWorld;
		sub_10139b90(*(QAngle *)&pMove->m_vecViewAngles, viewToParent);
		if (TestBit(pMoveParent->m_flags268, 11))
			pMoveParent->vfunc98();
		sub_10138df0(*(matrix3x4_t *)pMoveParent->m_rgflCoordinateFrame, viewToParent, viewToWorld);
		sub_10137ed0(viewToWorld, *(QAngle *)&pMove->m_vecAbsViewAngles);
	}

	pMove->m_nButtons = pCmd->buttons;
	if ((pPlayer->sub_100b3700() & 0x40) || !((CUnknown1015ef20 *)pPlayer)->sub_1015ef20())
	{
		pMove->m_flForwardMove = 0.0f;
		pMove->m_flSideMove = 0.0f;
		pMove->m_flUpMove = 0.0f;
	}
	else if (pPlayer->m_nFlags1ED8 & 0x80)
	{
		pMove->m_flForwardMove = 0.0f;
		pMove->m_flSideMove = 0.0f;
		{ if (*(short *)&pMove == -1) pMove->m_flUpMove = 0.0f; else pMove->m_flUpMove = 0.0f; }
		void *pModel;
		pModel = ((CBaseAnimating *)pPlayer)->sub_100952d0(-1);
		if (pModel && pPlayer->m_nSequence6f0 >= 0)
		{
			float flRate = ((CBaseAnimating *)pPlayer)->sub_10091230(pPlayer->m_nSequence6f0);
			float flPlayback = *(float *)((char *)pPlayer + 0x6f4);
			float flStart = ((pPlayer->m_f2358 - pCmd->frametime) - (*(float *)((char *)pPlayer + 0x174) - 0.1f)) * (flRate * flPlayback) + pPlayer->m_fl6f8;
			float flEnd = (flRate * flPlayback) * gpGlobals->frametime + flStart;
			if (flStart < g_104454c4)
				flStart = 0.0f;
			if (flEnd > 1.0f)
				flEnd = 1.0f;
			Vector vecMove;
			Vector vecOther;
			vecMove.Init();
			vecOther.Init();
			bool bOk = false;
			if (flStart < flEnd)
			{
				bOk = sub_100c5d10(pModel, pPlayer->m_nSequence6f0, flStart, flEnd, (const float *)((char *)pPlayer + 0x690), vecMove, vecOther);
			}
			if (bOk)
			{
				pMove->m_flForwardMove = vecMove.x / gpGlobals->frametime;
				pMove->m_flSideMove = -(vecMove.y / gpGlobals->frametime);
				pMove->m_flUpMove = vecMove.z / gpGlobals->frametime;
				pMove->m_bD0 = 1;
			}
		}
	}
	else
	{
		pMove->m_flForwardMove = pCmd->forwardmove;
		pMove->m_flSideMove = pCmd->sidemove;
		pMove->m_flUpMove = pCmd->upmove;
	}

	*(float *)((char *)pPlayer + 0x19ec) = sqrt(pMove->m_flForwardMove * pMove->m_flForwardMove + pMove->m_flSideMove * pMove->m_flSideMove);
	pMove->m_flClientMaxSpeed = pPlayer->m_flMaxspeed;
	pMove->m_nOldButtons = *(int *)((char *)pPlayer + 0x1eec);
	pMove->m_vec58 = *(Vector *)((CEntV *)pPlayer)->s221();
	pMove->m_vec58.y = pPlayer->m_vec206c.y;
	if (TestBit(pPlayer->m_flags268, 12))
		pPlayer->sub_100b1d10();
	pMove->m_vec40 = pPlayer->m_vecVelocity3bc;
	pMove->m_vec4c = pPlayer->m_vecBaseVelocity;
	pMove->m_nPlayerHandle = *pEnt->vfunc1();
	pMove->m_vec70 = *(Vector *)((CEntV *)pPlayer)->s220();

	((Vector *)&pMove->m_fl8c)->Init();
	((Vector *)&pMove->m_fl98)->Init();
	if (bHasTarget)
	{
		switch (pPlayer->m_IdealActivity)
		{
		case 0xf88: case 0xf91: case 0xf9a: case 0xfb7: case 0xfc0:
		case 0xff7: case 0x1000: case 0x1009: case 0x1039:
			pMove->m_vec58 = *(Vector *)((CEntV *)pPlayer)->s221();
			break;
		default:
			{
				CBaseEntity *pTarget;
				if (pPlayer->m_nTarget153c == -1)
					pTarget = 0;
				else
					pTarget = (CBaseEntity *)EHandle_Get(pPlayer->m_hTarget1538);
				pMove->m_vec70 = *(Vector *)((CEntV *)pTarget)->s220();
				ICollideable *pPlayerColl = (ICollideable *)((char *)pPlayer + 0x270);
				const float *pTargetMins = ((ICollideable *)((char *)pTarget + 0x270))->vfunc1();
				pMove->m_vec70.z -= pPlayerColl->vfunc1()[2] - pTargetMins[2];
				pMove->m_vec40 = g_1070d1b0;
				pMove->m_vec58 = *(Vector *)((CEntV *)pPlayer)->s221();
			}
			break;
		}
	}
	else if (((CView101815e0 *)pPlayer)->sub_101815e0() & 1)
	{
		pMove->m_vec58 = *(Vector *)((CEntV *)pPlayer)->s221();
	}

	pMove->m_nA8 = 0;
	pMove->m_nA4 = 0;

	CVStatList_t *pList = FindA(CVStatListSet::Of(pPlayer), 0);
	pMove->m_flAC = (float)(pList->sub_102012d0(2) * 10 - 10);

	*(float *)((char *)pPlayer + 0x3ec) = ((CTune *)g_10739d08)->sub_101e7e60();
	pMove->m_nC0 = pPlayer->m_nSpeedScaleState1DB4;
	pMove->m_nBC = *(int *)((char *)pPlayer + 0x1db8);
	pMove->m_flB4 = ((CTune *)g_10739d08)->sub_101e7e80();
	pMove->m_nB0 = 0;
	pMove->m_nC4 = *(int *)((char *)pPlayer + 0x1488);

	CBaseCombatWeapon *pWeapon = (CBaseCombatWeapon *)pPlayer->sub_1032e7b0();
	int nTune = (int)((CTune *)g_10739d08)->sub_101e8820((CBaseCombatCharacter *)pPlayer);
	const char *pszClassname = g_106eae3c;
	if (pWeapon)
	{
		pszClassname = ((CBaseEntity *)pWeapon)->m_classname11c;
		if (!pszClassname)
			pszClassname = g_106b8540;
	}
	if (_strnicmp(pszClassname, sub_102587f0(), 0x14) == 0)
	{
		float f = pWeapon->vfunc278();
		if (f > g_104454c4)
		{
			pMove->m_vec40.x = (abs((int)pMove->m_vec40.x) < f) ? pMove->m_vec40.x : f;
			pMove->m_vec40.y = (abs((int)pMove->m_vec40.y) < f) ? pMove->m_vec40.y : f;
			pMove->m_vec40.z = (abs((int)pMove->m_vec40.z) < f) ? pMove->m_vec40.z : f;
		}
	}
	else if (nTune > 0)
	{
		float flScale = 1.0f / (float)nTune;
		for (int i = 0; i < 2; i++)
		{
			pMove->m_vec40[i] *= flScale;
			pMove->m_vec4c[i] *= flScale;
		}
		if (pMove->m_vec40.z > g_104454c4)
			pMove->m_vec40.z *= flScale;
		if (pMove->m_vec4c.z > g_104454c4)
			pMove->m_vec4c.z *= flScale;
	}

	CVProfile *pProf = g_109f3648;
	if (!pProf->m_bAtRoot || pProf->m_enabled)
	{
		CVProfNode *pNode = pProf->m_pCurNode;
		if (--pNode->m_nRecursions == 0 && pNode->m_nCurFrameCalls != 0)
		{
			CCycleCountY cycle;
			cycle.m_Int64 = 0;
			SampleCycle(&cycle);
			CUnknownCycle100335e0 *pc = &pNode->m_CurFrameTime;
			pc->m_Int64 = cycle.m_Int64 - pc->m_Int64;
			pNode->m_TotalTime += pc->m_Int64;
			((CVProfileSetupMove *)g_109f3648)->PopGroupHere();
		}
		if (pNode->m_nRecursions == 0)
			pProf->m_pCurNode = pProf->m_pCurNode->m_pParent;
		pProf->m_bAtRoot = (pProf->m_pCurNode == pProf->m_pRoot);
	}
}
// END FUNCTION

// FUNCTION: 0x10186c10 size=0x243
#include "CBasePlayer.h"
#include "CUserCmd.h"
#include "CPlayerMove.h"
#include "CBaseEntity.h"
#include "CBaseAnimating.h"
#include "CVProfile.h"
#include "CGameMovementViews.h"

#define PV1(p) virtual void p();
#define PV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CFinishMovePlayerView
{
	PV10(a0) PV10(a1) PV10(a2) PV10(a3) PV10(a4) PV10(a5) PV1(b0) PV1(b1)
	virtual void vfunc62(float *pOrigin);
	PV1(b3)
	virtual void vfunc64(float *pAngles);
	PV10(c0) PV10(c1) PV10(c2) PV10(c3) PV10(c4) PV10(c5) PV10(c6) PV10(c7) PV10(c8) PV10(c9)
	PV10(d0) PV10(d1) PV10(d2) PV10(d3) PV10(d4) PV10(d5) PV10(d6) PV10(d7) PV10(d8) PV10(d9)
	PV10(e0) PV10(e1) PV10(e2) PV10(e3) PV10(e4) PV10(e5) PV10(e6) PV10(e7)
	PV1(f0)
	virtual float vfunc346(int iParam, float flValue, int a);
	char m_pad4[0x3b0 - 4];
	float m_f3b0, m_f3b4, m_f3b8;
	char m_pad3bc[0x1db4 - 0x3bc];
	int m_n1db4, m_n1db8;
	char m_pad1dbc[0x1eec - 0x1dbc];
	int m_n1eec;
	char m_pad1ef0[0x2310 - 0x1ef0];
	float m_flMaxspeed;
};

struct CCycleCountX
{
	unsigned __int64 m_Int64;
	CCycleCountX() { m_Int64 = 0; }
	void Sample()
	{
		unsigned long *pl = (unsigned long *)&m_Int64;
		__asm {
			mov ecx, pl
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
	void End()
	{
		CCycleCountX now;
		now.Sample();
		m_Int64 = now.m_Int64 - m_Int64;
	}
	void AddTo(CCycleCountX &total)
	{
		total.m_Int64 += m_Int64;
	}
};

// TARGET: CPlayerMove::vfunc2
void CPlayerMove::vfunc2(CBasePlayer *pPlayer, CUserCmd *pCmd, void *pMoveData)
{
	CVProfile *pProf = g_109f3648;
	if (pProf->m_enabled || !pProf->m_bAtRoot) {
		if (pProf->m_pCurNode->m_pszName != "CPlayerMove::FinishMove")
			pProf->m_pCurNode = pProf->m_pCurNode->GetSubNode("CPlayerMove::FinishMove", 0, "Unaccounted");
		pProf->m_pCurNode->EnterScope();
		pProf->m_bAtRoot = false;
	}
	CFinishMovePlayerView *player = (CFinishMovePlayerView *)pPlayer;
	CMovePlayerView *move = (CMovePlayerView *)pMoveData;
	player->m_flMaxspeed = move->m_flClientMaxSpeed;
	player->vfunc62(&move->m_vecOrigin.x);
	((CBaseEntity *)pPlayer)->sub_100b2770(move->m_vecVelocity);
	float *pBase = (float *)((char *)move + 0x4c);
	player->m_f3b0 = pBase[0];
	player->m_f3b4 = pBase[1];
	player->m_f3b8 = pBase[2];
	player->m_n1eec = move->m_fFlags24;
	player->m_n1db4 = move->m_n00c0;
	player->m_n1db8 = *(int *)&move->m_fl00BC;
	float pitch = move->m_vec58.x;
	if (pitch > 180.0f)
		pitch -= 360.0f;
	if (pitch > 90.0f)
		pitch = 90.0f;
	else if (pitch < -90.0f)
		pitch = -90.0f;
	move->m_vec58.x = pitch;
	int iParam = ((CBaseAnimating *)pPlayer)->sub_10092270("body_pitch");
	if (iParam >= 0)
		player->vfunc346(iParam, pitch, 0);
	player->vfunc64(&move->m_vec58.x);

	pProf = g_109f3648;
	if (!pProf->m_bAtRoot || pProf->m_enabled) {
		CVProfNode *pNode = pProf->m_pCurNode;
		if (--pNode->m_nRecursions == 0 && pNode->m_nCurFrameCalls != 0) {
			CCycleCountX *pTime = (CCycleCountX *)&pNode->m_CurFrameTime;
			pTime->End();
			pTime->AddTo(*(CCycleCountX *)&pNode->m_TotalTime);
			CVProfile *g = g_109f3648;
			--g->m_nGroupStackDepth;
			int nNew = g->m_GroupIDStack[g->m_nGroupStackDepth];
			int nOld = g->m_GroupIDStack[g->m_nGroupStackDepth + 1];
			if (nNew != nOld && g->m_bVTuneGroupsEnabled && nOld == g->m_nVTuneGroupID)
				vtune(false);
		}
		if (pNode->m_nRecursions == 0)
			pProf->m_pCurNode = pProf->m_pCurNode->m_pParent;
		pProf->m_bAtRoot = (pProf->m_pCurNode == pProf->m_pRoot);
	}
}
// END FUNCTION
