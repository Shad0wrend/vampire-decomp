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
